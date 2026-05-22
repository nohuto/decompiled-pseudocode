/*
 * XREFs of ?OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@PEBG@Z @ 0x180160320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18001E6F8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCompositionIsland@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositionIsland@Composition@UI@Windows@@@Z @ 0x18006AD28 (--4-$ComPtr@VCompositionIsland@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180113634 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_ptr@UOnCreateAutomationConnectionData@@U?$default_delete@UOnCreateAutomationConnectionData@@@wistd@@@wistd@@QEAA@XZ @ 0x1801602D4 (--1-$unique_ptr@UOnCreateAutomationConnectionData@@U-$default_delete@UOnCreateAutomationConnecti.c)
 */

__int64 __fastcall Windows::UI::Composition::UiaEndpointNotifierCallback::OnCreateAutomationConnection(
        Windows::UI::Composition::UiaEndpointNotifierCallback *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const char *a4)
{
  __int64 v7; // rax
  Microsoft::WRL2::NestableRuntimeClass **v8; // rax
  const char *v9; // r9
  Microsoft::WRL2::NestableRuntimeClass **v10; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  Microsoft::WRL2::NestableRuntimeClass **v16; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = *(_QWORD *)&a2->Data1 - *((_QWORD *)this + 9);
  if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)this + 9) )
    v7 = *(_QWORD *)a2->Data4 - *((_QWORD *)this + 10);
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      40LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
      a4);
  v8 = (Microsoft::WRL2::NestableRuntimeClass **)DefaultHeap::Alloc(0x38uLL);
  v10 = v8;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      2315LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v9);
  v16 = v8;
  *(_OWORD *)v8 = 0LL;
  *((_OWORD *)v8 + 1) = 0LL;
  *((_OWORD *)v8 + 2) = 0LL;
  v8[5] = 0LL;
  v8[6] = (Microsoft::WRL2::NestableRuntimeClass *)7;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionIsland>::operator=(
    v8,
    *((Microsoft::WRL2::NestableRuntimeClass **)this + 8));
  v11 = -1LL;
  *(struct _GUID *)(v10 + 1) = *a2;
  do
    ++v11;
  while ( a3[v11] );
  std::wstring::assign((char *)v10 + 24, a3, v11);
  v12 = *(_QWORD *)(*((_QWORD *)this + 8) + 24LL);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), Microsoft::WRL2::NestableRuntimeClass **, __int64))(**(_QWORD **)(v12 + 120) + 152LL))(
            *(_QWORD *)(v12 + 120),
            lambda_aea67d6666170ea444767c231e25fd74_::_lambda_invoker_cdecl_,
            v10,
            3LL);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
        (const char *)(unsigned int)v13);
      wistd::unique_ptr<OnCreateAutomationConnectionData,wistd::default_delete<OnCreateAutomationConnectionData>>::~unique_ptr<OnCreateAutomationConnectionData,wistd::default_delete<OnCreateAutomationConnectionData>>(&v16);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      72LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
      (const char *)0x80004005LL);
  }
  return 0LL;
}
