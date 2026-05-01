/*
 * XREFs of _winrt::make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_&_IImmersiveMonitor___bool_&__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd____::_1_::dtor$1 @ 0x1806567D9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1800875B8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::_Func_class<void,>::~_Func_class<void,>(a2 + 64);
  }
  return result;
}
