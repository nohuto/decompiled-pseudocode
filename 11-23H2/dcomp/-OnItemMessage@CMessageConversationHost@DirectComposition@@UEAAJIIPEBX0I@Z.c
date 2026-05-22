/*
 * XREFs of ?OnItemMessage@CMessageConversationHost@DirectComposition@@UEAAJIIPEBX0I@Z @ 0x18007BE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CMessageConversationHost::OnItemMessage(
        DirectComposition::CMessageConversationHost *this,
        __int64 a2,
        __int64 a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  return (*((__int64 (__fastcall **)(_QWORD, const void *, const void *, _QWORD))this + 6))(
           *((_QWORD *)this + 7),
           a4,
           a5,
           a6);
}
