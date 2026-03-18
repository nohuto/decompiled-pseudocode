/*
 * XREFs of KiUpdateNumberProcessors @ 0x140A9F5C4
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F3A0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14039A940 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall KiUpdateNumberProcessors(int a1)
{
  _DWORD Context[6]; // [rsp+20h] [rbp-28h] BYREF

  Context[0] = a1;
  Context[1] = KeGetPcr()->Prcb.Number;
  Context[2] = KeNumberProcessors_0 - 1;
  Context[3] = KeNumberProcessors_0 - 1;
  Context[4] = 0;
  return KeIpiGenericCall(KiUpdateNumberProcessorsIpi, (ULONG_PTR)Context);
}
