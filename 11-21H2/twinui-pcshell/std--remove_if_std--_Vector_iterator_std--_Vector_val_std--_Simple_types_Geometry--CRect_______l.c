/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_58b5290418fe0bee3adfb61fed5cdaa6___ @ 0x18059B418
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@Geometry@@1H@Z @ 0x1805A35FC (-DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@.c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_58b5290418fe0bee3adfb61fed5cdaa6___(
        _QWORD *a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  _OWORD *v6; // rdi
  unsigned int *v8; // rsi
  _OWORD *v9; // rsi
  unsigned int *v10; // rbp
  __int64 v11; // r14
  _QWORD *result; // rax

  v6 = a2;
  if ( a2 != a3 )
  {
    v8 = (unsigned int *)a4[1];
    do
    {
      if ( (unsigned __int8)SnapLayoutHelpers::AdvancedSmartFill::DoSnapRegionsOverlap(1LL, *a4, v6, *v8) )
        break;
      ++v6;
    }
    while ( v6 != a3 );
  }
  if ( v6 != a3 )
  {
    v9 = v6 + 1;
    if ( v6 + 1 != a3 )
    {
      v10 = (unsigned int *)a4[1];
      v11 = *a4;
      do
      {
        if ( !(unsigned __int8)SnapLayoutHelpers::AdvancedSmartFill::DoSnapRegionsOverlap(1LL, v11, v9, *v10) )
          *v6++ = *v9;
        ++v9;
      }
      while ( v9 != a3 );
    }
  }
  result = a1;
  *a1 = v6;
  return result;
}
