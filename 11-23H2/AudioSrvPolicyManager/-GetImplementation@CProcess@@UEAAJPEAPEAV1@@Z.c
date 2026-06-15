/*
 * XREFs of ?GetImplementation@CProcess@@UEAAJPEAPEAV1@@Z @ 0x180026D60
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CProcess::GetImplementation(CProcess *this, struct CProcess **a2)
{
  unsigned int v2; // r8d

  if ( a2 )
  {
    *a2 = (CProcess *)((char *)this - 8);
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CProcess *)((char *)this + 12), (volatile int *)a2);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
