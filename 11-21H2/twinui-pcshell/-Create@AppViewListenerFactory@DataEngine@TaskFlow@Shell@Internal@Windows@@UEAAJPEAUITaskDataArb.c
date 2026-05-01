/*
 * XREFs of ?Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1800AAF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1800AB434 (--$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEA.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801392FC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITa_ea_1801392FC.c)
 *     ?InternalRelease@?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CB10 (-InternalRelease@-$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::Create(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *a2,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  *a3 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
         &v10,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 30LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_4;
  }
  v4 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>>(
         v10,
         &GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0,
         a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 31LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v10);
  return v5;
}
