/*
 * XREFs of CcPostVolumeTelemetry @ 0x1403D0A70
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140881090 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6BE4 (_tlgCreate1Sz_wchar_t.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D17A0 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D1B30 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D2004 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x1403D2730 (CcAggregateCumulativeVolumeTelemetry.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x1403D29D0 (McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x1405398A8 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     CcResetGlobalTelemetry @ 0x1407EB440 (CcResetGlobalTelemetry.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x14088115C (CcAggregateCumulativeGlobalTelemetry.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for CcPostVolumeTelemetry @ 0x1403D0A70
 * Reason: Hex-Rays returned no pseudocode for 0x1403D0A70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403D0A70: mov     r11, rsp
 * 00000001403D0A73: mov     [r11+8], rbx
 * 00000001403D0A77: mov     [r11+10h], rsi
 * 00000001403D0A7B: mov     [r11+18h], rdi
 * 00000001403D0A7F: mov     [r11+20h], r12
 * 00000001403D0A83: push    r13
 * 00000001403D0A85: push    r14
 * 00000001403D0A87: push    r15
 * 00000001403D0A89: sub     rsp, 8D0h
 * 00000001403D0A90: mov     rax, cs:__security_cookie
 * 00000001403D0A97: xor     rax, rsp
 * 00000001403D0A9A: mov     [rsp+8E8h+var_28], rax
 * 00000001403D0AA2: xor     r13b, r13b
 * 00000001403D0AA5: xorps   xmm0, xmm0
 * 00000001403D0AA8: xor     eax, eax
 * 00000001403D0AAA: movups  xmmword ptr [rsp+8E8h+LockHandle.LockQueue.Next], xmm0
 * 00000001403D0AB2: mov     [r11-608h], rax
 * 00000001403D0AB9: and     [rsp+8E8h+var_674], eax
 * 00000001403D0AC0: and     [rsp+8E8h+var_640], eax
 * 00000001403D0AC7: mov     rsi, 0FFFFF78000000014h
 * 00000001403D0AD1: mov     rsi, [rsi]
 * 00000001403D0AD4: mov     rbx, rsi
 * 00000001403D0AD7: sub     rbx, cs:qword_140C5F930
 * 00000001403D0ADE: mov     rdi, rsi
 * 00000001403D0AE1: sub     rdi, cs:qword_140C5F938
 * 00000001403D0AE8: cmp     rbx, qword ptr cs:unk_140C5F948
 * 00000001403D0AEF: jge     short loc_1403D0B30
 * 00000001403D0AF1: mov     rax, cs:qword_140C5F958
 * 00000001403D0AF8: test    rax, rax
 * 00000001403D0AFB: jle     short loc_1403D0B30
 * 00000001403D0AFD: mov     rcx, [rsp+8E8h+var_28]
 * 00000001403D0B05: xor     rcx, rsp; StackCookie
 * 00000001403D0B08: call    __security_check_cookie
 * 00000001403D0B0D: lea     r11, [rsp+8E8h+var_18]
 * 00000001403D0B15: mov     rbx, [r11+20h]
 * 00000001403D0B19: mov     rsi, [r11+28h]
 * 00000001403D0B1D: mov     rdi, [r11+30h]
 * 00000001403D0B21: mov     r12, [r11+38h]
 * 00000001403D0B25: mov     rsp, r11
 * 00000001403D0B28: pop     r15
 * 00000001403D0B2A: pop     r14
 * 00000001403D0B2C: pop     r13
 * 00000001403D0B2E: retn
 * 00000001403D0B30: cmp     rdi, cs:qword_140C5F950
 * 00000001403D0B37: jge     loc_1404FB396
 * 00000001403D0B3D: cmp     cs:qword_140C5F958, 0
 * 00000001403D0B45: jz      loc_1404FB396
 * 00000001403D0B4B: inc     cs:qword_140C5F958
 * 00000001403D0B52: mov     r14, cs:qword_140C5F968
 * 00000001403D0B59: add     r14, 0Ah
 * 00000001403D0B5D: mov     [rsp+8E8h+var_638], r14
 * 00000001403D0B65: imul    rdx, r14, 9B0h; NumberOfBytes
 * 00000001403D0B6C: mov     ecx, 600h; PoolType
 * 00000001403D0B71: mov     r8d, 65546343h; Tag
 * 00000001403D0B77: call    ExAllocatePoolWithTag
 * 00000001403D0B7C: mov     [rsp+8E8h+P], rax
 * 00000001403D0B84: test    rax, rax
 * 00000001403D0B87: jz      loc_1403D0AFD
 * 00000001403D0B8D: lea     rdx, [rsp+8E8h+LockHandle]; LockHandle
 * 00000001403D0B95: lea     rcx, CcMasterLock; SpinLock
 * 00000001403D0B9C: call    KeAcquireInStackQueuedSpinLock
 * 00000001403D0BA1: mov     r12, cs:CcVolumeCacheMapList
 * 00000001403D0BA8: mov     [rsp+8E8h+var_450], r12
 * 00000001403D0BB0: lea     rax, CcVolumeCacheMapList
 * 00000001403D0BB7: cmp     r12, rax
 * 00000001403D0BBA: jz      loc_1403D0CC6
 * 00000001403D0BC0: mov     ecx, [rsp+8E8h+var_640]
 * 00000001403D0BC7: cmp     rcx, r14
 * 00000001403D0BCA: jnb     loc_1403D0CC6
 * 00000001403D0BD0: lea     r15, [r12-10h]
 * 00000001403D0BD5: mov     [rsp+8E8h+var_448], r15
 * 00000001403D0BDD: inc     ecx
 * 00000001403D0BDF: mov     [rsp+8E8h+var_640], ecx
 * 00000001403D0BE6: cmp     qword ptr [r15+168h], 0
 * 00000001403D0BEE: ja      short loc_1403D0C2F
 * 00000001403D0BF0: cmp     qword ptr [r15+170h], 0
 * 00000001403D0BF8: ja      short loc_1403D0C2F
 * 00000001403D0BFA: cmp     qword ptr [r15+178h], 0
 * 00000001403D0C02: ja      short loc_1403D0C2F
 * 00000001403D0C04: cmp     qword ptr [r15+348h], 0
 * 00000001403D0C0C: ja      short loc_1403D0C2F
 * 00000001403D0C0E: cmp     qword ptr [r15+350h], 0
 * 00000001403D0C16: ja      short loc_1403D0C2F
 * 00000001403D0C18: cmp     qword ptr [r15+358h], 0
 * 00000001403D0C20: ja      short loc_1403D0C2F
 * 00000001403D0C22: xor     al, al
 * 00000001403D0C24: test    al, al
 * 00000001403D0C26: jnz     short loc_1403D0C33
 * 00000001403D0C28: test    r13b, r13b
 * 00000001403D0C2B: jnz     short loc_1403D0CA2
 * 00000001403D0C2D: jmp     short loc_1403D0BB0
 * 00000001403D0C2F: mov     al, 1
 * 00000001403D0C31: jmp     short loc_1403D0C24
 * 00000001403D0C33: lea     r14, [r15+0E0h]
 * 00000001403D0C3A: mov     rcx, r14
 * 00000001403D0C3D: call    CcAggregateCumulativeVolumeTelemetry
 * 00000001403D0C42: mov     eax, [rsp+8E8h+var_674]
 * 00000001403D0C49: imul    rcx, rax, 9B0h
 * 00000001403D0C50: add     rcx, [rsp+8E8h+P]; void *
 * 00000001403D0C58: mov     rdx, r14; Src
 * 00000001403D0C5B: mov     r8d, 9B0h; Size
 * 00000001403D0C61: call    memmove
 * 00000001403D0C66: lea     rcx, [r15+0F0h]; void *
 * 00000001403D0C6D: mov     r14d, 4D0h
 * 00000001403D0C73: mov     r8d, r14d; Size
 * 00000001403D0C76: xor     edx, edx; Val
 * 00000001403D0C78: call    memset
 * 00000001403D0C7D: test    r13b, r13b
 * 00000001403D0C80: jnz     short loc_1403D0CB3
 * 00000001403D0C82: mov     r12, [r12]
 * 00000001403D0C86: mov     [rsp+8E8h+var_450], r12
 * 00000001403D0C8E: inc     [rsp+8E8h+var_674]
 * 00000001403D0C95: mov     r14, [rsp+8E8h+var_638]
 * 00000001403D0C9D: jmp     loc_1403D0BB0
 * 00000001403D0CA2: mov     rcx, r15
 * 00000001403D0CA5: call    CcHasVolumeCumulativeTelemetryChanged
 * 00000001403D0CAA: test    al, al
 * 00000001403D0CAC: jnz     short loc_1403D0C33
 * 00000001403D0CAE: jmp     loc_1403D0C2D
 * 00000001403D0CB3: lea     rcx, [r15+5C0h]; void *
 * 00000001403D0CBA: mov     r8, r14; Size
 * 00000001403D0CBD: xor     edx, edx; Val
 * 00000001403D0CBF: call    memset
 * 00000001403D0CC4: jmp     short loc_1403D0C82
 * 00000001403D0CC6: lea     rcx, [rsp+8E8h+LockHandle]
 * 00000001403D0CCE: call    KxReleaseQueuedSpinLock
 * 00000001403D0CD3: mov     r14, qword ptr [rsp+8E8h+LockHandle.OldIrql]
 * 00000001403D0CDB: mov     ecx, cs:KiIrqlFlags
 * 00000001403D0CE1: test    ecx, ecx
 * 00000001403D0CE3: jnz     loc_1404FB39E
 * 00000001403D0CE9: movzx   eax, r14b
 * 00000001403D0CED: mov     cr8, rax
 * 00000001403D0CF1: call    CcAggregateCumulativeGlobalTelemetry
 * 00000001403D0CF6: mov     ecx, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D0CFC: mov     r15, 6666666666666667h
 * 00000001403D0D06: test    cl, 1
 * 00000001403D0D09: jz      loc_1403D0DF4
 * 00000001403D0D0F: mov     rax, r15
 * 00000001403D0D12: imul    rbx
 * 00000001403D0D15: sar     rdx, 2
 * 00000001403D0D19: mov     r9, rdx
 * 00000001403D0D1C: shr     r9, 3Fh
 * 00000001403D0D20: add     r9, rdx
 * 00000001403D0D23: mov     rax, cs:qword_140C5F9A0
 * 00000001403D0D2A: mov     [rsp+8E8h+var_850], rax
 * 00000001403D0D32: mov     rax, cs:qword_140C5F998
 * 00000001403D0D39: mov     [rsp+8E8h+var_858], rax
 * 00000001403D0D41: mov     rax, cs:qword_140C5F990
 * 00000001403D0D48: mov     [rsp+8E8h+var_860], rax
 * 00000001403D0D50: mov     rax, cs:qword_140C5F988
 * 00000001403D0D57: mov     [rsp+8E8h+var_868], rax
 * 00000001403D0D5F: mov     rax, cs:qword_140C5F980
 * 00000001403D0D66: mov     [rsp+8E8h+var_870], rax
 * 00000001403D0D6B: mov     rax, cs:qword_140C5F9E8
 * 00000001403D0D72: mov     [rsp+8E8h+var_878], rax
 * 00000001403D0D77: mov     rax, cs:qword_140C5F9E0
 * 00000001403D0D7E: mov     [rsp+8E8h+var_880], rax
 * 00000001403D0D83: mov     rax, cs:qword_140C5F9D8
 * 00000001403D0D8A: mov     [rsp+8E8h+var_888], rax
 * 00000001403D0D8F: mov     rax, cs:qword_140C5F9D0
 * 00000001403D0D96: mov     [rsp+8E8h+var_890], rax
 * 00000001403D0D9B: mov     rax, cs:qword_140C5F9C8
 * 00000001403D0DA2: mov     [rsp+8E8h+var_898], rax
 * 00000001403D0DA7: mov     rax, cs:qword_140C5F9C0
 * 00000001403D0DAE: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D0DB3: mov     rax, cs:qword_140C5F9B8
 * 00000001403D0DBA: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D0DBF: mov     rax, cs:qword_140C5F9B0
 * 00000001403D0DC6: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D0DCB: mov     rax, cs:qword_140C5F9A8
 * 00000001403D0DD2: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D0DD7: mov     rax, cs:qword_140C5F978
 * 00000001403D0DDE: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D0DE3: mov     rax, cs:qword_140C5F970
 * 00000001403D0DEA: mov     [rsp+8E8h+var_8C8], rax
 * 00000001403D0DEF: call    McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer
 * 00000001403D0DF4: call    CcResetGlobalTelemetry
 * 00000001403D0DF9: xor     r10d, r10d
 * 00000001403D0DFC: test    r13b, r13b
 * 00000001403D0DFF: jnz     loc_1404FB411
 * 00000001403D0E05: mov     eax, r10d
 * 00000001403D0E08: mov     [rsp+8E8h+var_670], eax
 * 00000001403D0E0F: mov     edx, [rsp+8E8h+var_674]
 * 00000001403D0E16: mov     ecx, eax
 * 00000001403D0E18: cmp     rcx, rdx
 * 00000001403D0E1B: jnb     loc_1403D177C
 * 00000001403D0E21: imul    rdi, rcx, 9B0h
 * 00000001403D0E28: add     rdi, [rsp+8E8h+P]
 * 00000001403D0E30: mov     r8, [rdi+70h]
 * 00000001403D0E34: test    r8, r8
 * 00000001403D0E37: jz      loc_1404FB84D
 * 00000001403D0E3D: mov     rax, r8
 * 00000001403D0E40: sub     rax, [rdi+78h]
 * 00000001403D0E44: imul    rax, 64h ; 'd'
 * 00000001403D0E48: xor     edx, edx
 * 00000001403D0E4A: div     r8
 * 00000001403D0E4D: mov     r9, rax
 * 00000001403D0E50: mov     [rsp+8E8h+var_638], r9
 * 00000001403D0E58: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D0E5E: test    al, 1
 * 00000001403D0E60: jz      loc_1403D103E
 * 00000001403D0E66: mov     rax, r15
 * 00000001403D0E69: imul    rbx
 * 00000001403D0E6C: sar     rdx, 2
 * 00000001403D0E70: mov     rax, rdx
 * 00000001403D0E73: shr     rax, 3Fh
 * 00000001403D0E77: add     rdx, rax
 * 00000001403D0E7A: mov     rax, [rdi+418h]
 * 00000001403D0E81: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D0E89: mov     rax, [rdi+410h]
 * 00000001403D0E90: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D0E98: mov     rax, [rdi+288h]
 * 00000001403D0E9F: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D0EA7: mov     rax, [rdi+280h]
 * 00000001403D0EAE: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D0EB6: mov     rax, [rdi+278h]
 * 00000001403D0EBD: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D0EC5: mov     rax, [rdi+270h]
 * 00000001403D0ECC: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D0ED4: mov     rax, [rdi+268h]
 * 00000001403D0EDB: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D0EE3: mov     rax, [rdi+0E0h]
 * 00000001403D0EEA: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D0EF2: mov     rax, [rdi+0D8h]
 * 00000001403D0EF9: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D0F01: mov     rax, [rdi+98h]
 * 00000001403D0F08: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D0F10: mov     rax, [rdi+90h]
 * 00000001403D0F17: mov     [rsp+8E8h+var_800], rax
 * 00000001403D0F1F: mov     rax, [rdi+88h]
 * 00000001403D0F26: mov     [rsp+8E8h+var_808], rax
 * 00000001403D0F2E: mov     rax, [rdi+0B0h]
 * 00000001403D0F35: mov     [rsp+8E8h+var_810], rax
 * 00000001403D0F3D: mov     rax, [rdi+0A8h]
 * 00000001403D0F44: mov     [rsp+8E8h+var_818], rax
 * 00000001403D0F4C: mov     rax, [rdi+0A0h]
 * 00000001403D0F53: mov     [rsp+8E8h+var_820], rax
 * 00000001403D0F5B: mov     [rsp+8E8h+var_828], r9
 * 00000001403D0F63: mov     rax, [rdi+80h]
 * 00000001403D0F6A: mov     [rsp+8E8h+var_830], rax
 * 00000001403D0F72: mov     rax, [rdi+78h]
 * 00000001403D0F76: mov     [rsp+8E8h+var_838], rax
 * 00000001403D0F7E: mov     [rsp+8E8h+var_840], r8
 * 00000001403D0F86: mov     rax, [rdi+68h]
 * 00000001403D0F8A: mov     [rsp+8E8h+var_848], rax
 * 00000001403D0F92: mov     rax, [rdi+60h]
 * 00000001403D0F96: mov     [rsp+8E8h+var_850], rax
 * 00000001403D0F9E: mov     rax, [rdi+58h]
 * 00000001403D0FA2: mov     [rsp+8E8h+var_858], rax
 * 00000001403D0FAA: mov     rax, [rdi+50h]
 * 00000001403D0FAE: mov     [rsp+8E8h+var_860], rax
 * 00000001403D0FB6: mov     rax, [rdi+48h]
 * 00000001403D0FBA: mov     [rsp+8E8h+var_868], rax
 * 00000001403D0FC2: mov     rax, [rdi+40h]
 * 00000001403D0FC6: mov     [rsp+8E8h+var_870], rax
 * 00000001403D0FCB: mov     rax, [rdi+0D0h]
 * 00000001403D0FD2: mov     [rsp+8E8h+var_878], rax
 * 00000001403D0FD7: mov     rax, [rdi+0C8h]
 * 00000001403D0FDE: mov     [rsp+8E8h+var_880], rax
 * 00000001403D0FE3: mov     rax, [rdi+0C0h]
 * 00000001403D0FEA: mov     [rsp+8E8h+var_888], rax
 * 00000001403D0FEF: mov     rax, [rdi+0B8h]
 * 00000001403D0FF6: mov     [rsp+8E8h+var_890], rax
 * 00000001403D0FFB: mov     rax, [rdi+38h]
 * 00000001403D0FFF: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1004: mov     rax, [rdi+30h]
 * 00000001403D1008: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D100D: mov     rax, [rdi+28h]
 * 00000001403D1011: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1016: mov     rax, [rdi+20h]
 * 00000001403D101A: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D101F: mov     rax, [rdi+18h]
 * 00000001403D1023: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1028: mov     rax, [rdi+10h]
 * 00000001403D102C: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1031: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D1036: mov     r9, rdi
 * 00000001403D1039: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D103E: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D1044: test    al, 1
 * 00000001403D1046: jz      loc_1403D1484
 * 00000001403D104C: mov     rax, r15
 * 00000001403D104F: imul    rbx
 * 00000001403D1052: sar     rdx, 2
 * 00000001403D1056: mov     rax, rdx
 * 00000001403D1059: shr     rax, 3Fh
 * 00000001403D105D: add     rdx, rax
 * 00000001403D1060: mov     rax, [rdi+4D8h]
 * 00000001403D1067: mov     [rsp+8E8h+var_688], rax
 * 00000001403D106F: mov     rax, [rdi+4D0h]
 * 00000001403D1076: mov     [rsp+8E8h+var_690], rax
 * 00000001403D107E: mov     rax, [rdi+4C8h]
 * 00000001403D1085: mov     [rsp+8E8h+var_698], rax
 * 00000001403D108D: mov     rax, [rdi+4C0h]
 * 00000001403D1094: mov     [rsp+8E8h+var_6A0], rax
 * 00000001403D109C: mov     rax, [rdi+4B8h]
 * 00000001403D10A3: mov     [rsp+8E8h+var_6A8], rax
 * 00000001403D10AB: mov     rax, [rdi+4B0h]
 * 00000001403D10B2: mov     [rsp+8E8h+var_6B0], rax
 * 00000001403D10BA: mov     rax, [rdi+4A8h]
 * 00000001403D10C1: mov     [rsp+8E8h+var_6B8], rax
 * 00000001403D10C9: mov     rax, [rdi+4A0h]
 * 00000001403D10D0: mov     [rsp+8E8h+var_6C0], rax
 * 00000001403D10D8: mov     rax, [rdi+498h]
 * 00000001403D10DF: mov     [rsp+8E8h+var_6C8], rax
 * 00000001403D10E7: mov     rax, [rdi+490h]
 * 00000001403D10EE: mov     [rsp+8E8h+var_6D0], rax
 * 00000001403D10F6: mov     rax, [rdi+488h]
 * 00000001403D10FD: mov     [rsp+8E8h+var_6D8], rax
 * 00000001403D1105: mov     rax, [rdi+480h]
 * 00000001403D110C: mov     [rsp+8E8h+var_6E0], rax
 * 00000001403D1114: mov     rax, [rdi+478h]
 * 00000001403D111B: mov     [rsp+8E8h+var_6E8], rax
 * 00000001403D1123: mov     rax, [rdi+470h]
 * 00000001403D112A: mov     [rsp+8E8h+var_6F0], rax
 * 00000001403D1132: mov     rax, [rdi+468h]
 * 00000001403D1139: mov     [rsp+8E8h+var_6F8], rax
 * 00000001403D1141: mov     rax, [rdi+460h]
 * 00000001403D1148: mov     [rsp+8E8h+var_700], rax
 * 00000001403D1150: mov     rax, [rdi+458h]
 * 00000001403D1157: mov     [rsp+8E8h+var_708], rax
 * 00000001403D115F: mov     rax, [rdi+450h]
 * 00000001403D1166: mov     [rsp+8E8h+var_710], rax
 * 00000001403D116E: mov     rax, [rdi+448h]
 * 00000001403D1175: mov     [rsp+8E8h+var_718], rax
 * 00000001403D117D: mov     rax, [rdi+440h]
 * 00000001403D1184: mov     [rsp+8E8h+var_720], rax
 * 00000001403D118C: mov     rax, [rdi+438h]
 * 00000001403D1193: mov     [rsp+8E8h+var_728], rax
 * 00000001403D119B: mov     rax, [rdi+430h]
 * 00000001403D11A2: mov     [rsp+8E8h+var_730], rax
 * 00000001403D11AA: mov     rax, [rdi+428h]
 * 00000001403D11B1: mov     [rsp+8E8h+var_738], rax
 * 00000001403D11B9: mov     rax, [rdi+420h]
 * 00000001403D11C0: mov     [rsp+8E8h+var_740], rax
 * 00000001403D11C8: mov     rax, [rdi+260h]
 * 00000001403D11CF: mov     [rsp+8E8h+var_748], rax
 * 00000001403D11D7: mov     rax, [rdi+258h]
 * 00000001403D11DE: mov     [rsp+8E8h+var_750], rax
 * 00000001403D11E6: mov     rax, [rdi+250h]
 * 00000001403D11ED: mov     [rsp+8E8h+var_758], rax
 * 00000001403D11F5: mov     rax, [rdi+248h]
 * 00000001403D11FC: mov     [rsp+8E8h+var_760], rax
 * 00000001403D1204: mov     rax, [rdi+240h]
 * 00000001403D120B: mov     [rsp+8E8h+var_768], rax
 * 00000001403D1213: mov     rax, [rdi+238h]
 * 00000001403D121A: mov     [rsp+8E8h+var_770], rax
 * 00000001403D1222: mov     rax, [rdi+230h]
 * 00000001403D1229: mov     [rsp+8E8h+var_778], rax
 * 00000001403D1231: mov     rax, [rdi+228h]
 * 00000001403D1238: mov     [rsp+8E8h+var_780], rax
 * 00000001403D1240: mov     rax, [rdi+220h]
 * 00000001403D1247: mov     [rsp+8E8h+var_788], rax
 * 00000001403D124F: mov     rax, [rdi+218h]
 * 00000001403D1256: mov     [rsp+8E8h+var_790], rax
 * 00000001403D125E: mov     rax, [rdi+210h]
 * 00000001403D1265: mov     [rsp+8E8h+var_798], rax
 * 00000001403D126D: mov     rax, [rdi+208h]
 * 00000001403D1274: mov     [rsp+8E8h+var_7A0], rax
 * 00000001403D127C: mov     rax, [rdi+200h]
 * 00000001403D1283: mov     [rsp+8E8h+var_7A8], rax
 * 00000001403D128B: mov     rax, [rdi+1F8h]
 * 00000001403D1292: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D129A: mov     rax, [rdi+1F0h]
 * 00000001403D12A1: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D12A9: mov     rax, [rdi+1E8h]
 * 00000001403D12B0: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D12B8: mov     rax, [rdi+1E0h]
 * 00000001403D12BF: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D12C7: mov     rax, [rdi+1D8h]
 * 00000001403D12CE: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D12D6: mov     rax, [rdi+1D0h]
 * 00000001403D12DD: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D12E5: mov     rax, [rdi+1C8h]
 * 00000001403D12EC: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D12F4: mov     rax, [rdi+1C0h]
 * 00000001403D12FB: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D1303: mov     rax, [rdi+1B8h]
 * 00000001403D130A: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D1312: mov     rax, [rdi+1B0h]
 * 00000001403D1319: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D1321: mov     rax, [rdi+1A8h]
 * 00000001403D1328: mov     [rsp+8E8h+var_800], rax
 * 00000001403D1330: mov     rax, [rdi+1A0h]
 * 00000001403D1337: mov     [rsp+8E8h+var_808], rax
 * 00000001403D133F: mov     rax, [rdi+198h]
 * 00000001403D1346: mov     [rsp+8E8h+var_810], rax
 * 00000001403D134E: mov     rax, [rdi+190h]
 * 00000001403D1355: mov     [rsp+8E8h+var_818], rax
 * 00000001403D135D: mov     rax, [rdi+188h]
 * 00000001403D1364: mov     [rsp+8E8h+var_820], rax
 * 00000001403D136C: mov     rax, [rdi+180h]
 * 00000001403D1373: mov     [rsp+8E8h+var_828], rax
 * 00000001403D137B: mov     rax, [rdi+178h]
 * 00000001403D1382: mov     [rsp+8E8h+var_830], rax
 * 00000001403D138A: mov     rax, [rdi+170h]
 * 00000001403D1391: mov     [rsp+8E8h+var_838], rax
 * 00000001403D1399: mov     rax, [rdi+168h]
 * 00000001403D13A0: mov     [rsp+8E8h+var_840], rax
 * 00000001403D13A8: mov     rax, [rdi+160h]
 * 00000001403D13AF: mov     [rsp+8E8h+var_848], rax
 * 00000001403D13B7: mov     rax, [rdi+158h]
 * 00000001403D13BE: mov     [rsp+8E8h+var_850], rax
 * 00000001403D13C6: mov     rax, [rdi+150h]
 * 00000001403D13CD: mov     [rsp+8E8h+var_858], rax
 * 00000001403D13D5: mov     rax, [rdi+148h]
 * 00000001403D13DC: mov     [rsp+8E8h+var_860], rax
 * 00000001403D13E4: mov     rax, [rdi+140h]
 * 00000001403D13EB: mov     [rsp+8E8h+var_868], rax
 * 00000001403D13F3: mov     rax, [rdi+138h]
 * 00000001403D13FA: mov     [rsp+8E8h+var_870], rax
 * 00000001403D13FF: mov     rax, [rdi+130h]
 * 00000001403D1406: mov     [rsp+8E8h+var_878], rax
 * 00000001403D140B: mov     rax, [rdi+128h]
 * 00000001403D1412: mov     [rsp+8E8h+var_880], rax
 * 00000001403D1417: mov     rax, [rdi+120h]
 * 00000001403D141E: mov     [rsp+8E8h+var_888], rax
 * 00000001403D1423: mov     rax, [rdi+118h]
 * 00000001403D142A: mov     [rsp+8E8h+var_890], rax
 * 00000001403D142F: mov     rax, [rdi+110h]
 * 00000001403D1436: mov     [rsp+8E8h+var_898], rax
 * 00000001403D143B: mov     rax, [rdi+108h]
 * 00000001403D1442: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D1447: mov     rax, [rdi+100h]
 * 00000001403D144E: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1453: mov     rax, [rdi+0F8h]
 * 00000001403D145A: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D145F: mov     rax, [rdi+0F0h]
 * 00000001403D1466: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D146B: mov     rax, [rdi+0E8h]
 * 00000001403D1472: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1477: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D147C: mov     r9, rdi
 * 00000001403D147F: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D1484: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D148A: test    al, 1
 * 00000001403D148C: jz      loc_1403D1762
 * 00000001403D1492: mov     rax, r15
 * 00000001403D1495: imul    rbx
 * 00000001403D1498: sar     rdx, 2
 * 00000001403D149C: mov     rax, rdx
 * 00000001403D149F: shr     rax, 3Fh
 * 00000001403D14A3: add     rdx, rax
 * 00000001403D14A6: mov     rax, [rdi+408h]
 * 00000001403D14AD: mov     [rsp+8E8h+var_748], rax
 * 00000001403D14B5: mov     rax, [rdi+400h]
 * 00000001403D14BC: mov     [rsp+8E8h+var_750], rax
 * 00000001403D14C4: mov     rax, [rdi+3F8h]
 * 00000001403D14CB: mov     [rsp+8E8h+var_758], rax
 * 00000001403D14D3: mov     rax, [rdi+3F0h]
 * 00000001403D14DA: mov     [rsp+8E8h+var_760], rax
 * 00000001403D14E2: mov     rax, [rdi+3E8h]
 * 00000001403D14E9: mov     [rsp+8E8h+var_768], rax
 * 00000001403D14F1: mov     rax, [rdi+3E0h]
 * 00000001403D14F8: mov     [rsp+8E8h+var_770], rax
 * 00000001403D1500: mov     rax, [rdi+3D8h]
 * 00000001403D1507: mov     [rsp+8E8h+var_778], rax
 * 00000001403D150F: mov     rax, [rdi+3D0h]
 * 00000001403D1516: mov     [rsp+8E8h+var_780], rax
 * 00000001403D151E: mov     rax, [rdi+3C8h]
 * 00000001403D1525: mov     [rsp+8E8h+var_788], rax
 * 00000001403D152D: mov     rax, [rdi+3C0h]
 * 00000001403D1534: mov     [rsp+8E8h+var_790], rax
 * 00000001403D153C: mov     rax, [rdi+3B8h]
 * 00000001403D1543: mov     [rsp+8E8h+var_798], rax
 * 00000001403D154B: mov     rax, [rdi+3B0h]
 * 00000001403D1552: mov     [rsp+8E8h+var_7A0], rax
 * 00000001403D155A: mov     rax, [rdi+3A8h]
 * 00000001403D1561: mov     [rsp+8E8h+var_7A8], rax
 * 00000001403D1569: mov     rax, [rdi+3A0h]
 * 00000001403D1570: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D1578: mov     rax, [rdi+398h]
 * 00000001403D157F: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D1587: mov     rax, [rdi+390h]
 * 00000001403D158E: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D1596: mov     rax, [rdi+388h]
 * 00000001403D159D: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D15A5: mov     rax, [rdi+380h]
 * 00000001403D15AC: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D15B4: mov     rax, [rdi+378h]
 * 00000001403D15BB: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D15C3: mov     rax, [rdi+370h]
 * 00000001403D15CA: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D15D2: mov     rax, [rdi+368h]
 * 00000001403D15D9: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D15E1: mov     rax, [rdi+360h]
 * 00000001403D15E8: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D15F0: mov     rax, [rdi+358h]
 * 00000001403D15F7: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D15FF: mov     rax, [rdi+350h]
 * 00000001403D1606: mov     [rsp+8E8h+var_800], rax
 * 00000001403D160E: mov     rax, [rdi+348h]
 * 00000001403D1615: mov     [rsp+8E8h+var_808], rax
 * 00000001403D161D: mov     rax, [rdi+340h]
 * 00000001403D1624: mov     [rsp+8E8h+var_810], rax
 * 00000001403D162C: mov     rax, [rdi+338h]
 * 00000001403D1633: mov     [rsp+8E8h+var_818], rax
 * 00000001403D163B: mov     rax, [rdi+330h]
 * 00000001403D1642: mov     [rsp+8E8h+var_820], rax
 * 00000001403D164A: mov     rax, [rdi+328h]
 * 00000001403D1651: mov     [rsp+8E8h+var_828], rax
 * 00000001403D1659: mov     rax, [rdi+320h]
 * 00000001403D1660: mov     [rsp+8E8h+var_830], rax
 * 00000001403D1668: mov     rax, [rdi+318h]
 * 00000001403D166F: mov     [rsp+8E8h+var_838], rax
 * 00000001403D1677: mov     rax, [rdi+310h]
 * 00000001403D167E: mov     [rsp+8E8h+var_840], rax
 * 00000001403D1686: mov     rax, [rdi+308h]
 * 00000001403D168D: mov     [rsp+8E8h+var_848], rax
 * 00000001403D1695: mov     rax, [rdi+300h]
 * 00000001403D169C: mov     [rsp+8E8h+var_850], rax
 * 00000001403D16A4: mov     rax, [rdi+2F8h]
 * 00000001403D16AB: mov     [rsp+8E8h+var_858], rax
 * 00000001403D16B3: mov     rax, [rdi+2F0h]
 * 00000001403D16BA: mov     [rsp+8E8h+var_860], rax
 * 00000001403D16C2: mov     rax, [rdi+2E8h]
 * 00000001403D16C9: mov     [rsp+8E8h+var_868], rax
 * 00000001403D16D1: mov     rax, [rdi+2E0h]
 * 00000001403D16D8: mov     [rsp+8E8h+var_870], rax
 * 00000001403D16DD: mov     rax, [rdi+2D8h]
 * 00000001403D16E4: mov     [rsp+8E8h+var_878], rax
 * 00000001403D16E9: mov     rax, [rdi+2D0h]
 * 00000001403D16F0: mov     [rsp+8E8h+var_880], rax
 * 00000001403D16F5: mov     rax, [rdi+2C8h]
 * 00000001403D16FC: mov     [rsp+8E8h+var_888], rax
 * 00000001403D1701: mov     rax, [rdi+2C0h]
 * 00000001403D1708: mov     [rsp+8E8h+var_890], rax
 * 00000001403D170D: mov     rax, [rdi+2B8h]
 * 00000001403D1714: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1719: mov     rax, [rdi+2B0h]
 * 00000001403D1720: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D1725: mov     rax, [rdi+2A8h]
 * 00000001403D172C: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1731: mov     rax, [rdi+2A0h]
 * 00000001403D1738: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D173D: mov     rax, [rdi+298h]
 * 00000001403D1744: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1749: mov     rax, [rdi+290h]
 * 00000001403D1750: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1755: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D175A: mov     r9, rdi
 * 00000001403D175D: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D1762: xor     r10d, r10d
 * 00000001403D1765: test    r13b, r13b
 * 00000001403D1768: jnz     loc_1404FB855
 * 00000001403D176E: mov     eax, [rsp+8E8h+var_670]
 * 00000001403D1775: inc     eax
 * 00000001403D1777: jmp     loc_1403D0E08
 * 00000001403D177C: mov     cs:qword_140C5F930, rsi
 * 00000001403D1783: xor     edx, edx; Tag
 * 00000001403D1785: mov     rcx, [rsp+8E8h+P]; P
 * 00000001403D178D: call    ExFreePoolWithTag
 * 00000001403D1792: jmp     loc_1403D0AFD
 * 00000001404417A0: push    rbx
 * 00000001404417A2: push    rbp
 * 00000001404417A3: sub     rsp, 278h
 * 00000001404417AA: mov     rbp, rdx
 * 00000001404417AD: lea     rcx, [rbp+2D0h]
 * 00000001404417B4: call    KxReleaseQueuedSpinLock
 * 00000001404417B9: mov     rbx, [rbp+2E0h]
 * 00000001404417C0: mov     ecx, cs:KiIrqlFlags
 * 00000001404417C6: test    ecx, ecx
 * 00000001404417C8: jz      short loc_140441826
 * 00000001404417CA: mov     rax, cr8
 * 00000001404417CE: mov     [rbp+27Ch], al
 * 00000001404417D4: test    cl, 1
 * 00000001404417D7: jz      short loc_140441826
 * 00000001404417D9: cmp     al, 0Fh
 * 00000001404417DB: ja      short loc_140441826
 * 00000001404417DD: cmp     bl, 0Fh
 * 00000001404417E0: ja      short loc_140441826
 * 00000001404417E2: cmp     al, 2
 * 00000001404417E4: jb      short loc_140441826
 * 00000001404417E6: mov     r10, gs:20h
 * 00000001404417EF: mov     r9, [r10+88B8h]
 * 00000001404417F6: mov     r8d, [r9+14h]
 * 00000001404417FA: movzx   ecx, byte ptr [rbp+2E0h]
 * 0000000140441801: inc     ecx
 * 0000000140441803: mov     edx, 1
 * 0000000140441808: shl     rdx, cl
 * 000000014044180B: dec     edx
 * 000000014044180D: not     edx
 * 000000014044180F: movzx   eax, dx
 * 0000000140441812: not     eax
 * 0000000140441814: and     r8d, eax
 * 0000000140441817: mov     [r9+14h], r8d
 * 000000014044181B: jnz     short loc_140441826
 * 000000014044181D: mov     rcx, r10
 * 0000000140441820: call    KiRemoveSystemWorkPriorityKick
 * 0000000140441825: nop
 * 0000000140441826: movzx   eax, bl
 * 0000000140441829: mov     cr8, rax
 * 000000014044182D: add     rsp, 278h
 * 0000000140441834: pop     rbp
 * 0000000140441835: pop     rbx
 * 0000000140441836: retn
 * 00000001404FB396: mov     r13b, 1
 * 00000001404FB399: jmp     loc_1403D0B4B
 * 00000001404FB39E: mov     rax, cr8
 * 00000001404FB3A2: test    cl, 1
 * 00000001404FB3A5: jz      loc_1403D0CE9
 * 00000001404FB3AB: cmp     al, 0Fh
 * 00000001404FB3AD: ja      loc_1403D0CE9
 * 00000001404FB3B3: cmp     r14b, 0Fh
 * 00000001404FB3B7: ja      loc_1403D0CE9
 * 00000001404FB3BD: mov     r12d, 2
 * 00000001404FB3C3: cmp     al, r12b
 * 00000001404FB3C6: jb      loc_1403D0CE9
 * 00000001404FB3CC: mov     r10, gs:20h
 * 00000001404FB3D5: mov     r9, [r10+88B8h]
 * 00000001404FB3DC: mov     r8d, [r9+14h]
 * 00000001404FB3E0: movzx   ecx, [rsp+8E8h+LockHandle.OldIrql]
 * 00000001404FB3E8: inc     ecx
 * 00000001404FB3EA: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001404FB3EE: shl     rdx, cl
 * 00000001404FB3F1: movzx   eax, dx
 * 00000001404FB3F4: not     eax
 * 00000001404FB3F6: and     r8d, eax
 * 00000001404FB3F9: mov     [r9+14h], r8d
 * 00000001404FB3FD: jnz     loc_1403D0CE9
 * 00000001404FB403: mov     rcx, r10
 * 00000001404FB406: call    KiRemoveSystemWorkPriorityKick
 * 00000001404FB40B: nop
 * 00000001404FB40C: jmp     loc_1403D0CE9
 * 00000001404FB411: mov     r9d, 5
 * 00000001404FB417: cmp     cs:dword_140C02F08, r9d
 * 00000001404FB41E: jbe     loc_1404FB7D1
 * 00000001404FB424: mov     rdx, 400000000000h
 * 00000001404FB42E: lea     rcx, dword_140C02F08
 * 00000001404FB435: call    _tlgKeywordOn
 * 00000001404FB43A: test    al, al
 * 00000001404FB43C: jz      loc_1404FB7D1
 * 00000001404FB442: mov     [rsp+8E8h+var_600], 1000000h
 * 00000001404FB44E: lea     rax, [rsp+8E8h+var_600]
 * 00000001404FB456: mov     [rsp+8E8h+var_418], rax
 * 00000001404FB45E: mov     [rsp+8E8h+var_410], 8
 * 00000001404FB46A: mov     [rsp+8E8h+var_678], r9w
 * 00000001404FB473: lea     rax, [rsp+8E8h+var_678]
 * 00000001404FB47B: mov     [rsp+8E8h+var_408], rax
 * 00000001404FB483: mov     [rsp+8E8h+var_400], 2
 * 00000001404FB48F: mov     rax, r15
 * 00000001404FB492: imul    rdi
 * 00000001404FB495: sar     rdx, 2
 * 00000001404FB499: mov     rax, rdx
 * 00000001404FB49C: shr     rax, 3Fh
 * 00000001404FB4A0: add     rdx, rax
 * 00000001404FB4A3: mov     [rsp+8E8h+var_5F8], rdx
 * 00000001404FB4AB: lea     rax, [rsp+8E8h+var_5F8]
 * 00000001404FB4B3: mov     [rsp+8E8h+var_3F8], rax
 * 00000001404FB4BB: mov     [rsp+8E8h+var_3F0], 8
 * 00000001404FB4C7: mov     eax, cs:CcNumberNumaNodes
 * 00000001404FB4CD: mov     [rsp+8E8h+var_670], eax
 * 00000001404FB4D4: lea     rax, [rsp+8E8h+var_670]
 * 00000001404FB4DC: mov     [rsp+8E8h+var_3E8], rax
 * 00000001404FB4E4: mov     [rsp+8E8h+var_3E0], 4
 * 00000001404FB4F0: mov     rax, cs:qword_140C5F9F0
 * 00000001404FB4F7: mov     [rsp+8E8h+var_5F0], rax
 * 00000001404FB4FF: lea     rax, [rsp+8E8h+var_5F0]
 * 00000001404FB507: mov     [rsp+8E8h+var_3D8], rax
 * 00000001404FB50F: mov     [rsp+8E8h+var_3D0], 8
 * 00000001404FB51B: mov     rax, cs:qword_140C5F9F8
 * 00000001404FB522: mov     [rsp+8E8h+var_5E8], rax
 * 00000001404FB52A: lea     rax, [rsp+8E8h+var_5E8]
 * 00000001404FB532: mov     [rsp+8E8h+var_3C8], rax
 * 00000001404FB53A: mov     [rsp+8E8h+var_3C0], 8
 * 00000001404FB546: mov     rax, cs:qword_140C5FA28
 * 00000001404FB54D: mov     [rsp+8E8h+var_5E0], rax
 * 00000001404FB555: lea     rax, [rsp+8E8h+var_5E0]
 * 00000001404FB55D: mov     [rsp+8E8h+var_3B8], rax
 * 00000001404FB565: mov     [rsp+8E8h+var_3B0], 8
 * 00000001404FB571: mov     rax, cs:qword_140C5FA30
 * 00000001404FB578: mov     [rsp+8E8h+var_5D8], rax
 * 00000001404FB580: lea     rax, [rsp+8E8h+var_5D8]
 * 00000001404FB588: mov     [rsp+8E8h+var_3A8], rax
 * 00000001404FB590: mov     [rsp+8E8h+var_3A0], 8
 * 00000001404FB59C: mov     rax, cs:qword_140C5FA38
 * 00000001404FB5A3: mov     [rsp+8E8h+var_5D0], rax
 * 00000001404FB5AB: lea     rax, [rsp+8E8h+var_5D0]
 * 00000001404FB5B3: mov     [rsp+8E8h+var_398], rax
 * 00000001404FB5BB: mov     [rsp+8E8h+var_390], 8
 * 00000001404FB5C7: mov     rax, cs:qword_140C5FA40
 * 00000001404FB5CE: mov     [rsp+8E8h+var_5C8], rax
 * 00000001404FB5D6: lea     rax, [rsp+8E8h+var_5C8]
 * 00000001404FB5DE: mov     [rsp+8E8h+var_388], rax
 * 00000001404FB5E6: mov     [rsp+8E8h+var_380], 8
 * 00000001404FB5F2: mov     rax, cs:qword_140C5FA48
 * 00000001404FB5F9: mov     [rsp+8E8h+var_5C0], rax
 * 00000001404FB601: lea     rax, [rsp+8E8h+var_5C0]
 * 00000001404FB609: mov     [rsp+8E8h+var_378], rax
 * 00000001404FB611: mov     [rsp+8E8h+var_370], 8
 * 00000001404FB61D: mov     rax, cs:qword_140C5FA50
 * 00000001404FB624: mov     [rsp+8E8h+var_5B8], rax
 * 00000001404FB62C: lea     rax, [rsp+8E8h+var_5B8]
 * 00000001404FB634: mov     [rsp+8E8h+var_368], rax
 * 00000001404FB63C: mov     [rsp+8E8h+var_360], 8
 * 00000001404FB648: mov     rax, cs:qword_140C5FA58
 * 00000001404FB64F: mov     [rsp+8E8h+var_5B0], rax
 * 00000001404FB657: lea     rax, [rsp+8E8h+var_5B0]
 * 00000001404FB65F: mov     [rsp+8E8h+var_358], rax
 * 00000001404FB667: mov     [rsp+8E8h+var_350], 8
 * 00000001404FB673: mov     rax, cs:qword_140C5FA60
 * 00000001404FB67A: mov     [rsp+8E8h+var_5A8], rax
 * 00000001404FB682: lea     rax, [rsp+8E8h+var_5A8]
 * 00000001404FB68A: mov     [rsp+8E8h+var_348], rax
 * 00000001404FB692: mov     [rsp+8E8h+var_340], 8
 * 00000001404FB69E: mov     rax, cs:qword_140C5FA68
 * 00000001404FB6A5: mov     [rsp+8E8h+var_5A0], rax
 * 00000001404FB6AD: lea     rax, [rsp+8E8h+var_5A0]
 * 00000001404FB6B5: mov     [rsp+8E8h+var_338], rax
 * 00000001404FB6BD: mov     [rsp+8E8h+var_330], 8
 * 00000001404FB6C9: mov     rax, cs:qword_140C5FA00
 * 00000001404FB6D0: mov     [rsp+8E8h+var_598], rax
 * 00000001404FB6D8: lea     rax, [rsp+8E8h+var_598]
 * 00000001404FB6E0: mov     [rsp+8E8h+var_328], rax
 * 00000001404FB6E8: mov     [rsp+8E8h+var_320], 8
 * 00000001404FB6F4: mov     rax, cs:qword_140C5FA08
 * 00000001404FB6FB: mov     [rsp+8E8h+var_590], rax
 * 00000001404FB703: lea     rax, [rsp+8E8h+var_590]
 * 00000001404FB70B: mov     [rsp+8E8h+var_318], rax
 * 00000001404FB713: mov     [rsp+8E8h+var_310], 8
 * 00000001404FB71F: mov     rax, cs:qword_140C5FA10
 * 00000001404FB726: mov     [rsp+8E8h+var_588], rax
 * 00000001404FB72E: lea     rax, [rsp+8E8h+var_588]
 * 00000001404FB736: mov     [rsp+8E8h+var_308], rax
 * 00000001404FB73E: mov     [rsp+8E8h+var_300], 8
 * 00000001404FB74A: mov     rax, cs:qword_140C5FA18
 * 00000001404FB751: mov     [rsp+8E8h+var_620], rax
 * 00000001404FB759: lea     rax, [rsp+8E8h+var_620]
 * 00000001404FB761: mov     [rsp+8E8h+var_2F8], rax
 * 00000001404FB769: mov     [rsp+8E8h+var_2F0], 8
 * 00000001404FB775: mov     rax, cs:qword_140C5FA20
 * 00000001404FB77C: mov     [rsp+8E8h+var_628], rax
 * 00000001404FB784: lea     rax, [rsp+8E8h+var_628]
 * 00000001404FB78C: mov     [rsp+8E8h+var_2E8], rax
 * 00000001404FB794: mov     [rsp+8E8h+var_2E0], 8
 * 00000001404FB7A0: lea     rax, [rsp+8E8h+var_438]
 * 00000001404FB7A8: mov     [rsp+8E8h+var_8C0], rax
 * 00000001404FB7AD: mov     dword ptr [rsp+8E8h+var_8C8], 16h
 * 00000001404FB7B5: xor     r9d, r9d
 * 00000001404FB7B8: xor     r8d, r8d
 * 00000001404FB7BB: lea     rdx, byte_140029B4D
 * 00000001404FB7C2: lea     rcx, dword_140C02F08
 * 00000001404FB7C9: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001404FB7CE: xor     r10d, r10d
 * 00000001404FB7D1: mov     cs:qword_140C5F9F0, r10
 * 00000001404FB7D8: mov     cs:qword_140C5F9F8, r10
 * 00000001404FB7DF: mov     cs:qword_140C5FA00, r10
 * 00000001404FB7E6: mov     cs:qword_140C5FA08, r10
 * 00000001404FB7ED: mov     cs:qword_140C5FA10, r10
 * 00000001404FB7F4: mov     cs:qword_140C5FA18, r10
 * 00000001404FB7FB: mov     cs:qword_140C5FA20, r10
 * 00000001404FB802: mov     cs:qword_140C5FA28, r10
 * 00000001404FB809: mov     cs:qword_140C5FA30, r10
 * 00000001404FB810: mov     cs:qword_140C5FA38, r10
 * 00000001404FB817: mov     cs:qword_140C5FA40, r10
 * 00000001404FB81E: mov     cs:qword_140C5FA48, r10
 * 00000001404FB825: mov     cs:qword_140C5FA50, r10
 * 00000001404FB82C: mov     cs:qword_140C5FA58, r10
 * 00000001404FB833: mov     cs:qword_140C5FA60, r10
 * 00000001404FB83A: mov     cs:qword_140C5FA68, r10
 * 00000001404FB841: mov     cs:qword_140C5F938, rsi
 * 00000001404FB848: jmp     loc_1403D0E05
 * 00000001404FB84D: mov     r9, r10
 * 00000001404FB850: jmp     loc_1403D0E50
 * 00000001404FB855: mov     r9d, 5
 * 00000001404FB85B: cmp     cs:dword_140C02F08, r9d
 * 00000001404FB862: jbe     loc_1403D176E
 * 00000001404FB868: mov     rdx, 400000000000h
 * 00000001404FB872: lea     rcx, dword_140C02F08
 * 00000001404FB879: call    _tlgKeywordOn
 * 00000001404FB87E: test    al, al
 * 00000001404FB880: jz      loc_1403D176E
 * 00000001404FB886: mov     [rsp+8E8h+var_628], 1000000h
 * 00000001404FB892: lea     rax, [rsp+8E8h+var_628]
 * 00000001404FB89A: mov     [rsp+8E8h+var_418], rax
 * 00000001404FB8A2: mov     [rsp+8E8h+var_410], 8
 * 00000001404FB8AE: mov     [rsp+8E8h+var_678], r9w
 * 00000001404FB8B7: lea     rax, [rsp+8E8h+var_678]
 * 00000001404FB8BF: mov     [rsp+8E8h+var_408], rax
 * 00000001404FB8C7: mov     [rsp+8E8h+var_400], 2
 * 00000001404FB8D3: mov     [rsp+8E8h+var_3F8], rdi
 * 00000001404FB8DB: mov     [rsp+8E8h+var_3F0], 10h
 * 00000001404FB8E7: mov     rax, r15
 * 00000001404FB8EA: imul    rbx
 * 00000001404FB8ED: sar     rdx, 2
 * 00000001404FB8F1: mov     rax, rdx
 * 00000001404FB8F4: shr     rax, 3Fh
 * 00000001404FB8F8: add     rdx, rax
 * 00000001404FB8FB: mov     [rsp+8E8h+var_620], rdx
 * 00000001404FB903: lea     rax, [rsp+8E8h+var_620]
 * 00000001404FB90B: mov     [rsp+8E8h+var_3E8], rax
 * 00000001404FB913: mov     [rsp+8E8h+var_3E0], 8
 * 00000001404FB91F: mov     rax, [rdi+4E0h]
 * 00000001404FB926: mov     [rsp+8E8h+var_580], rax
 * 00000001404FB92E: lea     rax, [rsp+8E8h+var_580]
 * 00000001404FB936: mov     [rsp+8E8h+var_3D8], rax
 * 00000001404FB93E: mov     [rsp+8E8h+var_3D0], 8
 * 00000001404FB94A: mov     rax, [rdi+4E8h]
 * 00000001404FB951: mov     [rsp+8E8h+var_578], rax
 * 00000001404FB959: lea     rax, [rsp+8E8h+var_578]
 * 00000001404FB961: mov     [rsp+8E8h+var_3C8], rax
 * 00000001404FB969: mov     [rsp+8E8h+var_3C0], 8
 * 00000001404FB975: mov     rax, [rdi+4F0h]
 * 00000001404FB97C: mov     [rsp+8E8h+var_570], rax
 * 00000001404FB984: lea     rax, [rsp+8E8h+var_570]
 * 00000001404FB98C: mov     [rsp+8E8h+var_3B8], rax
 * 00000001404FB994: mov     [rsp+8E8h+var_3B0], 8
 * 00000001404FB9A0: mov     rax, [rdi+4F8h]
 * 00000001404FB9A7: mov     [rsp+8E8h+var_568], rax
 * 00000001404FB9AF: lea     rax, [rsp+8E8h+var_568]
 * 00000001404FB9B7: mov     [rsp+8E8h+var_3A8], rax
 * 00000001404FB9BF: mov     [rsp+8E8h+var_3A0], 8
 * 00000001404FB9CB: mov     rax, [rdi+500h]
 * 00000001404FB9D2: mov     [rsp+8E8h+var_560], rax
 * 00000001404FB9DA: lea     rax, [rsp+8E8h+var_560]
 * 00000001404FB9E2: mov     [rsp+8E8h+var_398], rax
 * 00000001404FB9EA: mov     [rsp+8E8h+var_390], 8
 * 00000001404FB9F6: mov     rax, [rdi+508h]
 * 00000001404FB9FD: mov     [rsp+8E8h+var_558], rax
 * 00000001404FBA05: lea     rax, [rsp+8E8h+var_558]
 * 00000001404FBA0D: mov     [rsp+8E8h+var_388], rax
 * 00000001404FBA15: mov     [rsp+8E8h+var_380], 8
 * 00000001404FBA21: mov     rax, [rdi+588h]
 * 00000001404FBA28: mov     [rsp+8E8h+var_550], rax
 * 00000001404FBA30: lea     rax, [rsp+8E8h+var_550]
 * 00000001404FBA38: mov     [rsp+8E8h+var_378], rax
 * 00000001404FBA40: mov     [rsp+8E8h+var_370], 8
 * 00000001404FBA4C: mov     rax, [rdi+590h]
 * 00000001404FBA53: mov     [rsp+8E8h+var_548], rax
 * 00000001404FBA5B: lea     rax, [rsp+8E8h+var_548]
 * 00000001404FBA63: mov     [rsp+8E8h+var_368], rax
 * 00000001404FBA6B: mov     [rsp+8E8h+var_360], 8
 * 00000001404FBA77: mov     rax, [rdi+598h]
 * 00000001404FBA7E: mov     [rsp+8E8h+var_540], rax
 * 00000001404FBA86: lea     rax, [rsp+8E8h+var_540]
 * 00000001404FBA8E: mov     [rsp+8E8h+var_358], rax
 * 00000001404FBA96: mov     [rsp+8E8h+var_350], 8
 * 00000001404FBAA2: mov     rax, [rdi+5A0h]
 * 00000001404FBAA9: mov     [rsp+8E8h+var_538], rax
 * 00000001404FBAB1: lea     rax, [rsp+8E8h+var_538]
 * 00000001404FBAB9: mov     [rsp+8E8h+var_348], rax
 * 00000001404FBAC1: mov     [rsp+8E8h+var_340], 8
 * 00000001404FBACD: mov     rax, [rdi+510h]
 * 00000001404FBAD4: mov     [rsp+8E8h+var_530], rax
 * 00000001404FBADC: lea     rax, [rsp+8E8h+var_530]
 * 00000001404FBAE4: mov     [rsp+8E8h+var_338], rax
 * 00000001404FBAEC: mov     [rsp+8E8h+var_330], 8
 * 00000001404FBAF8: mov     rax, [rdi+518h]
 * 00000001404FBAFF: mov     [rsp+8E8h+var_528], rax
 * 00000001404FBB07: lea     rax, [rsp+8E8h+var_528]
 * 00000001404FBB0F: mov     [rsp+8E8h+var_328], rax
 * 00000001404FBB17: mov     [rsp+8E8h+var_320], 8
 * 00000001404FBB23: mov     rax, [rdi+520h]
 * 00000001404FBB2A: mov     [rsp+8E8h+var_520], rax
 * 00000001404FBB32: lea     rax, [rsp+8E8h+var_520]
 * 00000001404FBB3A: mov     [rsp+8E8h+var_318], rax
 * 00000001404FBB42: mov     [rsp+8E8h+var_310], 8
 * 00000001404FBB4E: mov     rax, [rdi+528h]
 * 00000001404FBB55: mov     [rsp+8E8h+var_518], rax
 * 00000001404FBB5D: lea     rax, [rsp+8E8h+var_518]
 * 00000001404FBB65: mov     [rsp+8E8h+var_308], rax
 * 00000001404FBB6D: mov     [rsp+8E8h+var_300], 8
 * 00000001404FBB79: mov     rax, [rdi+530h]
 * 00000001404FBB80: mov     [rsp+8E8h+var_510], rax
 * 00000001404FBB88: lea     rax, [rsp+8E8h+var_510]
 * 00000001404FBB90: mov     [rsp+8E8h+var_2F8], rax
 * 00000001404FBB98: mov     [rsp+8E8h+var_2F0], 8
 * 00000001404FBBA4: mov     rax, [rdi+538h]
 * 00000001404FBBAB: mov     [rsp+8E8h+var_508], rax
 * 00000001404FBBB3: lea     rax, [rsp+8E8h+var_508]
 * 00000001404FBBBB: mov     [rsp+8E8h+var_2E8], rax
 * 00000001404FBBC3: mov     [rsp+8E8h+var_2E0], 8
 * 00000001404FBBCF: mov     rax, [rdi+540h]
 * 00000001404FBBD6: mov     [rsp+8E8h+var_500], rax
 * 00000001404FBBDE: lea     rax, [rsp+8E8h+var_500]
 * 00000001404FBBE6: mov     [rsp+8E8h+var_2D8], rax
 * 00000001404FBBEE: mov     [rsp+8E8h+var_2D0], 8
 * 00000001404FBBFA: mov     rax, [rdi+548h]
 * 00000001404FBC01: mov     [rsp+8E8h+var_4F8], rax
 * 00000001404FBC09: lea     rax, [rsp+8E8h+var_4F8]
 * 00000001404FBC11: mov     [rsp+8E8h+var_2C8], rax
 * 00000001404FBC19: mov     [rsp+8E8h+var_2C0], 8
 * 00000001404FBC25: mov     rax, [rsp+8E8h+var_638]
 * 00000001404FBC2D: mov     [rsp+8E8h+var_4F0], rax
 * 00000001404FBC35: lea     rax, [rsp+8E8h+var_4F0]
 * 00000001404FBC3D: mov     [rsp+8E8h+var_2B8], rax
 * 00000001404FBC45: mov     [rsp+8E8h+var_2B0], 8
 * 00000001404FBC51: mov     rax, [rdi+550h]
 * 00000001404FBC58: mov     [rsp+8E8h+var_4E8], rax
 * 00000001404FBC60: lea     rax, [rsp+8E8h+var_4E8]
 * 00000001404FBC68: mov     [rsp+8E8h+var_2A8], rax
 * 00000001404FBC70: mov     [rsp+8E8h+var_2A0], 8
 * 00000001404FBC7C: mov     rax, [rdi+570h]
 * 00000001404FBC83: mov     [rsp+8E8h+var_4E0], rax
 * 00000001404FBC8B: lea     rax, [rsp+8E8h+var_4E0]
 * 00000001404FBC93: mov     [rsp+8E8h+var_298], rax
 * 00000001404FBC9B: mov     [rsp+8E8h+var_290], 8
 * 00000001404FBCA7: mov     rax, [rdi+578h]
 * 00000001404FBCAE: mov     [rsp+8E8h+var_4D8], rax
 * 00000001404FBCB6: lea     rax, [rsp+8E8h+var_4D8]
 * 00000001404FBCBE: mov     [rsp+8E8h+var_288], rax
 * 00000001404FBCC6: mov     [rsp+8E8h+var_280], 8
 * 00000001404FBCD2: mov     rax, [rdi+580h]
 * 00000001404FBCD9: mov     [rsp+8E8h+var_4D0], rax
 * 00000001404FBCE1: lea     rax, [rsp+8E8h+var_4D0]
 * 00000001404FBCE9: mov     [rsp+8E8h+var_278], rax
 * 00000001404FBCF1: mov     [rsp+8E8h+var_270], 8
 * 00000001404FBCFD: mov     rax, [rdi+558h]
 * 00000001404FBD04: mov     [rsp+8E8h+var_4C8], rax
 * 00000001404FBD0C: lea     rax, [rsp+8E8h+var_4C8]
 * 00000001404FBD14: mov     [rsp+8E8h+var_268], rax
 * 00000001404FBD1C: mov     [rsp+8E8h+var_260], 8
 * 00000001404FBD28: mov     rax, [rdi+560h]
 * 00000001404FBD2F: mov     [rsp+8E8h+var_4C0], rax
 * 00000001404FBD37: lea     rax, [rsp+8E8h+var_4C0]
 * 00000001404FBD3F: mov     [rsp+8E8h+var_258], rax
 * 00000001404FBD47: mov     [rsp+8E8h+var_250], 8
 * 00000001404FBD53: mov     rax, [rdi+568h]
 * 00000001404FBD5A: mov     [rsp+8E8h+var_4B8], rax
 * 00000001404FBD62: lea     rax, [rsp+8E8h+var_4B8]
 * 00000001404FBD6A: mov     [rsp+8E8h+var_248], rax
 * 00000001404FBD72: mov     [rsp+8E8h+var_240], 8
 * 00000001404FBD7E: mov     rax, [rdi+5A8h]
 * 00000001404FBD85: mov     [rsp+8E8h+var_4B0], rax
 * 00000001404FBD8D: lea     rax, [rsp+8E8h+var_4B0]
 * 00000001404FBD95: mov     [rsp+8E8h+var_238], rax
 * 00000001404FBD9D: mov     [rsp+8E8h+var_230], 8
 * 00000001404FBDA9: mov     rax, [rdi+5B0h]
 * 00000001404FBDB0: mov     [rsp+8E8h+var_4A8], rax
 * 00000001404FBDB8: lea     rax, [rsp+8E8h+var_4A8]
 * 00000001404FBDC0: mov     [rsp+8E8h+var_228], rax
 * 00000001404FBDC8: mov     [rsp+8E8h+var_220], 8
 * 00000001404FBDD4: mov     rax, [rdi+738h]
 * 00000001404FBDDB: mov     [rsp+8E8h+var_4A0], rax
 * 00000001404FBDE3: lea     rax, [rsp+8E8h+var_4A0]
 * 00000001404FBDEB: mov     [rsp+8E8h+var_218], rax
 * 00000001404FBDF3: mov     [rsp+8E8h+var_210], 8
 * 00000001404FBDFF: mov     rax, [rdi+740h]
 * 00000001404FBE06: mov     [rsp+8E8h+var_498], rax
 * 00000001404FBE0E: lea     rax, [rsp+8E8h+var_498]
 * 00000001404FBE16: mov     [rsp+8E8h+var_208], rax
 * 00000001404FBE1E: mov     [rsp+8E8h+var_200], 8
 * 00000001404FBE2A: mov     rax, [rdi+748h]
 * 00000001404FBE31: mov     [rsp+8E8h+var_490], rax
 * 00000001404FBE39: lea     rax, [rsp+8E8h+var_490]
 * 00000001404FBE41: mov     [rsp+8E8h+var_1F8], rax
 * 00000001404FBE49: mov     [rsp+8E8h+var_1F0], 8
 * 00000001404FBE55: mov     rax, [rdi+750h]
 * 00000001404FBE5C: mov     [rsp+8E8h+var_488], rax
 * 00000001404FBE64: lea     rax, [rsp+8E8h+var_488]
 * 00000001404FBE6C: mov     [rsp+8E8h+var_1E8], rax
 * 00000001404FBE74: mov     [rsp+8E8h+var_1E0], 8
 * 00000001404FBE80: mov     rax, [rdi+758h]
 * 00000001404FBE87: mov     [rsp+8E8h+var_480], rax
 * 00000001404FBE8F: lea     rax, [rsp+8E8h+var_480]
 * 00000001404FBE97: mov     [rsp+8E8h+var_1D8], rax
 * 00000001404FBE9F: mov     [rsp+8E8h+var_1D0], 8
 * 00000001404FBEAB: mov     rax, [rdi+8E0h]
 * 00000001404FBEB2: mov     [rsp+8E8h+var_478], rax
 * 00000001404FBEBA: lea     rax, [rsp+8E8h+var_478]
 * 00000001404FBEC2: mov     [rsp+8E8h+var_1C8], rax
 * 00000001404FBECA: mov     [rsp+8E8h+var_1C0], 8
 * 00000001404FBED6: mov     rax, [rdi+8E8h]
 * 00000001404FBEDD: mov     [rsp+8E8h+var_470], rax
 * 00000001404FBEE5: lea     rax, [rsp+8E8h+var_470]
 * 00000001404FBEED: mov     [rsp+8E8h+var_1B8], rax
 * 00000001404FBEF5: mov     [rsp+8E8h+var_1B0], 8
 * 00000001404FBF01: mov     rax, [rdi+588h]
 * 00000001404FBF08: mov     [rsp+8E8h+var_468], rax
 * 00000001404FBF10: lea     rax, [rsp+8E8h+var_468]
 * 00000001404FBF18: mov     [rsp+8E8h+var_1A8], rax
 * 00000001404FBF20: mov     [rsp+8E8h+var_1A0], 8
 * 00000001404FBF2C: mov     rax, [rdi+590h]
 * 00000001404FBF33: mov     [rsp+8E8h+var_460], rax
 * 00000001404FBF3B: lea     rax, [rsp+8E8h+var_460]
 * 00000001404FBF43: mov     [rsp+8E8h+var_198], rax
 * 00000001404FBF4B: mov     [rsp+8E8h+var_190], 8
 * 00000001404FBF57: mov     rax, [rdi+598h]
 * 00000001404FBF5E: mov     [rsp+8E8h+var_458], rax
 * 00000001404FBF66: lea     rax, [rsp+8E8h+var_458]
 * 00000001404FBF6E: mov     [rsp+8E8h+var_188], rax
 * 00000001404FBF76: mov     [rsp+8E8h+var_180], 8
 * 00000001404FBF82: lea     rdx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 00000001404FBF89: lea     rcx, [rsp+8E8h+var_178]
 * 00000001404FBF91: call    _tlgCreate1Sz_wchar_t
 * 00000001404FBF96: mov     edx, 0Ch
 * 00000001404FBF9B: mov     [rsp+8E8h+var_668], dx
 * 00000001404FBFA3: lea     rax, [rsp+8E8h+var_668]
 * 00000001404FBFAB: mov     [rsp+8E8h+var_168], rax
 * 00000001404FBFB3: mov     [rsp+8E8h+var_160], 2
 * 00000001404FBFBF: lea     rax, [rdi+5B8h]
 * 00000001404FBFC6: mov     [rsp+8E8h+var_158], rax
 * 00000001404FBFCE: mov     [rsp+8E8h+var_150], 60h ; '`'
 * 00000001404FBFDA: mov     [rsp+8E8h+var_664], dx
 * 00000001404FBFE2: lea     rax, [rsp+8E8h+var_664]
 * 00000001404FBFEA: mov     [rsp+8E8h+var_148], rax
 * 00000001404FBFF2: mov     [rsp+8E8h+var_140], 2
 * 00000001404FBFFE: lea     rax, [rdi+618h]
 * 00000001404FC005: mov     [rsp+8E8h+var_138], rax
 * 00000001404FC00D: mov     [rsp+8E8h+var_130], 60h ; '`'
 * 00000001404FC019: mov     [rsp+8E8h+var_660], dx
 * 00000001404FC021: lea     rax, [rsp+8E8h+var_660]
 * 00000001404FC029: mov     [rsp+8E8h+var_128], rax
 * 00000001404FC031: mov     [rsp+8E8h+var_120], 2
 * 00000001404FC03D: lea     rax, [rdi+678h]
 * 00000001404FC044: mov     [rsp+8E8h+var_118], rax
 * 00000001404FC04C: mov     [rsp+8E8h+var_110], 60h ; '`'
 * 00000001404FC058: mov     [rsp+8E8h+var_65C], dx
 * 00000001404FC060: lea     rax, [rsp+8E8h+var_65C]
 * 00000001404FC068: mov     [rsp+8E8h+var_108], rax
 * 00000001404FC070: mov     [rsp+8E8h+var_100], 2
 * 00000001404FC07C: lea     rax, [rdi+6D8h]
 * 00000001404FC083: mov     [rsp+8E8h+var_F8], rax
 * 00000001404FC08B: mov     [rsp+8E8h+var_F0], 60h ; '`'
 * 00000001404FC097: mov     [rsp+8E8h+var_658], dx
 * 00000001404FC09F: lea     rax, [rsp+8E8h+var_658]
 * 00000001404FC0A7: mov     [rsp+8E8h+var_E8], rax
 * 00000001404FC0AF: mov     [rsp+8E8h+var_E0], 2
 * 00000001404FC0BB: lea     rax, [rdi+760h]
 * 00000001404FC0C2: mov     [rsp+8E8h+var_D8], rax
 * 00000001404FC0CA: mov     [rsp+8E8h+var_D0], 60h ; '`'
 * 00000001404FC0D6: mov     [rsp+8E8h+var_654], dx
 * 00000001404FC0DE: lea     rax, [rsp+8E8h+var_654]
 * 00000001404FC0E6: mov     [rsp+8E8h+var_C8], rax
 * 00000001404FC0EE: mov     [rsp+8E8h+var_C0], 2
 * 00000001404FC0FA: lea     rax, [rdi+7C0h]
 * 00000001404FC101: mov     [rsp+8E8h+var_B8], rax
 * 00000001404FC109: mov     [rsp+8E8h+var_B0], 60h ; '`'
 * 00000001404FC115: mov     [rsp+8E8h+var_650], dx
 * 00000001404FC11D: lea     rax, [rsp+8E8h+var_650]
 * 00000001404FC125: mov     [rsp+8E8h+var_A8], rax
 * 00000001404FC12D: mov     [rsp+8E8h+var_A0], 2
 * 00000001404FC139: lea     rax, [rdi+820h]
 * 00000001404FC140: mov     [rsp+8E8h+var_98], rax
 * 00000001404FC148: mov     [rsp+8E8h+var_90], 60h ; '`'
 * 00000001404FC154: mov     [rsp+8E8h+var_64C], dx
 * 00000001404FC15C: lea     rax, [rsp+8E8h+var_64C]
 * 00000001404FC164: mov     [rsp+8E8h+var_88], rax
 * 00000001404FC16C: mov     [rsp+8E8h+var_80], 2
 * 00000001404FC178: lea     rax, [rdi+880h]
 * 00000001404FC17F: mov     [rsp+8E8h+var_78], rax
 * 00000001404FC187: mov     [rsp+8E8h+var_70], 60h ; '`'
 * 00000001404FC193: mov     [rsp+8E8h+var_648], dx
 * 00000001404FC19B: lea     rax, [rsp+8E8h+var_648]
 * 00000001404FC1A3: mov     [rsp+8E8h+var_68], rax
 * 00000001404FC1AB: mov     [rsp+8E8h+var_60], 2
 * 00000001404FC1B7: lea     rax, [rdi+8F0h]
 * 00000001404FC1BE: mov     [rsp+8E8h+var_58], rax
 * 00000001404FC1C6: mov     [rsp+8E8h+var_50], 60h ; '`'
 * 00000001404FC1D2: mov     [rsp+8E8h+var_644], dx
 * 00000001404FC1DA: lea     rax, [rsp+8E8h+var_644]
 * 00000001404FC1E2: mov     [rsp+8E8h+var_48], rax
 * 00000001404FC1EA: mov     [rsp+8E8h+var_40], 2
 * 00000001404FC1F6: lea     rax, [rdi+950h]
 * 00000001404FC1FD: mov     [rsp+8E8h+var_38], rax
 * 00000001404FC205: mov     [rsp+8E8h+var_30], 60h ; '`'
 * 00000001404FC211: lea     rax, [rsp+8E8h+var_438]
 * 00000001404FC219: mov     [rsp+8E8h+var_8C0], rax
 * 00000001404FC21E: mov     dword ptr [rsp+8E8h+var_8C8], 41h ; 'A'
 * 00000001404FC226: xor     r9d, r9d
 * 00000001404FC229: xor     r8d, r8d
 * 00000001404FC22C: lea     rdx, byte_1400295A1
 * 00000001404FC233: lea     rcx, dword_140C02F08
 * 00000001404FC23A: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001404FC23F: xor     r10d, r10d
 * 00000001404FC242: jmp     loc_1403D176E
 */
