/*
 * XREFs of EtwSendNotification @ 0x180052AD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x180052C24 (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007CD5C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

__int64 __fastcall EtwSendNotification(__int64 a1, int a2, char *a3, __int64 a4, __int64 a5)
{
  char v5; // r14
  int v8; // esi
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v13; // edi
  ULONG v15; // r15d
  void *v16; // r14
  char *v17; // rax
  int v18; // r10d
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  int v22; // [rsp+40h] [rbp-C0h]
  ULONG v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  char v26[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  char v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  int *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  ULONG *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  int *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]

  v5 = *(_BYTE *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  v28 = a4;
  v27 = a5;
  if ( v5 == 1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( !v8 )
      v8 = 60000;
  }
  v10 = NtTraceControl(17LL, a1, *(unsigned int *)(a1 + 4), a1, 72, v26);
  v12 = 0LL;
  if ( v10 )
    v13 = RtlNtStatusToDosError(v10);
  else
    v13 = 0;
  if ( v5 )
  {
    v15 = *(_DWORD *)(a1 + 20);
    if ( v13 )
    {
      if ( (unsigned int)dword_1801814A0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_1801814A0, 10LL, v11, v12) )
      {
        v32 = 16LL;
        v31 = a1 + 40;
        v24 = *(_DWORD *)a1;
        v33 = &v24;
        v35 = &v23;
        v34 = 4LL;
        v23 = v13;
        v36 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(
          (unsigned int)&dword_1801814A0,
          (unsigned int)&unk_18014E72B,
          v20,
          v21,
          5,
          (__int64)v30);
      }
    }
    else
    {
      v16 = *(void **)(a1 + 24);
      if ( v15 )
      {
        if ( (unsigned int)dword_1801814A0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801814A0, 10LL, v11, v12) )
        {
          v32 = 16LL;
          v31 = a1 + 40;
          v25 = *(_DWORD *)a1;
          v35 = &v23;
          v33 = &v25;
          v37 = &v24;
          v34 = 4LL;
          v23 = v15;
          v36 = 4LL;
          v24 = v8;
          v38 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (unsigned int)&dword_1801814A0,
            (unsigned int)&unk_18014E77A,
            v11,
            v19,
            6,
            (__int64)v30);
        }
        v17 = &v29;
        v22 = *(_DWORD *)a1;
        v18 = 120;
        if ( *(_DWORD *)a1 != 3 )
          v18 = a2;
        if ( v22 != 3 )
          v17 = a3;
        LOBYTE(v11) = v22 == 3;
        v13 = EtwpReceiveReplyDataBlock((_DWORD)v16, v8, v11, v15, (__int64)v17, v18, v28, v27, v22);
      }
      if ( v16 )
        NtClose(v16);
    }
  }
  return v13;
}
