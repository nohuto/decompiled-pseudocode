/*
 * XREFs of sub_1403A06D0 @ 0x1403A06D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_1403FAD10 @ 0x1403FAD10 (sub_1403FAD10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14042BD90 @ 0x14042BD90 (sub_14042BD90.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 */

void __fastcall sub_1403A06D0(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // r14d
  unsigned __int64 v9; // rsi
  int v10; // r15d
  struct _LIST_ENTRY *i; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  _DWORD v17[76]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v18; // [rsp+130h] [rbp-C8h]
  _WORD v19[45]; // [rsp+140h] [rbp-B8h] BYREF
  _DWORD *v20; // [rsp+1A0h] [rbp-58h]
  _OWORD v21[2]; // [rsp+1A8h] [rbp-50h] BYREF

  v20 = v17;
  v18 = DeferredContext;
  v8 = DWORD2(xmmword_140D06900) & 0x800000;
  v17[39] = DWORD2(xmmword_140D06900) & 0x800000;
  memset(v19, 0, sizeof(v19));
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v17[16] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v19[41] = SystemArgument1;
    *(_QWORD *)&v19[5] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v19[33] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    sub_14042BD90(DeferredContext);
  }
  if ( *(_DWORD *)DeferredContext )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&qword_140D31140);
    v10 = *(_DWORD *)DeferredContext;
    for ( i = stru_140C47140.Flink; i != &stru_140C47140 && v10; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        if ( v8 )
        {
          memset(v21, 0, sizeof(v21));
          sub_140223A20((unsigned __int64)v21, 0x40800000uLL);
          sub_14042A5E0(i[2].Flink, i[1].Blink);
          sub_14045FBE2(3910, 1082130432, (_DWORD)i + 16, 8, 4196866, (__int64)v21);
        }
        else
        {
          sub_14042A5E0(i[2].Flink, i[1].Blink);
        }
        --v10;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140D31140);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
}
