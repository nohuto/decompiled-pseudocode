/*
 * XREFs of _lambda_c2e383000fb9a79ec8225e5d53436605_::operator() @ 0x1800C3468
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c2e383000fb9a79ec8225e5d53436605___::Run @ 0x1800C3440 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c2e383000fb9a79ec8225e5d53436605___--.c)
 * Callees:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800C3490 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 __fastcall lambda_c2e383000fb9a79ec8225e5d53436605_::operator()(_QWORD *a1)
{
  WindowWrapperBase::PushBoundsToWindow(*a1, 1LL);
  return 0LL;
}
