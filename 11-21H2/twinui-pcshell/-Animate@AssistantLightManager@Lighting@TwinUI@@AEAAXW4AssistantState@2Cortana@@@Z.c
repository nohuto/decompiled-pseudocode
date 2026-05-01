/*
 * XREFs of ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x180238570
 * Callers:
 *     _lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_ @ 0x18055E120 (_lambda_b1f3f535d4f0ba887956551c7aafec2d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18042F274 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??0?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18055E5B0 (--0-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::Animate(__int64 a1, int a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // esi
  char v8; // r14
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  _BYTE v13[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h]
  std::_Ref_count_base *v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+80h] [rbp+40h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v4 = *(__int64 **)(a1 + 40);
  v17 = (struct _RTL_CRITICAL_SECTION *)a1;
  v5 = *v4;
  v16 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      v13,
      v5 + 32);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v6);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v16);
    v5 = v16;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  v7 = 0;
  v17 = (struct _RTL_CRITICAL_SECTION *)a1;
  v8 = 0;
  do
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a1);
    v9 = **(_QWORD **)(a1 + 40);
    v16 = v9;
    while ( !*(_BYTE *)(v9 + 25) )
    {
      std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
        v13,
        v9 + 32);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 8LL))(v14, (unsigned int)v7, (unsigned int)a2);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v16);
      v9 = v16;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
    ++v7;
    if ( !a2 )
    {
LABEL_17:
      v8 = 1;
      continue;
    }
    if ( a2 > 0 )
    {
      if ( a2 <= 3 )
      {
        v12 = 0;
        if ( v7 <= 600 )
          v12 = a2;
        a2 = v12;
      }
      else if ( a2 == 4 )
      {
        a2 = 0;
        if ( v7 <= 200 )
          a2 = 4;
      }
      else if ( a2 == 5 )
      {
        goto LABEL_17;
      }
    }
  }
  while ( !(unsigned __int8)wil::handle_wait(*(wil **)(a1 + 64), (void *)0x32) && !v8 );
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v10 = *(__int64 **)(a1 + 40);
  v17 = (struct _RTL_CRITICAL_SECTION *)a1;
  v11 = *v10;
  v16 = v11;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      v13,
      v11 + 32);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 16LL))(v14, 0LL);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v16);
    v11 = v16;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
}
