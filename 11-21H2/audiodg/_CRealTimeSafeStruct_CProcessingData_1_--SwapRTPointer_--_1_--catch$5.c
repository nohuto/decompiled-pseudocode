/*
 * XREFs of _CRealTimeSafeStruct_CProcessingData_1_::SwapRTPointer_::_1_::catch$5 @ 0x1400372D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRealTimeSafeStruct_CProcessingData_1_::SwapRTPointer_::_1_::catch_5(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 192);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 240) = *v3;
  return 0LL;
}
