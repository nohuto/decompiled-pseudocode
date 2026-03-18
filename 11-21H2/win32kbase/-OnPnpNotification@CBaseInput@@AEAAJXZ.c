/*
 * XREFs of ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C0009AB0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 */

__int64 __fastcall CBaseInput::OnPnpNotification(CBaseInput *this)
{
  return RIMOnPnpNotification(*((_QWORD *)this + 1));
}
