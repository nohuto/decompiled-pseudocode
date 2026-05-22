/*
 * XREFs of ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x180084EB0
 * Callers:
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180126970 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180126DF0 (-OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180127920 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180127C20 (-OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     atexit @ 0x18004A308 (atexit.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 *     ??0CUIHierarchy@@AEAA@XZ @ 0x18008469C (--0CUIHierarchy@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct CUIHierarchy *CUIHierarchy::GetInstance(void)
{
  __int64 v0; // rdx
  CUIHierarchy *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( dword_1802437A8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1802437A8);
    if ( dword_1802437A8 == -1 )
    {
      CUIHierarchy::CUIHierarchy(v1, v0, v2, v3);
      atexit(CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_1802437A8);
    }
  }
  return (struct CUIHierarchy *)&qword_180242B80;
}
