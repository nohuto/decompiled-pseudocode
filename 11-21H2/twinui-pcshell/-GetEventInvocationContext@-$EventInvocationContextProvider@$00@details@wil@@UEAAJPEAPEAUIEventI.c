/*
 * XREFs of ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x1803CE790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180075AA4 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$AsWeak@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@YAJPEAUIEventInvocationContext@details@wil@@PEAVWeakRef@01@@Z @ 0x1803CA528 (--$AsWeak@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@YAJPEAUIEventInvocationContext@d.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1803CB070 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 */

__int64 __fastcall wil::details::EventInvocationContextProvider<1>::GetEventInvocationContext(
        RTL_SRWLOCK *a1,
        struct IInspectable **a2)
{
  Microsoft::WRL::WeakRef *v2; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IInspectable *v7; // rax
  __int64 *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IInspectable *v11; // [rsp+40h] [rbp+20h] BYREF
  Microsoft::WRL::WeakRef *v12; // [rsp+48h] [rbp+28h] BYREF
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v2 = (Microsoft::WRL::WeakRef *)&a1[9];
  wil::AcquireSRWLockExclusive(&v13, a1 + 8);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
  v4 = Microsoft::WRL::WeakRef::InternalResolve(v2, &GUID_da6f771e_d39d_405e_aa6c_1a3cccb72a39, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v11;
    if ( !v11 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
      v4 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(&v11);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 517LL;
        goto LABEL_6;
      }
      v12 = v2;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v12);
      v4 = Microsoft::WRL::AsWeak<wil::details::IEventInvocationContext>(v11, v8);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 518LL;
        goto LABEL_6;
      }
      v7 = v11;
    }
    v11 = 0LL;
    v5 = 0;
    *a2 = v7;
    goto LABEL_11;
  }
  v6 = 514LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
    (const char *)(unsigned int)v4);
LABEL_11:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
  return v5;
}
