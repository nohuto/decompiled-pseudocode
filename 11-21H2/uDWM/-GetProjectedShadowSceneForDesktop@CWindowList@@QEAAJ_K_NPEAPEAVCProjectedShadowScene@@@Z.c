/*
 * XREFs of ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180103CE0
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180028668 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180101EE0 (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030A74 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CA7DC (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GetProjectedShadowSceneForDesktop(
        CWindowList *this,
        unsigned __int64 a2,
        char a3,
        struct CProjectedShadowScene **a4)
{
  struct CProjectedShadowScene **Element; // rax
  struct CProjectedShadowScene **v8; // rsi
  struct CProjectedShadowScene *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // rdx
  struct CProjectedShadowScene *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v19; // [rsp+30h] [rbp+8h] BYREF

  Element = (struct CProjectedShadowScene **)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                                               (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                                               a2);
  v8 = Element;
  if ( !Element )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBBF,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)0x8002802BLL);
    return 2147647531LL;
  }
  v10 = Element[6];
  if ( !v10 && a3 )
  {
    v19 = 0LL;
    v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            72LL);
    v12 = v11;
    v19 = (CBaseObject *)v11;
    if ( !v11 )
    {
      v19 = 0LL;
      v14 = -2147024882;
      v15 = 2147942414LL;
      v16 = 3012LL;
      goto LABEL_13;
    }
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)v11 = &CProjectedShadowScene::`vftable';
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_BYTE *)(v11 + 64) = 0;
    v19 = (CBaseObject *)v11;
    v13 = CProjectedShadowScene::Initialize((CProjectedShadowScene *)v11, a2);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = (unsigned int)v13;
      v16 = 3013LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v15);
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
      return v14;
    }
    v8[6] = (struct CProjectedShadowScene *)v12;
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
    v10 = v8[6];
  }
  *a4 = v10;
  v17 = v8[6];
  if ( v17 )
    _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
  return 0LL;
}
