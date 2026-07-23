/*
 * XREFs of sub_1406A5C00 @ 0x1406A5C00
 * Callers:
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14022EA80 @ 0x14022EA80 (sub_14022EA80.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1406A5C00(int a1)
{
  char v2; // r14
  __int64 v3; // rdx
  PVOID v4; // rcx
  int v5; // r8d
  int v6; // r9d
  char v7; // r15
  signed int v8; // ebx
  char v9; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rdi
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _EX_RUNDOWN_REF *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  PVOID Object; // [rsp+40h] [rbp-79h] BYREF
  __int64 v31; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v33; // [rsp+60h] [rbp-59h] BYREF
  _OWORD v34[2]; // [rsp+70h] [rbp-49h] BYREF
  _OWORD v35[3]; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v36[2]; // [rsp+C0h] [rbp+7h] BYREF

  v31 = 0LL;
  v33 = 0LL;
  memset(v34, 0, sizeof(v34));
  memset(v35, 0, sizeof(v35));
  memset(v36, 0, sizeof(v36));
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v36, 0x20000uLL);
  Object = 0LL;
  v32[1] = v32;
  v2 = 0;
  v32[0] = v32;
  sub_140347770((__int64)&v33);
  v7 = sub_140AB46D0();
  if ( !v7 )
  {
    v8 = -1073741431;
    goto LABEL_26;
  }
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  LOBYTE(v6) = v9;
  v8 = sub_140AB4630(a1, 0, v5, v6, (__int64)&Object, (__int64)&v31);
  if ( v8 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v11 = Object;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 32LL) + 160LL) & 2) != 0
      && v9
      && (~HIDWORD(v31) & 0x20006) != 0 )
    {
      v8 = -1073741790;
LABEL_23:
      sub_1402F9540((__int64)KeGetCurrentThread());
      goto LABEL_24;
    }
    if ( dword_140C54CA8 )
    {
      if ( !sub_1402ACD00() )
      {
        *(_QWORD *)&v34[0] = v11;
        v2 = 1;
        LOBYTE(v12) = 1;
        v13 = sub_140735760(30, (unsigned int)v34, 0, v12, 31, (__int64)v11, (__int64)v32);
        v8 = v13;
        if ( v13 < 0 )
        {
          if ( v13 == -1073740541 )
            v8 = 0;
          goto LABEL_23;
        }
      }
    }
    sub_140689388(0);
    sub_140AB42D0(v11[1]);
    v8 = sub_140AB43C0(v11, 0LL);
    if ( v8 >= 0 )
    {
      v14 = v11[1];
      v15 = *(struct _EX_RUNDOWN_REF **)(v14 + 32);
      if ( v15 == (struct _EX_RUNDOWN_REF *)qword_140D3CA28 )
      {
        sub_140AB4300(v14);
        sub_140AB4260(v17, v16, v18, v19);
        sub_140AB4550(v35);
        sub_14022EA80();
        sub_140AB4580(v35);
        v8 = 0;
        goto LABEL_21;
      }
      v20 = v15 + 205;
      if ( sub_140347810(v15 + 205) )
      {
        sub_140AB4300(v11[1]);
        sub_140AB4260(v27, v26, v28, v29);
        sub_140AB4550(v35);
        v8 = sub_1406885A4((ULONG_PTR)v15, 0);
        if ( v8 < 0 )
          v8 = -1073741491;
        sub_140AB4580(v35);
        sub_1402AD030(v20);
        goto LABEL_21;
      }
      v8 = -1073740763;
    }
    sub_140AB4300(v11[1]);
    sub_140AB4260(v22, v21, v23, v24);
LABEL_21:
    if ( v2 )
      v8 = sub_14067FF60(31, (__int64)v11, v8, (__int64)v34, 0LL, v32);
    goto LABEL_23;
  }
LABEL_24:
  v4 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_26:
  if ( qword_140D3B008 )
  {
    LOBYTE(v4) = 21;
    sub_14042A5E0(v4, v36);
  }
  if ( v7 )
    sub_140AB42A0(v4, v3);
  sub_14022EA30((__int64 *)&v33);
  return (unsigned int)v8;
}
