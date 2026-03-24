/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1C0007528
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 */

/*
 * Hex-Rays decompilation failed for ControllerAllocateUncachedExtension @ 0x1C0007528
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007528
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007528: mov     [rsp+arg_8], rbx
 * 00000001C000752D: push    rdi
 * 00000001C000752E: sub     rsp, 20h
 * 00000001C0007532: and     [rsp+28h+arg_0], 0
 * 00000001C0007537: mov     rbx, rcx
 * 00000001C000753A: mov     al, [rcx+14h]
 * 00000001C000753D: neg     al
 * 00000001C000753F: sbb     edi, edi
 * 00000001C0007541: and     edi, 0FFFF5000h
 * 00000001C0007547: lea     r8d, [rdi+15000h]
 * 00000001C000754E: call    cs:__imp_StorPortGetUncachedExtension
 * 00000001C0007555: nop     dword ptr [rax+rax+00h]
 * 00000001C000755A: mov     [rbx+740h], rax
 * 00000001C0007561: test    rax, rax
 * 00000001C0007564: jnz     short loc_1C0007572
 * 00000001C0007566: mov     dword ptr [rbx+24h], 1
 * 00000001C000756D: jmp     loc_1C00076C3
 * 00000001C0007572: lea     edx, [rdi+15000h]
 * 00000001C0007578: mov     rcx, rax
 * 00000001C000757B: call    NVMeZeroMemory
 * 00000001C0007580: cmp     byte ptr [rbx+14h], 0
 * 00000001C0007584: jz      short loc_1C00075A0
 * 00000001C0007586: mov     rax, [rbx+740h]
 * 00000001C000758D: add     rax, 0FFFh
 * 00000001C0007593: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001C0007599: mov     [rbx+740h], rax
 * 00000001C00075A0: mov     r8, [rbx+740h]
 * 00000001C00075A7: lea     r9, [rsp+28h+arg_0]
 * 00000001C00075AC: xor     edx, edx
 * 00000001C00075AE: mov     [rbx+730h], r8
 * 00000001C00075B5: mov     rcx, rbx
 * 00000001C00075B8: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C00075BF: nop     dword ptr [rax+rax+00h]
 * 00000001C00075C4: mov     [rbx+738h], rax
 * 00000001C00075CB: mov     edi, 1000h
 * 00000001C00075D0: mov     rax, [rbx+740h]
 * 00000001C00075D7: add     rax, rdi
 * 00000001C00075DA: cmp     byte ptr [rbx+14h], 0
 * 00000001C00075DE: mov     [rbx+410h], rax
 * 00000001C00075E5: lea     r8, [rax+2000h]
 * 00000001C00075EC: mov     [rbx+740h], r8
 * 00000001C00075F3: jnz     short loc_1C0007626
 * 00000001C00075F5: lea     rcx, [rbx+490h]
 * 00000001C00075FC: mov     edx, 6
 * 00000001C0007601: mov     [rcx], r8
 * 00000001C0007604: lea     rcx, [rcx+80h]
 * 00000001C000760B: mov     r8, [rbx+740h]
 * 00000001C0007612: add     r8, 2000h
 * 00000001C0007619: mov     [rbx+740h], r8
 * 00000001C0007620: sub     rdx, 1
 * 00000001C0007624: jnz     short loc_1C0007601
 * 00000001C0007626: lea     r9, [rsp+28h+arg_0]
 * 00000001C000762B: mov     [rbx+790h], r8
 * 00000001C0007632: xor     edx, edx
 * 00000001C0007634: mov     rcx, rbx
 * 00000001C0007637: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C000763E: nop     dword ptr [rax+rax+00h]
 * 00000001C0007643: mov     rcx, [rbx+740h]
 * 00000001C000764A: mov     [rbx+798h], rax
 * 00000001C0007651: add     rcx, rdi
 * 00000001C0007654: movzx   eax, word ptr [rbx+14Ch]
 * 00000001C000765B: shl     rax, 6
 * 00000001C000765F: mov     [rbx+158h], rcx
 * 00000001C0007666: add     rcx, rax
 * 00000001C0007669: cmp     byte ptr [rbx+14h], 0
 * 00000001C000766D: mov     [rbx+1E0h], rcx
 * 00000001C0007674: lea     rax, [rcx+1000h]
 * 00000001C000767B: mov     [rbx+740h], rax
 * 00000001C0007682: jz      short loc_1C00076C1
 * 00000001C0007684: lea     rcx, [rax+1000h]
 * 00000001C000768B: mov     r8, rcx
 * 00000001C000768E: add     rcx, rdi
 * 00000001C0007691: mov     [rbx+740h], rcx
 * 00000001C0007698: lea     rdx, [rcx-210h]
 * 00000001C000769F: add     rcx, 0FFFFFFFFFFFFFE78h
 * 00000001C00076A6: mov     [rbx+370h], rcx
 * 00000001C00076AD: mov     [rbx+368h], rdx
 * 00000001C00076B4: mov     [rdx], rax
 * 00000001C00076B7: mov     rcx, [rbx+370h]
 * 00000001C00076BE: mov     [rcx], r8
 * 00000001C00076C1: mov     al, 1
 * 00000001C00076C3: mov     rbx, [rsp+28h+arg_8]
 * 00000001C00076C8: add     rsp, 20h
 * 00000001C00076CC: pop     rdi
 * 00000001C00076CD: retn
 */
