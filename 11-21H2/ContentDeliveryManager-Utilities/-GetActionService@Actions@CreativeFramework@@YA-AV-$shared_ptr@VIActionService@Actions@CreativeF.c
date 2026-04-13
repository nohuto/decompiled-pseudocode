/*
 * XREFs of ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800B844C
 * Callers:
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180080FA4 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18006E19C (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$.c)
 *     ??$_Buynode@U?$pair@PEA_WPEA_W@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@PEA_WPEA_W@1@@Z @ 0x1800B8200 (--$_Buynode@U-$pair@PEA_WPEA_W@std@@@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@@Z @ 0x1800B82B8 (--$_Insert_nohint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca_ea_1800B82B8.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B8BB0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800B8C10 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Actions::GetActionService(__int64 a1, int a2, __int64 a3, __int64 ***a4)
{
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  char *v10; // rax
  char *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 **v14; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  void **v17; // rbx
  unsigned __int8 (*v18)(void); // rax
  unsigned int v20; // eax
  char *v21; // [rsp+28h] [rbp-40h]
  void *v22[2]; // [rsp+30h] [rbp-38h] BYREF
  char *v23[2]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v24[16]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v22[1] = 0LL;
  v22[0] = (void *)std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::wstring>>>::_Buyheadnode();
  v8 = *a4;
  v9 = **a4;
  while ( v9 != (__int64 *)v8 )
  {
    v10 = (char *)(v9 + 4);
    v11 = (char *)(v9 + 8);
    if ( (unsigned __int64)v9[11] >= 8 )
      v11 = *(char **)v11;
    if ( (unsigned __int64)v9[7] >= 8 )
      v10 = *(char **)v10;
    v23[0] = v10;
    v23[1] = v11;
    v12 = (_QWORD *)std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<wchar_t *,wchar_t *>>(
                      (__int64)v22,
                      v23);
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
      (__int64 **)v22,
      (__int64)v24,
      v13,
      v12 + 4,
      v12);
    if ( !*((_BYTE *)v9 + 25) )
    {
      v14 = (__int64 **)v9[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v9 = i;
        v9 = i;
      }
      else
      {
        v9 = (__int64 *)v9[2];
        for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v9 = j;
      }
    }
  }
  v17 = (void **)&unk_180107130;
  while ( 1 )
  {
    if ( *(_DWORD *)v17 == a2 )
    {
      v18 = (unsigned __int8 (*)(void))v17[2];
      if ( !v18 || v18() )
        break;
    }
    v17 += 3;
    if ( v17 == &CreativeFramework::Actions::IActionService::`vftable' )
    {
      v20 = wil::verify_hresult<long>(0x80070490);
      LODWORD(v21) = a2;
      wil::details::in1diag3::Throw_HrMsg(
        retaddr,
        (void *)0x47,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\actionfactory.cpp",
        (const char *)v20,
        (int)"Requested action service: %d",
        v21,
        v22[0]);
    }
  }
  ((void (__fastcall *)(__int64, __int64, void **))v17[1])(a1, a3, v22);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>(v22);
  return a1;
}
