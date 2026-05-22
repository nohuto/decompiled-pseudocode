/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800E3E84
 * Callers:
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x1800FD97C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquen.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor_____lambda_525e999c26fbeca1a1e2a68ab2096671___ @ 0x18011464C (Windows--Internal--COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay_____lambda_4328ccf16b233a81f6b03adc706b18ed___ @ 0x180118A3C (Windows--Internal--COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed___ea_180118A3C.c)
 *     ??0VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18011C8F0 (--0VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180135FD4 (--0InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0CompositionManipulation@Composition@UI@Windows@@QEAA@XZ @ 0x180153180 (--0CompositionManipulation@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
