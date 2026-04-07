/*
 * XREFs of ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800CA554
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CA7DC (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037344 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CAB6C (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::CreateProjectedShadowReceiverVisual(CProjectedShadowScene *this, __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, GUID *, char *); // rdi
  _QWORD *v6; // r14
  int inserted; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, _QWORD, void **); // rdi
  __int64 (__fastcall *v11)(__int64, char *); // rdi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
  v16 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v4 + 216LL);
  v6 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  inserted = v5(v4, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, (char *)this + 48);
  v8 = inserted;
  if ( inserted >= 0 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v4 + 224LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v15,
      0LL);
    inserted = v10(v4, *v6, &v15);
    v8 = inserted;
    if ( inserted >= 0 )
    {
      v11 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
      inserted = v11(v4, (char *)this + 40);
      v8 = inserted;
      if ( inserted >= 0 )
      {
        inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
        v8 = inserted;
        if ( inserted >= 0 )
        {
          inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *((_QWORD *)this + 5));
          v8 = inserted;
          if ( inserted >= 0 )
          {
            inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
            v8 = inserted;
            if ( inserted >= 0 )
            {
              inserted = CVisual::CreateFromSharedHandle(v15, (struct CVisual **)this + 7);
              v8 = inserted;
              if ( inserted >= 0 )
              {
                inserted = CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
                v8 = inserted;
                if ( inserted >= 0 )
                {
                  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                           a2);
                  inserted = VisualCollection::InsertRelative(
                               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                               *((struct CVisual **)this + 7),
                               0LL,
                               0,
                               1);
                  v8 = inserted;
                  if ( inserted >= 0 )
                  {
                    *((_QWORD *)this + 2) = a2;
                    v8 = 0;
                    goto LABEL_23;
                  }
                  v9 = 125LL;
                }
                else
                {
                  v9 = 122LL;
                }
              }
              else
              {
                v9 = 119LL;
              }
            }
            else
            {
              v9 = 116LL;
            }
          }
          else
          {
            v9 = 115LL;
          }
        }
        else
        {
          v9 = 112LL;
        }
      }
      else
      {
        v9 = 111LL;
      }
    }
    else
    {
      v9 = 108LL;
    }
  }
  else
  {
    v9 = 105LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)inserted);
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v15);
  return v8;
}
