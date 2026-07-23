/*
 * XREFs of CcPostVolumeTelemetry @ 0x1403D12B0
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140880E00 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6E74 (_tlgCreate1Sz_wchar_t.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D1FE0 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D2370 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403D2844 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x1403D2F70 (CcAggregateCumulativeVolumeTelemetry.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x1403D3210 (McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x140539D48 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     CcResetGlobalTelemetry @ 0x1407EB190 (CcResetGlobalTelemetry.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x140880ECC (CcAggregateCumulativeGlobalTelemetry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for CcPostVolumeTelemetry @ 0x1403D12B0
 * Reason: Hex-Rays returned no pseudocode for 0x1403D12B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403D12B0: mov     r11, rsp
 * 00000001403D12B3: mov     [r11+8], rbx
 * 00000001403D12B7: mov     [r11+10h], rsi
 * 00000001403D12BB: mov     [r11+18h], rdi
 * 00000001403D12BF: mov     [r11+20h], r12
 * 00000001403D12C3: push    r13
 * 00000001403D12C5: push    r14
 * 00000001403D12C7: push    r15
 * 00000001403D12C9: sub     rsp, 8D0h
 * 00000001403D12D0: mov     rax, cs:__security_cookie
 * 00000001403D12D7: xor     rax, rsp
 * 00000001403D12DA: mov     [rsp+8E8h+var_28], rax
 * 00000001403D12E2: xor     r13b, r13b
 * 00000001403D12E5: xorps   xmm0, xmm0
 * 00000001403D12E8: xor     eax, eax
 * 00000001403D12EA: movups  xmmword ptr [rsp+8E8h+LockHandle.LockQueue.Next], xmm0
 * 00000001403D12F2: mov     [r11-608h], rax
 * 00000001403D12F9: and     [rsp+8E8h+var_674], eax
 * 00000001403D1300: and     [rsp+8E8h+var_640], eax
 * 00000001403D1307: mov     rsi, 0FFFFF78000000014h
 * 00000001403D1311: mov     rsi, [rsi]
 * 00000001403D1314: mov     rbx, rsi
 * 00000001403D1317: sub     rbx, cs:qword_140C5F870
 * 00000001403D131E: mov     rdi, rsi
 * 00000001403D1321: sub     rdi, cs:qword_140C5F878
 * 00000001403D1328: cmp     rbx, qword ptr cs:unk_140C5F888
 * 00000001403D132F: jge     short loc_1403D1370
 * 00000001403D1331: mov     rax, cs:qword_140C5F898
 * 00000001403D1338: test    rax, rax
 * 00000001403D133B: jle     short loc_1403D1370
 * 00000001403D133D: mov     rcx, [rsp+8E8h+var_28]
 * 00000001403D1345: xor     rcx, rsp; StackCookie
 * 00000001403D1348: call    __security_check_cookie
 * 00000001403D134D: lea     r11, [rsp+8E8h+var_18]
 * 00000001403D1355: mov     rbx, [r11+20h]
 * 00000001403D1359: mov     rsi, [r11+28h]
 * 00000001403D135D: mov     rdi, [r11+30h]
 * 00000001403D1361: mov     r12, [r11+38h]
 * 00000001403D1365: mov     rsp, r11
 * 00000001403D1368: pop     r15
 * 00000001403D136A: pop     r14
 * 00000001403D136C: pop     r13
 * 00000001403D136E: retn
 * 00000001403D1370: cmp     rdi, cs:qword_140C5F890
 * 00000001403D1377: jge     loc_1404FB7E0
 * 00000001403D137D: cmp     cs:qword_140C5F898, 0
 * 00000001403D1385: jz      loc_1404FB7E0
 * 00000001403D138B: inc     cs:qword_140C5F898
 * 00000001403D1392: mov     r14, cs:qword_140C5F8A8
 * 00000001403D1399: add     r14, 0Ah
 * 00000001403D139D: mov     [rsp+8E8h+var_638], r14
 * 00000001403D13A5: imul    rdx, r14, 9B0h; NumberOfBytes
 * 00000001403D13AC: mov     ecx, 600h; PoolType
 * 00000001403D13B1: mov     r8d, 65546343h; Tag
 * 00000001403D13B7: call    ExAllocatePoolWithTag
 * 00000001403D13BC: mov     [rsp+8E8h+P], rax
 * 00000001403D13C4: test    rax, rax
 * 00000001403D13C7: jz      loc_1403D133D
 * 00000001403D13CD: lea     rdx, [rsp+8E8h+LockHandle]; LockHandle
 * 00000001403D13D5: lea     rcx, CcMasterLock; SpinLock
 * 00000001403D13DC: call    KeAcquireInStackQueuedSpinLock
 * 00000001403D13E1: mov     r12, cs:CcVolumeCacheMapList
 * 00000001403D13E8: mov     [rsp+8E8h+var_450], r12
 * 00000001403D13F0: lea     rax, CcVolumeCacheMapList
 * 00000001403D13F7: cmp     r12, rax
 * 00000001403D13FA: jz      loc_1403D1506
 * 00000001403D1400: mov     ecx, [rsp+8E8h+var_640]
 * 00000001403D1407: cmp     rcx, r14
 * 00000001403D140A: jnb     loc_1403D1506
 * 00000001403D1410: lea     r15, [r12-10h]
 * 00000001403D1415: mov     [rsp+8E8h+var_448], r15
 * 00000001403D141D: inc     ecx
 * 00000001403D141F: mov     [rsp+8E8h+var_640], ecx
 * 00000001403D1426: cmp     qword ptr [r15+168h], 0
 * 00000001403D142E: ja      short loc_1403D146F
 * 00000001403D1430: cmp     qword ptr [r15+170h], 0
 * 00000001403D1438: ja      short loc_1403D146F
 * 00000001403D143A: cmp     qword ptr [r15+178h], 0
 * 00000001403D1442: ja      short loc_1403D146F
 * 00000001403D1444: cmp     qword ptr [r15+348h], 0
 * 00000001403D144C: ja      short loc_1403D146F
 * 00000001403D144E: cmp     qword ptr [r15+350h], 0
 * 00000001403D1456: ja      short loc_1403D146F
 * 00000001403D1458: cmp     qword ptr [r15+358h], 0
 * 00000001403D1460: ja      short loc_1403D146F
 * 00000001403D1462: xor     al, al
 * 00000001403D1464: test    al, al
 * 00000001403D1466: jnz     short loc_1403D1473
 * 00000001403D1468: test    r13b, r13b
 * 00000001403D146B: jnz     short loc_1403D14E2
 * 00000001403D146D: jmp     short loc_1403D13F0
 * 00000001403D146F: mov     al, 1
 * 00000001403D1471: jmp     short loc_1403D1464
 * 00000001403D1473: lea     r14, [r15+0E0h]
 * 00000001403D147A: mov     rcx, r14
 * 00000001403D147D: call    CcAggregateCumulativeVolumeTelemetry
 * 00000001403D1482: mov     eax, [rsp+8E8h+var_674]
 * 00000001403D1489: imul    rcx, rax, 9B0h
 * 00000001403D1490: add     rcx, [rsp+8E8h+P]; void *
 * 00000001403D1498: mov     rdx, r14; Src
 * 00000001403D149B: mov     r8d, 9B0h; Size
 * 00000001403D14A1: call    memmove
 * 00000001403D14A6: lea     rcx, [r15+0F0h]; void *
 * 00000001403D14AD: mov     r14d, 4D0h
 * 00000001403D14B3: mov     r8d, r14d; Size
 * 00000001403D14B6: xor     edx, edx; Val
 * 00000001403D14B8: call    memset
 * 00000001403D14BD: test    r13b, r13b
 * 00000001403D14C0: jnz     short loc_1403D14F3
 * 00000001403D14C2: mov     r12, [r12]
 * 00000001403D14C6: mov     [rsp+8E8h+var_450], r12
 * 00000001403D14CE: inc     [rsp+8E8h+var_674]
 * 00000001403D14D5: mov     r14, [rsp+8E8h+var_638]
 * 00000001403D14DD: jmp     loc_1403D13F0
 * 00000001403D14E2: mov     rcx, r15
 * 00000001403D14E5: call    CcHasVolumeCumulativeTelemetryChanged
 * 00000001403D14EA: test    al, al
 * 00000001403D14EC: jnz     short loc_1403D1473
 * 00000001403D14EE: jmp     loc_1403D146D
 * 00000001403D14F3: lea     rcx, [r15+5C0h]; void *
 * 00000001403D14FA: mov     r8, r14; Size
 * 00000001403D14FD: xor     edx, edx; Val
 * 00000001403D14FF: call    memset
 * 00000001403D1504: jmp     short loc_1403D14C2
 * 00000001403D1506: lea     rcx, [rsp+8E8h+LockHandle]
 * 00000001403D150E: call    KxReleaseQueuedSpinLock
 * 00000001403D1513: mov     r14, qword ptr [rsp+8E8h+LockHandle.OldIrql]
 * 00000001403D151B: mov     ecx, cs:KiIrqlFlags
 * 00000001403D1521: test    ecx, ecx
 * 00000001403D1523: jnz     loc_1404FB7E8
 * 00000001403D1529: movzx   eax, r14b
 * 00000001403D152D: mov     cr8, rax
 * 00000001403D1531: call    CcAggregateCumulativeGlobalTelemetry
 * 00000001403D1536: mov     ecx, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D153C: mov     r15, 6666666666666667h
 * 00000001403D1546: test    cl, 1
 * 00000001403D1549: jz      loc_1403D1634
 * 00000001403D154F: mov     rax, r15
 * 00000001403D1552: imul    rbx
 * 00000001403D1555: sar     rdx, 2
 * 00000001403D1559: mov     r9, rdx
 * 00000001403D155C: shr     r9, 3Fh
 * 00000001403D1560: add     r9, rdx
 * 00000001403D1563: mov     rax, cs:qword_140C5F8E0
 * 00000001403D156A: mov     [rsp+8E8h+var_850], rax
 * 00000001403D1572: mov     rax, cs:qword_140C5F8D8
 * 00000001403D1579: mov     [rsp+8E8h+var_858], rax
 * 00000001403D1581: mov     rax, cs:qword_140C5F8D0
 * 00000001403D1588: mov     [rsp+8E8h+var_860], rax
 * 00000001403D1590: mov     rax, cs:qword_140C5F8C8
 * 00000001403D1597: mov     [rsp+8E8h+var_868], rax
 * 00000001403D159F: mov     rax, cs:qword_140C5F8C0
 * 00000001403D15A6: mov     [rsp+8E8h+var_870], rax
 * 00000001403D15AB: mov     rax, cs:qword_140C5F928
 * 00000001403D15B2: mov     [rsp+8E8h+var_878], rax
 * 00000001403D15B7: mov     rax, cs:qword_140C5F920
 * 00000001403D15BE: mov     [rsp+8E8h+var_880], rax
 * 00000001403D15C3: mov     rax, cs:qword_140C5F918
 * 00000001403D15CA: mov     [rsp+8E8h+var_888], rax
 * 00000001403D15CF: mov     rax, cs:qword_140C5F910
 * 00000001403D15D6: mov     [rsp+8E8h+var_890], rax
 * 00000001403D15DB: mov     rax, cs:qword_140C5F908
 * 00000001403D15E2: mov     [rsp+8E8h+var_898], rax
 * 00000001403D15E7: mov     rax, cs:qword_140C5F900
 * 00000001403D15EE: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D15F3: mov     rax, cs:qword_140C5F8F8
 * 00000001403D15FA: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D15FF: mov     rax, cs:qword_140C5F8F0
 * 00000001403D1606: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D160B: mov     rax, cs:qword_140C5F8E8
 * 00000001403D1612: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1617: mov     rax, cs:qword_140C5F8B8
 * 00000001403D161E: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1623: mov     rax, cs:qword_140C5F8B0
 * 00000001403D162A: mov     [rsp+8E8h+var_8C8], rax
 * 00000001403D162F: call    McTemplateK0xxxxxxxxxxxxxxxxxq_EtwWriteTransfer
 * 00000001403D1634: call    CcResetGlobalTelemetry
 * 00000001403D1639: xor     r10d, r10d
 * 00000001403D163C: test    r13b, r13b
 * 00000001403D163F: jnz     loc_1404FB85B
 * 00000001403D1645: mov     eax, r10d
 * 00000001403D1648: mov     [rsp+8E8h+var_670], eax
 * 00000001403D164F: mov     edx, [rsp+8E8h+var_674]
 * 00000001403D1656: mov     ecx, eax
 * 00000001403D1658: cmp     rcx, rdx
 * 00000001403D165B: jnb     loc_1403D1FBC
 * 00000001403D1661: imul    rdi, rcx, 9B0h
 * 00000001403D1668: add     rdi, [rsp+8E8h+P]
 * 00000001403D1670: mov     r8, [rdi+70h]
 * 00000001403D1674: test    r8, r8
 * 00000001403D1677: jz      loc_1404FBC97
 * 00000001403D167D: mov     rax, r8
 * 00000001403D1680: sub     rax, [rdi+78h]
 * 00000001403D1684: imul    rax, 64h ; 'd'
 * 00000001403D1688: xor     edx, edx
 * 00000001403D168A: div     r8
 * 00000001403D168D: mov     r9, rax
 * 00000001403D1690: mov     [rsp+8E8h+var_638], r9
 * 00000001403D1698: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D169E: test    al, 1
 * 00000001403D16A0: jz      loc_1403D187E
 * 00000001403D16A6: mov     rax, r15
 * 00000001403D16A9: imul    rbx
 * 00000001403D16AC: sar     rdx, 2
 * 00000001403D16B0: mov     rax, rdx
 * 00000001403D16B3: shr     rax, 3Fh
 * 00000001403D16B7: add     rdx, rax
 * 00000001403D16BA: mov     rax, [rdi+418h]
 * 00000001403D16C1: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D16C9: mov     rax, [rdi+410h]
 * 00000001403D16D0: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D16D8: mov     rax, [rdi+288h]
 * 00000001403D16DF: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D16E7: mov     rax, [rdi+280h]
 * 00000001403D16EE: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D16F6: mov     rax, [rdi+278h]
 * 00000001403D16FD: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D1705: mov     rax, [rdi+270h]
 * 00000001403D170C: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D1714: mov     rax, [rdi+268h]
 * 00000001403D171B: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D1723: mov     rax, [rdi+0E0h]
 * 00000001403D172A: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D1732: mov     rax, [rdi+0D8h]
 * 00000001403D1739: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D1741: mov     rax, [rdi+98h]
 * 00000001403D1748: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D1750: mov     rax, [rdi+90h]
 * 00000001403D1757: mov     [rsp+8E8h+var_800], rax
 * 00000001403D175F: mov     rax, [rdi+88h]
 * 00000001403D1766: mov     [rsp+8E8h+var_808], rax
 * 00000001403D176E: mov     rax, [rdi+0B0h]
 * 00000001403D1775: mov     [rsp+8E8h+var_810], rax
 * 00000001403D177D: mov     rax, [rdi+0A8h]
 * 00000001403D1784: mov     [rsp+8E8h+var_818], rax
 * 00000001403D178C: mov     rax, [rdi+0A0h]
 * 00000001403D1793: mov     [rsp+8E8h+var_820], rax
 * 00000001403D179B: mov     [rsp+8E8h+var_828], r9
 * 00000001403D17A3: mov     rax, [rdi+80h]
 * 00000001403D17AA: mov     [rsp+8E8h+var_830], rax
 * 00000001403D17B2: mov     rax, [rdi+78h]
 * 00000001403D17B6: mov     [rsp+8E8h+var_838], rax
 * 00000001403D17BE: mov     [rsp+8E8h+var_840], r8
 * 00000001403D17C6: mov     rax, [rdi+68h]
 * 00000001403D17CA: mov     [rsp+8E8h+var_848], rax
 * 00000001403D17D2: mov     rax, [rdi+60h]
 * 00000001403D17D6: mov     [rsp+8E8h+var_850], rax
 * 00000001403D17DE: mov     rax, [rdi+58h]
 * 00000001403D17E2: mov     [rsp+8E8h+var_858], rax
 * 00000001403D17EA: mov     rax, [rdi+50h]
 * 00000001403D17EE: mov     [rsp+8E8h+var_860], rax
 * 00000001403D17F6: mov     rax, [rdi+48h]
 * 00000001403D17FA: mov     [rsp+8E8h+var_868], rax
 * 00000001403D1802: mov     rax, [rdi+40h]
 * 00000001403D1806: mov     [rsp+8E8h+var_870], rax
 * 00000001403D180B: mov     rax, [rdi+0D0h]
 * 00000001403D1812: mov     [rsp+8E8h+var_878], rax
 * 00000001403D1817: mov     rax, [rdi+0C8h]
 * 00000001403D181E: mov     [rsp+8E8h+var_880], rax
 * 00000001403D1823: mov     rax, [rdi+0C0h]
 * 00000001403D182A: mov     [rsp+8E8h+var_888], rax
 * 00000001403D182F: mov     rax, [rdi+0B8h]
 * 00000001403D1836: mov     [rsp+8E8h+var_890], rax
 * 00000001403D183B: mov     rax, [rdi+38h]
 * 00000001403D183F: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1844: mov     rax, [rdi+30h]
 * 00000001403D1848: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D184D: mov     rax, [rdi+28h]
 * 00000001403D1851: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1856: mov     rax, [rdi+20h]
 * 00000001403D185A: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D185F: mov     rax, [rdi+18h]
 * 00000001403D1863: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1868: mov     rax, [rdi+10h]
 * 00000001403D186C: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1871: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D1876: mov     r9, rdi
 * 00000001403D1879: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D187E: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D1884: test    al, 1
 * 00000001403D1886: jz      loc_1403D1CC4
 * 00000001403D188C: mov     rax, r15
 * 00000001403D188F: imul    rbx
 * 00000001403D1892: sar     rdx, 2
 * 00000001403D1896: mov     rax, rdx
 * 00000001403D1899: shr     rax, 3Fh
 * 00000001403D189D: add     rdx, rax
 * 00000001403D18A0: mov     rax, [rdi+4D8h]
 * 00000001403D18A7: mov     [rsp+8E8h+var_688], rax
 * 00000001403D18AF: mov     rax, [rdi+4D0h]
 * 00000001403D18B6: mov     [rsp+8E8h+var_690], rax
 * 00000001403D18BE: mov     rax, [rdi+4C8h]
 * 00000001403D18C5: mov     [rsp+8E8h+var_698], rax
 * 00000001403D18CD: mov     rax, [rdi+4C0h]
 * 00000001403D18D4: mov     [rsp+8E8h+var_6A0], rax
 * 00000001403D18DC: mov     rax, [rdi+4B8h]
 * 00000001403D18E3: mov     [rsp+8E8h+var_6A8], rax
 * 00000001403D18EB: mov     rax, [rdi+4B0h]
 * 00000001403D18F2: mov     [rsp+8E8h+var_6B0], rax
 * 00000001403D18FA: mov     rax, [rdi+4A8h]
 * 00000001403D1901: mov     [rsp+8E8h+var_6B8], rax
 * 00000001403D1909: mov     rax, [rdi+4A0h]
 * 00000001403D1910: mov     [rsp+8E8h+var_6C0], rax
 * 00000001403D1918: mov     rax, [rdi+498h]
 * 00000001403D191F: mov     [rsp+8E8h+var_6C8], rax
 * 00000001403D1927: mov     rax, [rdi+490h]
 * 00000001403D192E: mov     [rsp+8E8h+var_6D0], rax
 * 00000001403D1936: mov     rax, [rdi+488h]
 * 00000001403D193D: mov     [rsp+8E8h+var_6D8], rax
 * 00000001403D1945: mov     rax, [rdi+480h]
 * 00000001403D194C: mov     [rsp+8E8h+var_6E0], rax
 * 00000001403D1954: mov     rax, [rdi+478h]
 * 00000001403D195B: mov     [rsp+8E8h+var_6E8], rax
 * 00000001403D1963: mov     rax, [rdi+470h]
 * 00000001403D196A: mov     [rsp+8E8h+var_6F0], rax
 * 00000001403D1972: mov     rax, [rdi+468h]
 * 00000001403D1979: mov     [rsp+8E8h+var_6F8], rax
 * 00000001403D1981: mov     rax, [rdi+460h]
 * 00000001403D1988: mov     [rsp+8E8h+var_700], rax
 * 00000001403D1990: mov     rax, [rdi+458h]
 * 00000001403D1997: mov     [rsp+8E8h+var_708], rax
 * 00000001403D199F: mov     rax, [rdi+450h]
 * 00000001403D19A6: mov     [rsp+8E8h+var_710], rax
 * 00000001403D19AE: mov     rax, [rdi+448h]
 * 00000001403D19B5: mov     [rsp+8E8h+var_718], rax
 * 00000001403D19BD: mov     rax, [rdi+440h]
 * 00000001403D19C4: mov     [rsp+8E8h+var_720], rax
 * 00000001403D19CC: mov     rax, [rdi+438h]
 * 00000001403D19D3: mov     [rsp+8E8h+var_728], rax
 * 00000001403D19DB: mov     rax, [rdi+430h]
 * 00000001403D19E2: mov     [rsp+8E8h+var_730], rax
 * 00000001403D19EA: mov     rax, [rdi+428h]
 * 00000001403D19F1: mov     [rsp+8E8h+var_738], rax
 * 00000001403D19F9: mov     rax, [rdi+420h]
 * 00000001403D1A00: mov     [rsp+8E8h+var_740], rax
 * 00000001403D1A08: mov     rax, [rdi+260h]
 * 00000001403D1A0F: mov     [rsp+8E8h+var_748], rax
 * 00000001403D1A17: mov     rax, [rdi+258h]
 * 00000001403D1A1E: mov     [rsp+8E8h+var_750], rax
 * 00000001403D1A26: mov     rax, [rdi+250h]
 * 00000001403D1A2D: mov     [rsp+8E8h+var_758], rax
 * 00000001403D1A35: mov     rax, [rdi+248h]
 * 00000001403D1A3C: mov     [rsp+8E8h+var_760], rax
 * 00000001403D1A44: mov     rax, [rdi+240h]
 * 00000001403D1A4B: mov     [rsp+8E8h+var_768], rax
 * 00000001403D1A53: mov     rax, [rdi+238h]
 * 00000001403D1A5A: mov     [rsp+8E8h+var_770], rax
 * 00000001403D1A62: mov     rax, [rdi+230h]
 * 00000001403D1A69: mov     [rsp+8E8h+var_778], rax
 * 00000001403D1A71: mov     rax, [rdi+228h]
 * 00000001403D1A78: mov     [rsp+8E8h+var_780], rax
 * 00000001403D1A80: mov     rax, [rdi+220h]
 * 00000001403D1A87: mov     [rsp+8E8h+var_788], rax
 * 00000001403D1A8F: mov     rax, [rdi+218h]
 * 00000001403D1A96: mov     [rsp+8E8h+var_790], rax
 * 00000001403D1A9E: mov     rax, [rdi+210h]
 * 00000001403D1AA5: mov     [rsp+8E8h+var_798], rax
 * 00000001403D1AAD: mov     rax, [rdi+208h]
 * 00000001403D1AB4: mov     [rsp+8E8h+var_7A0], rax
 * 00000001403D1ABC: mov     rax, [rdi+200h]
 * 00000001403D1AC3: mov     [rsp+8E8h+var_7A8], rax
 * 00000001403D1ACB: mov     rax, [rdi+1F8h]
 * 00000001403D1AD2: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D1ADA: mov     rax, [rdi+1F0h]
 * 00000001403D1AE1: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D1AE9: mov     rax, [rdi+1E8h]
 * 00000001403D1AF0: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D1AF8: mov     rax, [rdi+1E0h]
 * 00000001403D1AFF: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D1B07: mov     rax, [rdi+1D8h]
 * 00000001403D1B0E: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D1B16: mov     rax, [rdi+1D0h]
 * 00000001403D1B1D: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D1B25: mov     rax, [rdi+1C8h]
 * 00000001403D1B2C: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D1B34: mov     rax, [rdi+1C0h]
 * 00000001403D1B3B: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D1B43: mov     rax, [rdi+1B8h]
 * 00000001403D1B4A: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D1B52: mov     rax, [rdi+1B0h]
 * 00000001403D1B59: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D1B61: mov     rax, [rdi+1A8h]
 * 00000001403D1B68: mov     [rsp+8E8h+var_800], rax
 * 00000001403D1B70: mov     rax, [rdi+1A0h]
 * 00000001403D1B77: mov     [rsp+8E8h+var_808], rax
 * 00000001403D1B7F: mov     rax, [rdi+198h]
 * 00000001403D1B86: mov     [rsp+8E8h+var_810], rax
 * 00000001403D1B8E: mov     rax, [rdi+190h]
 * 00000001403D1B95: mov     [rsp+8E8h+var_818], rax
 * 00000001403D1B9D: mov     rax, [rdi+188h]
 * 00000001403D1BA4: mov     [rsp+8E8h+var_820], rax
 * 00000001403D1BAC: mov     rax, [rdi+180h]
 * 00000001403D1BB3: mov     [rsp+8E8h+var_828], rax
 * 00000001403D1BBB: mov     rax, [rdi+178h]
 * 00000001403D1BC2: mov     [rsp+8E8h+var_830], rax
 * 00000001403D1BCA: mov     rax, [rdi+170h]
 * 00000001403D1BD1: mov     [rsp+8E8h+var_838], rax
 * 00000001403D1BD9: mov     rax, [rdi+168h]
 * 00000001403D1BE0: mov     [rsp+8E8h+var_840], rax
 * 00000001403D1BE8: mov     rax, [rdi+160h]
 * 00000001403D1BEF: mov     [rsp+8E8h+var_848], rax
 * 00000001403D1BF7: mov     rax, [rdi+158h]
 * 00000001403D1BFE: mov     [rsp+8E8h+var_850], rax
 * 00000001403D1C06: mov     rax, [rdi+150h]
 * 00000001403D1C0D: mov     [rsp+8E8h+var_858], rax
 * 00000001403D1C15: mov     rax, [rdi+148h]
 * 00000001403D1C1C: mov     [rsp+8E8h+var_860], rax
 * 00000001403D1C24: mov     rax, [rdi+140h]
 * 00000001403D1C2B: mov     [rsp+8E8h+var_868], rax
 * 00000001403D1C33: mov     rax, [rdi+138h]
 * 00000001403D1C3A: mov     [rsp+8E8h+var_870], rax
 * 00000001403D1C3F: mov     rax, [rdi+130h]
 * 00000001403D1C46: mov     [rsp+8E8h+var_878], rax
 * 00000001403D1C4B: mov     rax, [rdi+128h]
 * 00000001403D1C52: mov     [rsp+8E8h+var_880], rax
 * 00000001403D1C57: mov     rax, [rdi+120h]
 * 00000001403D1C5E: mov     [rsp+8E8h+var_888], rax
 * 00000001403D1C63: mov     rax, [rdi+118h]
 * 00000001403D1C6A: mov     [rsp+8E8h+var_890], rax
 * 00000001403D1C6F: mov     rax, [rdi+110h]
 * 00000001403D1C76: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1C7B: mov     rax, [rdi+108h]
 * 00000001403D1C82: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D1C87: mov     rax, [rdi+100h]
 * 00000001403D1C8E: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1C93: mov     rax, [rdi+0F8h]
 * 00000001403D1C9A: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D1C9F: mov     rax, [rdi+0F0h]
 * 00000001403D1CA6: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1CAB: mov     rax, [rdi+0E8h]
 * 00000001403D1CB2: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1CB7: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D1CBC: mov     r9, rdi
 * 00000001403D1CBF: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D1CC4: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001403D1CCA: test    al, 1
 * 00000001403D1CCC: jz      loc_1403D1FA2
 * 00000001403D1CD2: mov     rax, r15
 * 00000001403D1CD5: imul    rbx
 * 00000001403D1CD8: sar     rdx, 2
 * 00000001403D1CDC: mov     rax, rdx
 * 00000001403D1CDF: shr     rax, 3Fh
 * 00000001403D1CE3: add     rdx, rax
 * 00000001403D1CE6: mov     rax, [rdi+408h]
 * 00000001403D1CED: mov     [rsp+8E8h+var_748], rax
 * 00000001403D1CF5: mov     rax, [rdi+400h]
 * 00000001403D1CFC: mov     [rsp+8E8h+var_750], rax
 * 00000001403D1D04: mov     rax, [rdi+3F8h]
 * 00000001403D1D0B: mov     [rsp+8E8h+var_758], rax
 * 00000001403D1D13: mov     rax, [rdi+3F0h]
 * 00000001403D1D1A: mov     [rsp+8E8h+var_760], rax
 * 00000001403D1D22: mov     rax, [rdi+3E8h]
 * 00000001403D1D29: mov     [rsp+8E8h+var_768], rax
 * 00000001403D1D31: mov     rax, [rdi+3E0h]
 * 00000001403D1D38: mov     [rsp+8E8h+var_770], rax
 * 00000001403D1D40: mov     rax, [rdi+3D8h]
 * 00000001403D1D47: mov     [rsp+8E8h+var_778], rax
 * 00000001403D1D4F: mov     rax, [rdi+3D0h]
 * 00000001403D1D56: mov     [rsp+8E8h+var_780], rax
 * 00000001403D1D5E: mov     rax, [rdi+3C8h]
 * 00000001403D1D65: mov     [rsp+8E8h+var_788], rax
 * 00000001403D1D6D: mov     rax, [rdi+3C0h]
 * 00000001403D1D74: mov     [rsp+8E8h+var_790], rax
 * 00000001403D1D7C: mov     rax, [rdi+3B8h]
 * 00000001403D1D83: mov     [rsp+8E8h+var_798], rax
 * 00000001403D1D8B: mov     rax, [rdi+3B0h]
 * 00000001403D1D92: mov     [rsp+8E8h+var_7A0], rax
 * 00000001403D1D9A: mov     rax, [rdi+3A8h]
 * 00000001403D1DA1: mov     [rsp+8E8h+var_7A8], rax
 * 00000001403D1DA9: mov     rax, [rdi+3A0h]
 * 00000001403D1DB0: mov     [rsp+8E8h+var_7B0], rax
 * 00000001403D1DB8: mov     rax, [rdi+398h]
 * 00000001403D1DBF: mov     [rsp+8E8h+var_7B8], rax
 * 00000001403D1DC7: mov     rax, [rdi+390h]
 * 00000001403D1DCE: mov     [rsp+8E8h+var_7C0], rax
 * 00000001403D1DD6: mov     rax, [rdi+388h]
 * 00000001403D1DDD: mov     [rsp+8E8h+var_7C8], rax
 * 00000001403D1DE5: mov     rax, [rdi+380h]
 * 00000001403D1DEC: mov     [rsp+8E8h+var_7D0], rax
 * 00000001403D1DF4: mov     rax, [rdi+378h]
 * 00000001403D1DFB: mov     [rsp+8E8h+var_7D8], rax
 * 00000001403D1E03: mov     rax, [rdi+370h]
 * 00000001403D1E0A: mov     [rsp+8E8h+var_7E0], rax
 * 00000001403D1E12: mov     rax, [rdi+368h]
 * 00000001403D1E19: mov     [rsp+8E8h+var_7E8], rax
 * 00000001403D1E21: mov     rax, [rdi+360h]
 * 00000001403D1E28: mov     [rsp+8E8h+var_7F0], rax
 * 00000001403D1E30: mov     rax, [rdi+358h]
 * 00000001403D1E37: mov     [rsp+8E8h+var_7F8], rax
 * 00000001403D1E3F: mov     rax, [rdi+350h]
 * 00000001403D1E46: mov     [rsp+8E8h+var_800], rax
 * 00000001403D1E4E: mov     rax, [rdi+348h]
 * 00000001403D1E55: mov     [rsp+8E8h+var_808], rax
 * 00000001403D1E5D: mov     rax, [rdi+340h]
 * 00000001403D1E64: mov     [rsp+8E8h+var_810], rax
 * 00000001403D1E6C: mov     rax, [rdi+338h]
 * 00000001403D1E73: mov     [rsp+8E8h+var_818], rax
 * 00000001403D1E7B: mov     rax, [rdi+330h]
 * 00000001403D1E82: mov     [rsp+8E8h+var_820], rax
 * 00000001403D1E8A: mov     rax, [rdi+328h]
 * 00000001403D1E91: mov     [rsp+8E8h+var_828], rax
 * 00000001403D1E99: mov     rax, [rdi+320h]
 * 00000001403D1EA0: mov     [rsp+8E8h+var_830], rax
 * 00000001403D1EA8: mov     rax, [rdi+318h]
 * 00000001403D1EAF: mov     [rsp+8E8h+var_838], rax
 * 00000001403D1EB7: mov     rax, [rdi+310h]
 * 00000001403D1EBE: mov     [rsp+8E8h+var_840], rax
 * 00000001403D1EC6: mov     rax, [rdi+308h]
 * 00000001403D1ECD: mov     [rsp+8E8h+var_848], rax
 * 00000001403D1ED5: mov     rax, [rdi+300h]
 * 00000001403D1EDC: mov     [rsp+8E8h+var_850], rax
 * 00000001403D1EE4: mov     rax, [rdi+2F8h]
 * 00000001403D1EEB: mov     [rsp+8E8h+var_858], rax
 * 00000001403D1EF3: mov     rax, [rdi+2F0h]
 * 00000001403D1EFA: mov     [rsp+8E8h+var_860], rax
 * 00000001403D1F02: mov     rax, [rdi+2E8h]
 * 00000001403D1F09: mov     [rsp+8E8h+var_868], rax
 * 00000001403D1F11: mov     rax, [rdi+2E0h]
 * 00000001403D1F18: mov     [rsp+8E8h+var_870], rax
 * 00000001403D1F1D: mov     rax, [rdi+2D8h]
 * 00000001403D1F24: mov     [rsp+8E8h+var_878], rax
 * 00000001403D1F29: mov     rax, [rdi+2D0h]
 * 00000001403D1F30: mov     [rsp+8E8h+var_880], rax
 * 00000001403D1F35: mov     rax, [rdi+2C8h]
 * 00000001403D1F3C: mov     [rsp+8E8h+var_888], rax
 * 00000001403D1F41: mov     rax, [rdi+2C0h]
 * 00000001403D1F48: mov     [rsp+8E8h+var_890], rax
 * 00000001403D1F4D: mov     rax, [rdi+2B8h]
 * 00000001403D1F54: mov     [rsp+8E8h+var_898], rax
 * 00000001403D1F59: mov     rax, [rdi+2B0h]
 * 00000001403D1F60: mov     [rsp+8E8h+var_8A0], rax
 * 00000001403D1F65: mov     rax, [rdi+2A8h]
 * 00000001403D1F6C: mov     [rsp+8E8h+var_8A8], rax
 * 00000001403D1F71: mov     rax, [rdi+2A0h]
 * 00000001403D1F78: mov     [rsp+8E8h+var_8B0], rax
 * 00000001403D1F7D: mov     rax, [rdi+298h]
 * 00000001403D1F84: mov     [rsp+8E8h+var_8B8], rax
 * 00000001403D1F89: mov     rax, [rdi+290h]
 * 00000001403D1F90: mov     [rsp+8E8h+var_8C0], rax
 * 00000001403D1F95: mov     [rsp+8E8h+var_8C8], rdx
 * 00000001403D1F9A: mov     r9, rdi
 * 00000001403D1F9D: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001403D1FA2: xor     r10d, r10d
 * 00000001403D1FA5: test    r13b, r13b
 * 00000001403D1FA8: jnz     loc_1404FBC9F
 * 00000001403D1FAE: mov     eax, [rsp+8E8h+var_670]
 * 00000001403D1FB5: inc     eax
 * 00000001403D1FB7: jmp     loc_1403D1648
 * 00000001403D1FBC: mov     cs:qword_140C5F870, rsi
 * 00000001403D1FC3: xor     edx, edx; Tag
 * 00000001403D1FC5: mov     rcx, [rsp+8E8h+P]; P
 * 00000001403D1FCD: call    ExFreePoolWithTag
 * 00000001403D1FD2: jmp     loc_1403D133D
 * 00000001404421A0: push    rbx
 * 00000001404421A2: push    rbp
 * 00000001404421A3: sub     rsp, 278h
 * 00000001404421AA: mov     rbp, rdx
 * 00000001404421AD: lea     rcx, [rbp+2D0h]
 * 00000001404421B4: call    KxReleaseQueuedSpinLock
 * 00000001404421B9: mov     rbx, [rbp+2E0h]
 * 00000001404421C0: mov     ecx, cs:KiIrqlFlags
 * 00000001404421C6: test    ecx, ecx
 * 00000001404421C8: jz      short loc_140442226
 * 00000001404421CA: mov     rax, cr8
 * 00000001404421CE: mov     [rbp+27Ch], al
 * 00000001404421D4: test    cl, 1
 * 00000001404421D7: jz      short loc_140442226
 * 00000001404421D9: cmp     al, 0Fh
 * 00000001404421DB: ja      short loc_140442226
 * 00000001404421DD: cmp     bl, 0Fh
 * 00000001404421E0: ja      short loc_140442226
 * 00000001404421E2: cmp     al, 2
 * 00000001404421E4: jb      short loc_140442226
 * 00000001404421E6: mov     r10, gs:20h
 * 00000001404421EF: mov     r9, [r10+88B8h]
 * 00000001404421F6: mov     r8d, [r9+14h]
 * 00000001404421FA: movzx   ecx, byte ptr [rbp+2E0h]
 * 0000000140442201: inc     ecx
 * 0000000140442203: mov     edx, 1
 * 0000000140442208: shl     rdx, cl
 * 000000014044220B: dec     edx
 * 000000014044220D: not     edx
 * 000000014044220F: movzx   eax, dx
 * 0000000140442212: not     eax
 * 0000000140442214: and     r8d, eax
 * 0000000140442217: mov     [r9+14h], r8d
 * 000000014044221B: jnz     short loc_140442226
 * 000000014044221D: mov     rcx, r10
 * 0000000140442220: call    KiRemoveSystemWorkPriorityKick
 * 0000000140442225: nop
 * 0000000140442226: movzx   eax, bl
 * 0000000140442229: mov     cr8, rax
 * 000000014044222D: add     rsp, 278h
 * 0000000140442234: pop     rbp
 * 0000000140442235: pop     rbx
 * 0000000140442236: retn
 * 00000001404FB7E0: mov     r13b, 1
 * 00000001404FB7E3: jmp     loc_1403D138B
 * 00000001404FB7E8: mov     rax, cr8
 * 00000001404FB7EC: test    cl, 1
 * 00000001404FB7EF: jz      loc_1403D1529
 * 00000001404FB7F5: cmp     al, 0Fh
 * 00000001404FB7F7: ja      loc_1403D1529
 * 00000001404FB7FD: cmp     r14b, 0Fh
 * 00000001404FB801: ja      loc_1403D1529
 * 00000001404FB807: mov     r12d, 2
 * 00000001404FB80D: cmp     al, r12b
 * 00000001404FB810: jb      loc_1403D1529
 * 00000001404FB816: mov     r10, gs:20h
 * 00000001404FB81F: mov     r9, [r10+88B8h]
 * 00000001404FB826: mov     r8d, [r9+14h]
 * 00000001404FB82A: movzx   ecx, [rsp+8E8h+LockHandle.OldIrql]
 * 00000001404FB832: inc     ecx
 * 00000001404FB834: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001404FB838: shl     rdx, cl
 * 00000001404FB83B: movzx   eax, dx
 * 00000001404FB83E: not     eax
 * 00000001404FB840: and     r8d, eax
 * 00000001404FB843: mov     [r9+14h], r8d
 * 00000001404FB847: jnz     loc_1403D1529
 * 00000001404FB84D: mov     rcx, r10
 * 00000001404FB850: call    KiRemoveSystemWorkPriorityKick
 * 00000001404FB855: nop
 * 00000001404FB856: jmp     loc_1403D1529
 * 00000001404FB85B: mov     r9d, 5
 * 00000001404FB861: cmp     cs:dword_140C02F08, r9d
 * 00000001404FB868: jbe     loc_1404FBC1B
 * 00000001404FB86E: mov     rdx, 400000000000h
 * 00000001404FB878: lea     rcx, dword_140C02F08
 * 00000001404FB87F: call    _tlgKeywordOn
 * 00000001404FB884: test    al, al
 * 00000001404FB886: jz      loc_1404FBC1B
 * 00000001404FB88C: mov     [rsp+8E8h+var_600], 1000000h
 * 00000001404FB898: lea     rax, [rsp+8E8h+var_600]
 * 00000001404FB8A0: mov     [rsp+8E8h+var_418], rax
 * 00000001404FB8A8: mov     [rsp+8E8h+var_410], 8
 * 00000001404FB8B4: mov     [rsp+8E8h+var_678], r9w
 * 00000001404FB8BD: lea     rax, [rsp+8E8h+var_678]
 * 00000001404FB8C5: mov     [rsp+8E8h+var_408], rax
 * 00000001404FB8CD: mov     [rsp+8E8h+var_400], 2
 * 00000001404FB8D9: mov     rax, r15
 * 00000001404FB8DC: imul    rdi
 * 00000001404FB8DF: sar     rdx, 2
 * 00000001404FB8E3: mov     rax, rdx
 * 00000001404FB8E6: shr     rax, 3Fh
 * 00000001404FB8EA: add     rdx, rax
 * 00000001404FB8ED: mov     [rsp+8E8h+var_5F8], rdx
 * 00000001404FB8F5: lea     rax, [rsp+8E8h+var_5F8]
 * 00000001404FB8FD: mov     [rsp+8E8h+var_3F8], rax
 * 00000001404FB905: mov     [rsp+8E8h+var_3F0], 8
 * 00000001404FB911: mov     eax, cs:CcNumberNumaNodes
 * 00000001404FB917: mov     [rsp+8E8h+var_670], eax
 * 00000001404FB91E: lea     rax, [rsp+8E8h+var_670]
 * 00000001404FB926: mov     [rsp+8E8h+var_3E8], rax
 * 00000001404FB92E: mov     [rsp+8E8h+var_3E0], 4
 * 00000001404FB93A: mov     rax, cs:qword_140C5F930
 * 00000001404FB941: mov     [rsp+8E8h+var_5F0], rax
 * 00000001404FB949: lea     rax, [rsp+8E8h+var_5F0]
 * 00000001404FB951: mov     [rsp+8E8h+var_3D8], rax
 * 00000001404FB959: mov     [rsp+8E8h+var_3D0], 8
 * 00000001404FB965: mov     rax, cs:qword_140C5F938
 * 00000001404FB96C: mov     [rsp+8E8h+var_5E8], rax
 * 00000001404FB974: lea     rax, [rsp+8E8h+var_5E8]
 * 00000001404FB97C: mov     [rsp+8E8h+var_3C8], rax
 * 00000001404FB984: mov     [rsp+8E8h+var_3C0], 8
 * 00000001404FB990: mov     rax, cs:qword_140C5F968
 * 00000001404FB997: mov     [rsp+8E8h+var_5E0], rax
 * 00000001404FB99F: lea     rax, [rsp+8E8h+var_5E0]
 * 00000001404FB9A7: mov     [rsp+8E8h+var_3B8], rax
 * 00000001404FB9AF: mov     [rsp+8E8h+var_3B0], 8
 * 00000001404FB9BB: mov     rax, cs:qword_140C5F970
 * 00000001404FB9C2: mov     [rsp+8E8h+var_5D8], rax
 * 00000001404FB9CA: lea     rax, [rsp+8E8h+var_5D8]
 * 00000001404FB9D2: mov     [rsp+8E8h+var_3A8], rax
 * 00000001404FB9DA: mov     [rsp+8E8h+var_3A0], 8
 * 00000001404FB9E6: mov     rax, cs:qword_140C5F978
 * 00000001404FB9ED: mov     [rsp+8E8h+var_5D0], rax
 * 00000001404FB9F5: lea     rax, [rsp+8E8h+var_5D0]
 * 00000001404FB9FD: mov     [rsp+8E8h+var_398], rax
 * 00000001404FBA05: mov     [rsp+8E8h+var_390], 8
 * 00000001404FBA11: mov     rax, cs:qword_140C5F980
 * 00000001404FBA18: mov     [rsp+8E8h+var_5C8], rax
 * 00000001404FBA20: lea     rax, [rsp+8E8h+var_5C8]
 * 00000001404FBA28: mov     [rsp+8E8h+var_388], rax
 * 00000001404FBA30: mov     [rsp+8E8h+var_380], 8
 * 00000001404FBA3C: mov     rax, cs:qword_140C5F988
 * 00000001404FBA43: mov     [rsp+8E8h+var_5C0], rax
 * 00000001404FBA4B: lea     rax, [rsp+8E8h+var_5C0]
 * 00000001404FBA53: mov     [rsp+8E8h+var_378], rax
 * 00000001404FBA5B: mov     [rsp+8E8h+var_370], 8
 * 00000001404FBA67: mov     rax, cs:qword_140C5F990
 * 00000001404FBA6E: mov     [rsp+8E8h+var_5B8], rax
 * 00000001404FBA76: lea     rax, [rsp+8E8h+var_5B8]
 * 00000001404FBA7E: mov     [rsp+8E8h+var_368], rax
 * 00000001404FBA86: mov     [rsp+8E8h+var_360], 8
 * 00000001404FBA92: mov     rax, cs:qword_140C5F998
 * 00000001404FBA99: mov     [rsp+8E8h+var_5B0], rax
 * 00000001404FBAA1: lea     rax, [rsp+8E8h+var_5B0]
 * 00000001404FBAA9: mov     [rsp+8E8h+var_358], rax
 * 00000001404FBAB1: mov     [rsp+8E8h+var_350], 8
 * 00000001404FBABD: mov     rax, cs:qword_140C5F9A0
 * 00000001404FBAC4: mov     [rsp+8E8h+var_5A8], rax
 * 00000001404FBACC: lea     rax, [rsp+8E8h+var_5A8]
 * 00000001404FBAD4: mov     [rsp+8E8h+var_348], rax
 * 00000001404FBADC: mov     [rsp+8E8h+var_340], 8
 * 00000001404FBAE8: mov     rax, cs:qword_140C5F9A8
 * 00000001404FBAEF: mov     [rsp+8E8h+var_5A0], rax
 * 00000001404FBAF7: lea     rax, [rsp+8E8h+var_5A0]
 * 00000001404FBAFF: mov     [rsp+8E8h+var_338], rax
 * 00000001404FBB07: mov     [rsp+8E8h+var_330], 8
 * 00000001404FBB13: mov     rax, cs:qword_140C5F940
 * 00000001404FBB1A: mov     [rsp+8E8h+var_598], rax
 * 00000001404FBB22: lea     rax, [rsp+8E8h+var_598]
 * 00000001404FBB2A: mov     [rsp+8E8h+var_328], rax
 * 00000001404FBB32: mov     [rsp+8E8h+var_320], 8
 * 00000001404FBB3E: mov     rax, cs:qword_140C5F948
 * 00000001404FBB45: mov     [rsp+8E8h+var_590], rax
 * 00000001404FBB4D: lea     rax, [rsp+8E8h+var_590]
 * 00000001404FBB55: mov     [rsp+8E8h+var_318], rax
 * 00000001404FBB5D: mov     [rsp+8E8h+var_310], 8
 * 00000001404FBB69: mov     rax, cs:qword_140C5F950
 * 00000001404FBB70: mov     [rsp+8E8h+var_588], rax
 * 00000001404FBB78: lea     rax, [rsp+8E8h+var_588]
 * 00000001404FBB80: mov     [rsp+8E8h+var_308], rax
 * 00000001404FBB88: mov     [rsp+8E8h+var_300], 8
 * 00000001404FBB94: mov     rax, cs:qword_140C5F958
 * 00000001404FBB9B: mov     [rsp+8E8h+var_620], rax
 * 00000001404FBBA3: lea     rax, [rsp+8E8h+var_620]
 * 00000001404FBBAB: mov     [rsp+8E8h+var_2F8], rax
 * 00000001404FBBB3: mov     [rsp+8E8h+var_2F0], 8
 * 00000001404FBBBF: mov     rax, cs:qword_140C5F960
 * 00000001404FBBC6: mov     [rsp+8E8h+var_628], rax
 * 00000001404FBBCE: lea     rax, [rsp+8E8h+var_628]
 * 00000001404FBBD6: mov     [rsp+8E8h+var_2E8], rax
 * 00000001404FBBDE: mov     [rsp+8E8h+var_2E0], 8
 * 00000001404FBBEA: lea     rax, [rsp+8E8h+var_438]
 * 00000001404FBBF2: mov     [rsp+8E8h+var_8C0], rax
 * 00000001404FBBF7: mov     dword ptr [rsp+8E8h+var_8C8], 16h
 * 00000001404FBBFF: xor     r9d, r9d
 * 00000001404FBC02: xor     r8d, r8d
 * 00000001404FBC05: lea     rdx, byte_140029C4D
 * 00000001404FBC0C: lea     rcx, dword_140C02F08
 * 00000001404FBC13: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001404FBC18: xor     r10d, r10d
 * 00000001404FBC1B: mov     cs:qword_140C5F930, r10
 * 00000001404FBC22: mov     cs:qword_140C5F938, r10
 * 00000001404FBC29: mov     cs:qword_140C5F940, r10
 * 00000001404FBC30: mov     cs:qword_140C5F948, r10
 * 00000001404FBC37: mov     cs:qword_140C5F950, r10
 * 00000001404FBC3E: mov     cs:qword_140C5F958, r10
 * 00000001404FBC45: mov     cs:qword_140C5F960, r10
 * 00000001404FBC4C: mov     cs:qword_140C5F968, r10
 * 00000001404FBC53: mov     cs:qword_140C5F970, r10
 * 00000001404FBC5A: mov     cs:qword_140C5F978, r10
 * 00000001404FBC61: mov     cs:qword_140C5F980, r10
 * 00000001404FBC68: mov     cs:qword_140C5F988, r10
 * 00000001404FBC6F: mov     cs:qword_140C5F990, r10
 * 00000001404FBC76: mov     cs:qword_140C5F998, r10
 * 00000001404FBC7D: mov     cs:qword_140C5F9A0, r10
 * 00000001404FBC84: mov     cs:qword_140C5F9A8, r10
 * 00000001404FBC8B: mov     cs:qword_140C5F878, rsi
 * 00000001404FBC92: jmp     loc_1403D1645
 * 00000001404FBC97: mov     r9, r10
 * 00000001404FBC9A: jmp     loc_1403D1690
 * 00000001404FBC9F: mov     r9d, 5
 * 00000001404FBCA5: cmp     cs:dword_140C02F08, r9d
 * 00000001404FBCAC: jbe     loc_1403D1FAE
 * 00000001404FBCB2: mov     rdx, 400000000000h
 * 00000001404FBCBC: lea     rcx, dword_140C02F08
 * 00000001404FBCC3: call    _tlgKeywordOn
 * 00000001404FBCC8: test    al, al
 * 00000001404FBCCA: jz      loc_1403D1FAE
 * 00000001404FBCD0: mov     [rsp+8E8h+var_628], 1000000h
 * 00000001404FBCDC: lea     rax, [rsp+8E8h+var_628]
 * 00000001404FBCE4: mov     [rsp+8E8h+var_418], rax
 * 00000001404FBCEC: mov     [rsp+8E8h+var_410], 8
 * 00000001404FBCF8: mov     [rsp+8E8h+var_678], r9w
 * 00000001404FBD01: lea     rax, [rsp+8E8h+var_678]
 * 00000001404FBD09: mov     [rsp+8E8h+var_408], rax
 * 00000001404FBD11: mov     [rsp+8E8h+var_400], 2
 * 00000001404FBD1D: mov     [rsp+8E8h+var_3F8], rdi
 * 00000001404FBD25: mov     [rsp+8E8h+var_3F0], 10h
 * 00000001404FBD31: mov     rax, r15
 * 00000001404FBD34: imul    rbx
 * 00000001404FBD37: sar     rdx, 2
 * 00000001404FBD3B: mov     rax, rdx
 * 00000001404FBD3E: shr     rax, 3Fh
 * 00000001404FBD42: add     rdx, rax
 * 00000001404FBD45: mov     [rsp+8E8h+var_620], rdx
 * 00000001404FBD4D: lea     rax, [rsp+8E8h+var_620]
 * 00000001404FBD55: mov     [rsp+8E8h+var_3E8], rax
 * 00000001404FBD5D: mov     [rsp+8E8h+var_3E0], 8
 * 00000001404FBD69: mov     rax, [rdi+4E0h]
 * 00000001404FBD70: mov     [rsp+8E8h+var_580], rax
 * 00000001404FBD78: lea     rax, [rsp+8E8h+var_580]
 * 00000001404FBD80: mov     [rsp+8E8h+var_3D8], rax
 * 00000001404FBD88: mov     [rsp+8E8h+var_3D0], 8
 * 00000001404FBD94: mov     rax, [rdi+4E8h]
 * 00000001404FBD9B: mov     [rsp+8E8h+var_578], rax
 * 00000001404FBDA3: lea     rax, [rsp+8E8h+var_578]
 * 00000001404FBDAB: mov     [rsp+8E8h+var_3C8], rax
 * 00000001404FBDB3: mov     [rsp+8E8h+var_3C0], 8
 * 00000001404FBDBF: mov     rax, [rdi+4F0h]
 * 00000001404FBDC6: mov     [rsp+8E8h+var_570], rax
 * 00000001404FBDCE: lea     rax, [rsp+8E8h+var_570]
 * 00000001404FBDD6: mov     [rsp+8E8h+var_3B8], rax
 * 00000001404FBDDE: mov     [rsp+8E8h+var_3B0], 8
 * 00000001404FBDEA: mov     rax, [rdi+4F8h]
 * 00000001404FBDF1: mov     [rsp+8E8h+var_568], rax
 * 00000001404FBDF9: lea     rax, [rsp+8E8h+var_568]
 * 00000001404FBE01: mov     [rsp+8E8h+var_3A8], rax
 * 00000001404FBE09: mov     [rsp+8E8h+var_3A0], 8
 * 00000001404FBE15: mov     rax, [rdi+500h]
 * 00000001404FBE1C: mov     [rsp+8E8h+var_560], rax
 * 00000001404FBE24: lea     rax, [rsp+8E8h+var_560]
 * 00000001404FBE2C: mov     [rsp+8E8h+var_398], rax
 * 00000001404FBE34: mov     [rsp+8E8h+var_390], 8
 * 00000001404FBE40: mov     rax, [rdi+508h]
 * 00000001404FBE47: mov     [rsp+8E8h+var_558], rax
 * 00000001404FBE4F: lea     rax, [rsp+8E8h+var_558]
 * 00000001404FBE57: mov     [rsp+8E8h+var_388], rax
 * 00000001404FBE5F: mov     [rsp+8E8h+var_380], 8
 * 00000001404FBE6B: mov     rax, [rdi+588h]
 * 00000001404FBE72: mov     [rsp+8E8h+var_550], rax
 * 00000001404FBE7A: lea     rax, [rsp+8E8h+var_550]
 * 00000001404FBE82: mov     [rsp+8E8h+var_378], rax
 * 00000001404FBE8A: mov     [rsp+8E8h+var_370], 8
 * 00000001404FBE96: mov     rax, [rdi+590h]
 * 00000001404FBE9D: mov     [rsp+8E8h+var_548], rax
 * 00000001404FBEA5: lea     rax, [rsp+8E8h+var_548]
 * 00000001404FBEAD: mov     [rsp+8E8h+var_368], rax
 * 00000001404FBEB5: mov     [rsp+8E8h+var_360], 8
 * 00000001404FBEC1: mov     rax, [rdi+598h]
 * 00000001404FBEC8: mov     [rsp+8E8h+var_540], rax
 * 00000001404FBED0: lea     rax, [rsp+8E8h+var_540]
 * 00000001404FBED8: mov     [rsp+8E8h+var_358], rax
 * 00000001404FBEE0: mov     [rsp+8E8h+var_350], 8
 * 00000001404FBEEC: mov     rax, [rdi+5A0h]
 * 00000001404FBEF3: mov     [rsp+8E8h+var_538], rax
 * 00000001404FBEFB: lea     rax, [rsp+8E8h+var_538]
 * 00000001404FBF03: mov     [rsp+8E8h+var_348], rax
 * 00000001404FBF0B: mov     [rsp+8E8h+var_340], 8
 * 00000001404FBF17: mov     rax, [rdi+510h]
 * 00000001404FBF1E: mov     [rsp+8E8h+var_530], rax
 * 00000001404FBF26: lea     rax, [rsp+8E8h+var_530]
 * 00000001404FBF2E: mov     [rsp+8E8h+var_338], rax
 * 00000001404FBF36: mov     [rsp+8E8h+var_330], 8
 * 00000001404FBF42: mov     rax, [rdi+518h]
 * 00000001404FBF49: mov     [rsp+8E8h+var_528], rax
 * 00000001404FBF51: lea     rax, [rsp+8E8h+var_528]
 * 00000001404FBF59: mov     [rsp+8E8h+var_328], rax
 * 00000001404FBF61: mov     [rsp+8E8h+var_320], 8
 * 00000001404FBF6D: mov     rax, [rdi+520h]
 * 00000001404FBF74: mov     [rsp+8E8h+var_520], rax
 * 00000001404FBF7C: lea     rax, [rsp+8E8h+var_520]
 * 00000001404FBF84: mov     [rsp+8E8h+var_318], rax
 * 00000001404FBF8C: mov     [rsp+8E8h+var_310], 8
 * 00000001404FBF98: mov     rax, [rdi+528h]
 * 00000001404FBF9F: mov     [rsp+8E8h+var_518], rax
 * 00000001404FBFA7: lea     rax, [rsp+8E8h+var_518]
 * 00000001404FBFAF: mov     [rsp+8E8h+var_308], rax
 * 00000001404FBFB7: mov     [rsp+8E8h+var_300], 8
 * 00000001404FBFC3: mov     rax, [rdi+530h]
 * 00000001404FBFCA: mov     [rsp+8E8h+var_510], rax
 * 00000001404FBFD2: lea     rax, [rsp+8E8h+var_510]
 * 00000001404FBFDA: mov     [rsp+8E8h+var_2F8], rax
 * 00000001404FBFE2: mov     [rsp+8E8h+var_2F0], 8
 * 00000001404FBFEE: mov     rax, [rdi+538h]
 * 00000001404FBFF5: mov     [rsp+8E8h+var_508], rax
 * 00000001404FBFFD: lea     rax, [rsp+8E8h+var_508]
 * 00000001404FC005: mov     [rsp+8E8h+var_2E8], rax
 * 00000001404FC00D: mov     [rsp+8E8h+var_2E0], 8
 * 00000001404FC019: mov     rax, [rdi+540h]
 * 00000001404FC020: mov     [rsp+8E8h+var_500], rax
 * 00000001404FC028: lea     rax, [rsp+8E8h+var_500]
 * 00000001404FC030: mov     [rsp+8E8h+var_2D8], rax
 * 00000001404FC038: mov     [rsp+8E8h+var_2D0], 8
 * 00000001404FC044: mov     rax, [rdi+548h]
 * 00000001404FC04B: mov     [rsp+8E8h+var_4F8], rax
 * 00000001404FC053: lea     rax, [rsp+8E8h+var_4F8]
 * 00000001404FC05B: mov     [rsp+8E8h+var_2C8], rax
 * 00000001404FC063: mov     [rsp+8E8h+var_2C0], 8
 * 00000001404FC06F: mov     rax, [rsp+8E8h+var_638]
 * 00000001404FC077: mov     [rsp+8E8h+var_4F0], rax
 * 00000001404FC07F: lea     rax, [rsp+8E8h+var_4F0]
 * 00000001404FC087: mov     [rsp+8E8h+var_2B8], rax
 * 00000001404FC08F: mov     [rsp+8E8h+var_2B0], 8
 * 00000001404FC09B: mov     rax, [rdi+550h]
 * 00000001404FC0A2: mov     [rsp+8E8h+var_4E8], rax
 * 00000001404FC0AA: lea     rax, [rsp+8E8h+var_4E8]
 * 00000001404FC0B2: mov     [rsp+8E8h+var_2A8], rax
 * 00000001404FC0BA: mov     [rsp+8E8h+var_2A0], 8
 * 00000001404FC0C6: mov     rax, [rdi+570h]
 * 00000001404FC0CD: mov     [rsp+8E8h+var_4E0], rax
 * 00000001404FC0D5: lea     rax, [rsp+8E8h+var_4E0]
 * 00000001404FC0DD: mov     [rsp+8E8h+var_298], rax
 * 00000001404FC0E5: mov     [rsp+8E8h+var_290], 8
 * 00000001404FC0F1: mov     rax, [rdi+578h]
 * 00000001404FC0F8: mov     [rsp+8E8h+var_4D8], rax
 * 00000001404FC100: lea     rax, [rsp+8E8h+var_4D8]
 * 00000001404FC108: mov     [rsp+8E8h+var_288], rax
 * 00000001404FC110: mov     [rsp+8E8h+var_280], 8
 * 00000001404FC11C: mov     rax, [rdi+580h]
 * 00000001404FC123: mov     [rsp+8E8h+var_4D0], rax
 * 00000001404FC12B: lea     rax, [rsp+8E8h+var_4D0]
 * 00000001404FC133: mov     [rsp+8E8h+var_278], rax
 * 00000001404FC13B: mov     [rsp+8E8h+var_270], 8
 * 00000001404FC147: mov     rax, [rdi+558h]
 * 00000001404FC14E: mov     [rsp+8E8h+var_4C8], rax
 * 00000001404FC156: lea     rax, [rsp+8E8h+var_4C8]
 * 00000001404FC15E: mov     [rsp+8E8h+var_268], rax
 * 00000001404FC166: mov     [rsp+8E8h+var_260], 8
 * 00000001404FC172: mov     rax, [rdi+560h]
 * 00000001404FC179: mov     [rsp+8E8h+var_4C0], rax
 * 00000001404FC181: lea     rax, [rsp+8E8h+var_4C0]
 * 00000001404FC189: mov     [rsp+8E8h+var_258], rax
 * 00000001404FC191: mov     [rsp+8E8h+var_250], 8
 * 00000001404FC19D: mov     rax, [rdi+568h]
 * 00000001404FC1A4: mov     [rsp+8E8h+var_4B8], rax
 * 00000001404FC1AC: lea     rax, [rsp+8E8h+var_4B8]
 * 00000001404FC1B4: mov     [rsp+8E8h+var_248], rax
 * 00000001404FC1BC: mov     [rsp+8E8h+var_240], 8
 * 00000001404FC1C8: mov     rax, [rdi+5A8h]
 * 00000001404FC1CF: mov     [rsp+8E8h+var_4B0], rax
 * 00000001404FC1D7: lea     rax, [rsp+8E8h+var_4B0]
 * 00000001404FC1DF: mov     [rsp+8E8h+var_238], rax
 * 00000001404FC1E7: mov     [rsp+8E8h+var_230], 8
 * 00000001404FC1F3: mov     rax, [rdi+5B0h]
 * 00000001404FC1FA: mov     [rsp+8E8h+var_4A8], rax
 * 00000001404FC202: lea     rax, [rsp+8E8h+var_4A8]
 * 00000001404FC20A: mov     [rsp+8E8h+var_228], rax
 * 00000001404FC212: mov     [rsp+8E8h+var_220], 8
 * 00000001404FC21E: mov     rax, [rdi+738h]
 * 00000001404FC225: mov     [rsp+8E8h+var_4A0], rax
 * 00000001404FC22D: lea     rax, [rsp+8E8h+var_4A0]
 * 00000001404FC235: mov     [rsp+8E8h+var_218], rax
 * 00000001404FC23D: mov     [rsp+8E8h+var_210], 8
 * 00000001404FC249: mov     rax, [rdi+740h]
 * 00000001404FC250: mov     [rsp+8E8h+var_498], rax
 * 00000001404FC258: lea     rax, [rsp+8E8h+var_498]
 * 00000001404FC260: mov     [rsp+8E8h+var_208], rax
 * 00000001404FC268: mov     [rsp+8E8h+var_200], 8
 * 00000001404FC274: mov     rax, [rdi+748h]
 * 00000001404FC27B: mov     [rsp+8E8h+var_490], rax
 * 00000001404FC283: lea     rax, [rsp+8E8h+var_490]
 * 00000001404FC28B: mov     [rsp+8E8h+var_1F8], rax
 * 00000001404FC293: mov     [rsp+8E8h+var_1F0], 8
 * 00000001404FC29F: mov     rax, [rdi+750h]
 * 00000001404FC2A6: mov     [rsp+8E8h+var_488], rax
 * 00000001404FC2AE: lea     rax, [rsp+8E8h+var_488]
 * 00000001404FC2B6: mov     [rsp+8E8h+var_1E8], rax
 * 00000001404FC2BE: mov     [rsp+8E8h+var_1E0], 8
 * 00000001404FC2CA: mov     rax, [rdi+758h]
 * 00000001404FC2D1: mov     [rsp+8E8h+var_480], rax
 * 00000001404FC2D9: lea     rax, [rsp+8E8h+var_480]
 * 00000001404FC2E1: mov     [rsp+8E8h+var_1D8], rax
 * 00000001404FC2E9: mov     [rsp+8E8h+var_1D0], 8
 * 00000001404FC2F5: mov     rax, [rdi+8E0h]
 * 00000001404FC2FC: mov     [rsp+8E8h+var_478], rax
 * 00000001404FC304: lea     rax, [rsp+8E8h+var_478]
 * 00000001404FC30C: mov     [rsp+8E8h+var_1C8], rax
 * 00000001404FC314: mov     [rsp+8E8h+var_1C0], 8
 * 00000001404FC320: mov     rax, [rdi+8E8h]
 * 00000001404FC327: mov     [rsp+8E8h+var_470], rax
 * 00000001404FC32F: lea     rax, [rsp+8E8h+var_470]
 * 00000001404FC337: mov     [rsp+8E8h+var_1B8], rax
 * 00000001404FC33F: mov     [rsp+8E8h+var_1B0], 8
 * 00000001404FC34B: mov     rax, [rdi+588h]
 * 00000001404FC352: mov     [rsp+8E8h+var_468], rax
 * 00000001404FC35A: lea     rax, [rsp+8E8h+var_468]
 * 00000001404FC362: mov     [rsp+8E8h+var_1A8], rax
 * 00000001404FC36A: mov     [rsp+8E8h+var_1A0], 8
 * 00000001404FC376: mov     rax, [rdi+590h]
 * 00000001404FC37D: mov     [rsp+8E8h+var_460], rax
 * 00000001404FC385: lea     rax, [rsp+8E8h+var_460]
 * 00000001404FC38D: mov     [rsp+8E8h+var_198], rax
 * 00000001404FC395: mov     [rsp+8E8h+var_190], 8
 * 00000001404FC3A1: mov     rax, [rdi+598h]
 * 00000001404FC3A8: mov     [rsp+8E8h+var_458], rax
 * 00000001404FC3B0: lea     rax, [rsp+8E8h+var_458]
 * 00000001404FC3B8: mov     [rsp+8E8h+var_188], rax
 * 00000001404FC3C0: mov     [rsp+8E8h+var_180], 8
 * 00000001404FC3CC: lea     rdx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 00000001404FC3D3: lea     rcx, [rsp+8E8h+var_178]
 * 00000001404FC3DB: call    _tlgCreate1Sz_wchar_t
 * 00000001404FC3E0: mov     edx, 0Ch
 * 00000001404FC3E5: mov     [rsp+8E8h+var_668], dx
 * 00000001404FC3ED: lea     rax, [rsp+8E8h+var_668]
 * 00000001404FC3F5: mov     [rsp+8E8h+var_168], rax
 * 00000001404FC3FD: mov     [rsp+8E8h+var_160], 2
 * 00000001404FC409: lea     rax, [rdi+5B8h]
 * 00000001404FC410: mov     [rsp+8E8h+var_158], rax
 * 00000001404FC418: mov     [rsp+8E8h+var_150], 60h ; '`'
 * 00000001404FC424: mov     [rsp+8E8h+var_664], dx
 * 00000001404FC42C: lea     rax, [rsp+8E8h+var_664]
 * 00000001404FC434: mov     [rsp+8E8h+var_148], rax
 * 00000001404FC43C: mov     [rsp+8E8h+var_140], 2
 * 00000001404FC448: lea     rax, [rdi+618h]
 * 00000001404FC44F: mov     [rsp+8E8h+var_138], rax
 * 00000001404FC457: mov     [rsp+8E8h+var_130], 60h ; '`'
 * 00000001404FC463: mov     [rsp+8E8h+var_660], dx
 * 00000001404FC46B: lea     rax, [rsp+8E8h+var_660]
 * 00000001404FC473: mov     [rsp+8E8h+var_128], rax
 * 00000001404FC47B: mov     [rsp+8E8h+var_120], 2
 * 00000001404FC487: lea     rax, [rdi+678h]
 * 00000001404FC48E: mov     [rsp+8E8h+var_118], rax
 * 00000001404FC496: mov     [rsp+8E8h+var_110], 60h ; '`'
 * 00000001404FC4A2: mov     [rsp+8E8h+var_65C], dx
 * 00000001404FC4AA: lea     rax, [rsp+8E8h+var_65C]
 * 00000001404FC4B2: mov     [rsp+8E8h+var_108], rax
 * 00000001404FC4BA: mov     [rsp+8E8h+var_100], 2
 * 00000001404FC4C6: lea     rax, [rdi+6D8h]
 * 00000001404FC4CD: mov     [rsp+8E8h+var_F8], rax
 * 00000001404FC4D5: mov     [rsp+8E8h+var_F0], 60h ; '`'
 * 00000001404FC4E1: mov     [rsp+8E8h+var_658], dx
 * 00000001404FC4E9: lea     rax, [rsp+8E8h+var_658]
 * 00000001404FC4F1: mov     [rsp+8E8h+var_E8], rax
 * 00000001404FC4F9: mov     [rsp+8E8h+var_E0], 2
 * 00000001404FC505: lea     rax, [rdi+760h]
 * 00000001404FC50C: mov     [rsp+8E8h+var_D8], rax
 * 00000001404FC514: mov     [rsp+8E8h+var_D0], 60h ; '`'
 * 00000001404FC520: mov     [rsp+8E8h+var_654], dx
 * 00000001404FC528: lea     rax, [rsp+8E8h+var_654]
 * 00000001404FC530: mov     [rsp+8E8h+var_C8], rax
 * 00000001404FC538: mov     [rsp+8E8h+var_C0], 2
 * 00000001404FC544: lea     rax, [rdi+7C0h]
 * 00000001404FC54B: mov     [rsp+8E8h+var_B8], rax
 * 00000001404FC553: mov     [rsp+8E8h+var_B0], 60h ; '`'
 * 00000001404FC55F: mov     [rsp+8E8h+var_650], dx
 * 00000001404FC567: lea     rax, [rsp+8E8h+var_650]
 * 00000001404FC56F: mov     [rsp+8E8h+var_A8], rax
 * 00000001404FC577: mov     [rsp+8E8h+var_A0], 2
 * 00000001404FC583: lea     rax, [rdi+820h]
 * 00000001404FC58A: mov     [rsp+8E8h+var_98], rax
 * 00000001404FC592: mov     [rsp+8E8h+var_90], 60h ; '`'
 * 00000001404FC59E: mov     [rsp+8E8h+var_64C], dx
 * 00000001404FC5A6: lea     rax, [rsp+8E8h+var_64C]
 * 00000001404FC5AE: mov     [rsp+8E8h+var_88], rax
 * 00000001404FC5B6: mov     [rsp+8E8h+var_80], 2
 * 00000001404FC5C2: lea     rax, [rdi+880h]
 * 00000001404FC5C9: mov     [rsp+8E8h+var_78], rax
 * 00000001404FC5D1: mov     [rsp+8E8h+var_70], 60h ; '`'
 * 00000001404FC5DD: mov     [rsp+8E8h+var_648], dx
 * 00000001404FC5E5: lea     rax, [rsp+8E8h+var_648]
 * 00000001404FC5ED: mov     [rsp+8E8h+var_68], rax
 * 00000001404FC5F5: mov     [rsp+8E8h+var_60], 2
 * 00000001404FC601: lea     rax, [rdi+8F0h]
 * 00000001404FC608: mov     [rsp+8E8h+var_58], rax
 * 00000001404FC610: mov     [rsp+8E8h+var_50], 60h ; '`'
 * 00000001404FC61C: mov     [rsp+8E8h+var_644], dx
 * 00000001404FC624: lea     rax, [rsp+8E8h+var_644]
 * 00000001404FC62C: mov     [rsp+8E8h+var_48], rax
 * 00000001404FC634: mov     [rsp+8E8h+var_40], 2
 * 00000001404FC640: lea     rax, [rdi+950h]
 * 00000001404FC647: mov     [rsp+8E8h+var_38], rax
 * 00000001404FC64F: mov     [rsp+8E8h+var_30], 60h ; '`'
 * 00000001404FC65B: lea     rax, [rsp+8E8h+var_438]
 * 00000001404FC663: mov     [rsp+8E8h+var_8C0], rax
 * 00000001404FC668: mov     dword ptr [rsp+8E8h+var_8C8], 41h ; 'A'
 * 00000001404FC670: xor     r9d, r9d
 * 00000001404FC673: xor     r8d, r8d
 * 00000001404FC676: lea     rdx, byte_1400296A1
 * 00000001404FC67D: lea     rcx, dword_140C02F08
 * 00000001404FC684: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001404FC689: xor     r10d, r10d
 * 00000001404FC68C: jmp     loc_1403D1FAE
 */
