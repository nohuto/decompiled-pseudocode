/*
 * XREFs of ?GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServiceProvider@@@Z @ 0x14001D610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUIAudioProcessingObject@@@Z @ 0x14001CBE0 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostOb.c)
 *     ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x14001D554 (--$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHost::GetServiceProviderForAPO(
        CAPOProcessingHost *this,
        struct IAudioProcessingObject *a2,
        struct IServiceProvider **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rdi
  struct IServiceProvider *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  struct IAudioProcessingObject *v15; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = a2;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v16 = v5;
  std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::find<void>(
    (__int64)this + 184,
    &v14,
    (__int64)&v15);
  if ( v14 == *((_QWORD *)this + 24) )
  {
    v9 = -2147023728;
    v11 = 134LL;
    goto LABEL_9;
  }
  v6 = *(_QWORD *)(v14 + 24);
  v7 = *(struct IServiceProvider **)(v6 + 16);
  if ( !v7 )
  {
    *(_QWORD *)(v6 + 16) = 0LL;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CAPOServiceProvider,IServiceProvider,>((_QWORD *)(v6 + 16));
    v9 = v8;
    if ( v8 >= 0 )
    {
      v7 = *(struct IServiceProvider **)(v6 + 16);
      goto LABEL_5;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)(unsigned int)v8,
      v12);
    v11 = 136LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v9,
      v12);
    goto LABEL_6;
  }
LABEL_5:
  *a3 = v7;
  ((void (__fastcall *)(struct IServiceProvider *))v7->lpVtbl->AddRef)(v7);
  v9 = 0;
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v16);
  return v9;
}
