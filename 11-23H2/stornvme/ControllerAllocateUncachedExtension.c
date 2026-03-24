/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1C00075A8
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E90 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 */

/*
 * Hex-Rays decompilation failed for ControllerAllocateUncachedExtension @ 0x1C00075A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00075A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00075A8: mov     [rsp+arg_8], rbx
 * 00000001C00075AD: push    rdi
 * 00000001C00075AE: sub     rsp, 20h
 * 00000001C00075B2: and     [rsp+28h+arg_0], 0
 * 00000001C00075B7: mov     rbx, rcx
 * 00000001C00075BA: mov     al, [rcx+14h]
 * 00000001C00075BD: neg     al
 * 00000001C00075BF: sbb     edi, edi
 * 00000001C00075C1: and     edi, 0FFFF5000h
 * 00000001C00075C7: lea     r8d, [rdi+15000h]
 * 00000001C00075CE: call    cs:__imp_StorPortGetUncachedExtension
 * 00000001C00075D5: nop     dword ptr [rax+rax+00h]
 * 00000001C00075DA: mov     [rbx+740h], rax
 * 00000001C00075E1: test    rax, rax
 * 00000001C00075E4: jnz     short loc_1C00075F2
 * 00000001C00075E6: mov     dword ptr [rbx+24h], 1
 * 00000001C00075ED: jmp     loc_1C0007743
 * 00000001C00075F2: lea     edx, [rdi+15000h]
 * 00000001C00075F8: mov     rcx, rax
 * 00000001C00075FB: call    NVMeZeroMemory
 * 00000001C0007600: cmp     byte ptr [rbx+14h], 0
 * 00000001C0007604: jz      short loc_1C0007620
 * 00000001C0007606: mov     rax, [rbx+740h]
 * 00000001C000760D: add     rax, 0FFFh
 * 00000001C0007613: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001C0007619: mov     [rbx+740h], rax
 * 00000001C0007620: mov     r8, [rbx+740h]
 * 00000001C0007627: lea     r9, [rsp+28h+arg_0]
 * 00000001C000762C: xor     edx, edx
 * 00000001C000762E: mov     [rbx+730h], r8
 * 00000001C0007635: mov     rcx, rbx
 * 00000001C0007638: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C000763F: nop     dword ptr [rax+rax+00h]
 * 00000001C0007644: mov     [rbx+738h], rax
 * 00000001C000764B: mov     edi, 1000h
 * 00000001C0007650: mov     rax, [rbx+740h]
 * 00000001C0007657: add     rax, rdi
 * 00000001C000765A: cmp     byte ptr [rbx+14h], 0
 * 00000001C000765E: mov     [rbx+410h], rax
 * 00000001C0007665: lea     r8, [rax+2000h]
 * 00000001C000766C: mov     [rbx+740h], r8
 * 00000001C0007673: jnz     short loc_1C00076A6
 * 00000001C0007675: lea     rcx, [rbx+490h]
 * 00000001C000767C: mov     edx, 6
 * 00000001C0007681: mov     [rcx], r8
 * 00000001C0007684: lea     rcx, [rcx+80h]
 * 00000001C000768B: mov     r8, [rbx+740h]
 * 00000001C0007692: add     r8, 2000h
 * 00000001C0007699: mov     [rbx+740h], r8
 * 00000001C00076A0: sub     rdx, 1
 * 00000001C00076A4: jnz     short loc_1C0007681
 * 00000001C00076A6: lea     r9, [rsp+28h+arg_0]
 * 00000001C00076AB: mov     [rbx+790h], r8
 * 00000001C00076B2: xor     edx, edx
 * 00000001C00076B4: mov     rcx, rbx
 * 00000001C00076B7: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C00076BE: nop     dword ptr [rax+rax+00h]
 * 00000001C00076C3: mov     rcx, [rbx+740h]
 * 00000001C00076CA: mov     [rbx+798h], rax
 * 00000001C00076D1: add     rcx, rdi
 * 00000001C00076D4: movzx   eax, word ptr [rbx+14Ch]
 * 00000001C00076DB: shl     rax, 6
 * 00000001C00076DF: mov     [rbx+158h], rcx
 * 00000001C00076E6: add     rcx, rax
 * 00000001C00076E9: cmp     byte ptr [rbx+14h], 0
 * 00000001C00076ED: mov     [rbx+1E0h], rcx
 * 00000001C00076F4: lea     rax, [rcx+1000h]
 * 00000001C00076FB: mov     [rbx+740h], rax
 * 00000001C0007702: jz      short loc_1C0007741
 * 00000001C0007704: lea     rcx, [rax+1000h]
 * 00000001C000770B: mov     r8, rcx
 * 00000001C000770E: add     rcx, rdi
 * 00000001C0007711: mov     [rbx+740h], rcx
 * 00000001C0007718: lea     rdx, [rcx-210h]
 * 00000001C000771F: add     rcx, 0FFFFFFFFFFFFFE78h
 * 00000001C0007726: mov     [rbx+370h], rcx
 * 00000001C000772D: mov     [rbx+368h], rdx
 * 00000001C0007734: mov     [rdx], rax
 * 00000001C0007737: mov     rcx, [rbx+370h]
 * 00000001C000773E: mov     [rcx], r8
 * 00000001C0007741: mov     al, 1
 * 00000001C0007743: mov     rbx, [rsp+28h+arg_8]
 * 00000001C0007748: add     rsp, 20h
 * 00000001C000774C: pop     rdi
 * 00000001C000774D: retn
 */
