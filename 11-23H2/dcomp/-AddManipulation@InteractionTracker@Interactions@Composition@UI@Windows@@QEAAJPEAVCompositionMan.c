/*
 * XREFs of ?AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@PEAVCompositionPointerEventRouter@345@@Z @ 0x180136AB8
 * Callers:
 *     ?AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionManipulationPartner@456@PEAUICompositionInteractionPartner@456@_N@Z @ 0x180136CC0 (-AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJP.c)
 *     ?Add@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisualInteractionSource@2345@@Z @ 0x18018FDE8 (-Add@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Emplace_reallocate@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180135858 (--$_Emplace_reallocate@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Win.c)
 *     ??$_Emplace_reallocate@UMarshaledManipulationInfo@@@?$vector@UMarshaledManipulationInfo@@V?$allocator@UMarshaledManipulationInfo@@@std@@@std@@QEAAPEAUMarshaledManipulationInfo@@QEAU2@$$QEAU2@@Z @ 0x180135978 (--$_Emplace_reallocate@UMarshaledManipulationInfo@@@-$vector@UMarshaledManipulationInfo@@V-$allo.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::AddManipulation(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::UI::Composition::CompositionManipulation *a2,
        struct Windows::UI::Composition::CompositionPointerEventRouter *a3)
{
  char *v7; // rsi
  struct Windows::UI::Composition::CompositionManipulation **i; // rax
  Microsoft::WRL2::NestableRuntimeClass **v9; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v10; // rdx
  _BYTE *v11; // rdx
  const void **v12; // rdi
  const char *v13; // r9
  const char *v14; // [rsp+28h] [rbp-18h]
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+30h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 )
  {
    v7 = (char *)this + 200;
    for ( i = (struct Windows::UI::Composition::CompositionManipulation **)*((_QWORD *)this + 25);
          i != *((struct Windows::UI::Composition::CompositionManipulation ***)this + 26);
          i += 2 )
    {
      if ( *i == a2 )
        return 0LL;
    }
    v15 = a2;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v16 = a3;
    if ( a3 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
    v9 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)v7 + 1);
    if ( v9 == *((Microsoft::WRL2::NestableRuntimeClass ***)v7 + 2) )
    {
      std::vector<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>::_Emplace_reallocate<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>(
        v7,
        (__int64)v9,
        &v15);
    }
    else
    {
      *v9 = 0LL;
      if ( v9 != &v15 )
      {
        v15 = 0LL;
        *v9 = a2;
      }
      v10 = v9 + 1;
      *v10 = 0LL;
      if ( v10 != &v16 )
      {
        v16 = 0LL;
        *v10 = a3;
      }
      *((_QWORD *)v7 + 1) += 16LL;
    }
    LODWORD(v18) = *((_DWORD *)a2 + 32);
    if ( a3 )
      HIDWORD(v18) = *((_DWORD *)a3 + 32);
    else
      HIDWORD(v18) = 0;
    v11 = (_BYTE *)*((_QWORD *)this + 29);
    v12 = (const void **)((char *)this + 224);
    if ( v11 == *((_BYTE **)this + 30) )
    {
      std::vector<MarshaledManipulationInfo>::_Emplace_reallocate<MarshaledManipulationInfo>(
        (__int64)this + 224,
        v11,
        &v18);
    }
    else
    {
      *(_QWORD *)v11 = v18;
      *((_QWORD *)this + 29) += 8LL;
    }
    if ( ((*((_QWORD *)this + 29) - (_QWORD)*v12) & 0xFFFFFFFFFFFFFFF8uLL) > 0x1000 )
    {
      RoOriginateErrorW(2147942487LL, 0LL, L"Manipulations resource list size exceeds max allowed size.");
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
      return 2147942487LL;
    }
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      21,
      *v12,
      (*((_QWORD *)this + 29) - (_QWORD)*v12) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (((*((_QWORD *)this + 29) - (_QWORD)*v12) ^ ((__int64)(*((_QWORD *)v7 + 1) - *(_QWORD *)v7) >> 1)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1015LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x3CE,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid manipulation specified.",
      v14);
    return 2147942487LL;
  }
}
