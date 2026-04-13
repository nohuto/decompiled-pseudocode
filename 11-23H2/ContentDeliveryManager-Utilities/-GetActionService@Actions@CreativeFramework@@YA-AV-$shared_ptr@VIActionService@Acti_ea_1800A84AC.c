/*
 * XREFs of ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800A84AC
 * Callers:
 *     ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800A83DC (-GetActionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@CreativeF.c)
 * Callees:
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A8AF0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreativeFramework::Actions::GetActionService(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  void ***i; // rbx
  unsigned __int8 (*v9)(void); // rax
  char *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = (void ***)&unk_180194740; ; i += 3 )
  {
    if ( i == std::_Error_objects<int>::_System_object )
    {
      LODWORD(v11) = a2;
      wil::details::in1diag3::Throw_HrMsg(
        retaddr,
        (void *)0x47,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\actionfactory.cpp",
        (const char *)0x80070490LL,
        (int)"Requested action service: %d",
        v11);
    }
    if ( *(_DWORD *)i == a2 )
    {
      v9 = (unsigned __int8 (*)(void))i[2];
      if ( !v9 || v9() )
        break;
    }
  }
  ((void (__fastcall *)(__int64, __int64, __int64))i[1])(a1, a3, a4);
  return a1;
}
