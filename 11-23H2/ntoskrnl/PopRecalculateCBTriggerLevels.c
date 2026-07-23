/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x14099620C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopBatteryCheckTrigger @ 0x140870970 (PopBatteryCheckTrigger.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1408709A0 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopRecalculateCBTriggerLevels @ 0x14099620C
 * Reason: Hex-Rays returned no pseudocode for 0x14099620C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014099620C: mov     rax, rsp
 * 000000014099620F: mov     [rax+10h], rbx
 * 0000000140996213: mov     [rax+18h], rbp
 * 0000000140996217: mov     [rax+20h], rsi
 * 000000014099621B: mov     [rax+8], ecx
 * 000000014099621E: push    rdi
 * 000000014099621F: sub     rsp, 20h
 * 0000000140996223: call    PopAcquirePolicyLock
 * 0000000140996228: xor     ebx, ebx
 * 000000014099622A: lea     rbp, PopCB
 * 0000000140996231: xor     eax, eax
 * 0000000140996233: mov     [rsp+28h+arg_0], ebx
 * 0000000140996237: xor     ecx, ecx
 * 0000000140996239: mov     r8, cs:PopPolicy
 * 0000000140996240: lea     rax, [rax+4]
 * 0000000140996244: lea     rdx, [rax+rax*2]
 * 0000000140996248: mov     eax, ecx
 * 000000014099624A: lea     rcx, [rax+rax*2]
 * 000000014099624E: mov     eax, [rbp+rcx*8+14Ch]
 * 0000000140996255: test    al, al
 * 0000000140996257: js      short loc_1409962CD
 * 0000000140996259: mov     eax, [r8+rdx*8+4]
 * 000000014099625E: mov     [rbp+rcx*8+158h], eax
 * 0000000140996265: cmp     byte ptr [r8+rdx*8], 0
 * 000000014099626A: jz      short loc_1409962CD
 * 000000014099626C: bts     dword ptr [rbp+rcx*8+14Ch], 7
 * 0000000140996275: lea     rdx, [rbp+148h]
 * 000000014099627C: lea     rdx, [rdx+rcx*8]
 * 0000000140996280: lea     rcx, [rsp+28h+arg_0]
 * 0000000140996285: call    PopDiagTraceBatteryTriggerFlags
 * 000000014099628A: mov     ebx, [rsp+28h+arg_0]
 * 000000014099628E: lea     rcx, [rbp+148h]
 * 0000000140996295: lea     rdi, [rbx+rbx*2]
 * 0000000140996299: lea     rsi, ds:0[rdi*8]
 * 00000001409962A1: add     rcx, rsi
 * 00000001409962A4: call    PopBatteryCheckTrigger
 * 00000001409962A9: test    al, al
 * 00000001409962AB: jz      short loc_1409962CD
 * 00000001409962AD: or      dword ptr [rbp+rdi*8+14Ch], 2
 * 00000001409962B5: lea     rdx, [rbp+148h]
 * 00000001409962BC: add     rdx, rsi
 * 00000001409962BF: lea     rcx, [rsp+28h+arg_0]
 * 00000001409962C4: call    PopDiagTraceBatteryTriggerFlags
 * 00000001409962C9: mov     ebx, [rsp+28h+arg_0]
 * 00000001409962CD: inc     ebx
 * 00000001409962CF: mov     [rsp+28h+arg_0], ebx
 * 00000001409962D3: mov     ecx, ebx
 * 00000001409962D5: mov     eax, ebx
 * 00000001409962D7: cmp     ebx, 4
 * 00000001409962DA: jb      loc_140996239
 * 00000001409962E0: call    PopReleasePolicyLock
 * 00000001409962E5: mov     rbx, [rsp+28h+arg_8]
 * 00000001409962EA: mov     rbp, [rsp+28h+arg_10]
 * 00000001409962EF: mov     rsi, [rsp+28h+arg_18]
 * 00000001409962F4: add     rsp, 20h
 * 00000001409962F8: pop     rdi
 * 00000001409962F9: retn
 */
