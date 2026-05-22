/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180085594
 * Callers:
 *     ?InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E204 (-InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002E620 (-Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??1CompositionEffectBrush@Composition@UI@Windows@@UEAA@XZ @ 0x180061CE0 (--1CompositionEffectBrush@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CProxyTable@DirectComposition@@QEAA@XZ @ 0x180085554 (--1CProxyTable@DirectComposition@@QEAA@XZ.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E3DC8 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::_COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___ @ 0x180115614 (Windows--Internal--COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows--Inte.c)
 *     ??1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x1801363D8 (--1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CompositionManipulation@Composition@UI@Windows@@UEAA@XZ @ 0x1801531DC (--1CompositionManipulation@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
