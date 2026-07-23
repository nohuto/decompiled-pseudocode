/*
 * XREFs of sub_1407C16A0 @ 0x1407C16A0
 * Callers:
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_140916E20 @ 0x140916E20 (sub_140916E20.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1407C16A0(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  ULONG_PTR v7; // rsi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r13
  int v17; // ebx
  ULONG_PTR v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebx
  _BYTE *v23; // r12
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rax
  int v32; // r15d
  int v33; // r12d
  int v34; // eax
  __int64 *v35; // rax
  int v36; // edx
  int v37; // ecx
  __int64 v38; // [rsp+50h] [rbp-91h] BYREF
  unsigned int BugCheckParameter4; // [rsp+58h] [rbp-89h] BYREF
  int BugCheckParameter4_4; // [rsp+5Ch] [rbp-85h]
  int v41; // [rsp+60h] [rbp-81h]
  __int64 v42; // [rsp+68h] [rbp-79h] BYREF
  ULONG_PTR v43; // [rsp+70h] [rbp-71h] BYREF
  __int64 v44; // [rsp+78h] [rbp-69h] BYREF
  _LIST_ENTRY ListHead; // [rsp+80h] [rbp-61h] BYREF
  __int64 v46; // [rsp+90h] [rbp-51h]
  __int64 v47; // [rsp+98h] [rbp-49h]
  __int64 v48; // [rsp+A0h] [rbp-41h] BYREF
  _BYTE v49[8]; // [rsp+A8h] [rbp-39h] BYREF
  _OWORD v50[3]; // [rsp+B0h] [rbp-31h] BYREF

  v7 = 0LL;
  v47 = a5;
  v46 = a7;
  v41 = a4;
  BugCheckParameter4_4 = a3;
  BugCheckParameter4 = 0;
  v38 = 0LL;
  memset(v50, 0, sizeof(v50));
  v43 = 0LL;
  ListHead = 0LL;
  sub_1407C97FC(&v38);
  v44 = 0LL;
  v11 = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  InitializeListHead(&ListHead);
  sub_140AB4550(v50);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    v32 = v41;
    v33 = v47;
    do
    {
      v34 = sub_140914324((_DWORD)a1, a3, v32, v33, a6, v46, (__int64)&v48, (unsigned int)v7 <= 0xA);
      LODWORD(v7) = v7 + 1;
      v17 = v34;
    }
    while ( v34 == -1073741267 );
    sub_140346C60(&ListHead);
    goto LABEL_27;
  }
  if ( a1[7] || a1[8] )
    sub_14071B6EC();
  else
    sub_140AB4370(v13, v12, v14);
  v15 = a1[1];
  if ( a2 )
    v16 = *(_QWORD *)(a2 + 8);
  else
    v16 = 0LL;
  sub_1407C300C(v16, a1[1]);
  v17 = sub_140AB43C0(a1, 0LL);
  if ( v17 >= 0 )
  {
    if ( !a1[7] && !a1[8]
      || (v17 = sub_14067F480(a1, &v44), v17 >= 0) && (v11 = v44, v17 = sub_140AB43C0(a1, v44), v17 >= 0) )
    {
      if ( a2 )
      {
        v17 = sub_140AB43C0(a2, v11);
        if ( v17 < 0 )
          goto LABEL_24;
      }
      else if ( !byte_140C097BD || (*(_DWORD *)(v15 + 184) & 0x1000000) == 0 )
      {
        v18 = *(_QWORD *)(v15 + 32);
        v43 = v18;
        if ( v11 )
        {
          v19 = &v42;
          v20 = v16;
          v21 = v15;
        }
        else
        {
          v19 = 0LL;
          v20 = 0LL;
          v21 = 0LL;
        }
        v17 = sub_1407C3070(v18, v21, v20, v11, (__int64)&ListHead, (__int64)v19);
        if ( v17 >= 0 )
          goto LABEL_16;
        goto LABEL_29;
      }
      v35 = &v42;
      if ( !v11 )
        v35 = 0LL;
      if ( a2 )
      {
        v36 = v15;
        v37 = v16;
      }
      else
      {
        v36 = 0;
        v37 = v15;
      }
      v17 = sub_140916E20(
              v37,
              v36,
              BugCheckParameter4_4,
              v11,
              (__int64)&ListHead,
              (__int64)&v43,
              (__int64)&BugCheckParameter4,
              (__int64)v35,
              (__int64)v49);
      if ( v17 >= 0 )
      {
        v18 = v43;
LABEL_16:
        v22 = BugCheckParameter4;
        if ( BugCheckParameter4 != -1 )
        {
          v23 = (_BYTE *)(v18 + 140);
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            v24 = sub_1406BF400(v18, BugCheckParameter4, &v38);
          else
            v24 = sub_1407C9820(v18);
          v25 = v24;
          if ( (*(_DWORD *)(v18 + 160) & 0x8001) == 0 && (*(_BYTE *)(v24 + 12) & (unsigned __int8)byte_140C097BC) == 0 )
          {
            if ( (*v23 & 1) != 0 )
              sub_1406BF450(v18, &v38);
            else
              sub_1407C97C0(v18, &v38);
            ExAcquirePushLockSharedEx(v18 + 72, 0LL);
            if ( (*v23 & 1) != 0 )
              v31 = sub_1406BF400(v18, v22, &v38);
            else
              v31 = sub_1407C9820(v18);
            v25 = v31;
            sub_140722534(v18, v31, v22);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v18 + 72));
            sub_1402AFC00(v18 + 72);
            v18 = v43;
          }
          v7 = v42;
          v17 = sub_1407C3490(v18, a6, v46, v42, v44);
          if ( v25 )
          {
            if ( (*v23 & 1) != 0 )
              sub_1406BF450(v18, &v38);
            else
              sub_1407C97C0(v18, &v38);
          }
          goto LABEL_24;
        }
        v17 = -2147483622;
      }
LABEL_29:
      v7 = v42;
    }
  }
LABEL_24:
  sub_1407C2FB4(v16, v15);
  if ( v7 )
    sub_14071BF40(v7);
  sub_140346C60(&ListHead);
  sub_140AB4260(v27, v26, v28, v29);
LABEL_27:
  sub_140AB4580(v50);
  return (unsigned int)v17;
}
