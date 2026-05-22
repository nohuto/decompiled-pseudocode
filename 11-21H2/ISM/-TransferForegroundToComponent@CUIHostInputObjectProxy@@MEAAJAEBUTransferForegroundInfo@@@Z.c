/*
 * XREFs of ?TransferForegroundToComponent@CUIHostInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180127F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083E0C (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CUIHostInputObjectProxy::TransferForegroundToComponent(
        CUIHostInputObjectProxy *this,
        const struct TransferForegroundInfo *a2)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v5; // r14
  __int64 *v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  _QWORD *v10; // [rsp+60h] [rbp+18h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  v5 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
  v6 = (__int64 *)*((_QWORD *)InputSiteManager + 8);
  while ( v5 != v6 )
  {
    InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(*v5, &v10);
    v7 = v10;
    if ( v10 )
    {
      v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
      if ( v8 == (*(__int64 (__fastcall **)(_QWORD *))(v7[1] + 48LL))(v7 + 1) )
      {
        (*(void (__fastcall **)(_QWORD *, const struct TransferForegroundInfo *))(v7[1] + 24LL))(v7 + 1, a2);
        (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
        return 0LL;
      }
    }
    if ( v7 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    }
    ++v5;
  }
  return 0LL;
}
