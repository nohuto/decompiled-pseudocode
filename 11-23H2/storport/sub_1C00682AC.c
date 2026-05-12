/*
 * XREFs of sub_1C00682AC @ 0x1C00682AC
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C0063F90 @ 0x1C0063F90 (sub_1C0063F90.c)
 * Callees:
 *     sub_1C0015AA8 @ 0x1C0015AA8 (sub_1C0015AA8.c)
 *     sub_1C0015AD8 @ 0x1C0015AD8 (sub_1C0015AD8.c)
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0026DD0 @ 0x1C0026DD0 (sub_1C0026DD0.c)
 *     sub_1C0067134 @ 0x1C0067134 (sub_1C0067134.c)
 */

NTSTATUS __fastcall sub_1C00682AC(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // r14
  char v6; // r15
  int v8; // r13d
  char *v9; // rax
  char *v10; // r9
  __int64 v11; // r14
  char v12; // al
  char v13; // al
  int v14; // eax
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
    v9 = (char *)sub_1C0018028(v5, &v22, 0LL, 0LL, 0LL, 0LL);
    v10 = v9;
    if ( v9 )
      v2 = *v9;
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
    v14 = sub_1C0026DD0(v11, v23);
    v15 = v23[0];
    if ( v14 < 0 )
      v15 = -1;
    v6 = v15;
  }
  if ( (unsigned int)sub_1C0015AD8(v8, v2) )
  {
    result = *(_DWORD *)(a1 + 16);
    if ( (result & 0x42) != 0 )
    {
      if ( (byte_1C0093A01 & 8) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&unk_1C0088B20;
    }
    else
    {
      if ( (byte_1C0093A01 & 2) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&unk_1C00894A0;
    }
  }
  else
  {
    result = sub_1C0015AA8(v17, v16);
    if ( !result )
      return result;
    result = *(_DWORD *)(a1 + 16);
    if ( (result & 0x42) != 0 )
    {
      if ( (byte_1C0093A01 & 0x10) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&unk_1C0088AF0;
    }
    else
    {
      if ( (byte_1C0093A01 & 4) == 0 )
        return result;
      v19 = (const EVENT_DESCRIPTOR *)&unk_1C0088C20;
    }
  }
  v21 = v6;
  LOBYTE(v20) = v2;
  return sub_1C0067134(v17, v19, &v26, a1, v20, v4, v3, v11, v21);
}
