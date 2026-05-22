/*
 * XREFs of ?GetRemoteForegroundInputHostInfo@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z @ 0x1801D6110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetRemoteForegroundInputHostInfo(
        TextInputStateAdapter *this,
        struct MsgString **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgString **))(**((_QWORD **)this + 4) + 320LL))(
           *((_QWORD *)this + 4),
           a2);
}
