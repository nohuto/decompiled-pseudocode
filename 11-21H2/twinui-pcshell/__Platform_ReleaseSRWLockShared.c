/*
 * XREFs of __Platform_ReleaseSRWLockShared @ 0x180189344
 * Callers:
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180123BAC (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180124550 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ??$DoInvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@V_lambda_16286fe9edebb121e83a2911c5464574_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_16286fe9edebb121e83a2911c5464574_@@@Z @ 0x18042A86C (--$DoInvokeVoid@V-$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@In.c)
 *     ??$DoInvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@Z @ 0x18042AAD0 (--$DoInvokeVoid@V-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Inte.c)
 *     ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@V_lambda_843a4523c4ce898f7fb4bb4d9e96aac5_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_843a4523c4ce898f7fb4bb4d9e96aac5_@@@Z @ 0x18042AD34 (--$DoInvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Inte.c)
 *     ??$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036bcec23797998bf71b5136_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_fa30a613036bcec23797998bf71b5136_@@@Z @ 0x18042AF98 (--$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036.c)
 *     ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@Z @ 0x18043FC18 (--$DoInvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Exper.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_ReleaseSRWLockShared(PSRWLOCK SRWLock)
{
  ReleaseSRWLockShared(SRWLock);
}
