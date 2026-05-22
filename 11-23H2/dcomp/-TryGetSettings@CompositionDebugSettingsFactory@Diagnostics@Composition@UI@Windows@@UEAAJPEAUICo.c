/*
 * XREFs of ?TryGetSettings@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUICompositionDebugSettings@2345@@Z @ 0x18012DB80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18012D710 (--$MakeAndInitialize2@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@V12345@PEAVC.c)
 *     ??$_Find_lower_bound@PEAUICompositor@Composition@UI@Windows@@@?$_Tree@V?$_Tmap_traits@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBQEAUICompositor@Composition@UI@Windows@@@Z @ 0x18012D860 (--$_Find_lower_bound@PEAUICompositor@Composition@UI@Windows@@@-$_Tree@V-$_Tmap_traits@PEAUICompo.c)
 *     ??$_Try_emplace@AEBQEAUICompositor@Composition@UI@Windows@@$$V@?$map@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBQEAUICompositor@Composition@UI@Windows@@@Z @ 0x18012D8B4 (--$_Try_emplace@AEBQEAUICompositor@Composition@UI@Windows@@$$V@-$map@PEAUICompositor@Composition.c)
 *     ??4?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18012D9C8 (--4-$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAE.c)
 */

__int64 __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::TryGetSettings(
        Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::Diagnostics::ICompositionDebugSettings **a3)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rdi
  unsigned int v5; // esi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v9; // rcx
  int v10; // eax
  __int64 *v11; // rcx
  _QWORD *v12; // rax
  Microsoft::WRL2::NestableRuntimeClass **v13; // rdx
  _BYTE v15[16]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  struct IUnknown *v17; // [rsp+78h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+80h] [rbp+40h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = a2;
  *a3 = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v19);
    return v5;
  }
  v5 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         &v18);
  if ( v5 )
    goto LABEL_6;
  v6 = v18;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v18);
  if ( (*((_BYTE *)v6 + 32) & 2) == 0 )
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v6);
    goto LABEL_6;
  }
  if ( (int)IsDeveloperModeEnabled(&v18) >= 0 && (_DWORD)v18 )
  {
    std::_Tree<std::_Tmap_traits<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>,std::less<Windows::UI::Composition::ICompositor *>,std::allocator<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>,0>>::_Find_lower_bound<Windows::UI::Composition::ICompositor *>(
      v7,
      (__int64)v15,
      (unsigned __int64 *)&v17);
    v8 = v16;
    if ( *(_BYTE *)(v16 + 25) || (unsigned __int64)v17 < *(_QWORD *)(v16 + 32) )
      v8 = Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap;
    v9 = &v19;
    if ( v8 == (_QWORD)Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap )
    {
      v18 = v6;
      v10 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Diagnostics::CompositionDebugSettings,Windows::UI::Composition::Diagnostics::CompositionDebugSettings,Windows::UI::Composition::Compositor *>(
              &v19,
              &v18);
      v5 = v10;
      if ( v10 < 0 )
      {
        DoStackCaptureDirect(v10, 0x83u);
        v3 = v19;
        goto LABEL_19;
      }
      v12 = (_QWORD *)std::map<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>::_Try_emplace<Windows::UI::Composition::ICompositor * const &,>(
                        v11,
                        (__int64)v15,
                        (unsigned __int64 *)&v17);
      v13 = &v19;
      v9 = (Microsoft::WRL2::NestableRuntimeClass **)(*v12 + 40LL);
    }
    else
    {
      v13 = (Microsoft::WRL2::NestableRuntimeClass **)(v8 + 40);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>::operator=(v9, v13);
    *a3 = (struct Windows::UI::Composition::Diagnostics::ICompositionDebugSettings *)(((unsigned __int64)v19 + 40) & -(__int64)(v19 != 0LL));
  }
  v5 = 0;
LABEL_19:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v6);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  if ( v3 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  return v5;
}
