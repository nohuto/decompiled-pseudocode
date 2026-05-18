/*
 * XREFs of ?AddHandler@JsonConfigurationManager@Utils@Spectre@@UEAAHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@Z @ 0x1800DE470
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??4?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180059C14 (--4-$function@$$A6AXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Z@std@@.c)
 *     ??$_Try_emplace@AEBH$$V@?$map@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@_N@1@AEBH@Z @ 0x1800DD8AC (--$_Try_emplace@AEBH$$V@-$map@HV-$function@$$A6AXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::AddHandler(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 *v5; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  _BYTE v14[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v15 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v13 = a1 + 160;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 160));
  v12 = 0;
  v5 = *(__int64 **)(a1 + 240);
  i = (__int64 *)*v5;
  if ( v5 != (__int64 *)*v5 )
  {
    if ( *((_BYTE *)v5 + 25) )
    {
      i = (__int64 *)v5[2];
    }
    else if ( *((_BYTE *)i + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)*i; i = (__int64 *)i[1] )
        v5 = i;
      if ( *((_BYTE *)v5 + 25) )
        i = v5;
    }
    else
    {
      for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        i = j;
    }
    v12 = *((_DWORD *)i + 8) + 1;
  }
  v8 = (_QWORD *)std::map<int,std::function<void (std::wstring const &)>>::_Try_emplace<int const &,>(
                   (_QWORD *)(a1 + 240),
                   (__int64)v14,
                   (int *)&v12);
  std::function<void (std::wstring const &)>::operator=(*v8 + 40LL, a2);
  v9 = v12;
  _Mtx_unlock(v4);
  std::_Func_class<void,>::_Tidy(a2, v10);
  return v9;
}
