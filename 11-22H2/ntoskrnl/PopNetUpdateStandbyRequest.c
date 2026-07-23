/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x140996A5C
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14036FA40 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetUpdateStandbyRequest @ 0x140996A5C
 * Reason: Hex-Rays returned no pseudocode for 0x140996A5C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140996A5C: mov     [rsp+arg_0], rbx
 * 0000000140996A61: push    rdi
 * 0000000140996A62: sub     rsp, 20h
 * 0000000140996A66: mov     rdx, cs:PopNetBIServiceSid; SidToCheck
 * 0000000140996A6D: mov     dil, cl
 * 0000000140996A70: mov     [rsp+28h+IsMember], 0
 * 0000000140996A75: test    rdx, rdx
 * 0000000140996A78: jnz     short loc_140996A81
 * 0000000140996A7A: mov     ebx, 0C0000001h
 * 0000000140996A7F: jmp     short loc_140996AC0
 * 0000000140996A81: lea     r8, [rsp+28h+IsMember]; IsMember
 * 0000000140996A86: xor     ecx, ecx; TokenHandle
 * 0000000140996A88: call    RtlCheckTokenMembership
 * 0000000140996A8D: mov     ebx, eax
 * 0000000140996A8F: test    eax, eax
 * 0000000140996A91: js      short loc_140996AC0
 * 0000000140996A93: cmp     [rsp+28h+IsMember], 0
 * 0000000140996A98: jnz     short loc_140996AA1
 * 0000000140996A9A: mov     ebx, 0C0000022h
 * 0000000140996A9F: jmp     short loc_140996AC0
 * 0000000140996AA1: call    PopAcquirePolicyLock
 * 0000000140996AA6: cmp     cs:PopNetBIRequestActive, 0
 * 0000000140996AAD: jnz     short loc_140996ACE
 * 0000000140996AAF: test    dil, dil
 * 0000000140996AB2: jz      short loc_140996AD3
 * 0000000140996AB4: mov     cs:PopNetBIRequestActive, dil
 * 0000000140996ABB: call    PopReleasePolicyLock
 * 0000000140996AC0: mov     eax, ebx
 * 0000000140996AC2: mov     rbx, [rsp+28h+arg_0]
 * 0000000140996AC7: add     rsp, 20h
 * 0000000140996ACB: pop     rdi
 * 0000000140996ACC: retn
 * 0000000140996ACE: test    dil, dil
 * 0000000140996AD1: jz      short loc_140996AB4
 * 0000000140996AD3: mov     ebx, 0C000000Dh
 * 0000000140996AD8: jmp     short loc_140996ABB
 */
