/*
 * XREFs of ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009BF28
 * Callers:
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180140FB0 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ @ 0x1801412C0 (-OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180141D70 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180142220 (-OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     atexit @ 0x180056078 (atexit.c)
 *     _Init_thread_footer @ 0x180056BA8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180056C10 (_Init_thread_header.c)
 *     ??0CUIHierarchy@@AEAA@XZ @ 0x18009B754 (--0CUIHierarchy@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct CUIHierarchy *CUIHierarchy::GetInstance(void)
{
  CUIHierarchy *v0; // rcx

  if ( dword_180269878 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180269878);
    if ( dword_180269878 == -1 )
    {
      CUIHierarchy::CUIHierarchy(v0);
      atexit(CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180269878);
    }
  }
  return (struct CUIHierarchy *)&qword_180268C30;
}
