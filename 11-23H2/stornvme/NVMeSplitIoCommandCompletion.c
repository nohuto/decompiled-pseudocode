/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1C0001FE0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeSplitIoCommandCompletion @ 0x1C0001FE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001FE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001FE0: mov     [rsp+arg_10], rbx
 * 00000001C0001FE5: mov     [rsp+arg_18], rsi
 * 00000001C0001FEA: push    rdi
 * 00000001C0001FEB: sub     rsp, 20h
 * 00000001C0001FEF: mov     rsi, rcx
 * 00000001C0001FF2: mov     rdi, rdx
 * 00000001C0001FF5: mov     rcx, rdx
 * 00000001C0001FF8: call    GetSrbExtension
 * 00000001C0001FFD: cmp     byte ptr [rdx+3], 1
 * 00000001C0002001: mov     rbx, rax
 * 00000001C0002004: jnz     loc_1C0005830
 * 00000001C000200A: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C000200E: mov     [rsp+28h+arg_0], rbp
 * 00000001C0002013: jnz     loc_1C000583C
 * 00000001C0002019: mov     eax, [rdi+34h]
 * 00000001C000201C: add     rdx, 3Ch ; '<'
 * 00000001C0002020: movzx   ecx, byte ptr [rax+rdi+0Ah]
 * 00000001C0002025: movzx   eax, cl
 * 00000001C0002028: xor     ebp, ebp
 * 00000001C000202A: mov     rcx, [rsi+rax*8+7A0h]
 * 00000001C0002032: mov     eax, [rbx+1030h]
 * 00000001C0002038: movzx   r8d, ax
 * 00000001C000203C: mov     eax, [rdx]
 * 00000001C000203E: inc     r8d
 * 00000001C0002041: mov     r10d, [rcx+34h]
 * 00000001C0002045: dec     eax
 * 00000001C0002047: mov     ecx, [rbx+1028h]
 * 00000001C000204D: add     eax, r10d
 * 00000001C0002050: xor     edx, edx
 * 00000001C0002052: div     r10d
 * 00000001C0002055: mov     edx, [rbx+102Ch]
 * 00000001C000205B: mov     r9d, eax
 * 00000001C000205E: shl     rdx, 20h
 * 00000001C0002062: or      rdx, rcx
 * 00000001C0002065: sub     r9d, r8d
 * 00000001C0002068: mov     ecx, r8d
 * 00000001C000206B: add     rcx, rdx
 * 00000001C000206E: imul    r8d, r10d
 * 00000001C0002072: mov     [rbx+1028h], ecx
 * 00000001C0002078: shr     rcx, 20h
 * 00000001C000207C: lea     eax, [r9-1]
 * 00000001C0002080: imul    r9d, r10d
 * 00000001C0002084: mov     [rbx+1030h], ax
 * 00000001C000208B: mov     eax, r8d
 * 00000001C000208E: mov     [rbx+102Ch], ecx
 * 00000001C0002094: mov     rcx, [rbx+1018h]
 * 00000001C000209B: mov     r11, rcx
 * 00000001C000209E: and     r11d, 0FFFh
 * 00000001C00020A5: add     r11, rax
 * 00000001C00020A8: add     eax, ecx
 * 00000001C00020AA: and     eax, 0FFFh
 * 00000001C00020AF: shr     r11, 0Ch
 * 00000001C00020B3: mov     edx, eax
 * 00000001C00020B5: lea     r10d, [rax+0FFFh]
 * 00000001C00020BC: add     r10d, r9d
 * 00000001C00020BF: shr     r10d, 0Ch
 * 00000001C00020C3: test    r11d, r11d
 * 00000001C00020C6: jz      loc_1C0005849
 * 00000001C00020CC: lea     eax, [r11-1]
 * 00000001C00020D0: mov     rcx, [rbx+rax*8]
 * 00000001C00020D4: add     rcx, rdx
 * 00000001C00020D7: mov     [rbx+1018h], rcx
 * 00000001C00020DE: cmp     r10d, 1
 * 00000001C00020E2: jz      loc_1C000217E
 * 00000001C00020E8: cmp     r10d, 2
 * 00000001C00020EC: jz      loc_1C0002187
 * 00000001C00020F2: lea     r9d, [r10-1]
 * 00000001C00020F6: mov     eax, ebp
 * 00000001C00020F8: test    r9d, r9d
 * 00000001C00020FB: jz      short loc_1C0002116
 * 00000001C00020FD: mov     r8, rbx
 * 00000001C0002100: lea     ecx, [rax+r11]
 * 00000001C0002104: inc     eax
 * 00000001C0002106: mov     rcx, [rbx+rcx*8]
 * 00000001C000210A: mov     [r8], rcx
 * 00000001C000210D: lea     r8, [r8+8]
 * 00000001C0002111: cmp     eax, r9d
 * 00000001C0002114: jb      short loc_1C0002100
 * 00000001C0002116: cmp     r10d, 2
 * 00000001C000211A: jbe     short loc_1C0002141
 * 00000001C000211C: lea     r9, [rsp+28h+arg_8]
 * 00000001C0002121: mov     [rsp+28h+arg_8], ebp
 * 00000001C0002125: mov     r8, rbx
 * 00000001C0002128: mov     rdx, rdi
 * 00000001C000212B: mov     rcx, rsi
 * 00000001C000212E: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C0002135: nop     dword ptr [rax+rax+00h]
 * 00000001C000213A: mov     [rbx+1020h], rax
 * 00000001C0002141: mov     [rdi+3], bpl
 * 00000001C0002145: mov     rdx, rdi
 * 00000001C0002148: movzx   eax, byte ptr [rbx+109Dh]
 * 00000001C000214F: mov     rcx, rsi
 * 00000001C0002152: and     al, 0FEh
 * 00000001C0002154: mov     [rbx+1080h], rbp
 * 00000001C000215B: or      al, 6
 * 00000001C000215D: mov     [rbx+109Dh], al
 * 00000001C0002163: call    ProcessCommand
 * 00000001C0002168: mov     rbp, [rsp+28h+arg_0]
 * 00000001C000216D: mov     rbx, [rsp+28h+arg_10]
 * 00000001C0002172: mov     rsi, [rsp+28h+arg_18]
 * 00000001C0002177: add     rsp, 20h
 * 00000001C000217B: pop     rdi
 * 00000001C000217C: retn
 * 00000001C000217E: mov     [rbx+1020h], rbp
 * 00000001C0002185: jmp     short loc_1C0002141
 * 00000001C0002187: mov     eax, r11d
 * 00000001C000218A: mov     rcx, [rbx+rax*8]
 * 00000001C000218E: mov     [rbx+1020h], rcx
 * 00000001C0002195: jmp     short loc_1C0002141
 * 00000001C0005830: or      byte ptr [rax+109Dh], 8
 * 00000001C0005837: jmp     loc_1C000216D
 * 00000001C000583C: movzx   ecx, byte ptr [rdi+7]
 * 00000001C0005840: add     rdx, 10h
 * 00000001C0005844: jmp     loc_1C0002025
 * 00000001C0005849: and     rcx, 0FFFFFFFFFFFFF000h
 * 00000001C0005850: add     rcx, rdx
 * 00000001C0005853: mov     [rbx+1018h], rcx
 * 00000001C000585A: cmp     r10d, 1
 * 00000001C000585E: jz      loc_1C000217E
 * 00000001C0005864: cmp     r10d, 2
 * 00000001C0005868: jnz     loc_1C000211A
 * 00000001C000586E: mov     rax, [rbx]
 * 00000001C0005871: jmp     loc_1C000213A
 */
