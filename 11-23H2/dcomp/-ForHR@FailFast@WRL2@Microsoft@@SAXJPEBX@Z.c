/*
 * XREFs of ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC
 * Callers:
 *     ?GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch@234@@Z @ 0x180002D74 (-GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch.c)
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 *     ?CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@234@@Z @ 0x180016554 (-CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@23.c)
 *     ?OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18001C18C (-OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85___ @ 0x18001C33C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85_.c)
 *     ?SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z @ 0x18001D700 (-SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_9cee659b624ffe0caad69d238db367bf___ @ 0x18001F0AC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_9cee659b624ffe0caad69d238db367bf_.c)
 *     ?SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x180024D40 (-SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z.c)
 *     ?Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180024F90 (-Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_b39636578dc10c5f25fb1f31ea12703b___ @ 0x18002C824 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_b39636578dc10c5f25fb1f31ea12703b_.c)
 *     ??$LeaveSession_Callback@V_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@Z @ 0x18002D160 (--$LeaveSession_Callback@V_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@ContextSession@WRL2@Micros.c)
 *     ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039008 (-Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 *     ??$LeaveSession_Callback@V_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@Z @ 0x180051C60 (--$LeaveSession_Callback@V_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@ContextSession@WRL2@Micros.c)
 *     ?get_Children@Api@ContainerVisual@Composition@UI@Windows@@UEAAJPEAPEAUIVisualCollection@345@@Z @ 0x180053270 (-get_Children@Api@ContainerVisual@Composition@UI@Windows@@UEAAJPEAPEAUIVisualCollection@345@@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_196638a044c5a75bc40c1fb87314c337___ @ 0x18006B59C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_196638a044c5a75bc40c1fb87314c337_.c)
 *     ?OnDeviceChanged@CompositorCommon@Composition@UI@Windows@@EEAAXXZ @ 0x180073A70 (-OnDeviceChanged@CompositorCommon@Composition@UI@Windows@@EEAAXXZ.c)
 *     ?StaticCallCommit_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z @ 0x18007C050 (-StaticCallCommit_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z.c)
 *     ?InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x1800803B4 (-InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 *     ?DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x180080450 (-DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_366999c7e48dfd44e6dcc12fada39a6d___ @ 0x180094F00 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_366999c7e48dfd44e6dcc12fada39a6d_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be___ @ 0x1800B65BE (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_98d6ddd492b07c54c34c6a3c3744782e___ @ 0x1800B6954 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_98d6ddd492b07c54c34c6a3c3744782e_.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_3c1ecbca6da52e5f52a0f6ea881ae9e6___ @ 0x1801112B4 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_3c1ecbca6da52e5f52a0f6ea881ae9e6_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_49cf87b5178968fc57886ea1acc8fa0e___ @ 0x180111384 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_49cf87b5178968fc57886ea1acc8fa0e_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398___ @ 0x18011141C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd___ @ 0x18011F6DC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd_.c)
 *     ?GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractionTrackerBindingManager@Interactions@234@XZ @ 0x1801280F0 (-GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractio.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_c8754ad6eec6c6d763ef76a998a36e22___ @ 0x1801309FC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_c8754ad6eec6c6d763ef76a998a36e22_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_387b55a7ec4edad5ab708ff3a47c7fe2___ @ 0x18013469C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_387b55a7ec4edad5ab708ff3a47c7fe2_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_4896cb9dda1955bea389b731aebde0f1___ @ 0x180134754 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_4896cb9dda1955bea389b731aebde0f1_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_96cc004b5fdcd549e7003fc98fc6a78e___ @ 0x18013480C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_96cc004b5fdcd549e7003fc98fc6a78e_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_c3413dcf6b5d18fccd5a820b18bbf4cc___ @ 0x1801348C4 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_c3413dcf6b5d18fccd5a820b18bbf4cc_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ee1950c21ec3b3928c3991bef908c9b2___ @ 0x18013497C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_ee1950c21ec3b3928c3991bef908c9b2_.c)
 *     ??$LeaveSession_Callback@V_lambda_03a6d95062640a5667444b450c384120_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_03a6d95062640a5667444b450c384120_@@@Z @ 0x180146AC4 (--$LeaveSession_Callback@V_lambda_03a6d95062640a5667444b450c384120_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@Z @ 0x180146B54 (--$LeaveSession_Callback@V_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_64934c7e96d1b9526a948e7f65b87268_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_64934c7e96d1b9526a948e7f65b87268_@@@Z @ 0x180146BE4 (--$LeaveSession_Callback@V_lambda_64934c7e96d1b9526a948e7f65b87268_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_707b29dbea9b654e1d98bab86da837b0_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_707b29dbea9b654e1d98bab86da837b0_@@@Z @ 0x180146C74 (--$LeaveSession_Callback@V_lambda_707b29dbea9b654e1d98bab86da837b0_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_91b4bafeadcc6149a4e3b56f06eda066_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_91b4bafeadcc6149a4e3b56f06eda066_@@@Z @ 0x180146D04 (--$LeaveSession_Callback@V_lambda_91b4bafeadcc6149a4e3b56f06eda066_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_a6db259483414c5f4a6b2cc09fccf246_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_a6db259483414c5f4a6b2cc09fccf246_@@@Z @ 0x180146D94 (--$LeaveSession_Callback@V_lambda_a6db259483414c5f4a6b2cc09fccf246_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_f4ab11bb8dcfcac7d428c4fc5a91824d_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_f4ab11bb8dcfcac7d428c4fc5a91824d_@@@Z @ 0x180146E24 (--$LeaveSession_Callback@V_lambda_f4ab11bb8dcfcac7d428c4fc5a91824d_@@@ContextSession@WRL2@Micros.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_a3da230fae406fbf032acb8a8e682e00___ @ 0x180147798 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_a3da230fae406fbf032acb8a8e682e00_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a___ @ 0x180154B2C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_10f9bd1741d99675ee0f62fa6f3a586b___ @ 0x18015666C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_10f9bd1741d99675ee0f62fa6f3a586b_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ace7520b16fb42aa991f36c245d94adb___ @ 0x18015A84C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_ace7520b16fb42aa991f36c245d94adb_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_92b999fce92e5260c33bdb73c44d9e6b___ @ 0x180186730 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_92b999fce92e5260c33bdb73c44d9e6b_.c)
 *     ?Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1801968BC (-Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4 (-RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUIC.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?_Do@FailFast@WRL2@Microsoft@@CAXPEBXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@PEBD@Z @ 0x1801090B0 (-_Do@FailFast@WRL2@Microsoft@@CAXPEBXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@PEBD@Z.c)
 */

void __fastcall __noreturn Microsoft::WRL2::FailFast::ForHR(unsigned __int64 a1, void *a2)
{
  ULONG_PTR v2; // rbx
  struct _EXCEPTION_RECORD v4; // [rsp+20h] [rbp-A8h] BYREF

  v2 = (int)a1;
  if ( (a1 & 0x80000000) == 0LL )
  {
    Microsoft::WRL2::FailFast::_Do(a2, 0LL, 0LL, 0LL);
    __debugbreak();
  }
  if ( (_DWORD)a1 != -2147024882 && (_DWORD)a1 != -805306214 )
  {
    memset_0(&v4, 0, sizeof(v4));
    v4.ExceptionCode = -532265403;
    v4.ExceptionAddress = a2;
    v4.NumberParameters = 1;
    v4.ExceptionInformation[0] = v2;
    Microsoft::WRL2::FailFast::_Do(0LL, &v4, 0LL, 0LL);
    __debugbreak();
  }
  Microsoft::WRL2::FailFast::OutOfMemory(a1);
}
