/*
 * XREFs of VfSecurityEntry @ 0x1405D0074
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D4F40 (DifRegisterKernelPlugin.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     DifRegisterPlugin @ 0x1405D5070 (DifRegisterPlugin.c)
 */

/*
 * Hex-Rays decompilation failed for VfSecurityEntry @ 0x1405D0074
 * Reason: Hex-Rays returned no pseudocode for 0x1405D0074
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405D0074: push    rbp
 * 00000001405D0076: lea     rbp, [rsp-0FD0h]
 * 00000001405D007E: sub     rsp, 10D0h
 * 00000001405D0085: mov     rax, cs:__security_cookie
 * 00000001405D008C: xor     rax, rsp
 * 00000001405D008F: mov     [rbp+0FD0h+var_10], rax
 * 00000001405D0096: xor     ecx, ecx
 * 00000001405D0098: mov     [rsp+10D0h+var_10A8], 1EAh
 * 00000001405D00A0: lea     rax, aZwaccesschecka; "ZwAccessCheckAndAuditAlarm"
 * 00000001405D00A7: mov     [rsp+10D0h+var_1098], rcx
 * 00000001405D00AC: mov     [rsp+10D0h+var_10B0], rax
 * 00000001405D00B1: lea     rax, VfZwAccessCheckAndAuditAlarm_Entry
 * 00000001405D00B8: mov     [rsp+10D0h+var_10A0], rax
 * 00000001405D00BD: lea     rax, aZwaddbootentry; "ZwAddBootEntry"
 * 00000001405D00C4: mov     [rsp+10D0h+var_1090], rax
 * 00000001405D00C9: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D00D0: mov     [rsp+10D0h+var_1080], rax
 * 00000001405D00D5: lea     rax, aZwadddriverent; "ZwAddDriverEntry"
 * 00000001405D00DC: mov     [rsp+10D0h+var_1070], rax
 * 00000001405D00E1: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D00E8: mov     [rsp+10D0h+var_1060], rax
 * 00000001405D00ED: lea     rax, aZwadjustprivil; "ZwAdjustPrivilegesToken"
 * 00000001405D00F4: mov     [rbp+0FD0h+var_1050], rax
 * 00000001405D00F8: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D00FF: mov     [rbp+0FD0h+var_1040], rax
 * 00000001405D0103: lea     rax, aZwallocatevirt_0; "ZwAllocateVirtualMemory"
 * 00000001405D010A: mov     [rbp+0FD0h+var_1030], rax
 * 00000001405D010E: lea     rax, VfZwPowerInformation_Entry
 * 00000001405D0115: mov     [rbp+0FD0h+var_1020], rax
 * 00000001405D0119: lea     rax, aZwcanceliofile_0; "ZwCancelIoFile"
 * 00000001405D0120: mov     [rbp+0FD0h+var_1010], rax
 * 00000001405D0124: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D012B: mov     [rbp+0FD0h+var_1000], rax
 * 00000001405D012F: lea     rax, aZwcanceltimer; "ZwCancelTimer"
 * 00000001405D0136: mov     [rbp+0FD0h+var_FF0], rax
 * 00000001405D013A: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0141: mov     [rbp+0FD0h+var_FE0], rax
 * 00000001405D0145: lea     rax, aZwcloseobjecta_0; "ZwCloseObjectAuditAlarm"
 * 00000001405D014C: mov     [rbp+0FD0h+var_FD0], rax
 * 00000001405D0150: lea     rax, VfZwCloseObjectAuditAlarm_Entry
 * 00000001405D0157: mov     [rbp+0FD0h+var_FC0], rax
 * 00000001405D015B: lea     rax, aZwconnectport_0; "ZwConnectPort"
 * 00000001405D0162: mov     [rbp+0FD0h+var_FB0], rax
 * 00000001405D0166: lea     rax, VfZwConnectPort_Entry
 * 00000001405D016D: mov     [rbp+0FD0h+var_FA0], rax
 * 00000001405D0171: lea     rax, aZwcreatedirect; "ZwCreateDirectoryObject"
 * 00000001405D0178: mov     [rbp+0FD0h+var_F90], rax
 * 00000001405D017C: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0183: mov     [rbp+0FD0h+var_F80], rax
 * 00000001405D0187: lea     rax, aZwcreateevent_0; "ZwCreateEvent"
 * 00000001405D018E: mov     [rbp+0FD0h+var_F70], rax
 * 00000001405D0192: lea     rax, VfZwCreateTimer_Entry
 * 00000001405D0199: mov     [rbp+0FD0h+var_F60], rax
 * 00000001405D019D: lea     rax, aZwcreatefile; "ZwCreateFile"
 * 00000001405D01A4: mov     [rbp+0FD0h+var_F50], rax
 * 00000001405D01AB: lea     rax, VfZwCreateFile_Entry
 * 00000001405D01B2: mov     [rbp+0FD0h+var_F40], rax
 * 00000001405D01B9: lea     rax, aZwcreatejobobj; "ZwCreateJobObject"
 * 00000001405D01C0: mov     [rbp+0FD0h+var_F30], rax
 * 00000001405D01C7: lea     rax, VfZwOpenKey_Entry
 * 00000001405D01CE: mov     [rbp+0FD0h+var_F20], rax
 * 00000001405D01D5: lea     rax, aZwcreatekey; "ZwCreateKey"
 * 00000001405D01DC: mov     [rbp+0FD0h+var_F10], rax
 * 00000001405D01E3: mov     [rsp+10D0h+var_1088], 1EBh
 * 00000001405D01EB: mov     [rsp+10D0h+var_1078], rcx
 * 00000001405D01F0: mov     [rsp+10D0h+var_1068], 1ECh
 * 00000001405D01F8: mov     [rsp+10D0h+var_1058], rcx
 * 00000001405D01FD: mov     [rbp+0FD0h+var_1048], 1EDh
 * 00000001405D0204: mov     [rbp+0FD0h+var_1038], rcx
 * 00000001405D0208: mov     [rbp+0FD0h+var_1028], 1EFh
 * 00000001405D020F: mov     [rbp+0FD0h+var_1018], rcx
 * 00000001405D0213: mov     [rbp+0FD0h+var_1008], 1FAh
 * 00000001405D021A: mov     [rbp+0FD0h+var_FF8], rcx
 * 00000001405D021E: mov     [rbp+0FD0h+var_FE8], 1FBh
 * 00000001405D0225: mov     [rbp+0FD0h+var_FD8], rcx
 * 00000001405D0229: mov     [rbp+0FD0h+var_FC8], 1FDh
 * 00000001405D0230: mov     [rbp+0FD0h+var_FB8], rcx
 * 00000001405D0234: mov     [rbp+0FD0h+var_FA8], 201h
 * 00000001405D023B: mov     [rbp+0FD0h+var_F98], rcx
 * 00000001405D023F: mov     [rbp+0FD0h+var_F88], 202h
 * 00000001405D0246: mov     [rbp+0FD0h+var_F78], rcx
 * 00000001405D024A: mov     [rbp+0FD0h+var_F68], 204h
 * 00000001405D0251: mov     [rbp+0FD0h+var_F58], rcx
 * 00000001405D0255: mov     [rbp+0FD0h+var_F48], 205h
 * 00000001405D025F: mov     [rbp+0FD0h+var_F38], rcx
 * 00000001405D0266: mov     [rbp+0FD0h+var_F28], 206h
 * 00000001405D0270: mov     [rbp+0FD0h+var_F18], rcx
 * 00000001405D0277: lea     rax, VfZwCreateKey_Entry
 * 00000001405D027E: mov     [rbp+0FD0h+var_F08], 207h
 * 00000001405D0288: mov     [rbp+0FD0h+var_F00], rax
 * 00000001405D028F: lea     rax, aZwcreatesectio; "ZwCreateSection"
 * 00000001405D0296: mov     [rbp+0FD0h+var_EF0], rax
 * 00000001405D029D: lea     rax, VfZwCreateSection_Entry
 * 00000001405D02A4: mov     [rbp+0FD0h+var_EE0], rax
 * 00000001405D02AB: lea     rax, aZwcreatesymbol_0; "ZwCreateSymbolicLinkObject"
 * 00000001405D02B2: mov     [rbp+0FD0h+var_ED0], rax
 * 00000001405D02B9: lea     rax, VfZwCreateSymbolicLinkObject_Entry
 * 00000001405D02C0: mov     [rbp+0FD0h+var_EC0], rax
 * 00000001405D02C7: lea     rax, aZwcreatetimer; "ZwCreateTimer"
 * 00000001405D02CE: mov     [rbp+0FD0h+var_EB0], rax
 * 00000001405D02D5: lea     rax, VfZwCreateTimer_Entry
 * 00000001405D02DC: mov     [rbp+0FD0h+var_EA0], rax
 * 00000001405D02E3: lea     rax, aZwdeletebooten_0; "ZwDeleteBootEntry"
 * 00000001405D02EA: mov     [rbp+0FD0h+var_E90], rax
 * 00000001405D02F1: lea     rax, VfZwDeleteBootEntry_Entry
 * 00000001405D02F8: mov     [rbp+0FD0h+var_E80], rax
 * 00000001405D02FF: lea     rax, aZwdeletefile; "ZwDeleteFile"
 * 00000001405D0306: mov     [rbp+0FD0h+var_E70], rax
 * 00000001405D030D: lea     rax, VfZwDeleteFile_Entry
 * 00000001405D0314: mov     [rbp+0FD0h+var_E60], rax
 * 00000001405D031B: lea     rax, aZwdeletevaluek; "ZwDeleteValueKey"
 * 00000001405D0322: mov     [rbp+0FD0h+var_E50], rax
 * 00000001405D0329: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D0330: mov     [rbp+0FD0h+var_E40], rax
 * 00000001405D0337: lea     rax, aZwdeviceiocont_0; "ZwDeviceIoControlFile"
 * 00000001405D033E: mov     [rbp+0FD0h+var_E30], rax
 * 00000001405D0345: lea     rax, VfZwDeviceIoControlFile_Entry
 * 00000001405D034C: mov     [rbp+0FD0h+var_E20], rax
 * 00000001405D0353: lea     rax, aZwdisplaystrin_0; "ZwDisplayString"
 * 00000001405D035A: mov     [rbp+0FD0h+var_E10], rax
 * 00000001405D0361: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D0368: mov     [rbp+0FD0h+var_E00], rax
 * 00000001405D036F: lea     rax, aZwduplicateobj; "ZwDuplicateObject"
 * 00000001405D0376: mov     [rbp+0FD0h+var_DF0], rax
 * 00000001405D037D: lea     rax, VfZwDuplicateObject_Entry
 * 00000001405D0384: mov     [rbp+0FD0h+var_DE0], rax
 * 00000001405D038B: lea     rax, aZwduplicatetok_0; "ZwDuplicateToken"
 * 00000001405D0392: mov     [rbp+0FD0h+var_DD0], rax
 * 00000001405D0399: lea     rax, VfZwDuplicateToken_Entry
 * 00000001405D03A0: mov     [rbp+0FD0h+var_DC0], rax
 * 00000001405D03A7: lea     rax, aZwenumerateboo_0; "ZwEnumerateBootEntries"
 * 00000001405D03AE: mov     [rbp+0FD0h+var_DB0], rax
 * 00000001405D03B5: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D03BC: mov     [rbp+0FD0h+var_DA0], rax
 * 00000001405D03C3: lea     rax, aZwenumeratedri_0; "ZwEnumerateDriverEntries"
 * 00000001405D03CA: mov     [rbp+0FD0h+var_D90], rax
 * 00000001405D03D1: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D03D8: mov     [rbp+0FD0h+var_D80], rax
 * 00000001405D03DF: lea     rax, aZwenumeratekey; "ZwEnumerateKey"
 * 00000001405D03E6: mov     [rbp+0FD0h+var_D70], rax
 * 00000001405D03ED: lea     rax, VfZwQueryObject_Entry
 * 00000001405D03F4: mov     [rbp+0FD0h+var_D60], rax
 * 00000001405D03FB: mov     [rbp+0FD0h+var_EF8], rcx
 * 00000001405D0402: mov     [rbp+0FD0h+var_EE8], 20Ah
 * 00000001405D040C: mov     [rbp+0FD0h+var_ED8], rcx
 * 00000001405D0413: mov     [rbp+0FD0h+var_EC8], 20Bh
 * 00000001405D041D: mov     [rbp+0FD0h+var_EB8], rcx
 * 00000001405D0424: mov     [rbp+0FD0h+var_EA8], 20Ch
 * 00000001405D042E: mov     [rbp+0FD0h+var_E98], rcx
 * 00000001405D0435: mov     [rbp+0FD0h+var_E88], 20Fh
 * 00000001405D043F: mov     [rbp+0FD0h+var_E78], rcx
 * 00000001405D0446: mov     [rbp+0FD0h+var_E68], 210h
 * 00000001405D0450: mov     [rbp+0FD0h+var_E58], rcx
 * 00000001405D0457: mov     [rbp+0FD0h+var_E48], 212h
 * 00000001405D0461: mov     [rbp+0FD0h+var_E38], rcx
 * 00000001405D0468: mov     [rbp+0FD0h+var_E28], 213h
 * 00000001405D0472: mov     [rbp+0FD0h+var_E18], rcx
 * 00000001405D0479: mov     [rbp+0FD0h+var_E08], 214h
 * 00000001405D0483: mov     [rbp+0FD0h+var_DF8], rcx
 * 00000001405D048A: mov     [rbp+0FD0h+var_DE8], 215h
 * 00000001405D0494: mov     [rbp+0FD0h+var_DD8], rcx
 * 00000001405D049B: mov     [rbp+0FD0h+var_DC8], 216h
 * 00000001405D04A5: mov     [rbp+0FD0h+var_DB8], rcx
 * 00000001405D04AC: mov     [rbp+0FD0h+var_DA8], 217h
 * 00000001405D04B6: mov     [rbp+0FD0h+var_D98], rcx
 * 00000001405D04BD: mov     [rbp+0FD0h+var_D88], 218h
 * 00000001405D04C7: mov     [rbp+0FD0h+var_D78], rcx
 * 00000001405D04CE: mov     [rbp+0FD0h+var_D68], 219h
 * 00000001405D04D8: lea     rax, aZwenumerateval; "ZwEnumerateValueKey"
 * 00000001405D04DF: mov     [rbp+0FD0h+var_D58], rcx
 * 00000001405D04E6: mov     [rbp+0FD0h+var_D50], rax
 * 00000001405D04ED: lea     rax, VfZwQueryObject_Entry
 * 00000001405D04F4: mov     [rbp+0FD0h+var_D40], rax
 * 00000001405D04FB: lea     rax, aZwflushinstruc_0; "ZwFlushInstructionCache"
 * 00000001405D0502: mov     [rbp+0FD0h+var_D30], rax
 * 00000001405D0509: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0510: mov     [rbp+0FD0h+var_D20], rax
 * 00000001405D0517: lea     rax, aZwflushvirtual; "ZwFlushVirtualMemory"
 * 00000001405D051E: mov     [rbp+0FD0h+var_D10], rax
 * 00000001405D0525: lea     rax, VfZwFlushVirtualMemory_Entry
 * 00000001405D052C: mov     [rbp+0FD0h+var_D00], rax
 * 00000001405D0533: lea     rax, aZwfreevirtualm_0; "ZwFreeVirtualMemory"
 * 00000001405D053A: mov     [rbp+0FD0h+var_CF0], rax
 * 00000001405D0541: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0548: mov     [rbp+0FD0h+var_CE0], rax
 * 00000001405D054F: lea     rax, aZwfscontrolfil; "ZwFsControlFile"
 * 00000001405D0556: mov     [rbp+0FD0h+var_CD0], rax
 * 00000001405D055D: lea     rax, VfZwDeviceIoControlFile_Entry
 * 00000001405D0564: mov     [rbp+0FD0h+var_CC0], rax
 * 00000001405D056B: lea     rax, aZwloaddriver_0; "ZwLoadDriver"
 * 00000001405D0572: mov     [rbp+0FD0h+var_CB0], rax
 * 00000001405D0579: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D0580: mov     [rbp+0FD0h+var_CA0], rax
 * 00000001405D0587: lea     rax, aZwloadkey; "ZwLoadKey"
 * 00000001405D058E: mov     [rbp+0FD0h+var_C90], rax
 * 00000001405D0595: lea     rax, VfZwLoadKey_Entry
 * 00000001405D059C: mov     [rbp+0FD0h+var_C80], rax
 * 00000001405D05A3: lea     rax, aZwmapviewofsec; "ZwMapViewOfSection"
 * 00000001405D05AA: mov     [rbp+0FD0h+var_C70], rax
 * 00000001405D05B1: lea     rax, VfZwMapViewOfSection_Entry
 * 00000001405D05B8: mov     [rbp+0FD0h+var_C60], rax
 * 00000001405D05BF: lea     rax, aZwmodifybooten; "ZwModifyBootEntry"
 * 00000001405D05C6: mov     [rbp+0FD0h+var_C50], rax
 * 00000001405D05CD: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D05D4: mov     [rbp+0FD0h+var_C40], rax
 * 00000001405D05DB: lea     rax, aZwmodifydriver_0; "ZwModifyDriverEntry"
 * 00000001405D05E2: mov     [rbp+0FD0h+var_C30], rax
 * 00000001405D05E9: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D05F0: mov     [rbp+0FD0h+var_C20], rax
 * 00000001405D05F7: lea     rax, aZwnotifychange_0; "ZwNotifyChangeKey"
 * 00000001405D05FE: mov     [rbp+0FD0h+var_C10], rax
 * 00000001405D0605: lea     rax, VfZwNotifyChangeKey_Entry
 * 00000001405D060C: mov     [rbp+0FD0h+var_C00], rax
 * 00000001405D0613: lea     rax, aZwopendirector_0; "ZwOpenDirectoryObject"
 * 00000001405D061A: mov     [rbp+0FD0h+var_BF0], rax
 * 00000001405D0621: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0628: mov     [rbp+0FD0h+var_BE0], rax
 * 00000001405D062F: lea     rax, aZwopenevent; "ZwOpenEvent"
 * 00000001405D0636: mov     [rbp+0FD0h+var_BD0], rax
 * 00000001405D063D: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0644: mov     [rbp+0FD0h+var_BC0], rax
 * 00000001405D064B: lea     rax, aZwopenfile; "ZwOpenFile"
 * 00000001405D0652: mov     [rbp+0FD0h+var_BB0], rax
 * 00000001405D0659: mov     [rbp+0FD0h+var_D48], 21Bh
 * 00000001405D0663: mov     [rbp+0FD0h+var_D38], rcx
 * 00000001405D066A: mov     [rbp+0FD0h+var_D28], 21Eh
 * 00000001405D0674: mov     [rbp+0FD0h+var_D18], rcx
 * 00000001405D067B: mov     [rbp+0FD0h+var_D08], 220h
 * 00000001405D0685: mov     [rbp+0FD0h+var_CF8], rcx
 * 00000001405D068C: mov     [rbp+0FD0h+var_CE8], 221h
 * 00000001405D0696: mov     [rbp+0FD0h+var_CD8], rcx
 * 00000001405D069D: mov     [rbp+0FD0h+var_CC8], 222h
 * 00000001405D06A7: mov     [rbp+0FD0h+var_CB8], rcx
 * 00000001405D06AE: mov     [rbp+0FD0h+var_CA8], 224h
 * 00000001405D06B8: mov     [rbp+0FD0h+var_C98], rcx
 * 00000001405D06BF: mov     [rbp+0FD0h+var_C88], 225h
 * 00000001405D06C9: mov     [rbp+0FD0h+var_C78], rcx
 * 00000001405D06D0: mov     [rbp+0FD0h+var_C68], 228h
 * 00000001405D06DA: mov     [rbp+0FD0h+var_C58], rcx
 * 00000001405D06E1: mov     [rbp+0FD0h+var_C48], 229h
 * 00000001405D06EB: mov     [rbp+0FD0h+var_C38], rcx
 * 00000001405D06F2: mov     [rbp+0FD0h+var_C28], 22Ah
 * 00000001405D06FC: mov     [rbp+0FD0h+var_C18], rcx
 * 00000001405D0703: mov     [rbp+0FD0h+var_C08], 22Bh
 * 00000001405D070D: mov     [rbp+0FD0h+var_BF8], rcx
 * 00000001405D0714: mov     [rbp+0FD0h+var_BE8], 22Ch
 * 00000001405D071E: mov     [rbp+0FD0h+var_BD8], rcx
 * 00000001405D0725: mov     [rbp+0FD0h+var_BC8], 22Eh
 * 00000001405D072F: mov     [rbp+0FD0h+var_BB8], rcx
 * 00000001405D0736: lea     rax, VfZwOpenFile_Entry
 * 00000001405D073D: mov     [rbp+0FD0h+var_BA8], 22Fh
 * 00000001405D0747: mov     [rbp+0FD0h+var_BA0], rax
 * 00000001405D074E: lea     rax, aZwopenjobobjec; "ZwOpenJobObject"
 * 00000001405D0755: mov     [rbp+0FD0h+var_B90], rax
 * 00000001405D075C: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0763: mov     [rbp+0FD0h+var_B80], rax
 * 00000001405D076A: lea     rax, aZwopenkey; "ZwOpenKey"
 * 00000001405D0771: mov     [rbp+0FD0h+var_B70], rax
 * 00000001405D0778: lea     rax, VfZwOpenKey_Entry
 * 00000001405D077F: mov     [rbp+0FD0h+var_B60], rax
 * 00000001405D0786: lea     rax, aZwopenprocess_0; "ZwOpenProcess"
 * 00000001405D078D: mov     [rbp+0FD0h+var_B50], rax
 * 00000001405D0794: lea     rax, VfZwOpenThread_Entry
 * 00000001405D079B: mov     [rbp+0FD0h+var_B40], rax
 * 00000001405D07A2: lea     rax, aZwopenprocesst; "ZwOpenProcessToken"
 * 00000001405D07A9: mov     [rbp+0FD0h+var_B30], rax
 * 00000001405D07B0: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D07B7: mov     [rbp+0FD0h+var_B20], rax
 * 00000001405D07BE: lea     rax, aZwopenprocesst_1; "ZwOpenProcessTokenEx"
 * 00000001405D07C5: mov     [rbp+0FD0h+var_B10], rax
 * 00000001405D07CC: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D07D3: mov     [rbp+0FD0h+var_B00], rax
 * 00000001405D07DA: lea     rax, aZwopensection; "ZwOpenSection"
 * 00000001405D07E1: mov     [rbp+0FD0h+var_AF0], rax
 * 00000001405D07E8: lea     rax, VfZwOpenKey_Entry
 * 00000001405D07EF: mov     [rbp+0FD0h+var_AE0], rax
 * 00000001405D07F6: lea     rax, aZwopensymbolic_0; "ZwOpenSymbolicLinkObject"
 * 00000001405D07FD: mov     [rbp+0FD0h+var_AD0], rax
 * 00000001405D0804: lea     rax, VfZwOpenKey_Entry
 * 00000001405D080B: mov     [rbp+0FD0h+var_AC0], rax
 * 00000001405D0812: lea     rax, aZwopenthread_0; "ZwOpenThread"
 * 00000001405D0819: mov     [rbp+0FD0h+var_AB0], rax
 * 00000001405D0820: lea     rax, VfZwOpenThread_Entry
 * 00000001405D0827: mov     [rbp+0FD0h+var_AA0], rax
 * 00000001405D082E: lea     rax, aZwopenthreadto_1; "ZwOpenThreadToken"
 * 00000001405D0835: mov     [rbp+0FD0h+var_A90], rax
 * 00000001405D083C: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0843: mov     [rbp+0FD0h+var_A80], rax
 * 00000001405D084A: lea     rax, aZwopenthreadto; "ZwOpenThreadTokenEx"
 * 00000001405D0851: mov     [rbp+0FD0h+var_A70], rax
 * 00000001405D0858: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D085F: mov     [rbp+0FD0h+var_A60], rax
 * 00000001405D0866: lea     rax, aZwopentimer_0; "ZwOpenTimer"
 * 00000001405D086D: mov     [rbp+0FD0h+var_A50], rax
 * 00000001405D0874: lea     rax, VfZwOpenKey_Entry
 * 00000001405D087B: mov     [rbp+0FD0h+var_A40], rax
 * 00000001405D0882: lea     rax, aZwpowerinforma; "ZwPowerInformation"
 * 00000001405D0889: mov     [rbp+0FD0h+var_A30], rax
 * 00000001405D0890: lea     rax, VfZwPowerInformation_Entry
 * 00000001405D0897: mov     [rbp+0FD0h+var_A20], rax
 * 00000001405D089E: lea     rax, aZwprotectvirtu; "ZwProtectVirtualMemory"
 * 00000001405D08A5: mov     [rbp+0FD0h+var_A10], rax
 * 00000001405D08AC: lea     rax, VfZwProtectVirtualMemory_Entry
 * 00000001405D08B3: mov     [rbp+0FD0h+var_A00], rax
 * 00000001405D08BA: mov     [rbp+0FD0h+var_B98], rcx
 * 00000001405D08C1: mov     [rbp+0FD0h+var_B88], 230h
 * 00000001405D08CB: mov     [rbp+0FD0h+var_B78], rcx
 * 00000001405D08D2: mov     [rbp+0FD0h+var_B68], 231h
 * 00000001405D08DC: mov     [rbp+0FD0h+var_B58], rcx
 * 00000001405D08E3: mov     [rbp+0FD0h+var_B48], 235h
 * 00000001405D08ED: mov     [rbp+0FD0h+var_B38], rcx
 * 00000001405D08F4: mov     [rbp+0FD0h+var_B28], 236h
 * 00000001405D08FE: mov     [rbp+0FD0h+var_B18], rcx
 * 00000001405D0905: mov     [rbp+0FD0h+var_B08], 237h
 * 00000001405D090F: mov     [rbp+0FD0h+var_AF8], rcx
 * 00000001405D0916: mov     [rbp+0FD0h+var_AE8], 239h
 * 00000001405D0920: mov     [rbp+0FD0h+var_AD8], rcx
 * 00000001405D0927: mov     [rbp+0FD0h+var_AC8], 23Ah
 * 00000001405D0931: mov     [rbp+0FD0h+var_AB8], rcx
 * 00000001405D0938: mov     [rbp+0FD0h+var_AA8], 23Bh
 * 00000001405D0942: mov     [rbp+0FD0h+var_A98], rcx
 * 00000001405D0949: mov     [rbp+0FD0h+var_A88], 23Ch
 * 00000001405D0953: mov     [rbp+0FD0h+var_A78], rcx
 * 00000001405D095A: mov     [rbp+0FD0h+var_A68], 23Dh
 * 00000001405D0964: mov     [rbp+0FD0h+var_A58], rcx
 * 00000001405D096B: mov     [rbp+0FD0h+var_A48], 23Eh
 * 00000001405D0975: mov     [rbp+0FD0h+var_A38], rcx
 * 00000001405D097C: mov     [rbp+0FD0h+var_A28], 241h
 * 00000001405D0986: mov     [rbp+0FD0h+var_A18], rcx
 * 00000001405D098D: mov     [rbp+0FD0h+var_A08], 246h
 * 00000001405D0997: lea     rax, aZwpulseevent_0; "ZwPulseEvent"
 * 00000001405D099E: mov     [rbp+0FD0h+var_9F8], rcx
 * 00000001405D09A5: mov     [rbp+0FD0h+var_9F0], rax
 * 00000001405D09AC: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D09B3: mov     [rbp+0FD0h+var_9E0], rax
 * 00000001405D09BA: lea     rax, aZwquerybootent_0; "ZwQueryBootEntryOrder"
 * 00000001405D09C1: mov     [rbp+0FD0h+var_9D0], rax
 * 00000001405D09C8: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D09CF: mov     [rbp+0FD0h+var_9C0], rax
 * 00000001405D09D6: lea     rax, aZwquerybootopt_0; "ZwQueryBootOptions"
 * 00000001405D09DD: mov     [rbp+0FD0h+var_9B0], rax
 * 00000001405D09E4: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D09EB: mov     [rbp+0FD0h+var_9A0], rax
 * 00000001405D09F2: lea     rax, aZwquerydefault_2; "ZwQueryDefaultLocale"
 * 00000001405D09F9: mov     [rbp+0FD0h+var_990], rax
 * 00000001405D0A00: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0A07: mov     [rbp+0FD0h+var_980], rax
 * 00000001405D0A0E: lea     rax, aZwquerydefault; "ZwQueryDefaultUILanguage"
 * 00000001405D0A15: mov     [rbp+0FD0h+var_970], rax
 * 00000001405D0A1C: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0A23: mov     [rbp+0FD0h+var_960], rax
 * 00000001405D0A2A: lea     rax, aZwquerydrivere; "ZwQueryDriverEntryOrder"
 * 00000001405D0A31: mov     [rbp+0FD0h+var_950], rax
 * 00000001405D0A38: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0A3F: mov     [rbp+0FD0h+var_940], rax
 * 00000001405D0A46: lea     rax, aZwqueryinstall_0; "ZwQueryInstallUILanguage"
 * 00000001405D0A4D: mov     [rbp+0FD0h+var_930], rax
 * 00000001405D0A54: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0A5B: mov     [rbp+0FD0h+var_920], rax
 * 00000001405D0A62: lea     rax, aZwquerydirecto_4; "ZwQueryDirectoryFile"
 * 00000001405D0A69: mov     [rbp+0FD0h+var_910], rax
 * 00000001405D0A70: lea     rax, VfZwQueryDirectoryFile_Entry
 * 00000001405D0A77: mov     [rbp+0FD0h+var_900], rax
 * 00000001405D0A7E: lea     rax, aZwquerydirecto; "ZwQueryDirectoryFileEx"
 * 00000001405D0A85: mov     [rbp+0FD0h+var_8F0], rax
 * 00000001405D0A8C: lea     rax, VfZwQueryDirectoryFileEx_Entry
 * 00000001405D0A93: mov     [rbp+0FD0h+var_8E0], rax
 * 00000001405D0A9A: lea     rax, aZwquerydirecto_3; "ZwQueryDirectoryObject"
 * 00000001405D0AA1: mov     [rbp+0FD0h+var_8D0], rax
 * 00000001405D0AA8: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D0AAF: mov     [rbp+0FD0h+var_8C0], rax
 * 00000001405D0AB6: lea     rax, aZwqueryeafile; "ZwQueryEaFile"
 * 00000001405D0ABD: mov     [rbp+0FD0h+var_8B0], rax
 * 00000001405D0AC4: lea     rax, VfZwQueryEaFile_Entry
 * 00000001405D0ACB: mov     [rbp+0FD0h+var_8A0], rax
 * 00000001405D0AD2: lea     rax, aZwqueryfullatt_0; "ZwQueryFullAttributesFile"
 * 00000001405D0AD9: mov     [rbp+0FD0h+var_890], rax
 * 00000001405D0AE0: lea     rax, VfZwQueryFullAttributesFile_Entry
 * 00000001405D0AE7: mov     [rbp+0FD0h+var_880], rax
 * 00000001405D0AEE: lea     rax, aZwqueryinforma_8; "ZwQueryInformationFile"
 * 00000001405D0AF5: mov     [rbp+0FD0h+var_870], rax
 * 00000001405D0AFC: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0B03: mov     [rbp+0FD0h+var_860], rax
 * 00000001405D0B0A: lea     rax, aZwqueryinforma_11; "ZwQueryInformationJobObject"
 * 00000001405D0B11: mov     [rbp+0FD0h+var_850], rax
 * 00000001405D0B18: mov     [rbp+0FD0h+var_9E8], 247h
 * 00000001405D0B22: mov     [rbp+0FD0h+var_9D8], rcx
 * 00000001405D0B29: mov     [rbp+0FD0h+var_9C8], 248h
 * 00000001405D0B33: mov     [rbp+0FD0h+var_9B8], rcx
 * 00000001405D0B3A: mov     [rbp+0FD0h+var_9A8], 249h
 * 00000001405D0B44: mov     [rbp+0FD0h+var_998], rcx
 * 00000001405D0B4B: mov     [rbp+0FD0h+var_988], 24Ah
 * 00000001405D0B55: mov     [rbp+0FD0h+var_978], rcx
 * 00000001405D0B5C: mov     [rbp+0FD0h+var_968], 24Bh
 * 00000001405D0B66: mov     [rbp+0FD0h+var_958], rcx
 * 00000001405D0B6D: mov     [rbp+0FD0h+var_948], 24Fh
 * 00000001405D0B77: mov     [rbp+0FD0h+var_938], rcx
 * 00000001405D0B7E: mov     [rbp+0FD0h+var_928], 25Bh
 * 00000001405D0B88: mov     [rbp+0FD0h+var_918], rcx
 * 00000001405D0B8F: mov     [rbp+0FD0h+var_908], 24Ch
 * 00000001405D0B99: mov     [rbp+0FD0h+var_8F8], rcx
 * 00000001405D0BA0: mov     [rbp+0FD0h+var_8E8], 24Dh
 * 00000001405D0BAA: mov     [rbp+0FD0h+var_8D8], rcx
 * 00000001405D0BB1: mov     [rbp+0FD0h+var_8C8], 24Eh
 * 00000001405D0BBB: mov     [rbp+0FD0h+var_8B8], rcx
 * 00000001405D0BC2: mov     [rbp+0FD0h+var_8A8], 250h
 * 00000001405D0BCC: mov     [rbp+0FD0h+var_898], rcx
 * 00000001405D0BD3: mov     [rbp+0FD0h+var_888], 251h
 * 00000001405D0BDD: mov     [rbp+0FD0h+var_878], rcx
 * 00000001405D0BE4: mov     [rbp+0FD0h+var_868], 253h
 * 00000001405D0BEE: mov     [rbp+0FD0h+var_858], rcx
 * 00000001405D0BF5: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0BFC: mov     [rbp+0FD0h+var_848], 254h
 * 00000001405D0C06: mov     [rbp+0FD0h+var_840], rax
 * 00000001405D0C0D: lea     rax, aZwqueryinforma_15; "ZwQueryInformationProcess"
 * 00000001405D0C14: mov     [rbp+0FD0h+var_830], rax
 * 00000001405D0C1B: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0C22: mov     [rbp+0FD0h+var_820], rax
 * 00000001405D0C29: lea     rax, aZwqueryinforma_7; "ZwQueryInformationThread"
 * 00000001405D0C30: mov     [rbp+0FD0h+var_810], rax
 * 00000001405D0C37: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0C3E: mov     [rbp+0FD0h+var_800], rax
 * 00000001405D0C45: lea     rax, aZwqueryinforma_10; "ZwQueryInformationToken"
 * 00000001405D0C4C: mov     [rbp+0FD0h+var_7F0], rax
 * 00000001405D0C53: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0C5A: mov     [rbp+0FD0h+var_7E0], rax
 * 00000001405D0C61: lea     rax, aZwquerykey; "ZwQueryKey"
 * 00000001405D0C68: mov     [rbp+0FD0h+var_7D0], rax
 * 00000001405D0C6F: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0C76: mov     [rbp+0FD0h+var_7C0], rax
 * 00000001405D0C7D: lea     rax, aZwqueryobject_0; "ZwQueryObject"
 * 00000001405D0C84: mov     [rbp+0FD0h+var_7B0], rax
 * 00000001405D0C8B: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0C92: mov     [rbp+0FD0h+var_7A0], rax
 * 00000001405D0C99: lea     rax, aZwquerysection; "ZwQuerySection"
 * 00000001405D0CA0: mov     [rbp+0FD0h+var_790], rax
 * 00000001405D0CA7: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0CAE: mov     [rbp+0FD0h+var_780], rax
 * 00000001405D0CB5: lea     rax, aZwquerysecurit_0; "ZwQuerySecurityObject"
 * 00000001405D0CBC: mov     [rbp+0FD0h+var_770], rax
 * 00000001405D0CC3: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0CCA: mov     [rbp+0FD0h+var_760], rax
 * 00000001405D0CD1: lea     rax, aZwquerysymboli; "ZwQuerySymbolicLinkObject"
 * 00000001405D0CD8: mov     [rbp+0FD0h+var_750], rax
 * 00000001405D0CDF: lea     rax, VfZwQuerySymbolicLinkObject_Entry
 * 00000001405D0CE6: mov     [rbp+0FD0h+var_740], rax
 * 00000001405D0CED: lea     rax, aZwquerysystemi_0; "ZwQuerySystemInformation"
 * 00000001405D0CF4: mov     [rbp+0FD0h+var_730], rax
 * 00000001405D0CFB: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0D02: mov     [rbp+0FD0h+var_720], rax
 * 00000001405D0D09: lea     rax, aZwqueryvalueke_1; "ZwQueryValueKey"
 * 00000001405D0D10: mov     [rbp+0FD0h+var_710], rax
 * 00000001405D0D17: lea     rax, VfZwQueryValueKey_Entry
 * 00000001405D0D1E: mov     [rbp+0FD0h+var_700], rax
 * 00000001405D0D25: lea     rax, aZwqueryvolumei_0; "ZwQueryVolumeInformationFile"
 * 00000001405D0D2C: mov     [rbp+0FD0h+var_6F0], rax
 * 00000001405D0D33: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0D3A: mov     [rbp+0FD0h+var_6E0], rax
 * 00000001405D0D41: lea     rax, aZwreadfile; "ZwReadFile"
 * 00000001405D0D48: mov     [rbp+0FD0h+var_6D0], rax
 * 00000001405D0D4F: lea     rax, VfZwWriteFile_Entry
 * 00000001405D0D56: mov     [rbp+0FD0h+var_6C0], rax
 * 00000001405D0D5D: lea     rax, aZwreplacekey_0; "ZwReplaceKey"
 * 00000001405D0D64: mov     [rbp+0FD0h+var_6B0], rax
 * 00000001405D0D6B: lea     rax, VfZwReplaceKey_Entry
 * 00000001405D0D72: mov     [rbp+0FD0h+var_6A0], rax
 * 00000001405D0D79: mov     [rbp+0FD0h+var_838], rcx
 * 00000001405D0D80: mov     [rbp+0FD0h+var_828], 255h
 * 00000001405D0D8A: mov     [rbp+0FD0h+var_818], rcx
 * 00000001405D0D91: mov     [rbp+0FD0h+var_808], 257h
 * 00000001405D0D9B: mov     [rbp+0FD0h+var_7F8], rcx
 * 00000001405D0DA2: mov     [rbp+0FD0h+var_7E8], 258h
 * 00000001405D0DAC: mov     [rbp+0FD0h+var_7D8], rcx
 * 00000001405D0DB3: mov     [rbp+0FD0h+var_7C8], 25Ch
 * 00000001405D0DBD: mov     [rbp+0FD0h+var_7B8], rcx
 * 00000001405D0DC4: mov     [rbp+0FD0h+var_7A8], 25Eh
 * 00000001405D0DCE: mov     [rbp+0FD0h+var_798], rcx
 * 00000001405D0DD5: mov     [rbp+0FD0h+var_788], 260h
 * 00000001405D0DDF: mov     [rbp+0FD0h+var_778], rcx
 * 00000001405D0DE6: mov     [rbp+0FD0h+var_768], 261h
 * 00000001405D0DF0: mov     [rbp+0FD0h+var_758], rcx
 * 00000001405D0DF7: mov     [rbp+0FD0h+var_748], 262h
 * 00000001405D0E01: mov     [rbp+0FD0h+var_738], rcx
 * 00000001405D0E08: mov     [rbp+0FD0h+var_728], 263h
 * 00000001405D0E12: mov     [rbp+0FD0h+var_718], rcx
 * 00000001405D0E19: mov     [rbp+0FD0h+var_708], 264h
 * 00000001405D0E23: mov     [rbp+0FD0h+var_6F8], rcx
 * 00000001405D0E2A: mov     [rbp+0FD0h+var_6E8], 265h
 * 00000001405D0E34: mov     [rbp+0FD0h+var_6D8], rcx
 * 00000001405D0E3B: mov     [rbp+0FD0h+var_6C8], 266h
 * 00000001405D0E45: mov     [rbp+0FD0h+var_6B8], rcx
 * 00000001405D0E4C: mov     [rbp+0FD0h+var_6A8], 26Ch
 * 00000001405D0E56: lea     rax, aZwrequestwaitr_0; "ZwRequestWaitReplyPort"
 * 00000001405D0E5D: mov     [rbp+0FD0h+var_698], rcx
 * 00000001405D0E64: mov     [rbp+0FD0h+var_690], rax
 * 00000001405D0E6B: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0E72: mov     [rbp+0FD0h+var_680], rax
 * 00000001405D0E79: lea     rax, aZwresetevent; "ZwResetEvent"
 * 00000001405D0E80: mov     [rbp+0FD0h+var_670], rax
 * 00000001405D0E87: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0E8E: mov     [rbp+0FD0h+var_660], rax
 * 00000001405D0E95: lea     rax, aZwsetbootentry_0; "ZwSetBootEntryOrder"
 * 00000001405D0E9C: mov     [rbp+0FD0h+var_650], rax
 * 00000001405D0EA3: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0EAA: mov     [rbp+0FD0h+var_640], rax
 * 00000001405D0EB1: lea     rax, aZwsetbootoptio_0; "ZwSetBootOptions"
 * 00000001405D0EB8: mov     [rbp+0FD0h+var_630], rax
 * 00000001405D0EBF: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0EC6: mov     [rbp+0FD0h+var_620], rax
 * 00000001405D0ECD: lea     rax, aZwsetdriverent; "ZwSetDriverEntryOrder"
 * 00000001405D0ED4: mov     [rbp+0FD0h+var_610], rax
 * 00000001405D0EDB: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0EE2: mov     [rbp+0FD0h+var_600], rax
 * 00000001405D0EE9: lea     rax, aZwseteafile; "ZwSetEaFile"
 * 00000001405D0EF0: mov     [rbp+0FD0h+var_5F0], rax
 * 00000001405D0EF7: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0EFE: mov     [rbp+0FD0h+var_5E0], rax
 * 00000001405D0F05: lea     rax, aZwsetevent_0; "ZwSetEvent"
 * 00000001405D0F0C: mov     [rbp+0FD0h+var_5D0], rax
 * 00000001405D0F13: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0F1A: mov     [rbp+0FD0h+var_5C0], rax
 * 00000001405D0F21: lea     rax, aZwsetinformati_12; "ZwSetInformationFile"
 * 00000001405D0F28: mov     [rbp+0FD0h+var_5B0], rax
 * 00000001405D0F2F: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0F36: mov     [rbp+0FD0h+var_5A0], rax
 * 00000001405D0F3D: lea     rax, aZwsetinformati_14; "ZwSetInformationJobObject"
 * 00000001405D0F44: mov     [rbp+0FD0h+var_590], rax
 * 00000001405D0F4B: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0F52: mov     [rbp+0FD0h+var_580], rax
 * 00000001405D0F59: lea     rax, aZwsetinformati_11; "ZwSetInformationObject"
 * 00000001405D0F60: mov     [rbp+0FD0h+var_570], rax
 * 00000001405D0F67: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0F6E: mov     [rbp+0FD0h+var_560], rax
 * 00000001405D0F75: lea     rax, aZwsetinformati_6; "ZwSetInformationProcess"
 * 00000001405D0F7C: mov     [rbp+0FD0h+var_550], rax
 * 00000001405D0F83: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0F8A: mov     [rbp+0FD0h+var_540], rax
 * 00000001405D0F91: lea     rax, aZwsetinformati_2; "ZwSetInformationThread"
 * 00000001405D0F98: mov     [rbp+0FD0h+var_530], rax
 * 00000001405D0F9F: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0FA6: mov     [rbp+0FD0h+var_520], rax
 * 00000001405D0FAD: lea     rax, aZwsetsecurityo_0; "ZwSetSecurityObject"
 * 00000001405D0FB4: mov     [rbp+0FD0h+var_510], rax
 * 00000001405D0FBB: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0FC2: mov     [rbp+0FD0h+var_500], rax
 * 00000001405D0FC9: lea     rax, aZwsetsysteminf_0; "ZwSetSystemInformation"
 * 00000001405D0FD0: mov     [rbp+0FD0h+var_4F0], rax
 * 00000001405D0FD7: mov     [rbp+0FD0h+var_688], 26Dh
 * 00000001405D0FE1: mov     [rbp+0FD0h+var_678], rcx
 * 00000001405D0FE8: mov     [rbp+0FD0h+var_668], 26Eh
 * 00000001405D0FF2: mov     [rbp+0FD0h+var_658], rcx
 * 00000001405D0FF9: mov     [rbp+0FD0h+var_648], 273h
 * 00000001405D1003: mov     [rbp+0FD0h+var_638], rcx
 * 00000001405D100A: mov     [rbp+0FD0h+var_628], 274h
 * 00000001405D1014: mov     [rbp+0FD0h+var_618], rcx
 * 00000001405D101B: mov     [rbp+0FD0h+var_608], 275h
 * 00000001405D1025: mov     [rbp+0FD0h+var_5F8], rcx
 * 00000001405D102C: mov     [rbp+0FD0h+var_5E8], 276h
 * 00000001405D1036: mov     [rbp+0FD0h+var_5D8], rcx
 * 00000001405D103D: mov     [rbp+0FD0h+var_5C8], 277h
 * 00000001405D1047: mov     [rbp+0FD0h+var_5B8], rcx
 * 00000001405D104E: mov     [rbp+0FD0h+var_5A8], 279h
 * 00000001405D1058: mov     [rbp+0FD0h+var_598], rcx
 * 00000001405D105F: mov     [rbp+0FD0h+var_588], 27Ah
 * 00000001405D1069: mov     [rbp+0FD0h+var_578], rcx
 * 00000001405D1070: mov     [rbp+0FD0h+var_568], 27Ch
 * 00000001405D107A: mov     [rbp+0FD0h+var_558], rcx
 * 00000001405D1081: mov     [rbp+0FD0h+var_548], 27Dh
 * 00000001405D108B: mov     [rbp+0FD0h+var_538], rcx
 * 00000001405D1092: mov     [rbp+0FD0h+var_528], 27Fh
 * 00000001405D109C: mov     [rbp+0FD0h+var_518], rcx
 * 00000001405D10A3: mov     [rbp+0FD0h+var_508], 283h
 * 00000001405D10AD: mov     [rbp+0FD0h+var_4F8], rcx
 * 00000001405D10B4: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D10BB: mov     [rbp+0FD0h+var_4E8], 284h
 * 00000001405D10C5: mov     [rbp+0FD0h+var_4E0], rax
 * 00000001405D10CC: lea     rax, aZwsetsystemtim; "ZwSetSystemTime"
 * 00000001405D10D3: mov     [rbp+0FD0h+var_4D0], rax
 * 00000001405D10DA: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D10E1: mov     [rbp+0FD0h+var_4C0], rax
 * 00000001405D10E8: lea     rax, aZwsettimer_0; "ZwSetTimer"
 * 00000001405D10EF: mov     [rbp+0FD0h+var_4B0], rax
 * 00000001405D10F6: lea     rax, VfZwSetTimer_Entry
 * 00000001405D10FD: mov     [rbp+0FD0h+var_4A0], rax
 * 00000001405D1104: lea     rax, aZwsetvaluekey; "ZwSetValueKey"
 * 00000001405D110B: mov     [rbp+0FD0h+var_490], rax
 * 00000001405D1112: lea     rax, VfZwSetValueKey_Entry
 * 00000001405D1119: mov     [rbp+0FD0h+var_480], rax
 * 00000001405D1120: lea     rax, aZwsetvolumeinf; "ZwSetVolumeInformationFile"
 * 00000001405D1127: mov     [rbp+0FD0h+var_470], rax
 * 00000001405D112E: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D1135: mov     [rbp+0FD0h+var_460], rax
 * 00000001405D113C: lea     rax, aZwtranslatefil; "ZwTranslateFilePath"
 * 00000001405D1143: mov     [rbp+0FD0h+var_450], rax
 * 00000001405D114A: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D1151: mov     [rbp+0FD0h+var_440], rax
 * 00000001405D1158: lea     rax, aZwunloaddriver_0; "ZwUnloadDriver"
 * 00000001405D115F: mov     [rbp+0FD0h+var_430], rax
 * 00000001405D1166: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D116D: mov     [rbp+0FD0h+var_420], rax
 * 00000001405D1174: lea     rax, aZwunloadkey_0; "ZwUnloadKey"
 * 00000001405D117B: mov     [rbp+0FD0h+var_410], rax
 * 00000001405D1182: lea     rax, VfZwDeleteFile_Entry
 * 00000001405D1189: mov     [rbp+0FD0h+var_400], rax
 * 00000001405D1190: lea     rax, aZwwaitformulti_0; "ZwWaitForMultipleObjects"
 * 00000001405D1197: mov     [rbp+0FD0h+var_3F0], rax
 * 00000001405D119E: lea     rax, VfZwQueryObject_Entry
 * 00000001405D11A5: mov     [rbp+0FD0h+var_3E0], rax
 * 00000001405D11AC: lea     rax, aZwwaitforsingl_0; "ZwWaitForSingleObject"
 * 00000001405D11B3: mov     [rbp+0FD0h+var_3D0], rax
 * 00000001405D11BA: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D11C1: mov     [rbp+0FD0h+var_3C0], rax
 * 00000001405D11C8: lea     rax, aZwwritefile; "ZwWriteFile"
 * 00000001405D11CF: mov     [rbp+0FD0h+var_3B0], rax
 * 00000001405D11D6: lea     rax, VfZwWriteFile_Entry
 * 00000001405D11DD: mov     [rbp+0FD0h+var_3A0], rax
 * 00000001405D11E4: lea     rax, aZwalpccreatepo_2; "ZwAlpcCreatePort"
 * 00000001405D11EB: mov     [rbp+0FD0h+var_390], rax
 * 00000001405D11F2: lea     rax, VfZwAlpcCreatePort_Entry
 * 00000001405D11F9: mov     [rbp+0FD0h+var_380], rax
 * 00000001405D1200: lea     rax, aZwalpcconnectp; "ZwAlpcConnectPort"
 * 00000001405D1207: mov     [rbp+0FD0h+var_370], rax
 * 00000001405D120E: lea     rax, VfZwAlpcConnectPort_Entry
 * 00000001405D1215: mov     [rbp+0FD0h+var_360], rax
 * 00000001405D121C: lea     rax, aZwalpcacceptco; "ZwAlpcAcceptConnectPort"
 * 00000001405D1223: mov     [rbp+0FD0h+var_350], rax
 * 00000001405D122A: lea     rax, VfZwAlpcAcceptConnectPort_Entry
 * 00000001405D1231: mov     [rbp+0FD0h+var_340], rax
 * 00000001405D1238: mov     [rbp+0FD0h+var_4D8], rcx
 * 00000001405D123F: mov     [rbp+0FD0h+var_4C8], 285h
 * 00000001405D1249: mov     [rbp+0FD0h+var_4B8], rcx
 * 00000001405D1250: mov     [rbp+0FD0h+var_4A8], 286h
 * 00000001405D125A: mov     [rbp+0FD0h+var_498], rcx
 * 00000001405D1261: mov     [rbp+0FD0h+var_488], 288h
 * 00000001405D126B: mov     [rbp+0FD0h+var_478], rcx
 * 00000001405D1272: mov     [rbp+0FD0h+var_468], 289h
 * 00000001405D127C: mov     [rbp+0FD0h+var_458], rcx
 * 00000001405D1283: mov     [rbp+0FD0h+var_448], 28Bh
 * 00000001405D128D: mov     [rbp+0FD0h+var_438], rcx
 * 00000001405D1294: mov     [rbp+0FD0h+var_428], 28Ch
 * 00000001405D129E: mov     [rbp+0FD0h+var_418], rcx
 * 00000001405D12A5: mov     [rbp+0FD0h+var_408], 28Dh
 * 00000001405D12AF: mov     [rbp+0FD0h+var_3F8], rcx
 * 00000001405D12B6: mov     [rbp+0FD0h+var_3E8], 290h
 * 00000001405D12C0: mov     [rbp+0FD0h+var_3D8], rcx
 * 00000001405D12C7: mov     [rbp+0FD0h+var_3C8], 291h
 * 00000001405D12D1: mov     [rbp+0FD0h+var_3B8], rcx
 * 00000001405D12D8: mov     [rbp+0FD0h+var_3A8], 292h
 * 00000001405D12E2: mov     [rbp+0FD0h+var_398], rcx
 * 00000001405D12E9: mov     [rbp+0FD0h+var_388], 1F2h
 * 00000001405D12F3: mov     [rbp+0FD0h+var_378], rcx
 * 00000001405D12FA: mov     [rbp+0FD0h+var_368], 1F1h
 * 00000001405D1304: mov     [rbp+0FD0h+var_358], rcx
 * 00000001405D130B: mov     [rbp+0FD0h+var_348], 1F0h
 * 00000001405D1315: lea     rax, aZwalpcsendwait; "ZwAlpcSendWaitReceivePort"
 * 00000001405D131C: mov     [rbp+0FD0h+var_338], rcx
 * 00000001405D1323: mov     [rbp+0FD0h+var_330], rax
 * 00000001405D132A: lea     rax, VfZwAlpcSendWaitReceivePort_Entry
 * 00000001405D1331: mov     [rbp+0FD0h+var_320], rax
 * 00000001405D1338: lea     rax, aZwalpccreatese_0; "ZwAlpcCreateSecurityContext"
 * 00000001405D133F: mov     [rbp+0FD0h+var_310], rax
 * 00000001405D1346: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D134D: mov     [rbp+0FD0h+var_300], rax
 * 00000001405D1354: lea     rax, aZwalpccreatepo_0; "ZwAlpcCreatePortSection"
 * 00000001405D135B: mov     [rbp+0FD0h+var_2F0], rax
 * 00000001405D1362: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D1369: mov     [rbp+0FD0h+var_2E0], rax
 * 00000001405D1370: lea     rax, aZwalpccreatese_2; "ZwAlpcCreateSectionView"
 * 00000001405D1377: mov     [rbp+0FD0h+var_2D0], rax
 * 00000001405D137E: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1385: mov     [rbp+0FD0h+var_2C0], rax
 * 00000001405D138C: lea     rax, aZwalpccreatere; "ZwAlpcCreateResourceReserve"
 * 00000001405D1393: mov     [rbp+0FD0h+var_2B0], rax
 * 00000001405D139A: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D13A1: mov     [rbp+0FD0h+var_2A0], rax
 * 00000001405D13A8: lea     rax, aZwalpcsetinfor_0; "ZwAlpcSetInformation"
 * 00000001405D13AF: mov     [rbp+0FD0h+var_290], rax
 * 00000001405D13B6: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D13BD: mov     [rbp+0FD0h+var_280], rax
 * 00000001405D13C4: lea     rax, aZwalpcqueryinf; "ZwAlpcQueryInformation"
 * 00000001405D13CB: mov     [rbp+0FD0h+var_270], rax
 * 00000001405D13D2: lea     rax, VfZwQueryObject_Entry
 * 00000001405D13D9: mov     [rbp+0FD0h+var_260], rax
 * 00000001405D13E0: lea     rax, aZwremoveiocomp; "ZwRemoveIoCompletionEx"
 * 00000001405D13E7: mov     [rbp+0FD0h+var_250], rax
 * 00000001405D13EE: lea     rax, VfZwRemoveIoCompletionEx_Entry
 * 00000001405D13F5: mov     [rbp+0FD0h+var_240], rax
 * 00000001405D13FC: lea     rax, aZwcreatetransa; "ZwCreateTransactionManager"
 * 00000001405D1403: mov     [rbp+0FD0h+var_230], rax
 * 00000001405D140A: lea     rax, VfZwCreateTransactionManager_Entry
 * 00000001405D1411: mov     [rbp+0FD0h+var_220], rax
 * 00000001405D1418: lea     rax, aZwopentransact_2; "ZwOpenTransactionManager"
 * 00000001405D141F: mov     [rbp+0FD0h+var_210], rax
 * 00000001405D1426: lea     rax, VfZwOpenTransactionManager_Entry
 * 00000001405D142D: mov     [rbp+0FD0h+var_200], rax
 * 00000001405D1434: lea     rax, aZwqueryinforma_12; "ZwQueryInformationTransactionManager"
 * 00000001405D143B: mov     [rbp+0FD0h+var_1F0], rax
 * 00000001405D1442: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1449: mov     [rbp+0FD0h+var_1E0], rax
 * 00000001405D1450: lea     rax, aZwcreatetransa_0; "ZwCreateTransaction"
 * 00000001405D1457: mov     [rbp+0FD0h+var_1D0], rax
 * 00000001405D145E: lea     rax, VfZwCreateTransaction_Entry
 * 00000001405D1465: mov     [rbp+0FD0h+var_1C0], rax
 * 00000001405D146C: lea     rax, aZwopentransact_1; "ZwOpenTransaction"
 * 00000001405D1473: mov     [rbp+0FD0h+var_1B0], rax
 * 00000001405D147A: lea     rax, VfZwOpenTransaction_Entry
 * 00000001405D1481: mov     [rbp+0FD0h+var_1A0], rax
 * 00000001405D1488: lea     rax, aZwqueryinforma_13; "ZwQueryInformationTransaction"
 * 00000001405D148F: mov     [rbp+0FD0h+var_190], rax
 * 00000001405D1496: mov     [rbp+0FD0h+var_328], 1F8h
 * 00000001405D14A0: mov     [rbp+0FD0h+var_318], rcx
 * 00000001405D14A7: mov     [rbp+0FD0h+var_308], 1F6h
 * 00000001405D14B1: mov     [rbp+0FD0h+var_2F8], rcx
 * 00000001405D14B8: mov     [rbp+0FD0h+var_2E8], 1F3h
 * 00000001405D14C2: mov     [rbp+0FD0h+var_2D8], rcx
 * 00000001405D14C9: mov     [rbp+0FD0h+var_2C8], 1F5h
 * 00000001405D14D3: mov     [rbp+0FD0h+var_2B8], rcx
 * 00000001405D14DA: mov     [rbp+0FD0h+var_2A8], 1F4h
 * 00000001405D14E4: mov     [rbp+0FD0h+var_298], rcx
 * 00000001405D14EB: mov     [rbp+0FD0h+var_288], 1F9h
 * 00000001405D14F5: mov     [rbp+0FD0h+var_278], rcx
 * 00000001405D14FC: mov     [rbp+0FD0h+var_268], 1F7h
 * 00000001405D1506: mov     [rbp+0FD0h+var_258], rcx
 * 00000001405D150D: mov     [rbp+0FD0h+var_248], 26Ah
 * 00000001405D1517: mov     [rbp+0FD0h+var_238], rcx
 * 00000001405D151E: mov     [rbp+0FD0h+var_228], 20Eh
 * 00000001405D1528: mov     [rbp+0FD0h+var_218], rcx
 * 00000001405D152F: mov     [rbp+0FD0h+var_208], 240h
 * 00000001405D1539: mov     [rbp+0FD0h+var_1F8], rcx
 * 00000001405D1540: mov     [rbp+0FD0h+var_1E8], 25Ah
 * 00000001405D154A: mov     [rbp+0FD0h+var_1D8], rcx
 * 00000001405D1551: mov     [rbp+0FD0h+var_1C8], 20Dh
 * 00000001405D155B: mov     [rbp+0FD0h+var_1B8], rcx
 * 00000001405D1562: mov     [rbp+0FD0h+var_1A8], 23Fh
 * 00000001405D156C: mov     [rbp+0FD0h+var_198], rcx
 * 00000001405D1573: lea     rax, VfZwQueryObject_Entry
 * 00000001405D157A: mov     [rbp+0FD0h+var_188], 259h
 * 00000001405D1584: mov     [rbp+0FD0h+var_180], rax
 * 00000001405D158B: lea     rax, aZwsetinformati_10; "ZwSetInformationTransaction"
 * 00000001405D1592: mov     [rbp+0FD0h+var_170], rax
 * 00000001405D1599: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D15A0: mov     [rbp+0FD0h+var_160], rax
 * 00000001405D15A7: lea     rax, aZwpreprepareen_0; "ZwPrePrepareEnlistment"
 * 00000001405D15AE: mov     [rbp+0FD0h+var_150], rax
 * 00000001405D15B5: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D15BC: mov     [rbp+0FD0h+var_140], rax
 * 00000001405D15C3: lea     rax, aZwprepareenlis; "ZwPrepareEnlistment"
 * 00000001405D15CA: mov     [rbp+0FD0h+var_130], rax
 * 00000001405D15D1: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D15D8: mov     [rbp+0FD0h+var_120], rax
 * 00000001405D15DF: lea     rax, aZwcommitenlist_0; "ZwCommitEnlistment"
 * 00000001405D15E6: mov     [rbp+0FD0h+var_110], rax
 * 00000001405D15ED: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D15F4: mov     [rbp+0FD0h+var_100], rax
 * 00000001405D15FB: lea     rax, aZwrollbackenli_0; "ZwRollbackEnlistment"
 * 00000001405D1602: mov     [rbp+0FD0h+var_F0], rax
 * 00000001405D1609: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1610: mov     [rbp+0FD0h+var_E0], rax
 * 00000001405D1617: lea     rax, aZwpreparecompl; "ZwPrepareComplete"
 * 00000001405D161E: mov     [rbp+0FD0h+var_D0], rax
 * 00000001405D1625: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D162C: mov     [rbp+0FD0h+var_C0], rax
 * 00000001405D1633: lea     rax, aZwcreateenlist_0; "ZwCreateEnlistment"
 * 00000001405D163A: mov     [rbp+0FD0h+var_B0], rax
 * 00000001405D1641: lea     rax, VfZwCreateEnlistment_Entry
 * 00000001405D1648: mov     [rbp+0FD0h+var_A0], rax
 * 00000001405D164F: lea     rax, aZwopenenlistme; "ZwOpenEnlistment"
 * 00000001405D1656: mov     [rbp+0FD0h+var_90], rax
 * 00000001405D165D: lea     rax, VfZwOpenEnlistment_Entry
 * 00000001405D1664: mov     [rbp+0FD0h+var_80], rax
 * 00000001405D166B: lea     rax, aZwqueryinforma_9; "ZwQueryInformationEnlistment"
 * 00000001405D1672: mov     [rbp+0FD0h+var_70], rax
 * 00000001405D1679: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1680: mov     [rbp+0FD0h+var_60], rax
 * 00000001405D1687: lea     rax, aZwsetinformati_0; "ZwSetInformationEnlistment"
 * 00000001405D168E: mov     [rbp+0FD0h+var_50], rax
 * 00000001405D1695: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D169C: mov     [rbp+0FD0h+var_40], rax
 * 00000001405D16A3: lea     rax, aZwquerylicense; "ZwQueryLicenseValue"
 * 00000001405D16AA: mov     [rbp+0FD0h+var_30], rax
 * 00000001405D16B1: lea     rax, VfZwQueryLicenseValue_Entry
 * 00000001405D16B8: mov     [rbp+0FD0h+var_20], rax
 * 00000001405D16BF: mov     [rbp+0FD0h+var_178], rcx
 * 00000001405D16C6: mov     [rbp+0FD0h+var_168], 281h
 * 00000001405D16D0: mov     [rbp+0FD0h+var_158], rcx
 * 00000001405D16D7: mov     [rbp+0FD0h+var_148], 243h
 * 00000001405D16E1: mov     [rbp+0FD0h+var_138], rcx
 * 00000001405D16E8: mov     [rbp+0FD0h+var_128], 245h
 * 00000001405D16F2: mov     [rbp+0FD0h+var_118], rcx
 * 00000001405D16F9: mov     [rbp+0FD0h+var_108], 1FFh
 * 00000001405D1703: mov     [rbp+0FD0h+var_F8], rcx
 * 00000001405D170A: mov     [rbp+0FD0h+var_E8], 271h
 * 00000001405D1714: mov     [rbp+0FD0h+var_D8], rcx
 * 00000001405D171B: mov     [rbp+0FD0h+var_C8], 244h
 * 00000001405D1725: mov     [rbp+0FD0h+var_B8], rcx
 * 00000001405D172C: mov     [rbp+0FD0h+var_A8], 203h
 * 00000001405D1736: mov     [rbp+0FD0h+var_98], rcx
 * 00000001405D173D: mov     [rbp+0FD0h+var_88], 22Dh
 * 00000001405D1747: mov     [rbp+0FD0h+var_78], rcx
 * 00000001405D174E: mov     [rbp+0FD0h+var_68], 252h
 * 00000001405D1758: mov     [rbp+0FD0h+var_58], rcx
 * 00000001405D175F: mov     [rbp+0FD0h+var_48], 278h
 * 00000001405D1769: mov     [rbp+0FD0h+var_38], rcx
 * 00000001405D1770: mov     [rbp+0FD0h+var_28], 25Dh
 * 00000001405D177A: mov     [rbp+0FD0h+var_18], rcx
 * 00000001405D1781: lea     r8d, [rcx+8]
 * 00000001405D1785: xor     r9d, r9d
 * 00000001405D1788: lea     rcx, [rsp+10D0h+var_10B0]
 * 00000001405D178D: mov     edx, 85h
 * 00000001405D1792: call    DifRegisterPlugin
 * 00000001405D1797: mov     rcx, [rbp+0FD0h+var_10]
 * 00000001405D179E: xor     rcx, rsp; StackCookie
 * 00000001405D17A1: call    __security_check_cookie
 * 00000001405D17A6: add     rsp, 10D0h
 * 00000001405D17AD: pop     rbp
 * 00000001405D17AE: retn
 */
