/*
 * XREFs of ?GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServiceProvider@@@Z @ 0x140006740
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x140005338 (--$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUIAudioProcessingObject@@@Z @ 0x1400064B4 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostOb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHost::GetServiceProviderForAPO(
        CAPOProcessingHost *this,
        struct IAudioProcessingObject *a2,
        struct IServiceProvider **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  struct IServiceProvider *v9; // rcx
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  struct IAudioProcessingObject *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::find<void>(
    (unsigned __int64)this + 184,
    &v14,
    (const unsigned __int8 *)&v15);
  if ( v14 == *((_QWORD *)this + 24) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80070490LL,
      v11);
    if ( v5 )
      LeaveCriticalSection(v5);
    return 2147943568LL;
  }
  else
  {
    v6 = *(_QWORD *)(v14 + 24);
    if ( *(_QWORD *)(v6 + 16)
      || (*(_QWORD *)(v6 + 16) = 0LL,
          v7 = Microsoft::WRL::Details::MakeAndInitialize<CAPOServiceProvider,IServiceProvider,>((_QWORD *)(v6 + 16)),
          v8 = v7,
          v7 >= 0) )
    {
      v9 = *(struct IServiceProvider **)(v6 + 16);
      *a3 = v9;
      ((void (__fastcall *)(struct IServiceProvider *))v9->lpVtbl->AddRef)(v9);
      if ( v5 )
        LeaveCriticalSection(v5);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)(unsigned int)v7,
        v11);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)v8,
        v12);
      if ( v5 )
        LeaveCriticalSection(v5);
      return v8;
    }
  }
}
