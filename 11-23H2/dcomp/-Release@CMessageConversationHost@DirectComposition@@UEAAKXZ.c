/*
 * XREFs of ?Release@CMessageConversationHost@DirectComposition@@UEAAKXZ @ 0x18008A8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CMessageConversationHost::Release(
        DirectComposition::CMessageConversationHost *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(DirectComposition::CMessageConversationHost *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL);
  return v1;
}
