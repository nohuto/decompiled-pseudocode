/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x1409960BC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopBatteryCheckTrigger @ 0x140870C00 (PopBatteryCheckTrigger.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140870C30 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopRecalculateCBTriggerLevels @ 0x1409960BC
 * Reason: Hex-Rays returned no pseudocode for 0x1409960BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409960BC: mov     rax, rsp
 * 00000001409960BF: mov     [rax+10h], rbx
 * 00000001409960C3: mov     [rax+18h], rbp
 * 00000001409960C7: mov     [rax+20h], rsi
 * 00000001409960CB: mov     [rax+8], ecx
 * 00000001409960CE: push    rdi
 * 00000001409960CF: sub     rsp, 20h
 * 00000001409960D3: call    PopAcquirePolicyLock
 * 00000001409960D8: xor     ebx, ebx
 * 00000001409960DA: lea     rbp, PopCB
 * 00000001409960E1: xor     eax, eax
 * 00000001409960E3: mov     [rsp+28h+arg_0], ebx
 * 00000001409960E7: xor     ecx, ecx
 * 00000001409960E9: mov     r8, cs:PopPolicy
 * 00000001409960F0: lea     rax, [rax+4]
 * 00000001409960F4: lea     rdx, [rax+rax*2]
 * 00000001409960F8: mov     eax, ecx
 * 00000001409960FA: lea     rcx, [rax+rax*2]
 * 00000001409960FE: mov     eax, [rbp+rcx*8+14Ch]
 * 0000000140996105: test    al, al
 * 0000000140996107: js      short loc_14099617D
 * 0000000140996109: mov     eax, [r8+rdx*8+4]
 * 000000014099610E: mov     [rbp+rcx*8+158h], eax
 * 0000000140996115: cmp     byte ptr [r8+rdx*8], 0
 * 000000014099611A: jz      short loc_14099617D
 * 000000014099611C: bts     dword ptr [rbp+rcx*8+14Ch], 7
 * 0000000140996125: lea     rdx, [rbp+148h]
 * 000000014099612C: lea     rdx, [rdx+rcx*8]
 * 0000000140996130: lea     rcx, [rsp+28h+arg_0]
 * 0000000140996135: call    PopDiagTraceBatteryTriggerFlags
 * 000000014099613A: mov     ebx, [rsp+28h+arg_0]
 * 000000014099613E: lea     rcx, [rbp+148h]
 * 0000000140996145: lea     rdi, [rbx+rbx*2]
 * 0000000140996149: lea     rsi, ds:0[rdi*8]
 * 0000000140996151: add     rcx, rsi
 * 0000000140996154: call    PopBatteryCheckTrigger
 * 0000000140996159: test    al, al
 * 000000014099615B: jz      short loc_14099617D
 * 000000014099615D: or      dword ptr [rbp+rdi*8+14Ch], 2
 * 0000000140996165: lea     rdx, [rbp+148h]
 * 000000014099616C: add     rdx, rsi
 * 000000014099616F: lea     rcx, [rsp+28h+arg_0]
 * 0000000140996174: call    PopDiagTraceBatteryTriggerFlags
 * 0000000140996179: mov     ebx, [rsp+28h+arg_0]
 * 000000014099617D: inc     ebx
 * 000000014099617F: mov     [rsp+28h+arg_0], ebx
 * 0000000140996183: mov     ecx, ebx
 * 0000000140996185: mov     eax, ebx
 * 0000000140996187: cmp     ebx, 4
 * 000000014099618A: jb      loc_1409960E9
 * 0000000140996190: call    PopReleasePolicyLock
 * 0000000140996195: mov     rbx, [rsp+28h+arg_8]
 * 000000014099619A: mov     rbp, [rsp+28h+arg_10]
 * 000000014099619F: mov     rsi, [rsp+28h+arg_18]
 * 00000001409961A4: add     rsp, 20h
 * 00000001409961A8: pop     rdi
 * 00000001409961A9: retn
 */
