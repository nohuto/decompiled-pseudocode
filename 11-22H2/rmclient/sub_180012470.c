/*
 * XREFs of sub_180012470 @ 0x180012470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     sub_180013784 @ 0x180013784 (sub_180013784.c)
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 *     sub_18001453C @ 0x18001453C (sub_18001453C.c)
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 *     sub_18001F160 @ 0x18001F160 (sub_18001F160.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

int __fastcall sub_180012470(__int64 a1, __int64 a2)
{
  int v3; // esi
  char v4; // r15
  unsigned int *v5; // r14
  unsigned int v6; // eax
  _QWORD *v7; // r12
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r15d
  ULONGLONG TickCount64; // rdi
  ULONGLONG v14; // r15
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh]
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v25[4]; // [rsp+78h] [rbp-90h] BYREF
  int v26; // [rsp+7Ch] [rbp-8Ch]
  __int64 v27; // [rsp+88h] [rbp-80h]
  _BYTE ProcessInformation[32]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+120h] [rbp+18h]
  int *v33; // [rsp+128h] [rbp+20h]
  __int64 v34; // [rsp+130h] [rbp+28h]
  __int64 *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]

  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 && (qword_180032018 & 2) == qword_180032018 )
    sub_1800011A0((__int64)&dword_180032000, byte_18002A5DF);
  LODWORD(v18) = 0;
  v19 = 0LL;
  v3 = 0;
  v4 = 5;
  v17 = 5;
  v23 = 0LL;
  sub_18001F1C4(a2 + 48);
  v5 = (unsigned int *)(a2 + 96);
  v6 = *(_DWORD *)(a2 + 96) & 0xFFFFFFFB;
  *(_DWORD *)(a2 + 96) = v6;
  if ( (v6 & 1) != 0 )
  {
LABEL_15:
    v9 = -1073741077;
    goto LABEL_16;
  }
  v7 = (_QWORD *)(a2 + 80);
  while ( 1 )
  {
    if ( (_QWORD *)*v7 == v7 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = *v7 - 88LL;
      sub_18001F160();
    }
    *(_DWORD *)(a2 + 56) = 0;
    RtlReleaseSRWLockExclusive(a2 + 48);
    if ( v8 )
    {
      NtQueryInformationProcess(*(HANDLE *)(v8 + 40), ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
      sub_180013784(v8, v29);
      sub_180016348(v8);
LABEL_12:
      sub_18001F1C4(a2 + 48);
      goto LABEL_13;
    }
    v21 = 24;
    v9 = NtQueryWnfStateData(&qword_1800266C8, 0LL, 0LL, &v20, v25, &v21);
    v11 = a2 + 48;
    if ( v9 < 0 )
    {
      sub_18001F1C4(v11);
LABEL_45:
      v6 = *v5;
      if ( (*v5 & 4) == 0 )
        goto LABEL_26;
      goto LABEL_13;
    }
    v12 = v26;
    v17 = v26;
    sub_18001F1C4(v11);
    v6 = *v5 ^ (*v5 ^ (8 * v12)) & 0x38;
    *v5 = v6;
    if ( v12 >= 2 )
      break;
    if ( (v6 & 4) == 0 )
    {
      v9 = 0;
      goto LABEL_26;
    }
LABEL_13:
    *v5 &= ~4u;
    v6 = *v5;
    if ( (*v5 & 1) != 0 )
    {
      v4 = v17;
      goto LABEL_15;
    }
  }
  *(_DWORD *)(a2 + 56) = 0;
  RtlReleaseSRWLockExclusive(a2 + 48);
  if ( (_DWORD)v18 == v20 && v3 )
  {
    if ( ((v3 - 2) & 0xFFFFFFFD) == 0 )
    {
      TickCount64 = GetTickCount64();
      v14 = TickCount64 + 5000;
      if ( TickCount64 + 5000 >= TickCount64 )
      {
        do
        {
          RtlAcquireSRWLockShared(a2 + 48);
          if ( (*v5 & 1) != 0 )
          {
            v3 = 5;
          }
          else if ( (*v5 & 4) != 0 )
          {
            v3 = 0;
          }
          v22 = *v5;
          RtlReleaseSRWLockShared(a2 + 48);
          if ( v3 == 5 )
            break;
          if ( !v3 )
            break;
          v24 = -10000LL * (unsigned int)(v14 - TickCount64);
          RtlWaitOnAddress(a2 + 96, &v22, 4LL, &v24);
          TickCount64 = GetTickCount64();
        }
        while ( v14 > TickCount64 );
        v7 = (_QWORD *)(a2 + 80);
      }
      sub_18001F1C4(a2 + 48);
      v3 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v19 = v27;
  }
  sub_18001453C(&v23);
  v9 = sub_180012CD4(a2, 1LL, &v23);
  if ( v9 >= 0 && !HIDWORD(v23) )
  {
    sub_18001453C(&v23);
    v9 = sub_180012CD4(a2, 3LL, &v23);
  }
  sub_18001F1C4(a2 + 48);
  if ( v9 < 0 )
    goto LABEL_45;
  *(_DWORD *)(a2 + 56) = 0;
  RtlReleaseSRWLockExclusive(a2 + 48);
  LODWORD(v18) = v20;
  v3 = sub_180012EF4(a2, &v23, &v19);
  if ( v3 != 1 )
    goto LABEL_12;
  sub_18001F1C4(a2 + 48);
  v6 = *v5;
  if ( (*v5 & 4) != 0 )
  {
    v3 = 0;
    goto LABEL_13;
  }
  v9 = -1073741197;
LABEL_26:
  v4 = v17;
LABEL_16:
  *v5 = v6 & 0xFFFFFFFD;
  *(_DWORD *)(a2 + 56) = 0;
  RtlReleaseSRWLockExclusive(a2 + 48);
  LODWORD(v10) = sub_180014518(&v23);
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 3) != 0 )
  {
    v10 = qword_180032018 & 3;
    if ( v10 == qword_180032018 )
    {
      LOBYTE(v16) = v4;
      v35 = &v19;
      LODWORD(v18) = v9;
      v33 = &v16;
      v36 = 8LL;
      v31 = &v18;
      v34 = 1LL;
      v32 = 4LL;
      LODWORD(v10) = sub_180001104((__int64)&dword_180032000, (unsigned __int8 *)dword_18002A439, 0LL, 0LL, 5u, &v30);
    }
  }
  return v10;
}
