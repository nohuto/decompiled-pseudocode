/*
 * XREFs of ?AddFlipManagerSignal@CCompositionFrame@@QEAAJPEAUFlipManagerObject@@PEAVCFlipManagerSignal@@@Z @ 0x1C0076194
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CCompositionFrame::AddFlipManagerSignal(
        CCompositionFrame *this,
        struct FlipManagerObject *a2,
        struct CFlipManagerSignal *a3)
{
  NTSTATUS result; // eax
  CCompositionFrame **v7; // r9
  CCompositionFrame *v8; // rdx

  result = ObReferenceObjectByPointer(a2, 3u, g_pDxgkCompositionObjectType, 0);
  if ( result >= 0 )
  {
    *((_QWORD *)a3 + 5) = a2;
    v7 = (CCompositionFrame **)*((_QWORD *)this + 23);
    v8 = (struct CFlipManagerSignal *)((char *)a3 + 8);
    if ( *v7 != (CCompositionFrame *)((char *)this + 176) )
      __fastfail(3u);
    *(_QWORD *)v8 = (char *)this + 176;
    *((_QWORD *)a3 + 2) = v7;
    *v7 = v8;
    *((_QWORD *)this + 23) = v8;
  }
  return result;
}
