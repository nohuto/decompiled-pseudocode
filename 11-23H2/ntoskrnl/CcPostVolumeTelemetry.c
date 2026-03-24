/*
 * XREFs of CcPostVolumeTelemetry @ 0x1403D10D0
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140880BC0 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6BE4 (_tlgCreate1Sz_wchar_t.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D1E00 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D2190 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D2664 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x1403D2D90 (CcAggregateCumulativeVolumeTelemetry.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x1403D3030 (McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x1405397F8 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     CcResetGlobalTelemetry @ 0x1407EAEC0 (CcResetGlobalTelemetry.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x140880C8C (CcAggregateCumulativeGlobalTelemetry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for CcPostVolumeTelemetry @ 0x1403D10D0
 * Reason: Hex-Rays returned no pseudocode for 0x1403D10D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403D10D0: mov     r11, rsp
 * 00000001403D10D3: mov     [r11+8], rbx
 * 00000001403D10D7: mov     [r11+10h], rsi
 * 00000001403D10DB: mov     [r11+18h], rdi
 * 00000001403D10DF: mov     [r11+20h], r12
 * 00000001403D10E3: push    r13
 * 00000001403D10E5: push    r14
 * 00000001403D10E7: push    r15
 * 00000001403D10E9: sub     rsp, 8D0h
 * 00000001403D10F0: mov     rax, cs:__security_cookie
 * 00000001403D10F7: xor     rax, rsp
 * 00000001403D10FA: mov     [rsp+8E8h+var_28], rax
 * 00000001403D1102: xor     r13b, r13b
 * 00000001403D1105: xorps   xmm0, xmm0
 * 00000001403D1108: xor     eax, eax
 * 00000001403D110A: movups  xmmword ptr [rsp+8E8h+LockHandle.LockQueue.Next], xmm0
 * 00000001403D1112: mov     [r11-608h], rax
 * 00000001403D1119: and     [rsp+8E8h+var_674], eax
 * 00000001403D1120: and     [rsp+8E8h+var_640], eax
 * 00000001403D1127: mov     rsi, 0FFFFF78000000014h
 * 00000001403D1131: mov     rsi, [rsi]
 * 00000001403D1134: mov     rbx, rsi
 * 00000001403D1137: sub     rbx, cs:qword_140C5F870
 * 00000001403D113E: mov     rdi, rsi
 * 00000001403D1141: sub     rdi, cs:qword_140C5F878
 * 00000001403D1148: cmp     rbx, qword ptr cs:unk_140C5F888
 * 00000001403D114F: jge     short loc_1403D1190
 * 00000001403D1151: mov     rax, cs:qword_140C5F898
 * 00000001403D1158: test    rax, rax
 * 00000001403D115B: jle     short loc_1403D1190
 * 00000001403D115D: mov     rcx, [rsp+8E8h+var_28]
 * 00000001403D1165: xor     rcx, rsp; StackCookie
 * 00000001403D1168: call    __security_check_cookie
 * 00000001403D116D: lea     r11, [rsp+8E8h+var_18]
 * 00000001403D1175: mov     rbx, [r11+20h]
 * 00000001403D1179: mov     rsi, [r11+28h]
 * 00000001403D117D: mov     rdi, [r11+30h]
 * 00000001403D1181: mov     r12, [r11+38h]
 * 00000001403D1185: mov     rsp, r11
 * 00000001403D1188: pop     r15
 * 00000001403D118A: pop     r14
 * 00000001403D118C: pop     r13
 * 00000001403D118E: retn
 * 00000001403D1190: cmp     rdi, cs:qword_140C5F890
 * 00000001403D1197: jge     loc_1404FB288
 * 00000001403D119D: cmp     cs:qword_140C5F898, 0
 * 00000001403D11A5: jz      loc_1404FB288
 * 00000001403D11AB: inc     cs:qword_140C5F898
 * 00000001403D11B2: mov     r14, cs:qword_140C5F8A8
 * 00000001403D11B9: add     r14, 0Ah
 * 00000001403D11BD: mov     [rsp+8E8h+var_638], r14
 * 00000001403D11C5: imul    rdx, r14, 9B0h; NumberOfBytes
 * 00000001403D11CC: mov     ecx, 600h; PoolType
 * 00000001403D11D1: mov     r8d, 65546343h; Tag
 * 00000001403D11D7: call    ExAllocatePoolWithTag
 * 00000001403D11DC: mov     [rsp+8E8h+P], rax
 * 00000001403D11E4: test    rax, rax
 * 00000001403D11E7: jz      loc_1403D115D
 * 00000001403D11ED: lea     rdx, [rsp+8E8h+LockHandle]; LockHandle
 * 00000001403D11F5: lea     rcx, CcMasterLock; SpinLock
 * 00000001403D11FC: call    KeAcquireInStackQueuedSpinLock
 * 00000001403D1201: mov     r12, cs:CcVolumeCacheMapList
 * 00000001403D1208: mov     [rsp+8E8h+var_450], r12
 * 00000001403D1210: lea     rax, CcVolumeCacheMapList
 * 00000001403D1217: cmp     r12, rax
 * 00000001403D121A: jz      loc_1403D1326
 * 00000001403D1220: mov     ecx, [rsp+8E8h+var_640]
 * 00000001403D1227: cmp     rcx, r14
 * 00000001403D122A: jnb     loc_1403D1326
 * 00000001403D1230: lea     r15, [r12-10h]
 * 00000001403D1235: mov     [rsp+8E8h+var_448], r15
 * 00000001403D123D: inc     ecx
 * 00000001403D123F: mov     [rsp+8E8h+var_640], ecx
 * 00000001403D1246: cmp     qword ptr [r15+168h], 0
 * 00000001403D124E: ja      short loc_1403D128F
 * 00000001403D1250: cmp     qword ptr [r15+170h], 0
 * 00000001403D1258: ja      short loc_1403D128F
 * 00000001403D125A: cmp     qword ptr [r15+178h], 0
 * 00000001403D1262: ja      short loc_1403D128F
 * 00000001403D1264: cmp     qword ptr [r15+348h], 0
 * 00000001403D126C: ja      short loc_1403D128F
 * 00000001403D126E: cmp     qword ptr [r15+350h], 0
 * 00000001403D1276: ja      short loc_1403D128F
 * 00000001403D1278: cmp     qword ptr [r15+358h], 0
 * 00000001403D1280: ja      short loc_1403D128F
 * 00000001403D1282: xor     al, al
 * 00000001403D1284: test    al, al
 * 00000001403D1286: jnz     short loc_1403D1293
 * 00000001403D1288: test    r13b, r13b
 * 00000001403D128B: jnz     short loc_1403D1302
 * 00000001403D128D: jmp     short loc_1403D1210
 * 00000001403D128F: mov     al, 1
 * 00000001403D1291: jmp     short loc_1403D1284
 * 00000001403D1293: lea     r14, [r15+0E0h]
 * 00000001403D129A: mov     rcx, r14
 * 00000001403D129D: call    CcAggregateCumulativeVolumeTelemetry
 * 00000001403D12A2: mov     eax, [rsp+8E8h+var_674]
 * 00000001403D12A9: imul    rcx, rax, 9B0h
 * 00000001403D12B0: add     rcx, [rsp+8E8h+P]; void *
 * 00000001403D12B8: mov     rdx, r14; Src
 * 00000001403D12BB: mov     r8d, 9B0h; Size
 * 00000001403D12C1: call    memmove
 * 00000001403D12C6: lea     rcx, [r15+0F0h]; void *
 * 00000001403D12CD: mov     r14d, 4D0h
 * 00000001403D12D3: mov     r8d, r14d; Size
 * 00000001403D12D6: xor     edx, edx; Val
 * 00000001403D12D8: call    memset
 * 00000001403D12DD: test    r13b, r13b
 * 00000001403D12E0: jnz     short loc_1403D1313
 * 00000001403D12E2: mov     r12, [r12]
 * 00000001403D12E6: mov     [rsp+8E8h+var_450], r12
 * 00000001403D12EE: inc     [rsp+8E8h+var_674]
 * 00000001403D12F5: mov     r14, [rsp+8E8h+var_638]
 * 00000001403D12FD: jmp     loc_1403D1210
 * 00000001403D1302: mov     rcx, r15
 * 00000001403D1305: call    CcHasVolumeCumulativeTelemetryChanged
 * 00000001403D130A: test    al, al
 * 00000001403D130C: jnz     short loc_1403D1293
 * 00000001403D130E: jmp     loc_1403D128D
 * 00000001403D1313: lea     rcx, [r15+5C0h]; void *
 * 00000001403D131A: mov     r8, r14; Size
 * 00000001403D131D: xor     edx, edx; Val
 * 00000001403D131F: call    memset
 * 00000001403D1324: jmp     short loc_1403D12E2
 * 00000001403D1326: lea     rcx, [rsp+8E8h+LockHandle]
 * 00000001403D132E: call    KxReleaseQueuedSpinLock
 * 00000001403D1333: mov     r14, qword ptr [rsp+8E8h+LockHandle.OldIrql]
 * 00000001403D133B: mov     ecx, cs:KiIrqlFlags
 * 00000001403D1341: test    ecx, ecx
 * 00000001403D1343: jnz     loc_1404FB290
 * 00000001403D1349: movzx   eax, r14b
 * 00000001403D134D: mov     cr8, rax
 * 00000001403D1351: call    CcAggregateCumulativeGlobalTelemetry
 * 00000001403D1356: mov     ecx, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D135C: mov     r15, 6666666666666667h
 * 00000001403D1366: test    cl, 1
 * 00000001403D1369: jz      loc_1403D1454
 * 00000001403D136F: mov     rax, r15
 * 00000001403D1372: imul    rbx
 * 00000001403D1375: sar     rdx, 2
 * 00000001403D1379: mov     r9, rdx
 * 00000001403D137C: shr     r9, 3Fh
 * 00000001403D1380: add     r9, rdx
 * 00000001403D1383: mov     rax, cs:qword_140C5F8E0
 * 00000001403D138A: mov     [rsp+8E8h+var_850], rax
 * 00000001403D1392: mov     rax, cs:qword_140C5F8D8
 * 00000001403D1399: mov     [rsp+8E8h+var_858], rax
 * 00000001403D13A1: mov     rax, cs:qword_140C5F8D0
 * 00000001403D13A8: mov     [rsp+8E8h+var_860], rax
 * 00000001403D13B0: mov     rax, cs:qword_140C5F8C8
 * 00000001403D13B7: mov     [rsp+8E8h+var_868], rax
 * 00000001403D13BF: mov     rax, cs:qword_140C5F8C0
 * 00000001403D13C6: mov     [rsp+8E8h+var_870], rax
 * 00000001403D13CB: mov     rax, cs:qword_140C5F928
 * 00000001403D13D2: mov     [rsp+8E8h+var_878], rax
 * 00000001403D13D7: mov     rax, cs:qword_140C5F920
 * 00000001403D13DE: mov     [rsp+8E8h+var_880], rax
 * 00000001403D13E3: mov     rax, cs:qword_140C5F918
 * 00000001403D13EA: mov     [rsp+8E8h+var_888], rax
 * 00000001403D13EF: mov     rax, cs:qword_140C5F910
 * 00000001403D13F6: mov     [rsp+8E8h+var_890], rax
 * 00000001403D13FB: mov     rax, cs:qword_140C5F908
 * 00000001403D1402: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1407: mov     rax, cs:qword_140C5F900
 * 00000001403D140E: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D1413: mov     rax, cs:qword_140C5F8F8
 * 00000001403D141A: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D141F: mov     rax, cs:qword_140C5F8F0
 * 00000001403D1426: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D142B: mov     rax, cs:qword_140C5F8E8
 * 00000001403D1432: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1437: mov     rax, cs:qword_140C5F8B8
 * 00000001403D143E: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1443: mov     rax, cs:qword_140C5F8B0
 * 00000001403D144A: mov     [rsp+8E8h+var_8C8], rax
 * 00000001403D144F: call    McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer
 * 00000001403D1454: call    CcResetGlobalTelemetry
 * 00000001403D1459: xor     r10d, r10d
 * 00000001403D145C: test    r13b, r13b
 * 00000001403D145F: jnz     loc_1404FB303
 * 00000001403D1465: mov     eax, r10d
 * 00000001403D1468: mov     [rsp+8E8h+var_670], eax
 * 00000001403D146F: mov     edx, [rsp+8E8h+var_674]
 * 00000001403D1476: mov     ecx, eax
 * 00000001403D1478: cmp     rcx, rdx
 * 00000001403D147B: jnb     loc_1403D1DDC
 * 00000001403D1481: imul    rdi, rcx, 9B0h
 * 00000001403D1488: add     rdi, [rsp+8E8h+P]
 * 00000001403D1490: mov     r8, [rdi+70h]
 * 00000001403D1494: test    r8, r8
 * 00000001403D1497: jz      loc_1404FB73F
 * 00000001403D149D: mov     rax, r8
 * 00000001403D14A0: sub     rax, [rdi+78h]
 * 00000001403D14A4: imul    rax, 64h ; 'd'
 * 00000001403D14A8: xor     edx, edx
 * 00000001403D14AA: div     r8
 * 00000001403D14AD: mov     r9, rax
 * 00000001403D14B0: mov     [rsp+8E8h+var_638], r9
 * 00000001403D14B8: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D14BE: test    al, 1
 * 00000001403D14C0: jz      loc_1403D169E
 * 00000001403D14C6: mov     rax, r15
 * 00000001403D14C9: imul    rbx
 * 00000001403D14CC: sar     rdx, 2
 * 00000001403D14D0: mov     rax, rdx
 * 00000001403D14D3: shr     rax, 3Fh
 * 00000001403D14D7: add     rdx, rax
 * 00000001403D14DA: mov     rax, [rdi+418h]
 * 00000001403D14E1: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D14E9: mov     rax, [rdi+410h]
 * 00000001403D14F0: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D14F8: mov     rax, [rdi+288h]
 * 00000001403D14FF: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D1507: mov     rax, [rdi+280h]
 * 00000001403D150E: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D1516: mov     rax, [rdi+278h]
 * 00000001403D151D: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D1525: mov     rax, [rdi+270h]
 * 00000001403D152C: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D1534: mov     rax, [rdi+268h]
 * 00000001403D153B: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D1543: mov     rax, [rdi+0E0h]
 * 00000001403D154A: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D1552: mov     rax, [rdi+0D8h]
 * 00000001403D1559: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D1561: mov     rax, [rdi+98h]
 * 00000001403D1568: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D1570: mov     rax, [rdi+90h]
 * 00000001403D1577: mov     [rsp+8E8h+var_800], rax
 * 00000001403D157F: mov     rax, [rdi+88h]
 * 00000001403D1586: mov     [rsp+8E8h+var_808], rax
 * 00000001403D158E: mov     rax, [rdi+0B0h]
 * 00000001403D1595: mov     [rsp+8E8h+var_810], rax
 * 00000001403D159D: mov     rax, [rdi+0A8h]
 * 00000001403D15A4: mov     [rsp+8E8h+var_818], rax
 * 00000001403D15AC: mov     rax, [rdi+0A0h]
 * 00000001403D15B3: mov     [rsp+8E8h+var_820], rax
 * 00000001403D15BB: mov     [rsp+8E8h+var_828], r9
 * 00000001403D15C3: mov     rax, [rdi+80h]
 * 00000001403D15CA: mov     [rsp+8E8h+var_830], rax
 * 00000001403D15D2: mov     rax, [rdi+78h]
 * 00000001403D15D6: mov     [rsp+8E8h+var_838], rax
 * 00000001403D15DE: mov     [rsp+8E8h+var_840], r8
 * 00000001403D15E6: mov     rax, [rdi+68h]
 * 00000001403D15EA: mov     [rsp+8E8h+var_848], rax
 * 00000001403D15F2: mov     rax, [rdi+60h]
 * 00000001403D15F6: mov     [rsp+8E8h+var_850], rax
 * 00000001403D15FE: mov     rax, [rdi+58h]
 * 00000001403D1602: mov     [rsp+8E8h+var_858], rax
 * 00000001403D160A: mov     rax, [rdi+50h]
 * 00000001403D160E: mov     [rsp+8E8h+var_860], rax
 * 00000001403D1616: mov     rax, [rdi+48h]
 * 00000001403D161A: mov     [rsp+8E8h+var_868], rax
 * 00000001403D1622: mov     rax, [rdi+40h]
 * 00000001403D1626: mov     [rsp+8E8h+var_870], rax
 * 00000001403D162B: mov     rax, [rdi+0D0h]
 * 00000001403D1632: mov     [rsp+8E8h+var_878], rax
 * 00000001403D1637: mov     rax, [rdi+0C8h]
 * 00000001403D163E: mov     [rsp+8E8h+var_880], rax
 * 00000001403D1643: mov     rax, [rdi+0C0h]
 * 00000001403D164A: mov     [rsp+8E8h+var_888], rax
 * 00000001403D164F: mov     rax, [rdi+0B8h]
 * 00000001403D1656: mov     [rsp+8E8h+var_890], rax
 * 00000001403D165B: mov     rax, [rdi+38h]
 * 00000001403D165F: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1664: mov     rax, [rdi+30h]
 * 00000001403D1668: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D166D: mov     rax, [rdi+28h]
 * 00000001403D1671: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1676: mov     rax, [rdi+20h]
 * 00000001403D167A: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D167F: mov     rax, [rdi+18h]
 * 00000001403D1683: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1688: mov     rax, [rdi+10h]
 * 00000001403D168C: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1691: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D1696: mov     r9, rdi
 * 00000001403D1699: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D169E: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D16A4: test    al, 1
 * 00000001403D16A6: jz      loc_1403D1AE4
 * 00000001403D16AC: mov     rax, r15
 * 00000001403D16AF: imul    rbx
 * 00000001403D16B2: sar     rdx, 2
 * 00000001403D16B6: mov     rax, rdx
 * 00000001403D16B9: shr     rax, 3Fh
 * 00000001403D16BD: add     rdx, rax
 * 00000001403D16C0: mov     rax, [rdi+4D8h]
 * 00000001403D16C7: mov     [rsp+8E8h+var_688], rax
 * 00000001403D16CF: mov     rax, [rdi+4D0h]
 * 00000001403D16D6: mov     [rsp+8E8h+var_690], rax
 * 00000001403D16DE: mov     rax, [rdi+4C8h]
 * 00000001403D16E5: mov     [rsp+8E8h+var_698], rax
 * 00000001403D16ED: mov     rax, [rdi+4C0h]
 * 00000001403D16F4: mov     [rsp+8E8h+var_6A0], rax
 * 00000001403D16FC: mov     rax, [rdi+4B8h]
 * 00000001403D1703: mov     [rsp+8E8h+var_6A8], rax
 * 00000001403D170B: mov     rax, [rdi+4B0h]
 * 00000001403D1712: mov     [rsp+8E8h+var_6B0], rax
 * 00000001403D171A: mov     rax, [rdi+4A8h]
 * 00000001403D1721: mov     [rsp+8E8h+var_6B8], rax
 * 00000001403D1729: mov     rax, [rdi+4A0h]
 * 00000001403D1730: mov     [rsp+8E8h+var_6C0], rax
 * 00000001403D1738: mov     rax, [rdi+498h]
 * 00000001403D173F: mov     [rsp+8E8h+var_6C8], rax
 * 00000001403D1747: mov     rax, [rdi+490h]
 * 00000001403D174E: mov     [rsp+8E8h+var_6D0], rax
 * 00000001403D1756: mov     rax, [rdi+488h]
 * 00000001403D175D: mov     [rsp+8E8h+var_6D8], rax
 * 00000001403D1765: mov     rax, [rdi+480h]
 * 00000001403D176C: mov     [rsp+8E8h+var_6E0], rax
 * 00000001403D1774: mov     rax, [rdi+478h]
 * 00000001403D177B: mov     [rsp+8E8h+var_6E8], rax
 * 00000001403D1783: mov     rax, [rdi+470h]
 * 00000001403D178A: mov     [rsp+8E8h+var_6F0], rax
 * 00000001403D1792: mov     rax, [rdi+468h]
 * 00000001403D1799: mov     [rsp+8E8h+var_6F8], rax
 * 00000001403D17A1: mov     rax, [rdi+460h]
 * 00000001403D17A8: mov     [rsp+8E8h+var_700], rax
 * 00000001403D17B0: mov     rax, [rdi+458h]
 * 00000001403D17B7: mov     [rsp+8E8h+var_708], rax
 * 00000001403D17BF: mov     rax, [rdi+450h]
 * 00000001403D17C6: mov     [rsp+8E8h+var_710], rax
 * 00000001403D17CE: mov     rax, [rdi+448h]
 * 00000001403D17D5: mov     [rsp+8E8h+var_718], rax
 * 00000001403D17DD: mov     rax, [rdi+440h]
 * 00000001403D17E4: mov     [rsp+8E8h+var_720], rax
 * 00000001403D17EC: mov     rax, [rdi+438h]
 * 00000001403D17F3: mov     [rsp+8E8h+var_728], rax
 * 00000001403D17FB: mov     rax, [rdi+430h]
 * 00000001403D1802: mov     [rsp+8E8h+var_730], rax
 * 00000001403D180A: mov     rax, [rdi+428h]
 * 00000001403D1811: mov     [rsp+8E8h+var_738], rax
 * 00000001403D1819: mov     rax, [rdi+420h]
 * 00000001403D1820: mov     [rsp+8E8h+var_740], rax
 * 00000001403D1828: mov     rax, [rdi+260h]
 * 00000001403D182F: mov     [rsp+8E8h+var_748], rax
 * 00000001403D1837: mov     rax, [rdi+258h]
 * 00000001403D183E: mov     [rsp+8E8h+var_750], rax
 * 00000001403D1846: mov     rax, [rdi+250h]
 * 00000001403D184D: mov     [rsp+8E8h+var_758], rax
 * 00000001403D1855: mov     rax, [rdi+248h]
 * 00000001403D185C: mov     [rsp+8E8h+var_760], rax
 * 00000001403D1864: mov     rax, [rdi+240h]
 * 00000001403D186B: mov     [rsp+8E8h+var_768], rax
 * 00000001403D1873: mov     rax, [rdi+238h]
 * 00000001403D187A: mov     [rsp+8E8h+var_770], rax
 * 00000001403D1882: mov     rax, [rdi+230h]
 * 00000001403D1889: mov     [rsp+8E8h+var_778], rax
 * 00000001403D1891: mov     rax, [rdi+228h]
 * 00000001403D1898: mov     [rsp+8E8h+var_780], rax
 * 00000001403D18A0: mov     rax, [rdi+220h]
 * 00000001403D18A7: mov     [rsp+8E8h+var_788], rax
 * 00000001403D18AF: mov     rax, [rdi+218h]
 * 00000001403D18B6: mov     [rsp+8E8h+var_790], rax
 * 00000001403D18BE: mov     rax, [rdi+210h]
 * 00000001403D18C5: mov     [rsp+8E8h+var_798], rax
 * 00000001403D18CD: mov     rax, [rdi+208h]
 * 00000001403D18D4: mov     [rsp+8E8h+var_7A0], rax
 * 00000001403D18DC: mov     rax, [rdi+200h]
 * 00000001403D18E3: mov     [rsp+8E8h+var_7A8], rax
 * 00000001403D18EB: mov     rax, [rdi+1F8h]
 * 00000001403D18F2: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D18FA: mov     rax, [rdi+1F0h]
 * 00000001403D1901: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D1909: mov     rax, [rdi+1E8h]
 * 00000001403D1910: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D1918: mov     rax, [rdi+1E0h]
 * 00000001403D191F: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D1927: mov     rax, [rdi+1D8h]
 * 00000001403D192E: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D1936: mov     rax, [rdi+1D0h]
 * 00000001403D193D: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D1945: mov     rax, [rdi+1C8h]
 * 00000001403D194C: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D1954: mov     rax, [rdi+1C0h]
 * 00000001403D195B: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D1963: mov     rax, [rdi+1B8h]
 * 00000001403D196A: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D1972: mov     rax, [rdi+1B0h]
 * 00000001403D1979: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D1981: mov     rax, [rdi+1A8h]
 * 00000001403D1988: mov     [rsp+8E8h+var_800], rax
 * 00000001403D1990: mov     rax, [rdi+1A0h]
 * 00000001403D1997: mov     [rsp+8E8h+var_808], rax
 * 00000001403D199F: mov     rax, [rdi+198h]
 * 00000001403D19A6: mov     [rsp+8E8h+var_810], rax
 * 00000001403D19AE: mov     rax, [rdi+190h]
 * 00000001403D19B5: mov     [rsp+8E8h+var_818], rax
 * 00000001403D19BD: mov     rax, [rdi+188h]
 * 00000001403D19C4: mov     [rsp+8E8h+var_820], rax
 * 00000001403D19CC: mov     rax, [rdi+180h]
 * 00000001403D19D3: mov     [rsp+8E8h+var_828], rax
 * 00000001403D19DB: mov     rax, [rdi+178h]
 * 00000001403D19E2: mov     [rsp+8E8h+var_830], rax
 * 00000001403D19EA: mov     rax, [rdi+170h]
 * 00000001403D19F1: mov     [rsp+8E8h+var_838], rax
 * 00000001403D19F9: mov     rax, [rdi+168h]
 * 00000001403D1A00: mov     [rsp+8E8h+var_840], rax
 * 00000001403D1A08: mov     rax, [rdi+160h]
 * 00000001403D1A0F: mov     [rsp+8E8h+var_848], rax
 * 00000001403D1A17: mov     rax, [rdi+158h]
 * 00000001403D1A1E: mov     [rsp+8E8h+var_850], rax
 * 00000001403D1A26: mov     rax, [rdi+150h]
 * 00000001403D1A2D: mov     [rsp+8E8h+var_858], rax
 * 00000001403D1A35: mov     rax, [rdi+148h]
 * 00000001403D1A3C: mov     [rsp+8E8h+var_860], rax
 * 00000001403D1A44: mov     rax, [rdi+140h]
 * 00000001403D1A4B: mov     [rsp+8E8h+var_868], rax
 * 00000001403D1A53: mov     rax, [rdi+138h]
 * 00000001403D1A5A: mov     [rsp+8E8h+var_870], rax
 * 00000001403D1A5F: mov     rax, [rdi+130h]
 * 00000001403D1A66: mov     [rsp+8E8h+var_878], rax
 * 00000001403D1A6B: mov     rax, [rdi+128h]
 * 00000001403D1A72: mov     [rsp+8E8h+var_880], rax
 * 00000001403D1A77: mov     rax, [rdi+120h]
 * 00000001403D1A7E: mov     [rsp+8E8h+var_888], rax
 * 00000001403D1A83: mov     rax, [rdi+118h]
 * 00000001403D1A8A: mov     [rsp+8E8h+var_890], rax
 * 00000001403D1A8F: mov     rax, [rdi+110h]
 * 00000001403D1A96: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1A9B: mov     rax, [rdi+108h]
 * 00000001403D1AA2: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D1AA7: mov     rax, [rdi+100h]
 * 00000001403D1AAE: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1AB3: mov     rax, [rdi+0F8h]
 * 00000001403D1ABA: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D1ABF: mov     rax, [rdi+0F0h]
 * 00000001403D1AC6: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1ACB: mov     rax, [rdi+0E8h]
 * 00000001403D1AD2: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1AD7: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D1ADC: mov     r9, rdi
 * 00000001403D1ADF: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D1AE4: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D1AEA: test    al, 1
 * 00000001403D1AEC: jz      loc_1403D1DC2
 * 00000001403D1AF2: mov     rax, r15
 * 00000001403D1AF5: imul    rbx
 * 00000001403D1AF8: sar     rdx, 2
 * 00000001403D1AFC: mov     rax, rdx
 * 00000001403D1AFF: shr     rax, 3Fh
 * 00000001403D1B03: add     rdx, rax
 * 00000001403D1B06: mov     rax, [rdi+408h]
 * 00000001403D1B0D: mov     [rsp+8E8h+var_748], rax
 * 00000001403D1B15: mov     rax, [rdi+400h]
 * 00000001403D1B1C: mov     [rsp+8E8h+var_750], rax
 * 00000001403D1B24: mov     rax, [rdi+3F8h]
 * 00000001403D1B2B: mov     [rsp+8E8h+var_758], rax
 * 00000001403D1B33: mov     rax, [rdi+3F0h]
 * 00000001403D1B3A: mov     [rsp+8E8h+var_760], rax
 * 00000001403D1B42: mov     rax, [rdi+3E8h]
 * 00000001403D1B49: mov     [rsp+8E8h+var_768], rax
 * 00000001403D1B51: mov     rax, [rdi+3E0h]
 * 00000001403D1B58: mov     [rsp+8E8h+var_770], rax
 * 00000001403D1B60: mov     rax, [rdi+3D8h]
 * 00000001403D1B67: mov     [rsp+8E8h+var_778], rax
 * 00000001403D1B6F: mov     rax, [rdi+3D0h]
 * 00000001403D1B76: mov     [rsp+8E8h+var_780], rax
 * 00000001403D1B7E: mov     rax, [rdi+3C8h]
 * 00000001403D1B85: mov     [rsp+8E8h+var_788], rax
 * 00000001403D1B8D: mov     rax, [rdi+3C0h]
 * 00000001403D1B94: mov     [rsp+8E8h+var_790], rax
 * 00000001403D1B9C: mov     rax, [rdi+3B8h]
 * 00000001403D1BA3: mov     [rsp+8E8h+var_798], rax
 * 00000001403D1BAB: mov     rax, [rdi+3B0h]
 * 00000001403D1BB2: mov     [rsp+8E8h+var_7A0], rax
 * 00000001403D1BBA: mov     rax, [rdi+3A8h]
 * 00000001403D1BC1: mov     [rsp+8E8h+var_7A8], rax
 * 00000001403D1BC9: mov     rax, [rdi+3A0h]
 * 00000001403D1BD0: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D1BD8: mov     rax, [rdi+398h]
 * 00000001403D1BDF: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D1BE7: mov     rax, [rdi+390h]
 * 00000001403D1BEE: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D1BF6: mov     rax, [rdi+388h]
 * 00000001403D1BFD: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D1C05: mov     rax, [rdi+380h]
 * 00000001403D1C0C: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D1C14: mov     rax, [rdi+378h]
 * 00000001403D1C1B: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D1C23: mov     rax, [rdi+370h]
 * 00000001403D1C2A: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D1C32: mov     rax, [rdi+368h]
 * 00000001403D1C39: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D1C41: mov     rax, [rdi+360h]
 * 00000001403D1C48: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D1C50: mov     rax, [rdi+358h]
 * 00000001403D1C57: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D1C5F: mov     rax, [rdi+350h]
 * 00000001403D1C66: mov     [rsp+8E8h+var_800], rax
 * 00000001403D1C6E: mov     rax, [rdi+348h]
 * 00000001403D1C75: mov     [rsp+8E8h+var_808], rax
 * 00000001403D1C7D: mov     rax, [rdi+340h]
 * 00000001403D1C84: mov     [rsp+8E8h+var_810], rax
 * 00000001403D1C8C: mov     rax, [rdi+338h]
 * 00000001403D1C93: mov     [rsp+8E8h+var_818], rax
 * 00000001403D1C9B: mov     rax, [rdi+330h]
 * 00000001403D1CA2: mov     [rsp+8E8h+var_820], rax
 * 00000001403D1CAA: mov     rax, [rdi+328h]
 * 00000001403D1CB1: mov     [rsp+8E8h+var_828], rax
 * 00000001403D1CB9: mov     rax, [rdi+320h]
 * 00000001403D1CC0: mov     [rsp+8E8h+var_830], rax
 * 00000001403D1CC8: mov     rax, [rdi+318h]
 * 00000001403D1CCF: mov     [rsp+8E8h+var_838], rax
 * 00000001403D1CD7: mov     rax, [rdi+310h]
 * 00000001403D1CDE: mov     [rsp+8E8h+var_840], rax
 * 00000001403D1CE6: mov     rax, [rdi+308h]
 * 00000001403D1CED: mov     [rsp+8E8h+var_848], rax
 * 00000001403D1CF5: mov     rax, [rdi+300h]
 * 00000001403D1CFC: mov     [rsp+8E8h+var_850], rax
 * 00000001403D1D04: mov     rax, [rdi+2F8h]
 * 00000001403D1D0B: mov     [rsp+8E8h+var_858], rax
 * 00000001403D1D13: mov     rax, [rdi+2F0h]
 * 00000001403D1D1A: mov     [rsp+8E8h+var_860], rax
 * 00000001403D1D22: mov     rax, [rdi+2E8h]
 * 00000001403D1D29: mov     [rsp+8E8h+var_868], rax
 * 00000001403D1D31: mov     rax, [rdi+2E0h]
 * 00000001403D1D38: mov     [rsp+8E8h+var_870], rax
 * 00000001403D1D3D: mov     rax, [rdi+2D8h]
 * 00000001403D1D44: mov     [rsp+8E8h+var_878], rax
 * 00000001403D1D49: mov     rax, [rdi+2D0h]
 * 00000001403D1D50: mov     [rsp+8E8h+var_880], rax
 * 00000001403D1D55: mov     rax, [rdi+2C8h]
 * 00000001403D1D5C: mov     [rsp+8E8h+var_888], rax
 * 00000001403D1D61: mov     rax, [rdi+2C0h]
 * 00000001403D1D68: mov     [rsp+8E8h+var_890], rax
 * 00000001403D1D6D: mov     rax, [rdi+2B8h]
 * 00000001403D1D74: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1D79: mov     rax, [rdi+2B0h]
 * 00000001403D1D80: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D1D85: mov     rax, [rdi+2A8h]
 * 00000001403D1D8C: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1D91: mov     rax, [rdi+2A0h]
 * 00000001403D1D98: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D1D9D: mov     rax, [rdi+298h]
 * 00000001403D1DA4: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1DA9: mov     rax, [rdi+290h]
 * 00000001403D1DB0: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1DB5: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D1DBA: mov     r9, rdi
 * 00000001403D1DBD: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D1DC2: xor     r10d, r10d
 * 00000001403D1DC5: test    r13b, r13b
 * 00000001403D1DC8: jnz     loc_1404FB747
 * 00000001403D1DCE: mov     eax, [rsp+8E8h+var_670]
 * 00000001403D1DD5: inc     eax
 * 00000001403D1DD7: jmp     loc_1403D1468
 * 00000001403D1DDC: mov     cs:qword_140C5F870, rsi
 * 00000001403D1DE3: xor     edx, edx; Tag
 * 00000001403D1DE5: mov     rcx, [rsp+8E8h+P]; P
 * 00000001403D1DED: call    ExFreePoolWithTag
 * 00000001403D1DF2: jmp     loc_1403D115D
 * 0000000140441DA0: push    rbx
 * 0000000140441DA2: push    rbp
 * 0000000140441DA3: sub     rsp, 278h
 * 0000000140441DAA: mov     rbp, rdx
 * 0000000140441DAD: lea     rcx, [rbp+2D0h]
 * 0000000140441DB4: call    KxReleaseQueuedSpinLock
 * 0000000140441DB9: mov     rbx, [rbp+2E0h]
 * 0000000140441DC0: mov     ecx, cs:KiIrqlFlags
 * 0000000140441DC6: test    ecx, ecx
 * 0000000140441DC8: jz      short loc_140441E26
 * 0000000140441DCA: mov     rax, cr8
 * 0000000140441DCE: mov     [rbp+27Ch], al
 * 0000000140441DD4: test    cl, 1
 * 0000000140441DD7: jz      short loc_140441E26
 * 0000000140441DD9: cmp     al, 0Fh
 * 0000000140441DDB: ja      short loc_140441E26
 * 0000000140441DDD: cmp     bl, 0Fh
 * 0000000140441DE0: ja      short loc_140441E26
 * 0000000140441DE2: cmp     al, 2
 * 0000000140441DE4: jb      short loc_140441E26
 * 0000000140441DE6: mov     r10, gs:20h
 * 0000000140441DEF: mov     r9, [r10+88B8h]
 * 0000000140441DF6: mov     r8d, [r9+14h]
 * 0000000140441DFA: movzx   ecx, byte ptr [rbp+2E0h]
 * 0000000140441E01: inc     ecx
 * 0000000140441E03: mov     edx, 1
 * 0000000140441E08: shl     rdx, cl
 * 0000000140441E0B: dec     edx
 * 0000000140441E0D: not     edx
 * 0000000140441E0F: movzx   eax, dx
 * 0000000140441E12: not     eax
 * 0000000140441E14: and     r8d, eax
 * 0000000140441E17: mov     [r9+14h], r8d
 * 0000000140441E1B: jnz     short loc_140441E26
 * 0000000140441E1D: mov     rcx, r10
 * 0000000140441E20: call    KiRemoveSystemWorkPriorityKick
 * 0000000140441E25: nop
 * 0000000140441E26: movzx   eax, bl
 * 0000000140441E29: mov     cr8, rax
 * 0000000140441E2D: add     rsp, 278h
 * 0000000140441E34: pop     rbp
 * 0000000140441E35: pop     rbx
 * 0000000140441E36: retn
 * 00000001404FB288: mov     r13b, 1
 * 00000001404FB28B: jmp     loc_1403D11AB
 * 00000001404FB290: mov     rax, cr8
 * 00000001404FB294: test    cl, 1
 * 00000001404FB297: jz      loc_1403D1349
 * 00000001404FB29D: cmp     al, 0Fh
 * 00000001404FB29F: ja      loc_1403D1349
 * 00000001404FB2A5: cmp     r14b, 0Fh
 * 00000001404FB2A9: ja      loc_1403D1349
 * 00000001404FB2AF: mov     r12d, 2
 * 00000001404FB2B5: cmp     al, r12b
 * 00000001404FB2B8: jb      loc_1403D1349
 * 00000001404FB2BE: mov     r10, gs:20h
 * 00000001404FB2C7: mov     r9, [r10+88B8h]
 * 00000001404FB2CE: mov     r8d, [r9+14h]
 * 00000001404FB2D2: movzx   ecx, [rsp+8E8h+LockHandle.OldIrql]
 * 00000001404FB2DA: inc     ecx
 * 00000001404FB2DC: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001404FB2E0: shl     rdx, cl
 * 00000001404FB2E3: movzx   eax, dx
 * 00000001404FB2E6: not     eax
 * 00000001404FB2E8: and     r8d, eax
 * 00000001404FB2EB: mov     [r9+14h], r8d
 * 00000001404FB2EF: jnz     loc_1403D1349
 * 00000001404FB2F5: mov     rcx, r10
 * 00000001404FB2F8: call    KiRemoveSystemWorkPriorityKick
 * 00000001404FB2FD: nop
 * 00000001404FB2FE: jmp     loc_1403D1349
 * 00000001404FB303: mov     r9d, 5
 * 00000001404FB309: cmp     cs:dword_140C02F08, r9d
 * 00000001404FB310: jbe     loc_1404FB6C3
 * 00000001404FB316: mov     rdx, 400000000000h
 * 00000001404FB320: lea     rcx, dword_140C02F08
 * 00000001404FB327: call    _tlgKeywordOn
 * 00000001404FB32C: test    al, al
 * 00000001404FB32E: jz      loc_1404FB6C3
 * 00000001404FB334: mov     [rsp+8E8h+var_600], 1000000h
 * 00000001404FB340: lea     rax, [rsp+8E8h+var_600]
 * 00000001404FB348: mov     [rsp+8E8h+var_418], rax
 * 00000001404FB350: mov     [rsp+8E8h+var_410], 8
 * 00000001404FB35C: mov     [rsp+8E8h+var_678], r9w
 * 00000001404FB365: lea     rax, [rsp+8E8h+var_678]
 * 00000001404FB36D: mov     [rsp+8E8h+var_408], rax
 * 00000001404FB375: mov     [rsp+8E8h+var_400], 2
 * 00000001404FB381: mov     rax, r15
 * 00000001404FB384: imul    rdi
 * 00000001404FB387: sar     rdx, 2
 * 00000001404FB38B: mov     rax, rdx
 * 00000001404FB38E: shr     rax, 3Fh
 * 00000001404FB392: add     rdx, rax
 * 00000001404FB395: mov     [rsp+8E8h+var_5F8], rdx
 * 00000001404FB39D: lea     rax, [rsp+8E8h+var_5F8]
 * 00000001404FB3A5: mov     [rsp+8E8h+var_3F8], rax
 * 00000001404FB3AD: mov     [rsp+8E8h+var_3F0], 8
 * 00000001404FB3B9: mov     eax, cs:CcNumberNumaNodes
 * 00000001404FB3BF: mov     [rsp+8E8h+var_670], eax
 * 00000001404FB3C6: lea     rax, [rsp+8E8h+var_670]
 * 00000001404FB3CE: mov     [rsp+8E8h+var_3E8], rax
 * 00000001404FB3D6: mov     [rsp+8E8h+var_3E0], 4
 * 00000001404FB3E2: mov     rax, cs:qword_140C5F930
 * 00000001404FB3E9: mov     [rsp+8E8h+var_5F0], rax
 * 00000001404FB3F1: lea     rax, [rsp+8E8h+var_5F0]
 * 00000001404FB3F9: mov     [rsp+8E8h+var_3D8], rax
 * 00000001404FB401: mov     [rsp+8E8h+var_3D0], 8
 * 00000001404FB40D: mov     rax, cs:qword_140C5F938
 * 00000001404FB414: mov     [rsp+8E8h+var_5E8], rax
 * 00000001404FB41C: lea     rax, [rsp+8E8h+var_5E8]
 * 00000001404FB424: mov     [rsp+8E8h+var_3C8], rax
 * 00000001404FB42C: mov     [rsp+8E8h+var_3C0], 8
 * 00000001404FB438: mov     rax, cs:qword_140C5F968
 * 00000001404FB43F: mov     [rsp+8E8h+var_5E0], rax
 * 00000001404FB447: lea     rax, [rsp+8E8h+var_5E0]
 * 00000001404FB44F: mov     [rsp+8E8h+var_3B8], rax
 * 00000001404FB457: mov     [rsp+8E8h+var_3B0], 8
 * 00000001404FB463: mov     rax, cs:qword_140C5F970
 * 00000001404FB46A: mov     [rsp+8E8h+var_5D8], rax
 * 00000001404FB472: lea     rax, [rsp+8E8h+var_5D8]
 * 00000001404FB47A: mov     [rsp+8E8h+var_3A8], rax
 * 00000001404FB482: mov     [rsp+8E8h+var_3A0], 8
 * 00000001404FB48E: mov     rax, cs:qword_140C5F978
 * 00000001404FB495: mov     [rsp+8E8h+var_5D0], rax
 * 00000001404FB49D: lea     rax, [rsp+8E8h+var_5D0]
 * 00000001404FB4A5: mov     [rsp+8E8h+var_398], rax
 * 00000001404FB4AD: mov     [rsp+8E8h+var_390], 8
 * 00000001404FB4B9: mov     rax, cs:qword_140C5F980
 * 00000001404FB4C0: mov     [rsp+8E8h+var_5C8], rax
 * 00000001404FB4C8: lea     rax, [rsp+8E8h+var_5C8]
 * 00000001404FB4D0: mov     [rsp+8E8h+var_388], rax
 * 00000001404FB4D8: mov     [rsp+8E8h+var_380], 8
 * 00000001404FB4E4: mov     rax, cs:qword_140C5F988
 * 00000001404FB4EB: mov     [rsp+8E8h+var_5C0], rax
 * 00000001404FB4F3: lea     rax, [rsp+8E8h+var_5C0]
 * 00000001404FB4FB: mov     [rsp+8E8h+var_378], rax
 * 00000001404FB503: mov     [rsp+8E8h+var_370], 8
 * 00000001404FB50F: mov     rax, cs:qword_140C5F990
 * 00000001404FB516: mov     [rsp+8E8h+var_5B8], rax
 * 00000001404FB51E: lea     rax, [rsp+8E8h+var_5B8]
 * 00000001404FB526: mov     [rsp+8E8h+var_368], rax
 * 00000001404FB52E: mov     [rsp+8E8h+var_360], 8
 * 00000001404FB53A: mov     rax, cs:qword_140C5F998
 * 00000001404FB541: mov     [rsp+8E8h+var_5B0], rax
 * 00000001404FB549: lea     rax, [rsp+8E8h+var_5B0]
 * 00000001404FB551: mov     [rsp+8E8h+var_358], rax
 * 00000001404FB559: mov     [rsp+8E8h+var_350], 8
 * 00000001404FB565: mov     rax, cs:qword_140C5F9A0
 * 00000001404FB56C: mov     [rsp+8E8h+var_5A8], rax
 * 00000001404FB574: lea     rax, [rsp+8E8h+var_5A8]
 * 00000001404FB57C: mov     [rsp+8E8h+var_348], rax
 * 00000001404FB584: mov     [rsp+8E8h+var_340], 8
 * 00000001404FB590: mov     rax, cs:qword_140C5F9A8
 * 00000001404FB597: mov     [rsp+8E8h+var_5A0], rax
 * 00000001404FB59F: lea     rax, [rsp+8E8h+var_5A0]
 * 00000001404FB5A7: mov     [rsp+8E8h+var_338], rax
 * 00000001404FB5AF: mov     [rsp+8E8h+var_330], 8
 * 00000001404FB5BB: mov     rax, cs:qword_140C5F940
 * 00000001404FB5C2: mov     [rsp+8E8h+var_598], rax
 * 00000001404FB5CA: lea     rax, [rsp+8E8h+var_598]
 * 00000001404FB5D2: mov     [rsp+8E8h+var_328], rax
 * 00000001404FB5DA: mov     [rsp+8E8h+var_320], 8
 * 00000001404FB5E6: mov     rax, cs:qword_140C5F948
 * 00000001404FB5ED: mov     [rsp+8E8h+var_590], rax
 * 00000001404FB5F5: lea     rax, [rsp+8E8h+var_590]
 * 00000001404FB5FD: mov     [rsp+8E8h+var_318], rax
 * 00000001404FB605: mov     [rsp+8E8h+var_310], 8
 * 00000001404FB611: mov     rax, cs:qword_140C5F950
 * 00000001404FB618: mov     [rsp+8E8h+var_588], rax
 * 00000001404FB620: lea     rax, [rsp+8E8h+var_588]
 * 00000001404FB628: mov     [rsp+8E8h+var_308], rax
 * 00000001404FB630: mov     [rsp+8E8h+var_300], 8
 * 00000001404FB63C: mov     rax, cs:qword_140C5F958
 * 00000001404FB643: mov     [rsp+8E8h+var_620], rax
 * 00000001404FB64B: lea     rax, [rsp+8E8h+var_620]
 * 00000001404FB653: mov     [rsp+8E8h+var_2F8], rax
 * 00000001404FB65B: mov     [rsp+8E8h+var_2F0], 8
 * 00000001404FB667: mov     rax, cs:qword_140C5F960
 * 00000001404FB66E: mov     [rsp+8E8h+var_628], rax
 * 00000001404FB676: lea     rax, [rsp+8E8h+var_628]
 * 00000001404FB67E: mov     [rsp+8E8h+var_2E8], rax
 * 00000001404FB686: mov     [rsp+8E8h+var_2E0], 8
 * 00000001404FB692: lea     rax, [rsp+8E8h+var_438]
 * 00000001404FB69A: mov     [rsp+8E8h+var_8C0], rax
 * 00000001404FB69F: mov     dword ptr [rsp+8E8h+var_8C8], 16h
 * 00000001404FB6A7: xor     r9d, r9d
 * 00000001404FB6AA: xor     r8d, r8d
 * 00000001404FB6AD: lea     rdx, byte_140029BCD
 * 00000001404FB6B4: lea     rcx, dword_140C02F08
 * 00000001404FB6BB: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001404FB6C0: xor     r10d, r10d
 * 00000001404FB6C3: mov     cs:qword_140C5F930, r10
 * 00000001404FB6CA: mov     cs:qword_140C5F938, r10
 * 00000001404FB6D1: mov     cs:qword_140C5F940, r10
 * 00000001404FB6D8: mov     cs:qword_140C5F948, r10
 * 00000001404FB6DF: mov     cs:qword_140C5F950, r10
 * 00000001404FB6E6: mov     cs:qword_140C5F958, r10
 * 00000001404FB6ED: mov     cs:qword_140C5F960, r10
 * 00000001404FB6F4: mov     cs:qword_140C5F968, r10
 * 00000001404FB6FB: mov     cs:qword_140C5F970, r10
 * 00000001404FB702: mov     cs:qword_140C5F978, r10
 * 00000001404FB709: mov     cs:qword_140C5F980, r10
 * 00000001404FB710: mov     cs:qword_140C5F988, r10
 * 00000001404FB717: mov     cs:qword_140C5F990, r10
 * 00000001404FB71E: mov     cs:qword_140C5F998, r10
 * 00000001404FB725: mov     cs:qword_140C5F9A0, r10
 * 00000001404FB72C: mov     cs:qword_140C5F9A8, r10
 * 00000001404FB733: mov     cs:qword_140C5F878, rsi
 * 00000001404FB73A: jmp     loc_1403D1465
 * 00000001404FB73F: mov     r9, r10
 * 00000001404FB742: jmp     loc_1403D14B0
 * 00000001404FB747: mov     r9d, 5
 * 00000001404FB74D: cmp     cs:dword_140C02F08, r9d
 * 00000001404FB754: jbe     loc_1403D1DCE
 * 00000001404FB75A: mov     rdx, 400000000000h
 * 00000001404FB764: lea     rcx, dword_140C02F08
 * 00000001404FB76B: call    _tlgKeywordOn
 * 00000001404FB770: test    al, al
 * 00000001404FB772: jz      loc_1403D1DCE
 * 00000001404FB778: mov     [rsp+8E8h+var_628], 1000000h
 * 00000001404FB784: lea     rax, [rsp+8E8h+var_628]
 * 00000001404FB78C: mov     [rsp+8E8h+var_418], rax
 * 00000001404FB794: mov     [rsp+8E8h+var_410], 8
 * 00000001404FB7A0: mov     [rsp+8E8h+var_678], r9w
 * 00000001404FB7A9: lea     rax, [rsp+8E8h+var_678]
 * 00000001404FB7B1: mov     [rsp+8E8h+var_408], rax
 * 00000001404FB7B9: mov     [rsp+8E8h+var_400], 2
 * 00000001404FB7C5: mov     [rsp+8E8h+var_3F8], rdi
 * 00000001404FB7CD: mov     [rsp+8E8h+var_3F0], 10h
 * 00000001404FB7D9: mov     rax, r15
 * 00000001404FB7DC: imul    rbx
 * 00000001404FB7DF: sar     rdx, 2
 * 00000001404FB7E3: mov     rax, rdx
 * 00000001404FB7E6: shr     rax, 3Fh
 * 00000001404FB7EA: add     rdx, rax
 * 00000001404FB7ED: mov     [rsp+8E8h+var_620], rdx
 * 00000001404FB7F5: lea     rax, [rsp+8E8h+var_620]
 * 00000001404FB7FD: mov     [rsp+8E8h+var_3E8], rax
 * 00000001404FB805: mov     [rsp+8E8h+var_3E0], 8
 * 00000001404FB811: mov     rax, [rdi+4E0h]
 * 00000001404FB818: mov     [rsp+8E8h+var_580], rax
 * 00000001404FB820: lea     rax, [rsp+8E8h+var_580]
 * 00000001404FB828: mov     [rsp+8E8h+var_3D8], rax
 * 00000001404FB830: mov     [rsp+8E8h+var_3D0], 8
 * 00000001404FB83C: mov     rax, [rdi+4E8h]
 * 00000001404FB843: mov     [rsp+8E8h+var_578], rax
 * 00000001404FB84B: lea     rax, [rsp+8E8h+var_578]
 * 00000001404FB853: mov     [rsp+8E8h+var_3C8], rax
 * 00000001404FB85B: mov     [rsp+8E8h+var_3C0], 8
 * 00000001404FB867: mov     rax, [rdi+4F0h]
 * 00000001404FB86E: mov     [rsp+8E8h+var_570], rax
 * 00000001404FB876: lea     rax, [rsp+8E8h+var_570]
 * 00000001404FB87E: mov     [rsp+8E8h+var_3B8], rax
 * 00000001404FB886: mov     [rsp+8E8h+var_3B0], 8
 * 00000001404FB892: mov     rax, [rdi+4F8h]
 * 00000001404FB899: mov     [rsp+8E8h+var_568], rax
 * 00000001404FB8A1: lea     rax, [rsp+8E8h+var_568]
 * 00000001404FB8A9: mov     [rsp+8E8h+var_3A8], rax
 * 00000001404FB8B1: mov     [rsp+8E8h+var_3A0], 8
 * 00000001404FB8BD: mov     rax, [rdi+500h]
 * 00000001404FB8C4: mov     [rsp+8E8h+var_560], rax
 * 00000001404FB8CC: lea     rax, [rsp+8E8h+var_560]
 * 00000001404FB8D4: mov     [rsp+8E8h+var_398], rax
 * 00000001404FB8DC: mov     [rsp+8E8h+var_390], 8
 * 00000001404FB8E8: mov     rax, [rdi+508h]
 * 00000001404FB8EF: mov     [rsp+8E8h+var_558], rax
 * 00000001404FB8F7: lea     rax, [rsp+8E8h+var_558]
 * 00000001404FB8FF: mov     [rsp+8E8h+var_388], rax
 * 00000001404FB907: mov     [rsp+8E8h+var_380], 8
 * 00000001404FB913: mov     rax, [rdi+588h]
 * 00000001404FB91A: mov     [rsp+8E8h+var_550], rax
 * 00000001404FB922: lea     rax, [rsp+8E8h+var_550]
 * 00000001404FB92A: mov     [rsp+8E8h+var_378], rax
 * 00000001404FB932: mov     [rsp+8E8h+var_370], 8
 * 00000001404FB93E: mov     rax, [rdi+590h]
 * 00000001404FB945: mov     [rsp+8E8h+var_548], rax
 * 00000001404FB94D: lea     rax, [rsp+8E8h+var_548]
 * 00000001404FB955: mov     [rsp+8E8h+var_368], rax
 * 00000001404FB95D: mov     [rsp+8E8h+var_360], 8
 * 00000001404FB969: mov     rax, [rdi+598h]
 * 00000001404FB970: mov     [rsp+8E8h+var_540], rax
 * 00000001404FB978: lea     rax, [rsp+8E8h+var_540]
 * 00000001404FB980: mov     [rsp+8E8h+var_358], rax
 * 00000001404FB988: mov     [rsp+8E8h+var_350], 8
 * 00000001404FB994: mov     rax, [rdi+5A0h]
 * 00000001404FB99B: mov     [rsp+8E8h+var_538], rax
 * 00000001404FB9A3: lea     rax, [rsp+8E8h+var_538]
 * 00000001404FB9AB: mov     [rsp+8E8h+var_348], rax
 * 00000001404FB9B3: mov     [rsp+8E8h+var_340], 8
 * 00000001404FB9BF: mov     rax, [rdi+510h]
 * 00000001404FB9C6: mov     [rsp+8E8h+var_530], rax
 * 00000001404FB9CE: lea     rax, [rsp+8E8h+var_530]
 * 00000001404FB9D6: mov     [rsp+8E8h+var_338], rax
 * 00000001404FB9DE: mov     [rsp+8E8h+var_330], 8
 * 00000001404FB9EA: mov     rax, [rdi+518h]
 * 00000001404FB9F1: mov     [rsp+8E8h+var_528], rax
 * 00000001404FB9F9: lea     rax, [rsp+8E8h+var_528]
 * 00000001404FBA01: mov     [rsp+8E8h+var_328], rax
 * 00000001404FBA09: mov     [rsp+8E8h+var_320], 8
 * 00000001404FBA15: mov     rax, [rdi+520h]
 * 00000001404FBA1C: mov     [rsp+8E8h+var_520], rax
 * 00000001404FBA24: lea     rax, [rsp+8E8h+var_520]
 * 00000001404FBA2C: mov     [rsp+8E8h+var_318], rax
 * 00000001404FBA34: mov     [rsp+8E8h+var_310], 8
 * 00000001404FBA40: mov     rax, [rdi+528h]
 * 00000001404FBA47: mov     [rsp+8E8h+var_518], rax
 * 00000001404FBA4F: lea     rax, [rsp+8E8h+var_518]
 * 00000001404FBA57: mov     [rsp+8E8h+var_308], rax
 * 00000001404FBA5F: mov     [rsp+8E8h+var_300], 8
 * 00000001404FBA6B: mov     rax, [rdi+530h]
 * 00000001404FBA72: mov     [rsp+8E8h+var_510], rax
 * 00000001404FBA7A: lea     rax, [rsp+8E8h+var_510]
 * 00000001404FBA82: mov     [rsp+8E8h+var_2F8], rax
 * 00000001404FBA8A: mov     [rsp+8E8h+var_2F0], 8
 * 00000001404FBA96: mov     rax, [rdi+538h]
 * 00000001404FBA9D: mov     [rsp+8E8h+var_508], rax
 * 00000001404FBAA5: lea     rax, [rsp+8E8h+var_508]
 * 00000001404FBAAD: mov     [rsp+8E8h+var_2E8], rax
 * 00000001404FBAB5: mov     [rsp+8E8h+var_2E0], 8
 * 00000001404FBAC1: mov     rax, [rdi+540h]
 * 00000001404FBAC8: mov     [rsp+8E8h+var_500], rax
 * 00000001404FBAD0: lea     rax, [rsp+8E8h+var_500]
 * 00000001404FBAD8: mov     [rsp+8E8h+var_2D8], rax
 * 00000001404FBAE0: mov     [rsp+8E8h+var_2D0], 8
 * 00000001404FBAEC: mov     rax, [rdi+548h]
 * 00000001404FBAF3: mov     [rsp+8E8h+var_4F8], rax
 * 00000001404FBAFB: lea     rax, [rsp+8E8h+var_4F8]
 * 00000001404FBB03: mov     [rsp+8E8h+var_2C8], rax
 * 00000001404FBB0B: mov     [rsp+8E8h+var_2C0], 8
 * 00000001404FBB17: mov     rax, [rsp+8E8h+var_638]
 * 00000001404FBB1F: mov     [rsp+8E8h+var_4F0], rax
 * 00000001404FBB27: lea     rax, [rsp+8E8h+var_4F0]
 * 00000001404FBB2F: mov     [rsp+8E8h+var_2B8], rax
 * 00000001404FBB37: mov     [rsp+8E8h+var_2B0], 8
 * 00000001404FBB43: mov     rax, [rdi+550h]
 * 00000001404FBB4A: mov     [rsp+8E8h+var_4E8], rax
 * 00000001404FBB52: lea     rax, [rsp+8E8h+var_4E8]
 * 00000001404FBB5A: mov     [rsp+8E8h+var_2A8], rax
 * 00000001404FBB62: mov     [rsp+8E8h+var_2A0], 8
 * 00000001404FBB6E: mov     rax, [rdi+570h]
 * 00000001404FBB75: mov     [rsp+8E8h+var_4E0], rax
 * 00000001404FBB7D: lea     rax, [rsp+8E8h+var_4E0]
 * 00000001404FBB85: mov     [rsp+8E8h+var_298], rax
 * 00000001404FBB8D: mov     [rsp+8E8h+var_290], 8
 * 00000001404FBB99: mov     rax, [rdi+578h]
 * 00000001404FBBA0: mov     [rsp+8E8h+var_4D8], rax
 * 00000001404FBBA8: lea     rax, [rsp+8E8h+var_4D8]
 * 00000001404FBBB0: mov     [rsp+8E8h+var_288], rax
 * 00000001404FBBB8: mov     [rsp+8E8h+var_280], 8
 * 00000001404FBBC4: mov     rax, [rdi+580h]
 * 00000001404FBBCB: mov     [rsp+8E8h+var_4D0], rax
 * 00000001404FBBD3: lea     rax, [rsp+8E8h+var_4D0]
 * 00000001404FBBDB: mov     [rsp+8E8h+var_278], rax
 * 00000001404FBBE3: mov     [rsp+8E8h+var_270], 8
 * 00000001404FBBEF: mov     rax, [rdi+558h]
 * 00000001404FBBF6: mov     [rsp+8E8h+var_4C8], rax
 * 00000001404FBBFE: lea     rax, [rsp+8E8h+var_4C8]
 * 00000001404FBC06: mov     [rsp+8E8h+var_268], rax
 * 00000001404FBC0E: mov     [rsp+8E8h+var_260], 8
 * 00000001404FBC1A: mov     rax, [rdi+560h]
 * 00000001404FBC21: mov     [rsp+8E8h+var_4C0], rax
 * 00000001404FBC29: lea     rax, [rsp+8E8h+var_4C0]
 * 00000001404FBC31: mov     [rsp+8E8h+var_258], rax
 * 00000001404FBC39: mov     [rsp+8E8h+var_250], 8
 * 00000001404FBC45: mov     rax, [rdi+568h]
 * 00000001404FBC4C: mov     [rsp+8E8h+var_4B8], rax
 * 00000001404FBC54: lea     rax, [rsp+8E8h+var_4B8]
 * 00000001404FBC5C: mov     [rsp+8E8h+var_248], rax
 * 00000001404FBC64: mov     [rsp+8E8h+var_240], 8
 * 00000001404FBC70: mov     rax, [rdi+5A8h]
 * 00000001404FBC77: mov     [rsp+8E8h+var_4B0], rax
 * 00000001404FBC7F: lea     rax, [rsp+8E8h+var_4B0]
 * 00000001404FBC87: mov     [rsp+8E8h+var_238], rax
 * 00000001404FBC8F: mov     [rsp+8E8h+var_230], 8
 * 00000001404FBC9B: mov     rax, [rdi+5B0h]
 * 00000001404FBCA2: mov     [rsp+8E8h+var_4A8], rax
 * 00000001404FBCAA: lea     rax, [rsp+8E8h+var_4A8]
 * 00000001404FBCB2: mov     [rsp+8E8h+var_228], rax
 * 00000001404FBCBA: mov     [rsp+8E8h+var_220], 8
 * 00000001404FBCC6: mov     rax, [rdi+738h]
 * 00000001404FBCCD: mov     [rsp+8E8h+var_4A0], rax
 * 00000001404FBCD5: lea     rax, [rsp+8E8h+var_4A0]
 * 00000001404FBCDD: mov     [rsp+8E8h+var_218], rax
 * 00000001404FBCE5: mov     [rsp+8E8h+var_210], 8
 * 00000001404FBCF1: mov     rax, [rdi+740h]
 * 00000001404FBCF8: mov     [rsp+8E8h+var_498], rax
 * 00000001404FBD00: lea     rax, [rsp+8E8h+var_498]
 * 00000001404FBD08: mov     [rsp+8E8h+var_208], rax
 * 00000001404FBD10: mov     [rsp+8E8h+var_200], 8
 * 00000001404FBD1C: mov     rax, [rdi+748h]
 * 00000001404FBD23: mov     [rsp+8E8h+var_490], rax
 * 00000001404FBD2B: lea     rax, [rsp+8E8h+var_490]
 * 00000001404FBD33: mov     [rsp+8E8h+var_1F8], rax
 * 00000001404FBD3B: mov     [rsp+8E8h+var_1F0], 8
 * 00000001404FBD47: mov     rax, [rdi+750h]
 * 00000001404FBD4E: mov     [rsp+8E8h+var_488], rax
 * 00000001404FBD56: lea     rax, [rsp+8E8h+var_488]
 * 00000001404FBD5E: mov     [rsp+8E8h+var_1E8], rax
 * 00000001404FBD66: mov     [rsp+8E8h+var_1E0], 8
 * 00000001404FBD72: mov     rax, [rdi+758h]
 * 00000001404FBD79: mov     [rsp+8E8h+var_480], rax
 * 00000001404FBD81: lea     rax, [rsp+8E8h+var_480]
 * 00000001404FBD89: mov     [rsp+8E8h+var_1D8], rax
 * 00000001404FBD91: mov     [rsp+8E8h+var_1D0], 8
 * 00000001404FBD9D: mov     rax, [rdi+8E0h]
 * 00000001404FBDA4: mov     [rsp+8E8h+var_478], rax
 * 00000001404FBDAC: lea     rax, [rsp+8E8h+var_478]
 * 00000001404FBDB4: mov     [rsp+8E8h+var_1C8], rax
 * 00000001404FBDBC: mov     [rsp+8E8h+var_1C0], 8
 * 00000001404FBDC8: mov     rax, [rdi+8E8h]
 * 00000001404FBDCF: mov     [rsp+8E8h+var_470], rax
 * 00000001404FBDD7: lea     rax, [rsp+8E8h+var_470]
 * 00000001404FBDDF: mov     [rsp+8E8h+var_1B8], rax
 * 00000001404FBDE7: mov     [rsp+8E8h+var_1B0], 8
 * 00000001404FBDF3: mov     rax, [rdi+588h]
 * 00000001404FBDFA: mov     [rsp+8E8h+var_468], rax
 * 00000001404FBE02: lea     rax, [rsp+8E8h+var_468]
 * 00000001404FBE0A: mov     [rsp+8E8h+var_1A8], rax
 * 00000001404FBE12: mov     [rsp+8E8h+var_1A0], 8
 * 00000001404FBE1E: mov     rax, [rdi+590h]
 * 00000001404FBE25: mov     [rsp+8E8h+var_460], rax
 * 00000001404FBE2D: lea     rax, [rsp+8E8h+var_460]
 * 00000001404FBE35: mov     [rsp+8E8h+var_198], rax
 * 00000001404FBE3D: mov     [rsp+8E8h+var_190], 8
 * 00000001404FBE49: mov     rax, [rdi+598h]
 * 00000001404FBE50: mov     [rsp+8E8h+var_458], rax
 * 00000001404FBE58: lea     rax, [rsp+8E8h+var_458]
 * 00000001404FBE60: mov     [rsp+8E8h+var_188], rax
 * 00000001404FBE68: mov     [rsp+8E8h+var_180], 8
 * 00000001404FBE74: lea     rdx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 00000001404FBE7B: lea     rcx, [rsp+8E8h+var_178]
 * 00000001404FBE83: call    _tlgCreate1Sz_wchar_t
 * 00000001404FBE88: mov     edx, 0Ch
 * 00000001404FBE8D: mov     [rsp+8E8h+var_668], dx
 * 00000001404FBE95: lea     rax, [rsp+8E8h+var_668]
 * 00000001404FBE9D: mov     [rsp+8E8h+var_168], rax
 * 00000001404FBEA5: mov     [rsp+8E8h+var_160], 2
 * 00000001404FBEB1: lea     rax, [rdi+5B8h]
 * 00000001404FBEB8: mov     [rsp+8E8h+var_158], rax
 * 00000001404FBEC0: mov     [rsp+8E8h+var_150], 60h ; '`'
 * 00000001404FBECC: mov     [rsp+8E8h+var_664], dx
 * 00000001404FBED4: lea     rax, [rsp+8E8h+var_664]
 * 00000001404FBEDC: mov     [rsp+8E8h+var_148], rax
 * 00000001404FBEE4: mov     [rsp+8E8h+var_140], 2
 * 00000001404FBEF0: lea     rax, [rdi+618h]
 * 00000001404FBEF7: mov     [rsp+8E8h+var_138], rax
 * 00000001404FBEFF: mov     [rsp+8E8h+var_130], 60h ; '`'
 * 00000001404FBF0B: mov     [rsp+8E8h+var_660], dx
 * 00000001404FBF13: lea     rax, [rsp+8E8h+var_660]
 * 00000001404FBF1B: mov     [rsp+8E8h+var_128], rax
 * 00000001404FBF23: mov     [rsp+8E8h+var_120], 2
 * 00000001404FBF2F: lea     rax, [rdi+678h]
 * 00000001404FBF36: mov     [rsp+8E8h+var_118], rax
 * 00000001404FBF3E: mov     [rsp+8E8h+var_110], 60h ; '`'
 * 00000001404FBF4A: mov     [rsp+8E8h+var_65C], dx
 * 00000001404FBF52: lea     rax, [rsp+8E8h+var_65C]
 * 00000001404FBF5A: mov     [rsp+8E8h+var_108], rax
 * 00000001404FBF62: mov     [rsp+8E8h+var_100], 2
 * 00000001404FBF6E: lea     rax, [rdi+6D8h]
 * 00000001404FBF75: mov     [rsp+8E8h+var_F8], rax
 * 00000001404FBF7D: mov     [rsp+8E8h+var_F0], 60h ; '`'
 * 00000001404FBF89: mov     [rsp+8E8h+var_658], dx
 * 00000001404FBF91: lea     rax, [rsp+8E8h+var_658]
 * 00000001404FBF99: mov     [rsp+8E8h+var_E8], rax
 * 00000001404FBFA1: mov     [rsp+8E8h+var_E0], 2
 * 00000001404FBFAD: lea     rax, [rdi+760h]
 * 00000001404FBFB4: mov     [rsp+8E8h+var_D8], rax
 * 00000001404FBFBC: mov     [rsp+8E8h+var_D0], 60h ; '`'
 * 00000001404FBFC8: mov     [rsp+8E8h+var_654], dx
 * 00000001404FBFD0: lea     rax, [rsp+8E8h+var_654]
 * 00000001404FBFD8: mov     [rsp+8E8h+var_C8], rax
 * 00000001404FBFE0: mov     [rsp+8E8h+var_C0], 2
 * 00000001404FBFEC: lea     rax, [rdi+7C0h]
 * 00000001404FBFF3: mov     [rsp+8E8h+var_B8], rax
 * 00000001404FBFFB: mov     [rsp+8E8h+var_B0], 60h ; '`'
 * 00000001404FC007: mov     [rsp+8E8h+var_650], dx
 * 00000001404FC00F: lea     rax, [rsp+8E8h+var_650]
 * 00000001404FC017: mov     [rsp+8E8h+var_A8], rax
 * 00000001404FC01F: mov     [rsp+8E8h+var_A0], 2
 * 00000001404FC02B: lea     rax, [rdi+820h]
 * 00000001404FC032: mov     [rsp+8E8h+var_98], rax
 * 00000001404FC03A: mov     [rsp+8E8h+var_90], 60h ; '`'
 * 00000001404FC046: mov     [rsp+8E8h+var_64C], dx
 * 00000001404FC04E: lea     rax, [rsp+8E8h+var_64C]
 * 00000001404FC056: mov     [rsp+8E8h+var_88], rax
 * 00000001404FC05E: mov     [rsp+8E8h+var_80], 2
 * 00000001404FC06A: lea     rax, [rdi+880h]
 * 00000001404FC071: mov     [rsp+8E8h+var_78], rax
 * 00000001404FC079: mov     [rsp+8E8h+var_70], 60h ; '`'
 * 00000001404FC085: mov     [rsp+8E8h+var_648], dx
 * 00000001404FC08D: lea     rax, [rsp+8E8h+var_648]
 * 00000001404FC095: mov     [rsp+8E8h+var_68], rax
 * 00000001404FC09D: mov     [rsp+8E8h+var_60], 2
 * 00000001404FC0A9: lea     rax, [rdi+8F0h]
 * 00000001404FC0B0: mov     [rsp+8E8h+var_58], rax
 * 00000001404FC0B8: mov     [rsp+8E8h+var_50], 60h ; '`'
 * 00000001404FC0C4: mov     [rsp+8E8h+var_644], dx
 * 00000001404FC0CC: lea     rax, [rsp+8E8h+var_644]
 * 00000001404FC0D4: mov     [rsp+8E8h+var_48], rax
 * 00000001404FC0DC: mov     [rsp+8E8h+var_40], 2
 * 00000001404FC0E8: lea     rax, [rdi+950h]
 * 00000001404FC0EF: mov     [rsp+8E8h+var_38], rax
 * 00000001404FC0F7: mov     [rsp+8E8h+var_30], 60h ; '`'
 * 00000001404FC103: lea     rax, [rsp+8E8h+var_438]
 * 00000001404FC10B: mov     [rsp+8E8h+var_8C0], rax
 * 00000001404FC110: mov     dword ptr [rsp+8E8h+var_8C8], 41h ; 'A'
 * 00000001404FC118: xor     r9d, r9d
 * 00000001404FC11B: xor     r8d, r8d
 * 00000001404FC11E: lea     rdx, byte_140029621
 * 00000001404FC125: lea     rcx, dword_140C02F08
 * 00000001404FC12C: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001404FC131: xor     r10d, r10d
 * 00000001404FC134: jmp     loc_1403D1DCE
 */
