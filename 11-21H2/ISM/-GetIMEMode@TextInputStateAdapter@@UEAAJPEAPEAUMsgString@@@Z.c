/*
 * XREFs of ?GetIMEMode@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z @ 0x1801D5EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetIMEMode(TextInputStateAdapter *this, struct MsgString **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgString **))(**((_QWORD **)this + 4) + 56LL))(
           *((_QWORD *)this + 4),
           a2);
}
