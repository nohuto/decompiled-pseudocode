/*
 * XREFs of ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x1804AB810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800DECB0 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@YAJPEAUIEventInvocationContext@details@wil@@PEAVWeakRef@01@@Z @ 0x1804A75AC (--$AsWeak@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@YAJPEAUIEventInvocationContext@d.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1804A8100 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 */

__int64 __fastcall wil::details::EventInvocationContextProvider<1>::GetEventInvocationContext(
        RTL_SRWLOCK *a1,
        struct IInspectable **a2)
{
  RTL_SRWLOCK *v2; // rdi
  Microsoft::WRL::WeakRef *v3; // r14
  int v5; // ebx
  __int64 v6; // rdx
  struct IInspectable *v8; // rax
  __int64 *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IInspectable *v11; // [rsp+40h] [rbp+20h] BYREF
  Microsoft::WRL::WeakRef *v12; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v2 = a1 + 8;
  v3 = (Microsoft::WRL::WeakRef *)&a1[9];
  AcquireSRWLockExclusive(a1 + 8);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
  v5 = Microsoft::WRL::WeakRef::InternalResolve(v3, &GUID_da6f771e_d39d_405e_aa6c_1a3cccb72a39, &v11);
  if ( v5 < 0 )
  {
    v6 = 514LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v5;
  }
  v8 = v11;
  if ( !v11 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(&v11);
    if ( v5 < 0 )
    {
      v6 = 517LL;
      goto LABEL_3;
    }
    v12 = v3;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v12);
    v5 = Microsoft::WRL::AsWeak<wil::details::IEventInvocationContext>(v11, v9);
    if ( v5 < 0 )
    {
      v6 = 518LL;
      goto LABEL_3;
    }
    v8 = v11;
  }
  v11 = 0LL;
  *a2 = v8;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
