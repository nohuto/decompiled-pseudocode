/*
 * XREFs of sub_140721010 @ 0x140721010
 * Callers:
 *     <none>
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 */

__int64 __fastcall sub_140721010(
        __int64 a1,
        int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rbx
  ULONG_PTR BugCheckParameter4; // rdi
  char v13; // si
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  _QWORD v24[2]; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+50h] [rbp-91h]
  __int64 v26; // [rsp+58h] [rbp-89h]
  __int64 v27; // [rsp+60h] [rbp-81h]
  __int128 v28; // [rsp+68h] [rbp-79h] BYREF
  __int128 v29; // [rsp+78h] [rbp-69h]
  __int128 v30; // [rsp+88h] [rbp-59h]
  __int64 v31; // [rsp+98h] [rbp-49h]
  __int128 v32; // [rsp+A0h] [rbp-41h] BYREF
  _OWORD v33[2]; // [rsp+B0h] [rbp-31h] BYREF

  v8 = a6;
  v26 = a6;
  v27 = a8;
  v32 = 0LL;
  BugCheckParameter4 = a2;
  memset(v33, 0, sizeof(v33));
  v25 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v33, 0x20000uLL);
  sub_140347770((__int64)&v32);
  v24[1] = v24;
  v13 = 0;
  v24[0] = v24;
  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( qword_140D3B008 && a1 )
    v25 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( dword_140C54CA8 && !sub_1402ACD00() )
  {
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      v16 = 36;
      *((_QWORD *)&v29 + 1) = a5;
      v17 = 37;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter4 )
        goto LABEL_21;
      v16 = 38;
      v17 = 39;
    }
    *(_QWORD *)&v29 = a4;
    LOBYTE(v15) = 1;
    *((_QWORD *)&v28 + 1) = a3;
    *(_QWORD *)&v28 = a1;
    v18 = sub_140735760(v16, (unsigned int)&v28, 0, v15, v17, a1, (__int64)v24);
    v19 = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1073740541 )
        v19 = 0;
      goto LABEL_18;
    }
    v8 = v26;
    v13 = 1;
  }
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v20 = sub_140721254(a1, a3, a4, a5);
    goto LABEL_12;
  }
LABEL_21:
  if ( (_DWORD)BugCheckParameter4 )
  {
    if ( (_DWORD)BugCheckParameter4 == 2 )
      goto LABEL_13;
    if ( (_DWORD)BugCheckParameter4 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), BugCheckParameter4);
    v20 = sub_14085BE8C(a1, a4);
  }
  else
  {
    v20 = sub_140677810(a1, a3, a4, v8, a7, v27);
  }
LABEL_12:
  v19 = v20;
  if ( v20 >= 0 )
LABEL_13:
    v19 = 0;
  if ( !v13 )
    goto LABEL_18;
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v21 = 37;
LABEL_17:
    v19 = sub_14067FF60(v21, a1, v19, (__int64)&v28, 0LL, v24);
    goto LABEL_18;
  }
  if ( !(_DWORD)BugCheckParameter4 )
  {
    v21 = 39;
    goto LABEL_17;
  }
LABEL_18:
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_14022EA30((__int64 *)&v32);
  if ( qword_140D3B008 )
  {
    LOBYTE(v22) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    sub_14042A5E0(v22, v33);
  }
  return v19;
}
