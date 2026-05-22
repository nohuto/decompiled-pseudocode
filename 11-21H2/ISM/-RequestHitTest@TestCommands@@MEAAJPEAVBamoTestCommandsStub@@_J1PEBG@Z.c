/*
 * XREFs of ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x18019F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x18009C7C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 *     ??$As@UISystemInputRouterHitTest@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CDE40 (--$As@UISystemInputRouterHitTest@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x18019F120 (--$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA-AV-$vector@V.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TestCommands::RequestHitTest(
        TestCommands *this,
        struct BamoTestCommandsStub *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-B1h]
  __int64 v18[2]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-89h]
  __int64 v21; // [rsp+50h] [rbp-81h]
  _BYTE v22[8]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v23[11]; // [rsp+68h] [rbp-69h] BYREF
  _BYTE v24[8]; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v18[0] = 0LL;
  v7 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<ISystemInputRouterHitTest>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7,
         v18);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\testcommands.cpp",
      (const char *)(unsigned int)v7,
      v17);
  v8 = *(_QWORD *)v18[0];
  v18[1] = __PAIR64__(a4, a3);
  (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int64))(v8 + 24))(v18[0], v22, __PAIR64__(a4, a3));
  if ( v22[0] )
  {
    v9 = *(__int64 **)(v25 - 24);
    v10 = *(__int64 **)(v25 - 16);
    while ( v9 != v10 )
    {
      InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(*v9, (__int64)&v19);
      v11 = v20;
      v12 = v19;
      if ( v19 != v20 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)*v12 + 24LL))(
            *v12,
            a3,
            a4,
            a5);
          ++v12;
        }
        while ( v12 != v11 );
        v11 = v20;
        v12 = v19;
      }
      if ( v12 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(v12, v11);
        std::_Deallocate<16,0>(v19, (v21 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v9;
    }
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v24);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    v23,
    v13,
    v14,
    v15);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v18);
  return 0LL;
}
