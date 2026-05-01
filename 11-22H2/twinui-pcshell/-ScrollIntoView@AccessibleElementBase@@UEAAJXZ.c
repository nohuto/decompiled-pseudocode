/*
 * XREFs of ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x180584CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1805853A8 (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::ScrollIntoView(AccessibleElementBase *this)
{
  AccessibleElementBase *v1; // rdi
  int ParentScrollViewer; // ebx
  void *v4; // [rsp+30h] [rbp+8h] BYREF
  struct IScrollViewer *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v1 = (AccessibleElementBase *)((char *)this - 56);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  ParentScrollViewer = AccessibleElementBase::_GetParentScrollViewer(v1, &v5);
  if ( ParentScrollViewer >= 0 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v4);
    ParentScrollViewer = AccessibleElementBase::_GetElement(v1, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v4);
    if ( ParentScrollViewer >= 0 )
    {
      (*(void (__fastcall **)(struct IScrollViewer *, void *))(*(_QWORD *)v5 + 24LL))(v5, v4);
      ParentScrollViewer = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  return (unsigned int)ParentScrollViewer;
}
