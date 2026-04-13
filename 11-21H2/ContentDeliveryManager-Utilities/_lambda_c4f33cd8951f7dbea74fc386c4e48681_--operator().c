/*
 * XREFs of _lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator() @ 0x18006E8DC
 * Callers:
 *     wistd::__function::__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl(void)_::operator() @ 0x18006EAA0 (wistd--__function--__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  signed __int64 v2; // rcx
  bool v3; // zf
  signed __int64 v4; // rax
  signed __int32 v5; // eax
  __int64 v6; // rsi
  signed __int64 v7; // rcx
  signed __int64 v8; // rax
  signed __int32 v9; // eax
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 result; // rax
  const char *v14; // r9
  int v15; // r14d
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h]
  char v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v18 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 64);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 64), v2 + 1, v2);
        v3 = v2 == v4;
        v2 = v4;
        if ( !v3 )
          continue;
      }
      goto LABEL_9;
    }
    do
      v5 = *(_DWORD *)(2 * v2 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v2 + 16), v5 + 1, v5) );
LABEL_9:
    v1 = v18;
  }
  v6 = v1;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 64);
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 64), v7 + 1, v7);
        v3 = v7 == v8;
        v7 = v8;
        if ( !v3 )
          continue;
      }
      goto LABEL_18;
    }
    do
      v9 = *(_DWORD *)(2 * v7 + 0x10);
    while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v7 + 16), v9 + 1, v9) );
LABEL_18:
    v1 = v18;
  }
  v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v11 = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 3) = 1;
      *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
      *((_QWORD *)v11 + 2) = 0LL;
      if ( v11 + 16 != &v19 )
      {
        *((_QWORD *)v11 + 2) = v1;
        v6 = 0LL;
      }
      *(_QWORD *)v11 = off_1800FEC90;
    }
    else
    {
      v11 = 0LL;
    }
    CurrentThreadId = GetCurrentThreadId();
    result = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v11, 0LL);
    v15 = result;
    if ( v11 )
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v6 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v6);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        54LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v15,
        v16);
    if ( v1 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x38,
             (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
             v14);
  }
  return result;
}
