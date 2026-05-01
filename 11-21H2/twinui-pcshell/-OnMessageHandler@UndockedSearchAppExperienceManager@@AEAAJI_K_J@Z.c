/*
 * XREFs of ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180046268 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell.c)
 *     ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x180046398 (--$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180092F30 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ResetActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E5D0 (-ResetActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E72C (-OnDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E9C8 (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x18009F6E0 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@J@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@J@Z @ 0x1801707D4 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@J@-$EventSource@U-$ITypedEventHandler@PEAVC.c)
 *     ?OnFullActivationTestActivated@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019F920 (-OnFullActivationTestActivated@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnFullActivationTestReactivated@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019F950 (-OnFullActivationTestReactivated@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019F980 (-OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FA08 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FD1C (-OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FE04 (-ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18022A3F4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x18038E1C4 (--1-$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038F478 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::OnMessageHandler(
        UndockedSearchAppExperienceManager *this,
        int a2,
        UndockedSearchAppExperienceManager *a3,
        int a4)
{
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h] BYREF

  if ( a2 == 1025 )
  {
    if ( a3 == this )
    {
      if ( a4 > 7 )
      {
        v9 = a4 - 8;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 1 && !*((_BYTE *)this + 777) )
                    UndockedSearchAppExperienceManager::ProcessShellViewButtonBoundsChanged(this);
                }
                else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
                {
                  UndockedSearchAppExperienceManager::OnFullActivationTestReactivated(this);
                }
              }
              else if ( a3 == (UndockedSearchAppExperienceManager *)122022395 )
              {
                UndockedSearchAppExperienceManager::OnFullActivationTestActivated(this);
              }
            }
            else
            {
              UndockedSearchAppExperienceManager::OnLastResortSuspensionTimer(this);
            }
          }
          else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
          {
            UndockedSearchAppExperienceManager::OnVisibilityChangedTimeoutTimer(this);
          }
        }
        else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl)
               && *((_DWORD *)this + 160) == 8 )
        {
          v14 = Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &>(
                  &v17,
                  (__int128 *)((char *)this + 120));
          v18 = *v14;
          v15 = v18;
          *v14 = 0LL;
          Microsoft::WRL::ComPtr<CCortanaShownEventArgs>::~ComPtr<CCortanaShownEventArgs>(&v17);
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
            (__int64)this + 248,
            (__int64)this,
            v15);
          Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v18);
        }
      }
      else if ( a4 == 7 )
      {
        UndockedSearchAppExperienceManager::OnFullActivationTestTimeoutTimer(this);
      }
      else if ( a4 )
      {
        v5 = a4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                if ( v8 == 2 )
                  UndockedSearchAppExperienceManager::OnSearchAppHideRequestedTimer(this);
              }
              else
              {
                UndockedSearchAppExperienceManager::UnboostPriority(this);
              }
            }
            else
            {
              UndockedSearchAppExperienceManager::ResetActivationTimeoutPolicy((struct _TP_TIMER **)this);
            }
          }
          else
          {
            UndockedSearchAppExperienceManager::OnDeferredSuspensionTimer(this);
          }
        }
        else
        {
          UndockedSearchAppExperienceManager::ActivationDeferralComplete(this);
        }
      }
      else if ( *((_DWORD *)this + 34) == 1 )
      {
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
          (char *)this + 464,
          this);
      }
    }
  }
  else if ( a2 == 1026 && a3 == (UndockedSearchAppExperienceManager *)122022395 )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,long>(
      (char *)this + 512,
      this,
      (unsigned int)a4);
  }
  return 0LL;
}
