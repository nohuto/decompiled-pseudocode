/*
 * XREFs of sub_180011BFC @ 0x180011BFC
 * Callers:
 *     sub_18000BEA0 @ 0x18000BEA0 (sub_18000BEA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180012028 @ 0x180012028 (sub_180012028.c)
 *     sub_1800120BC @ 0x1800120BC (sub_1800120BC.c)
 *     sub_180016AC0 @ 0x180016AC0 (sub_180016AC0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180011BFC @ 0x180011BFC
 * Reason: Hex-Rays returned no pseudocode for 0x180011BFC
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180011BFC: mov     rax, rsp
 * 0000000180011BFF: mov     [rax+8], rbx
 * 0000000180011C03: mov     [rax+10h], rsi
 * 0000000180011C07: mov     [rax+18h], rdi
 * 0000000180011C0B: mov     [rax+20h], r13
 * 0000000180011C0F: push    rbp
 * 0000000180011C10: push    r14
 * 0000000180011C12: push    r15
 * 0000000180011C14: lea     rbp, [rax-0F78h]
 * 0000000180011C1B: mov     eax, 1060h
 * 0000000180011C20: call    sub_180016AC0
 * 0000000180011C25: sub     rsp, rax
 * 0000000180011C28: mov     rax, cs:__security_cookie
 * 0000000180011C2F: xor     rax, rsp
 * 0000000180011C32: mov     [rbp+0F70h+var_20], rax
 * 0000000180011C39: mov     rax, [rcx+8]
 * 0000000180011C3D: xor     r15d, r15d
 * 0000000180011C40: sub     rax, [rcx]
 * 0000000180011C43: mov     r14, rcx
 * 0000000180011C46: mov     ebx, r15d
 * 0000000180011C49: mov     edi, r15d
 * 0000000180011C4C: cmp     rax, 0Ch
 * 0000000180011C50: jb      loc_180011D96
 * 0000000180011C56: mov     esi, r15d
 * 0000000180011C59: mov     r13, 0AAAAAAAAAAAAAAABh
 * 0000000180011C63: lea     rax, [rsp+10h+arg_20]
 * 0000000180011C68: mov     [rsp+10h+arg_20], 1000h
 * 0000000180011C70: mov     [rsp+10h+arg_8], rax
 * 0000000180011C75: lea     r9, [rsp+10h+arg_24]
 * 0000000180011C7A: lea     rax, [rsp+10h+arg_30]
 * 0000000180011C7F: lea     rcx, unk_180026AC8
 * 0000000180011C86: mov     [rsp+10h+arg_0], rax
 * 0000000180011C8B: call    sub_180012028
 * 0000000180011C90: mov     ebx, eax
 * 0000000180011C92: test    eax, eax
 * 0000000180011C94: jnz     loc_180011D7F
 * 0000000180011C9A: mov     r9d, [rsp+10h+arg_20]
 * 0000000180011C9F: mov     rax, r13
 * 0000000180011CA2: mov     r8, [r14]
 * 0000000180011CA5: mul     r9
 * 0000000180011CA8: mov     rax, r13
 * 0000000180011CAB: shr     rdx, 3
 * 0000000180011CAF: lea     rcx, [rdx+rdx*2]
 * 0000000180011CB3: shl     rcx, 2
 * 0000000180011CB7: cmp     r9, rcx
 * 0000000180011CBA: cmovnz  r9d, r15d
 * 0000000180011CBE: mov     ecx, r9d
 * 0000000180011CC1: mul     rcx
 * 0000000180011CC4: mov     rcx, [r14+8]
 * 0000000180011CC8: mov     rax, r13
 * 0000000180011CCB: mov     r10, rdx
 * 0000000180011CCE: mov     [rsp+10h+arg_20], r9d
 * 0000000180011CD3: sub     rcx, r8
 * 0000000180011CD6: shr     r10, 3
 * 0000000180011CDA: mul     rcx
 * 0000000180011CDD: shr     rdx, 3
 * 0000000180011CE1: lea     rax, [rdx+rdx*2]
 * 0000000180011CE5: lea     rdi, [r8+rax*4]
 * 0000000180011CE9: jmp     short loc_180011D54
 * 0000000180011CEB: mov     eax, r10d
 * 0000000180011CEE: lea     rcx, [rax+rax*2]
 * 0000000180011CF2: lea     rdx, [rdx+rcx*4]
 * 0000000180011CF6: lea     rax, [rsp+10h+arg_30]
 * 0000000180011CFB: lea     rcx, [rsp+10h+arg_30]
 * 0000000180011D00: cmp     rax, rdx
 * 0000000180011D03: jz      short loc_180011D25
 * 0000000180011D05: mov     r11d, [r8]
 * 0000000180011D08: cmp     [rcx], r11d
 * 0000000180011D0B: jnz     short loc_180011D1C
 * 0000000180011D0D: movzx   eax, word ptr [r8+4]
 * 0000000180011D12: cmp     [rcx+4], ax
 * 0000000180011D16: jz      loc_180011DCE
 * 0000000180011D1C: add     rcx, 0Ch
 * 0000000180011D20: cmp     rcx, rdx
 * 0000000180011D23: jnz     short loc_180011D08
 * 0000000180011D25: mov     eax, r9d
 * 0000000180011D28: add     rax, 0Ch
 * 0000000180011D2C: cmp     rax, 1000h
 * 0000000180011D32: ja      short loc_180011D50
 * 0000000180011D34: movsd   xmm0, qword ptr [r8]
 * 0000000180011D39: add     r9d, 0Ch
 * 0000000180011D3D: movsd   qword ptr [rdx], xmm0
 * 0000000180011D41: inc     r10d
 * 0000000180011D44: mov     eax, [r8+8]
 * 0000000180011D48: mov     [rdx+8], eax
 * 0000000180011D4B: mov     [rsp+10h+arg_20], r9d
 * 0000000180011D50: add     r8, 0Ch
 * 0000000180011D54: lea     rdx, [rsp+10h+arg_30]
 * 0000000180011D59: cmp     r8, rdi
 * 0000000180011D5C: jnz     short loc_180011CEB
 * 0000000180011D5E: mov     eax, [rsp+10h+arg_24]
 * 0000000180011D62: lea     rcx, unk_180026AC8
 * 0000000180011D69: mov     [rsp+10h+arg_10], 1
 * 0000000180011D71: mov     r8d, r9d
 * 0000000180011D74: mov     dword ptr [rsp+10h+arg_8], eax
 * 0000000180011D78: call    sub_1800120BC
 * 0000000180011D7D: mov     edi, eax
 * 0000000180011D7F: inc     esi
 * 0000000180011D81: cmp     edi, 0C0000001h
 * 0000000180011D87: jnz     short loc_180011D96
 * 0000000180011D89: cmp     esi, 64h ; 'd'
 * 0000000180011D8C: jge     short loc_180011D96
 * 0000000180011D8E: test    ebx, ebx
 * 0000000180011D90: jz      loc_180011C63
 * 0000000180011D96: test    ebx, ebx
 * 0000000180011D98: cmovz   ebx, edi
 * 0000000180011D9B: mov     eax, ebx
 * 0000000180011D9D: mov     rcx, [rbp+0F70h+var_20]
 * 0000000180011DA4: xor     rcx, rsp; StackCookie
 * 0000000180011DA7: call    __security_check_cookie
 * 0000000180011DAC: lea     r11, [rsp+10h+arg_1040]
 * 0000000180011DB4: mov     rbx, [r11+20h]
 * 0000000180011DB8: mov     rsi, [r11+28h]
 * 0000000180011DBC: mov     rdi, [r11+30h]
 * 0000000180011DC0: mov     r13, [r11+38h]
 * 0000000180011DC4: mov     rsp, r11
 * 0000000180011DC7: pop     r15
 * 0000000180011DC9: pop     r14
 * 0000000180011DCB: pop     rbp
 * 0000000180011DCC: retn
 * 0000000180011DCE: mov     eax, [r8+8]
 * 0000000180011DD2: add     [rcx+8], eax
 * 0000000180011DD5: mov     r9d, [rsp+10h+arg_20]
 * 0000000180011DDA: jmp     loc_180011D50
 */
