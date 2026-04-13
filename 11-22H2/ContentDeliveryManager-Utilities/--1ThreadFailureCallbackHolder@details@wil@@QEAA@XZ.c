/*
 * XREFs of ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180053630
 * Callers:
 *     ??1?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180052380 (--1-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflector.c)
 *     ??1?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800523B4 (--1-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_T.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180067128 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180074498 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FA94 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18008FE5C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A5250 (--1-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C71F4 (--1-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18005F528 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder(
        wil::details::ThreadFailureCallbackHolder *this)
{
  if ( *((_DWORD *)this + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(this);
}
