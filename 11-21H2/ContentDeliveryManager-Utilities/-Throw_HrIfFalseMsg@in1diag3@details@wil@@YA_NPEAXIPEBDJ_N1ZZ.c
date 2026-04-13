/*
 * XREFs of ?Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180073070
 * Callers:
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x180070030 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 * Callees:
 *     ?_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x180073AF0 (-_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
 */

bool wil::details::in1diag3::Throw_HrIfFalseMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        bool a5,
        int a6,
        const char *a7,
        ...)
{
  bool result; // al
  void *v8; // [rsp+20h] [rbp-28h]
  char *v9; // [rsp+38h] [rbp-10h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  result = a5;
  if ( !a5 )
  {
    LODWORD(v8) = (_DWORD)a4;
    wil::details::in1diag3::_Throw_HrMsg(this, a2, a3, retaddr, v8, a6, (const char *)&a7, v9);
  }
  return result;
}
