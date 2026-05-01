/*
 * XREFs of ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x18074E6F0
 * Callers:
 *     _lambda_2332646ee2da4bd34a0bd6e9819a3d8e_::operator() @ 0x18074E1A4 (_lambda_2332646ee2da4bd34a0bd6e9819a3d8e_--operator().c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18074E754 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 * Callees:
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18074C22C (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 */

int __fastcall DPIToPPIHelpers::ScaleBySpecificDPI(HWND a1, int a2, int a3)
{
  int v4; // ebx
  int nDenominator; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = (int)a1;
  if ( a3 == 1 )
  {
    SHComputeDPI(a1, &nDenominator, &v7);
    v4 = MulDiv(v4, 96, nDenominator);
  }
  return MulDiv(v4, a2, 96);
}
