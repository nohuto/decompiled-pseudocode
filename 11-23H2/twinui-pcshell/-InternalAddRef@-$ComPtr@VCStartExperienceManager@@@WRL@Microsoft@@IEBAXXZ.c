/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18019EC30
 * Callers:
 *     _lambda_eba303ee992e6a97ac61d22e1b9d43e6_::_lambda_eba303ee992e6a97ac61d22e1b9d43e6_ @ 0x1801E1144 (_lambda_eba303ee992e6a97ac61d22e1b9d43e6_--_lambda_eba303ee992e6a97ac61d22e1b9d43e6_.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 88);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 88), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      return;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), (volatile int *)v1);
  }
}
