/*
 * XREFs of ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x18017CDCC
 * Callers:
 *     ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x18017CD54 (--1Context@ShellGesturesProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A998C (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18017B36C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUContactState@ShellGesturesRecognizer@.c)
 */

void __fastcall ShellGesturesProcessor::ShellGesturesContext::~ShellGesturesContext(
        ShellGesturesProcessor::ShellGesturesContext *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 26);
  std::_Deallocate<16,0>(
    *((void **)this + 19),
    (*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>>>(
    v2,
    *((_QWORD ***)this + 17));
  std::_Deallocate<16,0>(*((void **)this + 17), 0x38uLL);
}
