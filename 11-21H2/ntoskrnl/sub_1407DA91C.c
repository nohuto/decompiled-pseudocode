/*
 * XREFs of sub_1407DA91C @ 0x1407DA91C
 * Callers:
 *     sub_1407DCF7C @ 0x1407DCF7C (sub_1407DCF7C.c)
 * Callees:
 *     PsGetThreadId @ 0x140230790 (PsGetThreadId.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14035FCE0 @ 0x14035FCE0 (sub_14035FCE0.c)
 *     sub_14035FD2C @ 0x14035FD2C (sub_14035FD2C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407D9680 @ 0x1407D9680 (sub_1407D9680.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407DA91C(_OWORD *a1, int a2, void *a3, struct _KTHREAD *a4, int a5, __int64 *a6)
{
  __int64 v8; // r12
  void *Pool2; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int16 v13; // ax
  __int128 v14; // xmm1
  char *v15; // rax
  int v16; // ecx
  __int64 *v17; // rax
  __int64 **v18; // rcx
  int v19; // ebx

  v8 = a2;
  if ( dword_140C4EEF0 >= (unsigned int)dword_140C54388 )
    return (unsigned int)-1073741618;
  if ( !byte_140D3B046 )
    return (unsigned int)-1073741661;
  Pool2 = (void *)ExAllocatePool2(64LL, 600LL, 1414554435LL);
  v11 = (__int64)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset(Pool2, 0, 0x258uLL);
  *(_DWORD *)v11 = 1128485697;
  KeInitializeTimerEx((PKTIMER)(v11 + 136), NotificationTimer);
  *(_QWORD *)(v11 + 128) = 0LL;
  v12 = v11 + 104;
  *(_QWORD *)(v11 + 112) = v11 + 104;
  *(_QWORD *)(v11 + 104) = v11 + 104;
  *(_DWORD *)(v11 + 456) = -1073741779;
  *(_QWORD *)(v11 + 464) = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(v11 + 520) = 0LL;
  *(_QWORD *)(v11 + 528) = 0LL;
  *(_QWORD *)(v11 + 272) = 0LL;
  KeInitializeDpc((PRKDPC)(v11 + 208), (PKDEFERRED_ROUTINE)sub_140244E70, (PVOID)v11);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v11 + 360));
  sub_140347810((struct _EX_RUNDOWN_REF *)(v11 + 360));
  ObfReferenceObjectWithTag(a3, 0x73576650u);
  *(_QWORD *)(v11 + 352) = a3;
  *(_QWORD *)(v11 + 368) = 0LL;
  *(_QWORD *)(v11 + 384) = sub_1407D9410;
  *(_QWORD *)(v11 + 392) = v11;
  *(_DWORD *)(v11 + 400) = 0;
  v13 = *(_WORD *)(v11 + 486);
  *(_OWORD *)(v11 + 24) = *a1;
  *(_OWORD *)(v11 + 40) = a1[1];
  *(_OWORD *)(v11 + 56) = a1[2];
  v14 = a1[3];
  *(_WORD *)(v11 + 486) = v13 & 0xFFFE | (a5 != 0);
  v15 = (char *)&unk_140C54368 + 16 * v8;
  *(_DWORD *)(v11 + 88) = v8;
  *(_OWORD *)(v11 + 72) = v14;
  v16 = *(_DWORD *)v15;
  *(_DWORD *)(v11 + 340) = *(_DWORD *)v15;
  *(_QWORD *)(v11 + 200) = *((_QWORD *)v15 + 1);
  if ( !v16 )
  {
    v19 = -1073741811;
LABEL_14:
    sub_1407D9680(v11);
    ExFreePoolWithTag((PVOID)v11, 0);
    return (unsigned int)v19;
  }
  if ( v16 > 0x100000 )
    *(_DWORD *)(v11 + 340) = 0x100000;
  *(_QWORD *)(v11 + 96) = sub_14035FCE0();
  if ( !*(_QWORD *)(v11 + 96) )
  {
    v19 = -1073741670;
    goto LABEL_14;
  }
  v17 = *(__int64 **)(v11 + 96);
  v18 = *(__int64 ***)(v11 + 112);
  if ( *v18 != (__int64 *)v12 )
    __fastfail(3u);
  *v17 = v12;
  v17[1] = (__int64)v18;
  *v18 = v17;
  *(_QWORD *)(v11 + 112) = v17;
  *(_QWORD *)(v11 + 424) = -1LL;
  *(_QWORD *)(v11 + 416) = -8LL;
  *(_DWORD *)(v11 + 120) = 1;
  *(_QWORD *)(v11 + 408) = v11 + 416;
  if ( a4 )
  {
    *(_QWORD *)(v11 + 432) = a4;
    *(_QWORD *)(v11 + 440) = PsGetThreadId(a4);
  }
  v19 = sub_14035FD2C(v11);
  if ( v19 < 0 )
    goto LABEL_14;
  v19 = 0;
  *a6 = v11;
  return (unsigned int)v19;
}
