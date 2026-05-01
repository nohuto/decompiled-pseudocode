/*
 * XREFs of ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18030EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x18009CF0C (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180166A30 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180303538 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Inter.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x18030E0F8 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@P.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x18030E3A8 (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     _lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x18030E4D0 (_lambda_639d6738ffd80580db82ce4ed229ae7f_--_lambda_639d6738ffd80580db82ce4ed229ae7f_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSplashScreen::add_Dismissed(CSplashScreen *this, __int64 a2, struct IUnknown **a3)
{
  int v6; // edi
  char CanSendDismissedEvent; // bl
  volatile int *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 *v11; // rax
  __int64 v12; // rcx
  CSplashScreen *v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF
  struct IUnknown *v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  if ( a2 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
    v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr>(
           a2,
           &v18);
    if ( v6 >= 0 )
    {
      if ( v18 )
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
               (__int64)this + 72,
               v18,
               *(void **)(*(_QWORD *)a2 + 24LL),
               a3);
      else
        v6 = -2147024809;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
    if ( v6 >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      CanSendDismissedEvent = CSplashScreen::_CanSendDismissedEvent(this);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( CanSendDismissedEvent )
      {
        v19 = 0LL;
        v17 = 2;
        v15 = a2;
        v6 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
               &v19,
               (__int64)&GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
               &v15,
               &v17);
        if ( v6 >= 0 )
        {
          v14 = this;
          if ( this )
          {
            v9 = *((_QWORD *)this + 8);
            while ( v9 >= 0 )
            {
              if ( (_DWORD)v9 != 0x7FFFFFFF )
              {
                v10 = v9;
                v9 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v9 + 1, v9);
                if ( v10 != v9 )
                  continue;
              }
              goto LABEL_17;
            }
            Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v8);
          }
LABEL_17:
          v11 = lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_(
                  &v15,
                  &v19,
                  (__int64 *)&v14);
          v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(v12, v11);
          Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v16);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
          Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)&v14);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v6;
}
