/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x140996BAC
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetUpdateStandbyRequest @ 0x140996BAC
 * Reason: Hex-Rays returned no pseudocode for 0x140996BAC
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140996BAC: mov     [rsp+arg_0], rbx
 * 0000000140996BB1: push    rdi
 * 0000000140996BB2: sub     rsp, 20h
 * 0000000140996BB6: mov     rdx, cs:PopNetBIServiceSid; SidToCheck
 * 0000000140996BBD: mov     dil, cl
 * 0000000140996BC0: mov     [rsp+28h+IsMember], 0
 * 0000000140996BC5: test    rdx, rdx
 * 0000000140996BC8: jnz     short loc_140996BD1
 * 0000000140996BCA: mov     ebx, 0C0000001h
 * 0000000140996BCF: jmp     short loc_140996C10
 * 0000000140996BD1: lea     r8, [rsp+28h+IsMember]; IsMember
 * 0000000140996BD6: xor     ecx, ecx; TokenHandle
 * 0000000140996BD8: call    RtlCheckTokenMembership
 * 0000000140996BDD: mov     ebx, eax
 * 0000000140996BDF: test    eax, eax
 * 0000000140996BE1: js      short loc_140996C10
 * 0000000140996BE3: cmp     [rsp+28h+IsMember], 0
 * 0000000140996BE8: jnz     short loc_140996BF1
 * 0000000140996BEA: mov     ebx, 0C0000022h
 * 0000000140996BEF: jmp     short loc_140996C10
 * 0000000140996BF1: call    PopAcquirePolicyLock
 * 0000000140996BF6: cmp     cs:PopNetBIRequestActive, 0
 * 0000000140996BFD: jnz     short loc_140996C1E
 * 0000000140996BFF: test    dil, dil
 * 0000000140996C02: jz      short loc_140996C23
 * 0000000140996C04: mov     cs:PopNetBIRequestActive, dil
 * 0000000140996C0B: call    PopReleasePolicyLock
 * 0000000140996C10: mov     eax, ebx
 * 0000000140996C12: mov     rbx, [rsp+28h+arg_0]
 * 0000000140996C17: add     rsp, 20h
 * 0000000140996C1B: pop     rdi
 * 0000000140996C1C: retn
 * 0000000140996C1E: test    dil, dil
 * 0000000140996C21: jz      short loc_140996C04
 * 0000000140996C23: mov     ebx, 0C000000Dh
 * 0000000140996C28: jmp     short loc_140996C0B
 */
