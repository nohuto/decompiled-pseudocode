/*
 * XREFs of StorEtwIORequestDispatch @ 0x1C0067A7C
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     StorUnitStartBypassIo @ 0x1C0063780 (StorUnitStartBypassIo.c)
 * Callees:
 *     IsWriteRequest @ 0x1C0015118 (IsWriteRequest.c)
 *     IsReadRequest @ 0x1C0015148 (IsReadRequest.c)
 *     GetSrbScsiData @ 0x1C0017418 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     StRtlIoStorInfoGetNvCachePriority @ 0x1C0025A10 (StRtlIoStorInfoGetNvCachePriority.c)
 *     McTemplateK0puxipu_EtwWriteTransfer @ 0x1C0066904 (McTemplateK0puxipu_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwIORequestDispatch(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // r14
  char v6; // r15
  int v8; // r13d
  char *SrbScsiData; // rax
  char *v10; // r9
  __int64 v11; // r14
  char v12; // al
  char v13; // al
  int NvCachePriority; // eax
  char v15; // cl
  char v16; // dl
  __int64 v17; // rcx
  NTSTATUS result; // eax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-60h]
  char v21; // [rsp+40h] [rbp-40h]
  char v22; // [rsp+50h] [rbp-30h] BYREF
  char v23[3]; // [rsp+51h] [rbp-2Fh] BYREF
  unsigned int v24; // [rsp+54h] [rbp-2Ch]
  __int64 v25; // [rsp+58h] [rbp-28h]
  GUID v26; // [rsp+60h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = 0;
  v3 = 0LL;
  v22 = 0;
  v4 = 0;
  v25 = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = -1;
  v26 = 0LL;
  v24 = 0;
  v23[0] = -1;
  IoGetActivityIdIrp(a1, &v26);
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    SrbScsiData = (char *)GetSrbScsiData(v5, &v22, 0LL, 0LL, 0LL, 0LL);
    v10 = SrbScsiData;
    if ( SrbScsiData )
      v2 = *SrbScsiData;
    v11 = *(_QWORD *)(v5 + 104);
    v12 = v22;
  }
  else
  {
    v10 = (char *)(v5 + 72);
    v8 = *(unsigned __int8 *)(v5 + 2);
    v12 = *(_BYTE *)(v5 + 10);
    v2 = *(_BYTE *)(v5 + 72);
    v11 = *(_QWORD *)(v5 + 56);
  }
  if ( v10 )
  {
    if ( v12 == 16 )
    {
      HIBYTE(v25) = v10[2];
      BYTE6(v25) = v10[3];
      BYTE5(v25) = v10[4];
      BYTE4(v25) = v10[5];
      BYTE3(v25) = v10[6];
      BYTE2(v25) = v10[7];
      BYTE1(v25) = v10[8];
      LOBYTE(v25) = v10[9];
      HIBYTE(v24) = v10[10];
      BYTE2(v24) = v10[11];
      BYTE1(v24) = v10[12];
      v13 = v10[13];
    }
    else
    {
      BYTE3(v25) = v10[2];
      BYTE2(v25) = v10[3];
      BYTE1(v25) = v10[4];
      LOBYTE(v25) = v10[5];
      BYTE1(v24) = v10[7];
      v13 = v10[8];
    }
    v3 = v25;
    LOBYTE(v24) = v13;
    v4 = v24;
  }
  if ( v11 )
  {
    NvCachePriority = StRtlIoStorInfoGetNvCachePriority(v11, v23);
    v15 = v23[0];
    if ( NvCachePriority < 0 )
      v15 = -1;
    v6 = v15;
  }
  if ( (unsigned int)IsReadRequest(v8, v2) )
  {
    result = *(_DWORD *)(a1 + 16);
    if ( (result & 0x42) != 0 )
    {
      if ( (byte_1C0092A01 & 8) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&EventPagingReadRequest;
    }
    else
    {
      if ( (byte_1C0092A01 & 2) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&EventReadRequest;
    }
  }
  else
  {
    result = IsWriteRequest(v17, v16);
    if ( !result )
      return result;
    result = *(_DWORD *)(a1 + 16);
    if ( (result & 0x42) != 0 )
    {
      if ( (byte_1C0092A01 & 0x10) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&EventPagingWriteRequest;
    }
    else
    {
      if ( (byte_1C0092A01 & 4) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&EventWriteRequest;
    }
  }
  v21 = v6;
  LOBYTE(v20) = v2;
  return McTemplateK0puxipu_EtwWriteTransfer(v17, v19, &v26, a1, v20, v4, v3, v11, v21);
}
