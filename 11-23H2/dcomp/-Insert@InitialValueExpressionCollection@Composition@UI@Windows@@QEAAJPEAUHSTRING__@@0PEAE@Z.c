/*
 * XREFs of ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194E48
 * Callers:
 *     ?Insert@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194D80 (-Insert@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z @ 0x18005EA10 (-CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVE.c)
 *     ?ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ @ 0x180061CB4 (-ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ??1?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@QEAA@XZ @ 0x18014EE88 (--1-$pair@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@Composition@UI@Window.c)
 *     ?OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@Z @ 0x18015ADBC (-OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@.c)
 *     ??1ExpressionErrorInfo@Composition@UI@Windows@@QEAA@XZ @ 0x1801676F8 (--1ExpressionErrorInfo@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$_Emplace@U?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@_N@1@$$QEAU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@1@@Z @ 0x180194690 (--$_Emplace@U-$pair@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@Composition.c)
 *     ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z @ 0x18019767C (-ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCom.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Insert(
        Windows::UI::Composition::InitialValueExpressionCollection *this,
        HSTRING a2,
        HSTRING a3,
        unsigned __int8 *a4)
{
  struct Windows::UI::Composition::CompositionObject *v8; // rdx
  wchar_t *StringRawBuffer; // rax
  const unsigned __int16 *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  Microsoft::WRL2::NestableRuntimeClass *v15; // rbx
  struct SubchannelMaskInfo *v16; // rax
  HSTRING string; // [rsp+40h] [rbp-29h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+48h] [rbp-21h] BYREF
  struct SubchannelMaskInfo *v20[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  __int64 v24; // [rsp+70h] [rbp+7h] BYREF
  char v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+80h] [rbp+17h] BYREF
  int v27; // [rsp+88h] [rbp+1Fh]
  __int64 v28; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v30; // [rsp+D0h] [rbp+67h] BYREF
  HSTRING v31; // [rsp+D8h] [rbp+6Fh] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v32; // [rsp+E8h] [rbp+7Fh] BYREF

  v31 = a2;
  v26 = 1LL;
  string = 0LL;
  *a4 = 0;
  v32 = 0LL;
  v19 = 0LL;
  v27 = 0;
  v28 = 0LL;
  Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)&v26);
  v8 = (struct Windows::UI::Composition::CompositionObject *)*((_QWORD *)this + 21);
  v22 = -1;
  v21 = 0LL;
  v23 = 2;
  v20[0] = 0LL;
  Windows::UI::Composition::ExpressionAnimationParser::ParseTargetProperty(
    a2,
    v8,
    (struct Windows::UI::Composition::ExpressionErrorInfo *)&v26,
    (struct ExpressionObjectPropertyInfo *)&v21,
    (enum DCOMPOSITION_EXPRESSION_TYPE *)&v30,
    v20,
    0LL);
  if ( (_DWORD)v26 )
  {
    StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(a2, 0LL);
    Windows::UI::Composition::ExpressionAnimation::OriginateError(
      (struct Windows::UI::Composition::ExpressionErrorInfo *)&v26,
      StringRawBuffer,
      v10);
    v11 = -2147024809;
    v12 = 227LL;
    v13 = 2147942487LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioncollection.cpp",
      (const char *)v13);
    Windows::UI::Composition::ExpressionErrorInfo::~ExpressionErrorInfo((Windows::UI::Composition::ExpressionErrorInfo *)&v26);
    goto LABEL_11;
  }
  Microsoft::WRL::Wrappers::HString::Set(&string, &v31);
  v14 = Windows::UI::Composition::CompositorCommon::CreateExpressionAnimation(
          *((Windows::UI::Composition::CompositorCommon **)this + 3),
          a3,
          &v32);
  v11 = v14;
  if ( v14 < 0 )
  {
    v13 = (unsigned int)v14;
    v12 = 234LL;
    goto LABEL_5;
  }
  v15 = v32;
  v32 = 0LL;
  v19 = v15;
  v20[0] = (struct SubchannelMaskInfo *)string;
  string = 0LL;
  v20[1] = v15;
  if ( v15 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v15);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Emplace<std::pair<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>(
    (__int64 *)this + 19,
    (__int64)&v24,
    v20);
  std::pair<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>::~pair<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>((__int64)v20);
  if ( !v25 )
  {
    v19 = 0LL;
    v16 = *(struct SubchannelMaskInfo **)(v24 + 40);
    *(_QWORD *)(v24 + 40) = v15;
    v20[0] = v16;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v20);
    *a4 = 1;
  }
  ++*((_DWORD *)this + 44);
  v26 = 0LL;
  v27 = 0;
  Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)&v26);
  v11 = 0;
LABEL_11:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v32);
  WindowsDeleteString(string);
  return v11;
}
