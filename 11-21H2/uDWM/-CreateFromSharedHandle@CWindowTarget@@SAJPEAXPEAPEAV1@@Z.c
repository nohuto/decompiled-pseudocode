/*
 * XREFs of ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1801075E4
 * Callers:
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E4884 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800373E0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z @ 0x180107388 (-Attach@-$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowTarget::CreateFromSharedHandle(__int64 a1, struct CWindowTarget **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rbx
  __int64 v6; // rdx
  CVisual *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CVisual *v12; // [rsp+40h] [rbp+18h] BYREF
  CVisual *v13; // [rsp+48h] [rbp+20h]

  v12 = 0LL;
  v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    248LL);
  v5 = v4;
  v13 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0xF8uLL);
    CVisual::CVisual(v5);
    *(_QWORD *)v5 = &CWindowTarget::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  Microsoft::WRL::ComPtr<CWindowTarget>::Attach(&v12, v5);
  v6 = a1;
  v7 = v12;
  v8 = CVisual::InitializeFromSharedHandle(v12, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0LL;
    *a2 = v7;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v12);
  return v9;
}
