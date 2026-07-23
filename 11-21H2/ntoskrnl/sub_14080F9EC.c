/*
 * XREFs of sub_14080F9EC @ 0x14080F9EC
 * Callers:
 *     sub_14080F930 @ 0x14080F930 (sub_14080F930.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1407FCA44 @ 0x1407FCA44 (sub_1407FCA44.c)
 *     sub_14080FBA8 @ 0x14080FBA8 (sub_14080FBA8.c)
 *     sub_14080FBCC @ 0x14080FBCC (sub_14080FBCC.c)
 *     sub_14080FD5C @ 0x14080FD5C (sub_14080FD5C.c)
 *     sub_1409192C8 @ 0x1409192C8 (sub_1409192C8.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 */

__int64 __fastcall sub_14080F9EC(__int64 a1)
{
  _QWORD *v1; // r15
  __int64 CurrentSilo; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // rcx
  _QWORD *v12; // r14
  _QWORD *i; // rax
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 j; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v24; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0LL;
  v24 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext(CurrentSilo, dword_140C490B8, &BugCheckParameter2);
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741637;
  sub_140AB4370(v5, v4, v6);
  v7 = *(_QWORD *)(a1 + 8);
  sub_1407C0854(v7);
  v8 = sub_140AB43C0(a1, 0LL);
  if ( v8 < 0 )
    goto LABEL_23;
  if ( *(_QWORD *)(v7 + 32) == qword_140D3CA28 )
  {
    v8 = -1073741811;
    goto LABEL_23;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = BugCheckParameter2;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v8 = sub_14080FBA8(v10);
  if ( v8 < 0 )
    goto LABEL_22;
  v12 = (_QWORD *)(v10 + 16);
  for ( i = *(_QWORD **)(v10 + 16); i != v12; i = (_QWORD *)*i )
  {
    if ( i[2] == v7 )
    {
      v8 = 0;
      goto LABEL_22;
    }
  }
  ExReleasePushLockEx(v11, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v1 = (_QWORD *)sub_14080FD5C(v7);
  if ( v1 )
  {
    v8 = sub_14080FBCC(v7, &v24);
    if ( v8 < 0 )
      goto LABEL_23;
    v10 = BugCheckParameter2;
    v14 = BugCheckParameter2;
    v1[3] = v24;
    sub_1407FCA44(v14);
    v8 = sub_14080FBA8(v10);
    if ( v8 >= 0 )
    {
      v16 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v16 != v12 )
        __fastfail(3u);
      *v1 = v12;
      v1[1] = v16;
      *v16 = v1;
      v12[1] = v1;
      ExReleasePushLockEx(v15, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
      sub_140AB4300(v7);
      for ( j = *(_QWORD *)(v7 + 72); *(_QWORD *)(j + 32) != qword_140D3CA28; j = *(_QWORD *)(j + 72) )
      {
        sub_1407C0854(j);
        *(_WORD *)(j + 8) |= 0x100u;
        sub_140AB4300(j);
      }
      v8 = 0;
      goto LABEL_17;
    }
LABEL_22:
    ExReleasePushLockEx(v10, 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
    goto LABEL_23;
  }
  v8 = -1073741670;
LABEL_23:
  sub_140AB4300(v7);
  if ( v1 )
    sub_1409192C8(v1);
LABEL_17:
  sub_140AB4260(v18, v17, v19, v20);
  return (unsigned int)v8;
}
