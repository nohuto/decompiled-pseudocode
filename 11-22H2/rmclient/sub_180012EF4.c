/*
 * XREFs of sub_180012EF4 @ 0x180012EF4
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180013784 @ 0x180013784 (sub_180013784.c)
 *     sub_180013B4C @ 0x180013B4C (sub_180013B4C.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_18001435C @ 0x18001435C (sub_18001435C.c)
 */

__int64 __fastcall sub_180012EF4(ULONGLONG a1, __int64 a2, ULONGLONG *a3)
{
  ULONGLONG v3; // rdi
  int v4; // r13d
  ULONGLONG *v5; // rsi
  ULONGLONG v7; // r14
  ULONGLONG TickCount64; // r12
  unsigned int v9; // r15d
  ULONGLONG v10; // rbx
  ULONGLONG v11; // rax
  int v12; // ebx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbx
  int v16; // esi
  int v17; // esi
  unsigned int v18; // ebx
  __int64 result; // rax
  char v20; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-75h]
  ULONGLONG v22; // [rsp+38h] [rbp-71h] BYREF
  ULONGLONG *v23; // [rsp+40h] [rbp-69h]
  ULONGLONG v24; // [rsp+48h] [rbp-61h]
  ULONGLONG v25; // [rsp+50h] [rbp-59h] BYREF
  __int64 v26; // [rsp+58h] [rbp-51h]
  ULONGLONG v27; // [rsp+60h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+70h] [rbp-39h] BYREF
  char *v29; // [rsp+90h] [rbp-19h]
  __int64 v30; // [rsp+98h] [rbp-11h]
  __int64 *v31; // [rsp+A0h] [rbp-9h]
  __int64 v32; // [rsp+A8h] [rbp-1h]
  ULONGLONG *v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+B8h] [rbp+Fh]

  v3 = 0LL;
  v23 = a3;
  v4 = 0;
  v26 = a2;
  v5 = a3;
  v22 = a1;
  v7 = 0LL;
  v21 = 0;
  TickCount64 = GetTickCount64();
  v24 = TickCount64;
  v9 = 0;
  v25 = TickCount64 + 5000;
  if ( !*(_DWORD *)(a2 + 12) )
  {
LABEL_28:
    v18 = 1;
    goto LABEL_29;
  }
  v10 = v22;
  v11 = v22 + 48;
  v27 = v22 + 48;
  while ( 1 )
  {
    RtlAcquireSRWLockShared(v11);
    v12 = *(_DWORD *)(v10 + 96);
    RtlReleaseSRWLockShared(v27);
    if ( (v12 & 1) != 0 )
    {
      v18 = 5;
      goto LABEL_29;
    }
    if ( v25 <= TickCount64 && v4 )
    {
      v18 = 3;
      goto LABEL_29;
    }
    v13 = *(_QWORD *)v26 + ((unsigned __int64)v9 << 6);
    v14 = *(_QWORD *)(v13 + 32);
    if ( (*(_BYTE *)(v13 + 56) & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(v13 + 4) & 1) == 0 )
        goto LABEL_22;
      v15 = *(_QWORD *)(v13 + 16);
      RtlAcquireSRWLockShared(v14 + 64);
      if ( !(unsigned int)sub_180013B4C(v14) || (v16 = 1, !v15) )
        v16 = 0;
      RtlReleaseSRWLockShared(v14 + 64);
      if ( !v16 )
        goto LABEL_21;
      sub_180013784(v14, v15);
    }
    else
    {
      if ( (*(_BYTE *)(v13 + 4) & 0x40) == 0 )
        goto LABEL_22;
      v15 = *(_QWORD *)(v13 + 48);
      RtlAcquireSRWLockShared(v14 + 64);
      if ( !(unsigned int)sub_180013BEC(v14) || (v17 = 1, !v15) )
        v17 = 0;
      RtlReleaseSRWLockShared(v14 + 64);
      if ( !v17 )
      {
LABEL_21:
        TickCount64 = v24;
        v5 = v23;
        goto LABEL_22;
      }
      sub_18001435C(v14, v15);
    }
    v5 = v23;
    v7 += v15;
    ++v4;
    v24 = GetTickCount64();
    TickCount64 = v24;
    if ( v7 >= *v23 )
    {
      v18 = 4;
      goto LABEL_29;
    }
LABEL_22:
    v9 = v21 + 1;
    v21 = v9;
    if ( v9 >= *(_DWORD *)(v26 + 12) )
      break;
    v11 = v27;
    v10 = v22;
  }
  if ( !v4 )
    goto LABEL_28;
  v18 = 2;
LABEL_29:
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 && (qword_180032018 & 2) == qword_180032018 )
  {
    v25 = *v5;
    v22 = v7;
    v33 = &v25;
    v20 = v18;
    v31 = (__int64 *)&v22;
    v34 = 8LL;
    v29 = &v20;
    v32 = 8LL;
    v30 = 1LL;
    sub_180001104((__int64)&dword_180032000, (unsigned __int8 *)dword_18002A590, 0LL, 0LL, 5u, &v28);
  }
  result = v18;
  if ( v7 <= *v5 )
    v3 = *v5 - v7;
  *v5 = v3;
  return result;
}
