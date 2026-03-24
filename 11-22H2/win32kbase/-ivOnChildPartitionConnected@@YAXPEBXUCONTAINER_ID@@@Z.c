/*
 * XREFs of ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE3A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E98C4 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01EF398 (-ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01EFA40 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 */

/*
 * Hex-Rays decompilation failed for ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE3A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01EE3A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01EE3A0: mov     [rsp+arg_8], edx
 * 00000001C01EE3A4: push    rbx
 * 00000001C01EE3A5: sub     rsp, 20h
 * 00000001C01EE3A9: call    IsEtwUserCritEnabled
 * 00000001C01EE3AE: test    eax, eax
 * 00000001C01EE3B0: jz      short loc_1C01EE3D8
 * 00000001C01EE3B2: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C01EE3B9: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE3BE: mov     rbx, rax
 * 00000001C01EE3C1: test    rax, rax
 * 00000001C01EE3C4: jz      short loc_1C01EE3D8
 * 00000001C01EE3C6: xor     ecx, ecx; PerformanceFrequency
 * 00000001C01EE3C8: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C01EE3CF: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE3D4: mov     [rbx+8], rax
 * 00000001C01EE3D8: call    cs:__imp_SGDGetUserSessionState
 * 00000001C01EE3DF: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE3E4: mov     rcx, [rax+8]; Resource
 * 00000001C01EE3E8: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C01EE3EF: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE3F4: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C01EE3F9: lea     rcx, [rsp+28h+arg_8]; this
 * 00000001C01EE3FE: call    ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z; IVRootDeliver::Settings::SendSettingsUpdateToContainer(CONTAINER_ID const &)
 * 00000001C01EE403: call    UserSessionSwitchLeaveCrit
 * 00000001C01EE408: call    ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z; IVForegroundSync::ivOnChildPartitionConnected(CONTAINER_ID const &)
 * 00000001C01EE40D: lea     rcx, [rsp+28h+arg_8]; struct CONTAINER_ID *
 * 00000001C01EE412: call    IVContentRectsSync___anonymous_namespace___ivSendContentRectsUpdate
 * 00000001C01EE417: add     rsp, 20h
 * 00000001C01EE41B: pop     rbx
 * 00000001C01EE41C: retn
 */
