/*
 * XREFs of sub_18007F2DA @ 0x18007F2DA
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800CB2DC (WPP_SF_Sd.c)
 */

/*
 * Hex-Rays decompilation failed for sub_18007F2DA @ 0x18007F2DA
 * Reason: Hex-Rays returned no pseudocode for 0x18007F2DA
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007F2DA: xor     r12d, r12d
 * 000000018007F2DD: mov     edi, [rsp+arg_80]
 * 000000018007F2E4: mov     rbx, [rsp+arg_D0]
 * 000000018007F2EC: mov     r13, [rsp+arg_E0]
 * 000000018007F2F4: lea     rsi, WPP_GLOBAL_Control
 * 000000018007F2FB: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000018007F302: mov     r14, [rsp+arg_78]
 * 000000018007F30A: mov     r14, [r14]
 * 000000018007F30D: test    r14, r14
 * 000000018007F310: jz      short loc_18007F344
 * 000000018007F312: call    cs:__imp_GetProcessHeap
 * 000000018007F319: nop     dword ptr [rax+rax+00h]
 * 000000018007F31E: mov     rcx, rax; hHeap
 * 000000018007F321: mov     r8, r14; lpMem
 * 000000018007F324: xor     edx, edx; dwFlags
 * 000000018007F326: call    cs:__imp_HeapFree
 * 000000018007F32D: nop     dword ptr [rax+rax+00h]
 * 000000018007F332: mov     rax, [rsp+arg_78]
 * 000000018007F33A: mov     [rax], r12
 * 000000018007F33D: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000018007F344: cmp     rcx, rsi
 * 000000018007F347: jz      loc_18001A21C
 * 000000018007F34D: test    dword ptr [rcx+1Ch], 100h
 * 000000018007F354: jz      loc_18001A21C
 * 000000018007F35A: cmp     byte ptr [rcx+19h], 4
 * 000000018007F35E: jb      loc_18001A21C
 * 000000018007F364: mov     edx, 17h
 * 000000018007F369: mov     [rsp+arg_18], edi
 * 000000018007F36D: mov     r9, [r13+0D8h]
 * 000000018007F374: lea     r8, WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids
 * 000000018007F37B: mov     rcx, [rcx+10h]
 * 000000018007F37F: call    WPP_SF_Sd
 * 000000018007F384: nop
 * 000000018007F385: jmp     loc_18001A21C
 */
