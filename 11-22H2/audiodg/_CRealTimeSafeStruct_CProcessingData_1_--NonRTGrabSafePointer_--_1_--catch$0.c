/*
 * XREFs of _CRealTimeSafeStruct_CProcessingData_1_::NonRTGrabSafePointer_::_1_::catch$0 @ 0x14003635E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRealTimeSafeStruct_CProcessingData_1_::NonRTGrabSafePointer_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 136) = *v3;
  return 0LL;
}
