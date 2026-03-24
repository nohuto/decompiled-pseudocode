/*
 * XREFs of SshpAlpcOpenTraceSessionUnsafe @ 0x14081B21C
 * Callers:
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     SshpAlpcSendMessage @ 0x14081B360 (SshpAlpcSendMessage.c)
 */

/*
 * Hex-Rays decompilation failed for SshpAlpcOpenTraceSessionUnsafe @ 0x14081B21C
 * Reason: Hex-Rays returned no pseudocode for 0x14081B21C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014081B21C: mov     [rsp+arg_0], rbx
 * 000000014081B221: mov     [rsp+arg_8], edx
 * 000000014081B225: push    rdi
 * 000000014081B226: sub     rsp, 30h
 * 000000014081B22A: mov     rbx, r8
 * 000000014081B22D: cmp     edx, 1
 * 000000014081B230: ja      loc_1408CEAE6
 * 000000014081B236: test    rbx, rbx
 * 000000014081B239: jz      short loc_14081B246
 * 000000014081B23B: cmp     qword ptr [r8+10h], 0
 * 000000014081B240: jz      loc_1408CEAE6
 * 000000014081B246: movsxd  rax, edx
 * 000000014081B249: lea     rdi, [rax+rax*2]
 * 000000014081B24D: shl     rdi, 6
 * 000000014081B251: lea     rax, dword_140C1C1F8
 * 000000014081B258: add     rdi, rax
 * 000000014081B25B: mov     cl, [rdi+4]
 * 000000014081B25E: test    cl, cl
 * 000000014081B260: jnz     short loc_14081B267
 * 000000014081B262: test    rbx, rbx
 * 000000014081B265: jz      short loc_14081B2CF
 * 000000014081B267: mov     eax, [rdi]
 * 000000014081B269: cmp     eax, 0FFFFFFFFh
 * 000000014081B26C: jz      short loc_14081B2D6
 * 000000014081B26E: inc     eax
 * 000000014081B270: mov     [rdi], eax
 * 000000014081B272: cmp     eax, 1
 * 000000014081B275: jnz     short loc_14081B2B5
 * 000000014081B277: test    cl, cl
 * 000000014081B279: jnz     loc_1408CEAD5
 * 000000014081B27F: lea     r9, [rsp+38h+arg_8]
 * 000000014081B284: mov     [rsp+38h+var_18], cl
 * 000000014081B288: mov     edx, eax
 * 000000014081B28A: lea     r8d, [rax+3]
 * 000000014081B28E: call    SshpAlpcSendMessage
 * 000000014081B293: lea     rax, [rdi+0B0h]
 * 000000014081B29A: mov     rcx, [rax+8]
 * 000000014081B29E: cmp     [rcx], rax
 * 000000014081B2A1: jnz     FatalListEntryError_96
 * 000000014081B2A7: mov     [rbx], rax
 * 000000014081B2AA: mov     [rbx+8], rcx
 * 000000014081B2AE: mov     [rcx], rbx
 * 000000014081B2B1: mov     [rax+8], rbx
 * 000000014081B2B5: mov     al, [rdi+4]
 * 000000014081B2B8: neg     al
 * 000000014081B2BA: sbb     eax, eax
 * 000000014081B2BC: not     eax
 * 000000014081B2BE: and     eax, 103h
 * 000000014081B2C3: mov     rbx, [rsp+38h+arg_0]
 * 000000014081B2C8: add     rsp, 30h
 * 000000014081B2CC: pop     rdi
 * 000000014081B2CD: retn
 * 000000014081B2CF: mov     eax, 0C0000700h
 * 000000014081B2D4: jmp     short loc_14081B2C3
 * 000000014081B2D6: mov     eax, 0C0000095h
 * 000000014081B2DB: jmp     short loc_14081B2C3
 * 00000001408CEACE: mov     ecx, 3
 * 00000001408CEAD3: int     29h; Win8: RtlFailFast(ecx)
 * 00000001408CEAD5: lea     rcx, [rdi+8]
 * 00000001408CEAD9: xor     edx, edx
 * 00000001408CEADB: call    KeCancelTimer2
 * 00000001408CEAE0: nop
 * 00000001408CEAE1: jmp     loc_14081B2B5
 * 00000001408CEAE6: mov     eax, 0C000000Dh
 * 00000001408CEAEB: jmp     loc_14081B2C3
 */
