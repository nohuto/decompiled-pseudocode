/*
 * XREFs of ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x180150A5C
 * Callers:
 *     ??_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z @ 0x180150BC0 (--_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180080384 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014E90C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUContactState@ShellGesturesRecognizer@.c)
 */

void __fastcall ShellGesturesProcessor::Context::~Context(ShellGesturesProcessor::Context *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 28);
  std::_Deallocate<16,0>(
    *((void **)this + 21),
    (*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>>>(
    v2,
    *((_QWORD ***)this + 19));
  std::_Deallocate<16,0>(*((void **)this + 19), 0x38uLL);
  *((_DWORD *)this + 3) = -1073741823;
}
