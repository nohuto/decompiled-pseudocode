/*
 * XREFs of ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180077C6C
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180074558 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800750E0 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAVWebAccount@Credentials@Security.c)
 *     ??_9IIdentityManager@ContentManagement@@$BDI@AA @ 0x180077114 (--_9IIdentityManager@ContentManagement@@$BDI@AA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rax
  __int64 *v12; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v12, a2, a3);
  v14 = 0LL;
  v4 = *v12;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 96))(v12, &v14);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      371LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v5,
      0);
  v6 =  ContentManagement::IIdentityManager::`vcall'{56,{flat}}(v14);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1671LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v6,
      0);
  v15 = 0LL;
  v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> *>(
         0LL,
         v7,
         v8);
  if ( v9 >= 0 )
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(MEMORY[0] + 64LL))(0LL, &v15);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1647LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v9,
      32);
  v10 = v15;
  v15 = 0LL;
  *a1 = v10;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  return a1;
}
