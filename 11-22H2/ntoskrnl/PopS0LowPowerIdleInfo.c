/*
 * XREFs of PopS0LowPowerIdleInfo @ 0x1409845E0
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     PopNetIsDisconnectStandbyActive @ 0x1408789D8 (PopNetIsDisconnectStandbyActive.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopS0LowPowerIdleInfo @ 0x1409845E0
 * Reason: Hex-Rays returned no pseudocode for 0x1409845E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409845E0: mov     [rsp+arg_0], rbx
 * 00000001409845E5: push    rdi
 * 00000001409845E6: sub     rsp, 20h
 * 00000001409845EA: xor     ebx, ebx
 * 00000001409845EC: xor     eax, eax
 * 00000001409845EE: cmp     cs:PopPlatformAoAc, bl
 * 00000001409845F4: mov     rdi, rcx
 * 00000001409845F7: mov     [rsp+28h+arg_8], ebx
 * 00000001409845FB: mov     [rcx], rax
 * 00000001409845FE: jnz     short loc_14098460A
 * 0000000140984600: mov     ebx, 0C00000BBh
 * 0000000140984605: jmp     loc_1409846A8
 * 000000014098460A: call    PopAcquirePolicyLock
 * 000000014098460F: lea     rcx, [rsp+28h+arg_8]
 * 0000000140984614: call    PopNetIsDisconnectStandbyActive
 * 0000000140984619: mov     cl, [rdi+4]
 * 000000014098461C: mov     r8b, al
 * 000000014098461F: mov     edx, [rsp+28h+arg_8]
 * 0000000140984623: mov     r9d, 1
 * 0000000140984629: mov     [rdi], edx
 * 000000014098462B: cmp     cs:PopCsDeviceCompliance, r9d
 * 0000000140984632: setz    al
 * 0000000140984635: and     cl, 0FEh
 * 0000000140984638: or      cl, al
 * 000000014098463A: mov     [rdi+4], cl
 * 000000014098463D: cmp     cs:dword_140D1BED4, r9d
 * 0000000140984644: setnz   al
 * 0000000140984647: and     cl, 0FDh
 * 000000014098464A: sub     al, r9b
 * 000000014098464D: and     al, 2
 * 000000014098464F: or      cl, al
 * 0000000140984651: mov     [rdi+4], cl
 * 0000000140984654: cmp     cs:dword_140D1BED8, r9d
 * 000000014098465B: setnz   al
 * 000000014098465E: and     cl, 0FBh
 * 0000000140984661: sub     al, r9b
 * 0000000140984664: and     al, 4
 * 0000000140984666: or      cl, al
 * 0000000140984668: mov     [rdi+4], cl
 * 000000014098466B: cmp     cs:dword_140D1BEE0, r9d
 * 0000000140984672: setnz   al
 * 0000000140984675: and     cl, 0F7h
 * 0000000140984678: sub     al, r9b
 * 000000014098467B: and     al, 8
 * 000000014098467D: or      cl, al
 * 000000014098467F: mov     [rdi+4], cl
 * 0000000140984682: test    r8b, r8b
 * 0000000140984685: mov     cl, [rdi+5]
 * 0000000140984688: setnz   al
 * 000000014098468B: and     cl, 0FEh
 * 000000014098468E: or      cl, al
 * 0000000140984690: lea     eax, [rdx-3]
 * 0000000140984693: cmp     eax, r9d
 * 0000000140984696: jbe     short loc_14098469D
 * 0000000140984698: and     cl, 0FDh
 * 000000014098469B: jmp     short loc_1409846A0
 * 000000014098469D: or      cl, 2
 * 00000001409846A0: mov     [rdi+5], cl
 * 00000001409846A3: call    PopReleasePolicyLock
 * 00000001409846A8: mov     eax, ebx
 * 00000001409846AA: mov     rbx, [rsp+28h+arg_0]
 * 00000001409846AF: add     rsp, 20h
 * 00000001409846B3: pop     rdi
 * 00000001409846B4: retn
 */
