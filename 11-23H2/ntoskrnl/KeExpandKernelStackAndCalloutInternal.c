/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x14022E7E0
 * Callers:
 *     KeExpandKernelStackAndCalloutEx @ 0x14022E7B0 (KeExpandKernelStackAndCalloutEx.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D6AC0 (KeExpandKernelStackAndCallout.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140465A08 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiDoStackCopy @ 0x14062D2F0 (MiDoStackCopy.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14022E8C0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeBugCheck @ 0x14041EDC0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KiFatalFilter @ 0x14056D310 (KiFatalFilter.c)
 */

__int64 __fastcall KeExpandKernelStackAndCalloutInternal(
        void (__fastcall *BugCheckParameter2)(ULONG_PTR),
        ULONG_PTR BugCheckParameter3,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  $B2204E9EE8E7DD8EE814BFFAF87CA578 *v9; // rbx
  char v10; // r14
  unsigned __int8 v11; // al

  result = KiExpandKernelStackAndCalloutSwitchStack((_DWORD)BugCheckParameter2, BugCheckParameter3, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = &KeGetCurrentThread()->116;
    if ( (v9->MiscFlags & 0x1000) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v9->MiscFlags |= 0x1000u;
      v10 = 0;
    }
    BugCheckParameter2(BugCheckParameter3);
    if ( !v10 )
      v9->MiscFlags &= ~0x1000u;
    if ( KeGetCurrentIrql() != CurrentIrql )
    {
      v11 = KeGetCurrentIrql();
      KeBugCheckEx(
        0xC8u,
        ((CurrentIrql | ((unsigned __int64)v11 << 8)) << 8) | 2,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter3,
        0LL);
    }
    return 0LL;
  }
  return result;
}
