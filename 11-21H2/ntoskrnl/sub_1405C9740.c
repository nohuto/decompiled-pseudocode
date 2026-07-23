/*
 * XREFs of sub_1405C9740 @ 0x1405C9740
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C92A0 @ 0x1405C92A0 (sub_1405C92A0.c)
 *     sub_1405DA898 @ 0x1405DA898 (sub_1405DA898.c)
 */

__int64 __fastcall sub_1405C9740(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // r14d
  __int64 v3; // rbp
  int v4; // ebx
  KIRQL v5; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r8
  int v19; // eax
  _BYTE v20[16]; // [rsp+20h] [rbp-148h] BYREF
  _DWORD v21[68]; // [rsp+30h] [rbp-138h] BYREF

  v20[0] = 0;
  memset(&v21[2], 0, 0x100uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  v3 = sub_140348800(ProcessorIndexFromNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return (unsigned int)-1073741811;
  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
  v6 = *(_QWORD *)(v3 + 33600);
  v7 = v5;
  if ( !v6 )
  {
    v4 = -1073741637;
    goto LABEL_5;
  }
  v14 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v14 >= *(_DWORD *)(v6 + 32) )
  {
    v4 = -1073741811;
LABEL_5:
    KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    return (unsigned int)v4;
  }
  v4 = sub_1405C92A0(*(_BYTE *)(a1 + 16), *(_DWORD *)(a1 + 12), v6 + 344 * v14 + 1400, v20);
  if ( v4 < 0 )
    goto LABEL_5;
  LOBYTE(v15) = *(_BYTE *)(a1 + 16);
  sub_1405DA898(v3, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v15);
  if ( !v20[0] || (struct _KPRCB *)v3 == KeGetCurrentPrcb() )
    goto LABEL_5;
  KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = *((_QWORD *)v17 + 4375);
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v12 )
          sub_140418E4C((__int64)v17);
      }
    }
  }
  __writecr8(v7);
  v21[0] = 2097153;
  memset(&v21[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v21, ProcessorIndexFromNumber);
  sub_140293A88((__int64)v21, (__int64)PsGetHostSilo, 0LL, 0LL);
  return (unsigned int)v4;
}
