/*
 * XREFs of VfSecurityEntry @ 0x1405D0104
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D4FD0 (DifRegisterKernelPlugin.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     DifRegisterPlugin @ 0x1405D5100 (DifRegisterPlugin.c)
 */

/*
 * Hex-Rays decompilation failed for VfSecurityEntry @ 0x1405D0104
 * Reason: Hex-Rays returned no pseudocode for 0x1405D0104
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405D0104: push    rbp
 * 00000001405D0106: lea     rbp, [rsp-0FD0h]
 * 00000001405D010E: sub     rsp, 10D0h
 * 00000001405D0115: mov     rax, cs:__security_cookie
 * 00000001405D011C: xor     rax, rsp
 * 00000001405D011F: mov     [rbp+0FD0h+var_10], rax
 * 00000001405D0126: xor     ecx, ecx
 * 00000001405D0128: mov     [rsp+10D0h+var_10A8], 1EAh
 * 00000001405D0130: lea     rax, aZwaccesschecka; "ZwAccessCheckAndAuditAlarm"
 * 00000001405D0137: mov     [rsp+10D0h+var_1098], rcx
 * 00000001405D013C: mov     [rsp+10D0h+var_10B0], rax
 * 00000001405D0141: lea     rax, VfZwAccessCheckAndAuditAlarm_Entry
 * 00000001405D0148: mov     [rsp+10D0h+var_10A0], rax
 * 00000001405D014D: lea     rax, aZwaddbootentry; "ZwAddBootEntry"
 * 00000001405D0154: mov     [rsp+10D0h+var_1090], rax
 * 00000001405D0159: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0160: mov     [rsp+10D0h+var_1080], rax
 * 00000001405D0165: lea     rax, aZwadddriverent; "ZwAddDriverEntry"
 * 00000001405D016C: mov     [rsp+10D0h+var_1070], rax
 * 00000001405D0171: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0178: mov     [rsp+10D0h+var_1060], rax
 * 00000001405D017D: lea     rax, aZwadjustprivil; "ZwAdjustPrivilegesToken"
 * 00000001405D0184: mov     [rbp+0FD0h+var_1050], rax
 * 00000001405D0188: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D018F: mov     [rbp+0FD0h+var_1040], rax
 * 00000001405D0193: lea     rax, aZwallocatevirt_0; "ZwAllocateVirtualMemory"
 * 00000001405D019A: mov     [rbp+0FD0h+var_1030], rax
 * 00000001405D019E: lea     rax, VfZwPowerInformation_Entry
 * 00000001405D01A5: mov     [rbp+0FD0h+var_1020], rax
 * 00000001405D01A9: lea     rax, aZwcanceliofile_0; "ZwCancelIoFile"
 * 00000001405D01B0: mov     [rbp+0FD0h+var_1010], rax
 * 00000001405D01B4: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D01BB: mov     [rbp+0FD0h+var_1000], rax
 * 00000001405D01BF: lea     rax, aZwcanceltimer; "ZwCancelTimer"
 * 00000001405D01C6: mov     [rbp+0FD0h+var_FF0], rax
 * 00000001405D01CA: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D01D1: mov     [rbp+0FD0h+var_FE0], rax
 * 00000001405D01D5: lea     rax, aZwcloseobjecta_0; "ZwCloseObjectAuditAlarm"
 * 00000001405D01DC: mov     [rbp+0FD0h+var_FD0], rax
 * 00000001405D01E0: lea     rax, VfZwCloseObjectAuditAlarm_Entry
 * 00000001405D01E7: mov     [rbp+0FD0h+var_FC0], rax
 * 00000001405D01EB: lea     rax, aZwconnectport_0; "ZwConnectPort"
 * 00000001405D01F2: mov     [rbp+0FD0h+var_FB0], rax
 * 00000001405D01F6: lea     rax, VfZwConnectPort_Entry
 * 00000001405D01FD: mov     [rbp+0FD0h+var_FA0], rax
 * 00000001405D0201: lea     rax, aZwcreatedirect; "ZwCreateDirectoryObject"
 * 00000001405D0208: mov     [rbp+0FD0h+var_F90], rax
 * 00000001405D020C: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0213: mov     [rbp+0FD0h+var_F80], rax
 * 00000001405D0217: lea     rax, aZwcreateevent_0; "ZwCreateEvent"
 * 00000001405D021E: mov     [rbp+0FD0h+var_F70], rax
 * 00000001405D0222: lea     rax, VfZwCreateTimer_Entry
 * 00000001405D0229: mov     [rbp+0FD0h+var_F60], rax
 * 00000001405D022D: lea     rax, aZwcreatefile; "ZwCreateFile"
 * 00000001405D0234: mov     [rbp+0FD0h+var_F50], rax
 * 00000001405D023B: lea     rax, VfZwCreateFile_Entry
 * 00000001405D0242: mov     [rbp+0FD0h+var_F40], rax
 * 00000001405D0249: lea     rax, aZwcreatejobobj; "ZwCreateJobObject"
 * 00000001405D0250: mov     [rbp+0FD0h+var_F30], rax
 * 00000001405D0257: lea     rax, VfZwOpenKey_Entry
 * 00000001405D025E: mov     [rbp+0FD0h+var_F20], rax
 * 00000001405D0265: lea     rax, aZwcreatekey; "ZwCreateKey"
 * 00000001405D026C: mov     [rbp+0FD0h+var_F10], rax
 * 00000001405D0273: mov     [rsp+10D0h+var_1088], 1EBh
 * 00000001405D027B: mov     [rsp+10D0h+var_1078], rcx
 * 00000001405D0280: mov     [rsp+10D0h+var_1068], 1ECh
 * 00000001405D0288: mov     [rsp+10D0h+var_1058], rcx
 * 00000001405D028D: mov     [rbp+0FD0h+var_1048], 1EDh
 * 00000001405D0294: mov     [rbp+0FD0h+var_1038], rcx
 * 00000001405D0298: mov     [rbp+0FD0h+var_1028], 1EFh
 * 00000001405D029F: mov     [rbp+0FD0h+var_1018], rcx
 * 00000001405D02A3: mov     [rbp+0FD0h+var_1008], 1FAh
 * 00000001405D02AA: mov     [rbp+0FD0h+var_FF8], rcx
 * 00000001405D02AE: mov     [rbp+0FD0h+var_FE8], 1FBh
 * 00000001405D02B5: mov     [rbp+0FD0h+var_FD8], rcx
 * 00000001405D02B9: mov     [rbp+0FD0h+var_FC8], 1FDh
 * 00000001405D02C0: mov     [rbp+0FD0h+var_FB8], rcx
 * 00000001405D02C4: mov     [rbp+0FD0h+var_FA8], 201h
 * 00000001405D02CB: mov     [rbp+0FD0h+var_F98], rcx
 * 00000001405D02CF: mov     [rbp+0FD0h+var_F88], 202h
 * 00000001405D02D6: mov     [rbp+0FD0h+var_F78], rcx
 * 00000001405D02DA: mov     [rbp+0FD0h+var_F68], 204h
 * 00000001405D02E1: mov     [rbp+0FD0h+var_F58], rcx
 * 00000001405D02E5: mov     [rbp+0FD0h+var_F48], 205h
 * 00000001405D02EF: mov     [rbp+0FD0h+var_F38], rcx
 * 00000001405D02F6: mov     [rbp+0FD0h+var_F28], 206h
 * 00000001405D0300: mov     [rbp+0FD0h+var_F18], rcx
 * 00000001405D0307: lea     rax, VfZwCreateKey_Entry
 * 00000001405D030E: mov     [rbp+0FD0h+var_F08], 207h
 * 00000001405D0318: mov     [rbp+0FD0h+var_F00], rax
 * 00000001405D031F: lea     rax, aZwcreatesectio; "ZwCreateSection"
 * 00000001405D0326: mov     [rbp+0FD0h+var_EF0], rax
 * 00000001405D032D: lea     rax, VfZwCreateSection_Entry
 * 00000001405D0334: mov     [rbp+0FD0h+var_EE0], rax
 * 00000001405D033B: lea     rax, aZwcreatesymbol_0; "ZwCreateSymbolicLinkObject"
 * 00000001405D0342: mov     [rbp+0FD0h+var_ED0], rax
 * 00000001405D0349: lea     rax, VfZwCreateSymbolicLinkObject_Entry
 * 00000001405D0350: mov     [rbp+0FD0h+var_EC0], rax
 * 00000001405D0357: lea     rax, aZwcreatetimer; "ZwCreateTimer"
 * 00000001405D035E: mov     [rbp+0FD0h+var_EB0], rax
 * 00000001405D0365: lea     rax, VfZwCreateTimer_Entry
 * 00000001405D036C: mov     [rbp+0FD0h+var_EA0], rax
 * 00000001405D0373: lea     rax, aZwdeletebooten_0; "ZwDeleteBootEntry"
 * 00000001405D037A: mov     [rbp+0FD0h+var_E90], rax
 * 00000001405D0381: lea     rax, VfZwDeleteBootEntry_Entry
 * 00000001405D0388: mov     [rbp+0FD0h+var_E80], rax
 * 00000001405D038F: lea     rax, aZwdeletefile; "ZwDeleteFile"
 * 00000001405D0396: mov     [rbp+0FD0h+var_E70], rax
 * 00000001405D039D: lea     rax, VfZwDeleteFile_Entry
 * 00000001405D03A4: mov     [rbp+0FD0h+var_E60], rax
 * 00000001405D03AB: lea     rax, aZwdeletevaluek; "ZwDeleteValueKey"
 * 00000001405D03B2: mov     [rbp+0FD0h+var_E50], rax
 * 00000001405D03B9: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D03C0: mov     [rbp+0FD0h+var_E40], rax
 * 00000001405D03C7: lea     rax, aZwdeviceiocont_0; "ZwDeviceIoControlFile"
 * 00000001405D03CE: mov     [rbp+0FD0h+var_E30], rax
 * 00000001405D03D5: lea     rax, VfZwDeviceIoControlFile_Entry
 * 00000001405D03DC: mov     [rbp+0FD0h+var_E20], rax
 * 00000001405D03E3: lea     rax, aZwdisplaystrin_0; "ZwDisplayString"
 * 00000001405D03EA: mov     [rbp+0FD0h+var_E10], rax
 * 00000001405D03F1: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D03F8: mov     [rbp+0FD0h+var_E00], rax
 * 00000001405D03FF: lea     rax, aZwduplicateobj; "ZwDuplicateObject"
 * 00000001405D0406: mov     [rbp+0FD0h+var_DF0], rax
 * 00000001405D040D: lea     rax, VfZwDuplicateObject_Entry
 * 00000001405D0414: mov     [rbp+0FD0h+var_DE0], rax
 * 00000001405D041B: lea     rax, aZwduplicatetok_0; "ZwDuplicateToken"
 * 00000001405D0422: mov     [rbp+0FD0h+var_DD0], rax
 * 00000001405D0429: lea     rax, VfZwDuplicateToken_Entry
 * 00000001405D0430: mov     [rbp+0FD0h+var_DC0], rax
 * 00000001405D0437: lea     rax, aZwenumerateboo_0; "ZwEnumerateBootEntries"
 * 00000001405D043E: mov     [rbp+0FD0h+var_DB0], rax
 * 00000001405D0445: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D044C: mov     [rbp+0FD0h+var_DA0], rax
 * 00000001405D0453: lea     rax, aZwenumeratedri_0; "ZwEnumerateDriverEntries"
 * 00000001405D045A: mov     [rbp+0FD0h+var_D90], rax
 * 00000001405D0461: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0468: mov     [rbp+0FD0h+var_D80], rax
 * 00000001405D046F: lea     rax, aZwenumeratekey; "ZwEnumerateKey"
 * 00000001405D0476: mov     [rbp+0FD0h+var_D70], rax
 * 00000001405D047D: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0484: mov     [rbp+0FD0h+var_D60], rax
 * 00000001405D048B: mov     [rbp+0FD0h+var_EF8], rcx
 * 00000001405D0492: mov     [rbp+0FD0h+var_EE8], 20Ah
 * 00000001405D049C: mov     [rbp+0FD0h+var_ED8], rcx
 * 00000001405D04A3: mov     [rbp+0FD0h+var_EC8], 20Bh
 * 00000001405D04AD: mov     [rbp+0FD0h+var_EB8], rcx
 * 00000001405D04B4: mov     [rbp+0FD0h+var_EA8], 20Ch
 * 00000001405D04BE: mov     [rbp+0FD0h+var_E98], rcx
 * 00000001405D04C5: mov     [rbp+0FD0h+var_E88], 20Fh
 * 00000001405D04CF: mov     [rbp+0FD0h+var_E78], rcx
 * 00000001405D04D6: mov     [rbp+0FD0h+var_E68], 210h
 * 00000001405D04E0: mov     [rbp+0FD0h+var_E58], rcx
 * 00000001405D04E7: mov     [rbp+0FD0h+var_E48], 212h
 * 00000001405D04F1: mov     [rbp+0FD0h+var_E38], rcx
 * 00000001405D04F8: mov     [rbp+0FD0h+var_E28], 213h
 * 00000001405D0502: mov     [rbp+0FD0h+var_E18], rcx
 * 00000001405D0509: mov     [rbp+0FD0h+var_E08], 214h
 * 00000001405D0513: mov     [rbp+0FD0h+var_DF8], rcx
 * 00000001405D051A: mov     [rbp+0FD0h+var_DE8], 215h
 * 00000001405D0524: mov     [rbp+0FD0h+var_DD8], rcx
 * 00000001405D052B: mov     [rbp+0FD0h+var_DC8], 216h
 * 00000001405D0535: mov     [rbp+0FD0h+var_DB8], rcx
 * 00000001405D053C: mov     [rbp+0FD0h+var_DA8], 217h
 * 00000001405D0546: mov     [rbp+0FD0h+var_D98], rcx
 * 00000001405D054D: mov     [rbp+0FD0h+var_D88], 218h
 * 00000001405D0557: mov     [rbp+0FD0h+var_D78], rcx
 * 00000001405D055E: mov     [rbp+0FD0h+var_D68], 219h
 * 00000001405D0568: lea     rax, aZwenumerateval; "ZwEnumerateValueKey"
 * 00000001405D056F: mov     [rbp+0FD0h+var_D58], rcx
 * 00000001405D0576: mov     [rbp+0FD0h+var_D50], rax
 * 00000001405D057D: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0584: mov     [rbp+0FD0h+var_D40], rax
 * 00000001405D058B: lea     rax, aZwflushinstruc_0; "ZwFlushInstructionCache"
 * 00000001405D0592: mov     [rbp+0FD0h+var_D30], rax
 * 00000001405D0599: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D05A0: mov     [rbp+0FD0h+var_D20], rax
 * 00000001405D05A7: lea     rax, aZwflushvirtual; "ZwFlushVirtualMemory"
 * 00000001405D05AE: mov     [rbp+0FD0h+var_D10], rax
 * 00000001405D05B5: lea     rax, VfZwFlushVirtualMemory_Entry
 * 00000001405D05BC: mov     [rbp+0FD0h+var_D00], rax
 * 00000001405D05C3: lea     rax, aZwfreevirtualm_0; "ZwFreeVirtualMemory"
 * 00000001405D05CA: mov     [rbp+0FD0h+var_CF0], rax
 * 00000001405D05D1: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D05D8: mov     [rbp+0FD0h+var_CE0], rax
 * 00000001405D05DF: lea     rax, aZwfscontrolfil; "ZwFsControlFile"
 * 00000001405D05E6: mov     [rbp+0FD0h+var_CD0], rax
 * 00000001405D05ED: lea     rax, VfZwDeviceIoControlFile_Entry
 * 00000001405D05F4: mov     [rbp+0FD0h+var_CC0], rax
 * 00000001405D05FB: lea     rax, aZwloaddriver_0; "ZwLoadDriver"
 * 00000001405D0602: mov     [rbp+0FD0h+var_CB0], rax
 * 00000001405D0609: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D0610: mov     [rbp+0FD0h+var_CA0], rax
 * 00000001405D0617: lea     rax, aZwloadkey; "ZwLoadKey"
 * 00000001405D061E: mov     [rbp+0FD0h+var_C90], rax
 * 00000001405D0625: lea     rax, VfZwLoadKey_Entry
 * 00000001405D062C: mov     [rbp+0FD0h+var_C80], rax
 * 00000001405D0633: lea     rax, aZwmapviewofsec; "ZwMapViewOfSection"
 * 00000001405D063A: mov     [rbp+0FD0h+var_C70], rax
 * 00000001405D0641: lea     rax, VfZwMapViewOfSection_Entry
 * 00000001405D0648: mov     [rbp+0FD0h+var_C60], rax
 * 00000001405D064F: lea     rax, aZwmodifybooten; "ZwModifyBootEntry"
 * 00000001405D0656: mov     [rbp+0FD0h+var_C50], rax
 * 00000001405D065D: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0664: mov     [rbp+0FD0h+var_C40], rax
 * 00000001405D066B: lea     rax, aZwmodifydriver_0; "ZwModifyDriverEntry"
 * 00000001405D0672: mov     [rbp+0FD0h+var_C30], rax
 * 00000001405D0679: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0680: mov     [rbp+0FD0h+var_C20], rax
 * 00000001405D0687: lea     rax, aZwnotifychange_0; "ZwNotifyChangeKey"
 * 00000001405D068E: mov     [rbp+0FD0h+var_C10], rax
 * 00000001405D0695: lea     rax, VfZwNotifyChangeKey_Entry
 * 00000001405D069C: mov     [rbp+0FD0h+var_C00], rax
 * 00000001405D06A3: lea     rax, aZwopendirector_0; "ZwOpenDirectoryObject"
 * 00000001405D06AA: mov     [rbp+0FD0h+var_BF0], rax
 * 00000001405D06B1: lea     rax, VfZwOpenKey_Entry
 * 00000001405D06B8: mov     [rbp+0FD0h+var_BE0], rax
 * 00000001405D06BF: lea     rax, aZwopenevent; "ZwOpenEvent"
 * 00000001405D06C6: mov     [rbp+0FD0h+var_BD0], rax
 * 00000001405D06CD: lea     rax, VfZwOpenKey_Entry
 * 00000001405D06D4: mov     [rbp+0FD0h+var_BC0], rax
 * 00000001405D06DB: lea     rax, aZwopenfile; "ZwOpenFile"
 * 00000001405D06E2: mov     [rbp+0FD0h+var_BB0], rax
 * 00000001405D06E9: mov     [rbp+0FD0h+var_D48], 21Bh
 * 00000001405D06F3: mov     [rbp+0FD0h+var_D38], rcx
 * 00000001405D06FA: mov     [rbp+0FD0h+var_D28], 21Eh
 * 00000001405D0704: mov     [rbp+0FD0h+var_D18], rcx
 * 00000001405D070B: mov     [rbp+0FD0h+var_D08], 220h
 * 00000001405D0715: mov     [rbp+0FD0h+var_CF8], rcx
 * 00000001405D071C: mov     [rbp+0FD0h+var_CE8], 221h
 * 00000001405D0726: mov     [rbp+0FD0h+var_CD8], rcx
 * 00000001405D072D: mov     [rbp+0FD0h+var_CC8], 222h
 * 00000001405D0737: mov     [rbp+0FD0h+var_CB8], rcx
 * 00000001405D073E: mov     [rbp+0FD0h+var_CA8], 224h
 * 00000001405D0748: mov     [rbp+0FD0h+var_C98], rcx
 * 00000001405D074F: mov     [rbp+0FD0h+var_C88], 225h
 * 00000001405D0759: mov     [rbp+0FD0h+var_C78], rcx
 * 00000001405D0760: mov     [rbp+0FD0h+var_C68], 228h
 * 00000001405D076A: mov     [rbp+0FD0h+var_C58], rcx
 * 00000001405D0771: mov     [rbp+0FD0h+var_C48], 229h
 * 00000001405D077B: mov     [rbp+0FD0h+var_C38], rcx
 * 00000001405D0782: mov     [rbp+0FD0h+var_C28], 22Ah
 * 00000001405D078C: mov     [rbp+0FD0h+var_C18], rcx
 * 00000001405D0793: mov     [rbp+0FD0h+var_C08], 22Bh
 * 00000001405D079D: mov     [rbp+0FD0h+var_BF8], rcx
 * 00000001405D07A4: mov     [rbp+0FD0h+var_BE8], 22Ch
 * 00000001405D07AE: mov     [rbp+0FD0h+var_BD8], rcx
 * 00000001405D07B5: mov     [rbp+0FD0h+var_BC8], 22Eh
 * 00000001405D07BF: mov     [rbp+0FD0h+var_BB8], rcx
 * 00000001405D07C6: lea     rax, VfZwOpenFile_Entry
 * 00000001405D07CD: mov     [rbp+0FD0h+var_BA8], 22Fh
 * 00000001405D07D7: mov     [rbp+0FD0h+var_BA0], rax
 * 00000001405D07DE: lea     rax, aZwopenjobobjec; "ZwOpenJobObject"
 * 00000001405D07E5: mov     [rbp+0FD0h+var_B90], rax
 * 00000001405D07EC: lea     rax, VfZwOpenKey_Entry
 * 00000001405D07F3: mov     [rbp+0FD0h+var_B80], rax
 * 00000001405D07FA: lea     rax, aZwopenkey; "ZwOpenKey"
 * 00000001405D0801: mov     [rbp+0FD0h+var_B70], rax
 * 00000001405D0808: lea     rax, VfZwOpenKey_Entry
 * 00000001405D080F: mov     [rbp+0FD0h+var_B60], rax
 * 00000001405D0816: lea     rax, aZwopenprocess_0; "ZwOpenProcess"
 * 00000001405D081D: mov     [rbp+0FD0h+var_B50], rax
 * 00000001405D0824: lea     rax, VfZwOpenThread_Entry
 * 00000001405D082B: mov     [rbp+0FD0h+var_B40], rax
 * 00000001405D0832: lea     rax, aZwopenprocesst; "ZwOpenProcessToken"
 * 00000001405D0839: mov     [rbp+0FD0h+var_B30], rax
 * 00000001405D0840: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0847: mov     [rbp+0FD0h+var_B20], rax
 * 00000001405D084E: lea     rax, aZwopenprocesst_1; "ZwOpenProcessTokenEx"
 * 00000001405D0855: mov     [rbp+0FD0h+var_B10], rax
 * 00000001405D085C: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0863: mov     [rbp+0FD0h+var_B00], rax
 * 00000001405D086A: lea     rax, aZwopensection; "ZwOpenSection"
 * 00000001405D0871: mov     [rbp+0FD0h+var_AF0], rax
 * 00000001405D0878: lea     rax, VfZwOpenKey_Entry
 * 00000001405D087F: mov     [rbp+0FD0h+var_AE0], rax
 * 00000001405D0886: lea     rax, aZwopensymbolic_0; "ZwOpenSymbolicLinkObject"
 * 00000001405D088D: mov     [rbp+0FD0h+var_AD0], rax
 * 00000001405D0894: lea     rax, VfZwOpenKey_Entry
 * 00000001405D089B: mov     [rbp+0FD0h+var_AC0], rax
 * 00000001405D08A2: lea     rax, aZwopenthread_0; "ZwOpenThread"
 * 00000001405D08A9: mov     [rbp+0FD0h+var_AB0], rax
 * 00000001405D08B0: lea     rax, VfZwOpenThread_Entry
 * 00000001405D08B7: mov     [rbp+0FD0h+var_AA0], rax
 * 00000001405D08BE: lea     rax, aZwopenthreadto_1; "ZwOpenThreadToken"
 * 00000001405D08C5: mov     [rbp+0FD0h+var_A90], rax
 * 00000001405D08CC: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D08D3: mov     [rbp+0FD0h+var_A80], rax
 * 00000001405D08DA: lea     rax, aZwopenthreadto; "ZwOpenThreadTokenEx"
 * 00000001405D08E1: mov     [rbp+0FD0h+var_A70], rax
 * 00000001405D08E8: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D08EF: mov     [rbp+0FD0h+var_A60], rax
 * 00000001405D08F6: lea     rax, aZwopentimer_0; "ZwOpenTimer"
 * 00000001405D08FD: mov     [rbp+0FD0h+var_A50], rax
 * 00000001405D0904: lea     rax, VfZwOpenKey_Entry
 * 00000001405D090B: mov     [rbp+0FD0h+var_A40], rax
 * 00000001405D0912: lea     rax, aZwpowerinforma; "ZwPowerInformation"
 * 00000001405D0919: mov     [rbp+0FD0h+var_A30], rax
 * 00000001405D0920: lea     rax, VfZwPowerInformation_Entry
 * 00000001405D0927: mov     [rbp+0FD0h+var_A20], rax
 * 00000001405D092E: lea     rax, aZwprotectvirtu; "ZwProtectVirtualMemory"
 * 00000001405D0935: mov     [rbp+0FD0h+var_A10], rax
 * 00000001405D093C: lea     rax, VfZwProtectVirtualMemory_Entry
 * 00000001405D0943: mov     [rbp+0FD0h+var_A00], rax
 * 00000001405D094A: mov     [rbp+0FD0h+var_B98], rcx
 * 00000001405D0951: mov     [rbp+0FD0h+var_B88], 230h
 * 00000001405D095B: mov     [rbp+0FD0h+var_B78], rcx
 * 00000001405D0962: mov     [rbp+0FD0h+var_B68], 231h
 * 00000001405D096C: mov     [rbp+0FD0h+var_B58], rcx
 * 00000001405D0973: mov     [rbp+0FD0h+var_B48], 235h
 * 00000001405D097D: mov     [rbp+0FD0h+var_B38], rcx
 * 00000001405D0984: mov     [rbp+0FD0h+var_B28], 236h
 * 00000001405D098E: mov     [rbp+0FD0h+var_B18], rcx
 * 00000001405D0995: mov     [rbp+0FD0h+var_B08], 237h
 * 00000001405D099F: mov     [rbp+0FD0h+var_AF8], rcx
 * 00000001405D09A6: mov     [rbp+0FD0h+var_AE8], 239h
 * 00000001405D09B0: mov     [rbp+0FD0h+var_AD8], rcx
 * 00000001405D09B7: mov     [rbp+0FD0h+var_AC8], 23Ah
 * 00000001405D09C1: mov     [rbp+0FD0h+var_AB8], rcx
 * 00000001405D09C8: mov     [rbp+0FD0h+var_AA8], 23Bh
 * 00000001405D09D2: mov     [rbp+0FD0h+var_A98], rcx
 * 00000001405D09D9: mov     [rbp+0FD0h+var_A88], 23Ch
 * 00000001405D09E3: mov     [rbp+0FD0h+var_A78], rcx
 * 00000001405D09EA: mov     [rbp+0FD0h+var_A68], 23Dh
 * 00000001405D09F4: mov     [rbp+0FD0h+var_A58], rcx
 * 00000001405D09FB: mov     [rbp+0FD0h+var_A48], 23Eh
 * 00000001405D0A05: mov     [rbp+0FD0h+var_A38], rcx
 * 00000001405D0A0C: mov     [rbp+0FD0h+var_A28], 241h
 * 00000001405D0A16: mov     [rbp+0FD0h+var_A18], rcx
 * 00000001405D0A1D: mov     [rbp+0FD0h+var_A08], 246h
 * 00000001405D0A27: lea     rax, aZwpulseevent_0; "ZwPulseEvent"
 * 00000001405D0A2E: mov     [rbp+0FD0h+var_9F8], rcx
 * 00000001405D0A35: mov     [rbp+0FD0h+var_9F0], rax
 * 00000001405D0A3C: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0A43: mov     [rbp+0FD0h+var_9E0], rax
 * 00000001405D0A4A: lea     rax, aZwquerybootent_0; "ZwQueryBootEntryOrder"
 * 00000001405D0A51: mov     [rbp+0FD0h+var_9D0], rax
 * 00000001405D0A58: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0A5F: mov     [rbp+0FD0h+var_9C0], rax
 * 00000001405D0A66: lea     rax, aZwquerybootopt_0; "ZwQueryBootOptions"
 * 00000001405D0A6D: mov     [rbp+0FD0h+var_9B0], rax
 * 00000001405D0A74: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0A7B: mov     [rbp+0FD0h+var_9A0], rax
 * 00000001405D0A82: lea     rax, aZwquerydefault_2; "ZwQueryDefaultLocale"
 * 00000001405D0A89: mov     [rbp+0FD0h+var_990], rax
 * 00000001405D0A90: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0A97: mov     [rbp+0FD0h+var_980], rax
 * 00000001405D0A9E: lea     rax, aZwquerydefault; "ZwQueryDefaultUILanguage"
 * 00000001405D0AA5: mov     [rbp+0FD0h+var_970], rax
 * 00000001405D0AAC: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0AB3: mov     [rbp+0FD0h+var_960], rax
 * 00000001405D0ABA: lea     rax, aZwquerydrivere; "ZwQueryDriverEntryOrder"
 * 00000001405D0AC1: mov     [rbp+0FD0h+var_950], rax
 * 00000001405D0AC8: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0ACF: mov     [rbp+0FD0h+var_940], rax
 * 00000001405D0AD6: lea     rax, aZwqueryinstall_0; "ZwQueryInstallUILanguage"
 * 00000001405D0ADD: mov     [rbp+0FD0h+var_930], rax
 * 00000001405D0AE4: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0AEB: mov     [rbp+0FD0h+var_920], rax
 * 00000001405D0AF2: lea     rax, aZwquerydirecto_4; "ZwQueryDirectoryFile"
 * 00000001405D0AF9: mov     [rbp+0FD0h+var_910], rax
 * 00000001405D0B00: lea     rax, VfZwQueryDirectoryFile_Entry
 * 00000001405D0B07: mov     [rbp+0FD0h+var_900], rax
 * 00000001405D0B0E: lea     rax, aZwquerydirecto; "ZwQueryDirectoryFileEx"
 * 00000001405D0B15: mov     [rbp+0FD0h+var_8F0], rax
 * 00000001405D0B1C: lea     rax, VfZwQueryDirectoryFileEx_Entry
 * 00000001405D0B23: mov     [rbp+0FD0h+var_8E0], rax
 * 00000001405D0B2A: lea     rax, aZwquerydirecto_3; "ZwQueryDirectoryObject"
 * 00000001405D0B31: mov     [rbp+0FD0h+var_8D0], rax
 * 00000001405D0B38: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D0B3F: mov     [rbp+0FD0h+var_8C0], rax
 * 00000001405D0B46: lea     rax, aZwqueryeafile; "ZwQueryEaFile"
 * 00000001405D0B4D: mov     [rbp+0FD0h+var_8B0], rax
 * 00000001405D0B54: lea     rax, VfZwQueryEaFile_Entry
 * 00000001405D0B5B: mov     [rbp+0FD0h+var_8A0], rax
 * 00000001405D0B62: lea     rax, aZwqueryfullatt_0; "ZwQueryFullAttributesFile"
 * 00000001405D0B69: mov     [rbp+0FD0h+var_890], rax
 * 00000001405D0B70: lea     rax, VfZwQueryFullAttributesFile_Entry
 * 00000001405D0B77: mov     [rbp+0FD0h+var_880], rax
 * 00000001405D0B7E: lea     rax, aZwqueryinforma_8; "ZwQueryInformationFile"
 * 00000001405D0B85: mov     [rbp+0FD0h+var_870], rax
 * 00000001405D0B8C: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0B93: mov     [rbp+0FD0h+var_860], rax
 * 00000001405D0B9A: lea     rax, aZwqueryinforma_11; "ZwQueryInformationJobObject"
 * 00000001405D0BA1: mov     [rbp+0FD0h+var_850], rax
 * 00000001405D0BA8: mov     [rbp+0FD0h+var_9E8], 247h
 * 00000001405D0BB2: mov     [rbp+0FD0h+var_9D8], rcx
 * 00000001405D0BB9: mov     [rbp+0FD0h+var_9C8], 248h
 * 00000001405D0BC3: mov     [rbp+0FD0h+var_9B8], rcx
 * 00000001405D0BCA: mov     [rbp+0FD0h+var_9A8], 249h
 * 00000001405D0BD4: mov     [rbp+0FD0h+var_998], rcx
 * 00000001405D0BDB: mov     [rbp+0FD0h+var_988], 24Ah
 * 00000001405D0BE5: mov     [rbp+0FD0h+var_978], rcx
 * 00000001405D0BEC: mov     [rbp+0FD0h+var_968], 24Bh
 * 00000001405D0BF6: mov     [rbp+0FD0h+var_958], rcx
 * 00000001405D0BFD: mov     [rbp+0FD0h+var_948], 24Fh
 * 00000001405D0C07: mov     [rbp+0FD0h+var_938], rcx
 * 00000001405D0C0E: mov     [rbp+0FD0h+var_928], 25Bh
 * 00000001405D0C18: mov     [rbp+0FD0h+var_918], rcx
 * 00000001405D0C1F: mov     [rbp+0FD0h+var_908], 24Ch
 * 00000001405D0C29: mov     [rbp+0FD0h+var_8F8], rcx
 * 00000001405D0C30: mov     [rbp+0FD0h+var_8E8], 24Dh
 * 00000001405D0C3A: mov     [rbp+0FD0h+var_8D8], rcx
 * 00000001405D0C41: mov     [rbp+0FD0h+var_8C8], 24Eh
 * 00000001405D0C4B: mov     [rbp+0FD0h+var_8B8], rcx
 * 00000001405D0C52: mov     [rbp+0FD0h+var_8A8], 250h
 * 00000001405D0C5C: mov     [rbp+0FD0h+var_898], rcx
 * 00000001405D0C63: mov     [rbp+0FD0h+var_888], 251h
 * 00000001405D0C6D: mov     [rbp+0FD0h+var_878], rcx
 * 00000001405D0C74: mov     [rbp+0FD0h+var_868], 253h
 * 00000001405D0C7E: mov     [rbp+0FD0h+var_858], rcx
 * 00000001405D0C85: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0C8C: mov     [rbp+0FD0h+var_848], 254h
 * 00000001405D0C96: mov     [rbp+0FD0h+var_840], rax
 * 00000001405D0C9D: lea     rax, aZwqueryinforma_15; "ZwQueryInformationProcess"
 * 00000001405D0CA4: mov     [rbp+0FD0h+var_830], rax
 * 00000001405D0CAB: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0CB2: mov     [rbp+0FD0h+var_820], rax
 * 00000001405D0CB9: lea     rax, aZwqueryinforma_7; "ZwQueryInformationThread"
 * 00000001405D0CC0: mov     [rbp+0FD0h+var_810], rax
 * 00000001405D0CC7: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0CCE: mov     [rbp+0FD0h+var_800], rax
 * 00000001405D0CD5: lea     rax, aZwqueryinforma_10; "ZwQueryInformationToken"
 * 00000001405D0CDC: mov     [rbp+0FD0h+var_7F0], rax
 * 00000001405D0CE3: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0CEA: mov     [rbp+0FD0h+var_7E0], rax
 * 00000001405D0CF1: lea     rax, aZwquerykey; "ZwQueryKey"
 * 00000001405D0CF8: mov     [rbp+0FD0h+var_7D0], rax
 * 00000001405D0CFF: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0D06: mov     [rbp+0FD0h+var_7C0], rax
 * 00000001405D0D0D: lea     rax, aZwqueryobject_0; "ZwQueryObject"
 * 00000001405D0D14: mov     [rbp+0FD0h+var_7B0], rax
 * 00000001405D0D1B: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0D22: mov     [rbp+0FD0h+var_7A0], rax
 * 00000001405D0D29: lea     rax, aZwquerysection; "ZwQuerySection"
 * 00000001405D0D30: mov     [rbp+0FD0h+var_790], rax
 * 00000001405D0D37: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0D3E: mov     [rbp+0FD0h+var_780], rax
 * 00000001405D0D45: lea     rax, aZwquerysecurit_0; "ZwQuerySecurityObject"
 * 00000001405D0D4C: mov     [rbp+0FD0h+var_770], rax
 * 00000001405D0D53: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0D5A: mov     [rbp+0FD0h+var_760], rax
 * 00000001405D0D61: lea     rax, aZwquerysymboli; "ZwQuerySymbolicLinkObject"
 * 00000001405D0D68: mov     [rbp+0FD0h+var_750], rax
 * 00000001405D0D6F: lea     rax, VfZwQuerySymbolicLinkObject_Entry
 * 00000001405D0D76: mov     [rbp+0FD0h+var_740], rax
 * 00000001405D0D7D: lea     rax, aZwquerysystemi_0; "ZwQuerySystemInformation"
 * 00000001405D0D84: mov     [rbp+0FD0h+var_730], rax
 * 00000001405D0D8B: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0D92: mov     [rbp+0FD0h+var_720], rax
 * 00000001405D0D99: lea     rax, aZwqueryvalueke_1; "ZwQueryValueKey"
 * 00000001405D0DA0: mov     [rbp+0FD0h+var_710], rax
 * 00000001405D0DA7: lea     rax, VfZwQueryValueKey_Entry
 * 00000001405D0DAE: mov     [rbp+0FD0h+var_700], rax
 * 00000001405D0DB5: lea     rax, aZwqueryvolumei_0; "ZwQueryVolumeInformationFile"
 * 00000001405D0DBC: mov     [rbp+0FD0h+var_6F0], rax
 * 00000001405D0DC3: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0DCA: mov     [rbp+0FD0h+var_6E0], rax
 * 00000001405D0DD1: lea     rax, aZwreadfile; "ZwReadFile"
 * 00000001405D0DD8: mov     [rbp+0FD0h+var_6D0], rax
 * 00000001405D0DDF: lea     rax, VfZwWriteFile_Entry
 * 00000001405D0DE6: mov     [rbp+0FD0h+var_6C0], rax
 * 00000001405D0DED: lea     rax, aZwreplacekey_0; "ZwReplaceKey"
 * 00000001405D0DF4: mov     [rbp+0FD0h+var_6B0], rax
 * 00000001405D0DFB: lea     rax, VfZwReplaceKey_Entry
 * 00000001405D0E02: mov     [rbp+0FD0h+var_6A0], rax
 * 00000001405D0E09: mov     [rbp+0FD0h+var_838], rcx
 * 00000001405D0E10: mov     [rbp+0FD0h+var_828], 255h
 * 00000001405D0E1A: mov     [rbp+0FD0h+var_818], rcx
 * 00000001405D0E21: mov     [rbp+0FD0h+var_808], 257h
 * 00000001405D0E2B: mov     [rbp+0FD0h+var_7F8], rcx
 * 00000001405D0E32: mov     [rbp+0FD0h+var_7E8], 258h
 * 00000001405D0E3C: mov     [rbp+0FD0h+var_7D8], rcx
 * 00000001405D0E43: mov     [rbp+0FD0h+var_7C8], 25Ch
 * 00000001405D0E4D: mov     [rbp+0FD0h+var_7B8], rcx
 * 00000001405D0E54: mov     [rbp+0FD0h+var_7A8], 25Eh
 * 00000001405D0E5E: mov     [rbp+0FD0h+var_798], rcx
 * 00000001405D0E65: mov     [rbp+0FD0h+var_788], 260h
 * 00000001405D0E6F: mov     [rbp+0FD0h+var_778], rcx
 * 00000001405D0E76: mov     [rbp+0FD0h+var_768], 261h
 * 00000001405D0E80: mov     [rbp+0FD0h+var_758], rcx
 * 00000001405D0E87: mov     [rbp+0FD0h+var_748], 262h
 * 00000001405D0E91: mov     [rbp+0FD0h+var_738], rcx
 * 00000001405D0E98: mov     [rbp+0FD0h+var_728], 263h
 * 00000001405D0EA2: mov     [rbp+0FD0h+var_718], rcx
 * 00000001405D0EA9: mov     [rbp+0FD0h+var_708], 264h
 * 00000001405D0EB3: mov     [rbp+0FD0h+var_6F8], rcx
 * 00000001405D0EBA: mov     [rbp+0FD0h+var_6E8], 265h
 * 00000001405D0EC4: mov     [rbp+0FD0h+var_6D8], rcx
 * 00000001405D0ECB: mov     [rbp+0FD0h+var_6C8], 266h
 * 00000001405D0ED5: mov     [rbp+0FD0h+var_6B8], rcx
 * 00000001405D0EDC: mov     [rbp+0FD0h+var_6A8], 26Ch
 * 00000001405D0EE6: lea     rax, aZwrequestwaitr_0; "ZwRequestWaitReplyPort"
 * 00000001405D0EED: mov     [rbp+0FD0h+var_698], rcx
 * 00000001405D0EF4: mov     [rbp+0FD0h+var_690], rax
 * 00000001405D0EFB: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0F02: mov     [rbp+0FD0h+var_680], rax
 * 00000001405D0F09: lea     rax, aZwresetevent; "ZwResetEvent"
 * 00000001405D0F10: mov     [rbp+0FD0h+var_670], rax
 * 00000001405D0F17: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0F1E: mov     [rbp+0FD0h+var_660], rax
 * 00000001405D0F25: lea     rax, aZwsetbootentry_0; "ZwSetBootEntryOrder"
 * 00000001405D0F2C: mov     [rbp+0FD0h+var_650], rax
 * 00000001405D0F33: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0F3A: mov     [rbp+0FD0h+var_640], rax
 * 00000001405D0F41: lea     rax, aZwsetbootoptio_0; "ZwSetBootOptions"
 * 00000001405D0F48: mov     [rbp+0FD0h+var_630], rax
 * 00000001405D0F4F: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0F56: mov     [rbp+0FD0h+var_620], rax
 * 00000001405D0F5D: lea     rax, aZwsetdriverent; "ZwSetDriverEntryOrder"
 * 00000001405D0F64: mov     [rbp+0FD0h+var_610], rax
 * 00000001405D0F6B: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0F72: mov     [rbp+0FD0h+var_600], rax
 * 00000001405D0F79: lea     rax, aZwseteafile; "ZwSetEaFile"
 * 00000001405D0F80: mov     [rbp+0FD0h+var_5F0], rax
 * 00000001405D0F87: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0F8E: mov     [rbp+0FD0h+var_5E0], rax
 * 00000001405D0F95: lea     rax, aZwsetevent_0; "ZwSetEvent"
 * 00000001405D0F9C: mov     [rbp+0FD0h+var_5D0], rax
 * 00000001405D0FA3: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0FAA: mov     [rbp+0FD0h+var_5C0], rax
 * 00000001405D0FB1: lea     rax, aZwsetinformati_12; "ZwSetInformationFile"
 * 00000001405D0FB8: mov     [rbp+0FD0h+var_5B0], rax
 * 00000001405D0FBF: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0FC6: mov     [rbp+0FD0h+var_5A0], rax
 * 00000001405D0FCD: lea     rax, aZwsetinformati_14; "ZwSetInformationJobObject"
 * 00000001405D0FD4: mov     [rbp+0FD0h+var_590], rax
 * 00000001405D0FDB: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0FE2: mov     [rbp+0FD0h+var_580], rax
 * 00000001405D0FE9: lea     rax, aZwsetinformati_11; "ZwSetInformationObject"
 * 00000001405D0FF0: mov     [rbp+0FD0h+var_570], rax
 * 00000001405D0FF7: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0FFE: mov     [rbp+0FD0h+var_560], rax
 * 00000001405D1005: lea     rax, aZwsetinformati_6; "ZwSetInformationProcess"
 * 00000001405D100C: mov     [rbp+0FD0h+var_550], rax
 * 00000001405D1013: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D101A: mov     [rbp+0FD0h+var_540], rax
 * 00000001405D1021: lea     rax, aZwsetinformati_2; "ZwSetInformationThread"
 * 00000001405D1028: mov     [rbp+0FD0h+var_530], rax
 * 00000001405D102F: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D1036: mov     [rbp+0FD0h+var_520], rax
 * 00000001405D103D: lea     rax, aZwsetsecurityo_0; "ZwSetSecurityObject"
 * 00000001405D1044: mov     [rbp+0FD0h+var_510], rax
 * 00000001405D104B: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1052: mov     [rbp+0FD0h+var_500], rax
 * 00000001405D1059: lea     rax, aZwsetsysteminf_0; "ZwSetSystemInformation"
 * 00000001405D1060: mov     [rbp+0FD0h+var_4F0], rax
 * 00000001405D1067: mov     [rbp+0FD0h+var_688], 26Dh
 * 00000001405D1071: mov     [rbp+0FD0h+var_678], rcx
 * 00000001405D1078: mov     [rbp+0FD0h+var_668], 26Eh
 * 00000001405D1082: mov     [rbp+0FD0h+var_658], rcx
 * 00000001405D1089: mov     [rbp+0FD0h+var_648], 273h
 * 00000001405D1093: mov     [rbp+0FD0h+var_638], rcx
 * 00000001405D109A: mov     [rbp+0FD0h+var_628], 274h
 * 00000001405D10A4: mov     [rbp+0FD0h+var_618], rcx
 * 00000001405D10AB: mov     [rbp+0FD0h+var_608], 275h
 * 00000001405D10B5: mov     [rbp+0FD0h+var_5F8], rcx
 * 00000001405D10BC: mov     [rbp+0FD0h+var_5E8], 276h
 * 00000001405D10C6: mov     [rbp+0FD0h+var_5D8], rcx
 * 00000001405D10CD: mov     [rbp+0FD0h+var_5C8], 277h
 * 00000001405D10D7: mov     [rbp+0FD0h+var_5B8], rcx
 * 00000001405D10DE: mov     [rbp+0FD0h+var_5A8], 279h
 * 00000001405D10E8: mov     [rbp+0FD0h+var_598], rcx
 * 00000001405D10EF: mov     [rbp+0FD0h+var_588], 27Ah
 * 00000001405D10F9: mov     [rbp+0FD0h+var_578], rcx
 * 00000001405D1100: mov     [rbp+0FD0h+var_568], 27Ch
 * 00000001405D110A: mov     [rbp+0FD0h+var_558], rcx
 * 00000001405D1111: mov     [rbp+0FD0h+var_548], 27Dh
 * 00000001405D111B: mov     [rbp+0FD0h+var_538], rcx
 * 00000001405D1122: mov     [rbp+0FD0h+var_528], 27Fh
 * 00000001405D112C: mov     [rbp+0FD0h+var_518], rcx
 * 00000001405D1133: mov     [rbp+0FD0h+var_508], 283h
 * 00000001405D113D: mov     [rbp+0FD0h+var_4F8], rcx
 * 00000001405D1144: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D114B: mov     [rbp+0FD0h+var_4E8], 284h
 * 00000001405D1155: mov     [rbp+0FD0h+var_4E0], rax
 * 00000001405D115C: lea     rax, aZwsetsystemtim; "ZwSetSystemTime"
 * 00000001405D1163: mov     [rbp+0FD0h+var_4D0], rax
 * 00000001405D116A: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D1171: mov     [rbp+0FD0h+var_4C0], rax
 * 00000001405D1178: lea     rax, aZwsettimer_0; "ZwSetTimer"
 * 00000001405D117F: mov     [rbp+0FD0h+var_4B0], rax
 * 00000001405D1186: lea     rax, VfZwSetTimer_Entry
 * 00000001405D118D: mov     [rbp+0FD0h+var_4A0], rax
 * 00000001405D1194: lea     rax, aZwsetvaluekey; "ZwSetValueKey"
 * 00000001405D119B: mov     [rbp+0FD0h+var_490], rax
 * 00000001405D11A2: lea     rax, VfZwSetValueKey_Entry
 * 00000001405D11A9: mov     [rbp+0FD0h+var_480], rax
 * 00000001405D11B0: lea     rax, aZwsetvolumeinf; "ZwSetVolumeInformationFile"
 * 00000001405D11B7: mov     [rbp+0FD0h+var_470], rax
 * 00000001405D11BE: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D11C5: mov     [rbp+0FD0h+var_460], rax
 * 00000001405D11CC: lea     rax, aZwtranslatefil; "ZwTranslateFilePath"
 * 00000001405D11D3: mov     [rbp+0FD0h+var_450], rax
 * 00000001405D11DA: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D11E1: mov     [rbp+0FD0h+var_440], rax
 * 00000001405D11E8: lea     rax, aZwunloaddriver_0; "ZwUnloadDriver"
 * 00000001405D11EF: mov     [rbp+0FD0h+var_430], rax
 * 00000001405D11F6: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D11FD: mov     [rbp+0FD0h+var_420], rax
 * 00000001405D1204: lea     rax, aZwunloadkey_0; "ZwUnloadKey"
 * 00000001405D120B: mov     [rbp+0FD0h+var_410], rax
 * 00000001405D1212: lea     rax, VfZwDeleteFile_Entry
 * 00000001405D1219: mov     [rbp+0FD0h+var_400], rax
 * 00000001405D1220: lea     rax, aZwwaitformulti_0; "ZwWaitForMultipleObjects"
 * 00000001405D1227: mov     [rbp+0FD0h+var_3F0], rax
 * 00000001405D122E: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1235: mov     [rbp+0FD0h+var_3E0], rax
 * 00000001405D123C: lea     rax, aZwwaitforsingl_0; "ZwWaitForSingleObject"
 * 00000001405D1243: mov     [rbp+0FD0h+var_3D0], rax
 * 00000001405D124A: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1251: mov     [rbp+0FD0h+var_3C0], rax
 * 00000001405D1258: lea     rax, aZwwritefile; "ZwWriteFile"
 * 00000001405D125F: mov     [rbp+0FD0h+var_3B0], rax
 * 00000001405D1266: lea     rax, VfZwWriteFile_Entry
 * 00000001405D126D: mov     [rbp+0FD0h+var_3A0], rax
 * 00000001405D1274: lea     rax, aZwalpccreatepo_2; "ZwAlpcCreatePort"
 * 00000001405D127B: mov     [rbp+0FD0h+var_390], rax
 * 00000001405D1282: lea     rax, VfZwAlpcCreatePort_Entry
 * 00000001405D1289: mov     [rbp+0FD0h+var_380], rax
 * 00000001405D1290: lea     rax, aZwalpcconnectp; "ZwAlpcConnectPort"
 * 00000001405D1297: mov     [rbp+0FD0h+var_370], rax
 * 00000001405D129E: lea     rax, VfZwAlpcConnectPort_Entry
 * 00000001405D12A5: mov     [rbp+0FD0h+var_360], rax
 * 00000001405D12AC: lea     rax, aZwalpcacceptco; "ZwAlpcAcceptConnectPort"
 * 00000001405D12B3: mov     [rbp+0FD0h+var_350], rax
 * 00000001405D12BA: lea     rax, VfZwAlpcAcceptConnectPort_Entry
 * 00000001405D12C1: mov     [rbp+0FD0h+var_340], rax
 * 00000001405D12C8: mov     [rbp+0FD0h+var_4D8], rcx
 * 00000001405D12CF: mov     [rbp+0FD0h+var_4C8], 285h
 * 00000001405D12D9: mov     [rbp+0FD0h+var_4B8], rcx
 * 00000001405D12E0: mov     [rbp+0FD0h+var_4A8], 286h
 * 00000001405D12EA: mov     [rbp+0FD0h+var_498], rcx
 * 00000001405D12F1: mov     [rbp+0FD0h+var_488], 288h
 * 00000001405D12FB: mov     [rbp+0FD0h+var_478], rcx
 * 00000001405D1302: mov     [rbp+0FD0h+var_468], 289h
 * 00000001405D130C: mov     [rbp+0FD0h+var_458], rcx
 * 00000001405D1313: mov     [rbp+0FD0h+var_448], 28Bh
 * 00000001405D131D: mov     [rbp+0FD0h+var_438], rcx
 * 00000001405D1324: mov     [rbp+0FD0h+var_428], 28Ch
 * 00000001405D132E: mov     [rbp+0FD0h+var_418], rcx
 * 00000001405D1335: mov     [rbp+0FD0h+var_408], 28Dh
 * 00000001405D133F: mov     [rbp+0FD0h+var_3F8], rcx
 * 00000001405D1346: mov     [rbp+0FD0h+var_3E8], 290h
 * 00000001405D1350: mov     [rbp+0FD0h+var_3D8], rcx
 * 00000001405D1357: mov     [rbp+0FD0h+var_3C8], 291h
 * 00000001405D1361: mov     [rbp+0FD0h+var_3B8], rcx
 * 00000001405D1368: mov     [rbp+0FD0h+var_3A8], 292h
 * 00000001405D1372: mov     [rbp+0FD0h+var_398], rcx
 * 00000001405D1379: mov     [rbp+0FD0h+var_388], 1F2h
 * 00000001405D1383: mov     [rbp+0FD0h+var_378], rcx
 * 00000001405D138A: mov     [rbp+0FD0h+var_368], 1F1h
 * 00000001405D1394: mov     [rbp+0FD0h+var_358], rcx
 * 00000001405D139B: mov     [rbp+0FD0h+var_348], 1F0h
 * 00000001405D13A5: lea     rax, aZwalpcsendwait; "ZwAlpcSendWaitReceivePort"
 * 00000001405D13AC: mov     [rbp+0FD0h+var_338], rcx
 * 00000001405D13B3: mov     [rbp+0FD0h+var_330], rax
 * 00000001405D13BA: lea     rax, VfZwAlpcSendWaitReceivePort_Entry
 * 00000001405D13C1: mov     [rbp+0FD0h+var_320], rax
 * 00000001405D13C8: lea     rax, aZwalpccreatese_0; "ZwAlpcCreateSecurityContext"
 * 00000001405D13CF: mov     [rbp+0FD0h+var_310], rax
 * 00000001405D13D6: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D13DD: mov     [rbp+0FD0h+var_300], rax
 * 00000001405D13E4: lea     rax, aZwalpccreatepo_0; "ZwAlpcCreatePortSection"
 * 00000001405D13EB: mov     [rbp+0FD0h+var_2F0], rax
 * 00000001405D13F2: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D13F9: mov     [rbp+0FD0h+var_2E0], rax
 * 00000001405D1400: lea     rax, aZwalpccreatese_2; "ZwAlpcCreateSectionView"
 * 00000001405D1407: mov     [rbp+0FD0h+var_2D0], rax
 * 00000001405D140E: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1415: mov     [rbp+0FD0h+var_2C0], rax
 * 00000001405D141C: lea     rax, aZwalpccreatere; "ZwAlpcCreateResourceReserve"
 * 00000001405D1423: mov     [rbp+0FD0h+var_2B0], rax
 * 00000001405D142A: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1431: mov     [rbp+0FD0h+var_2A0], rax
 * 00000001405D1438: lea     rax, aZwalpcsetinfor_0; "ZwAlpcSetInformation"
 * 00000001405D143F: mov     [rbp+0FD0h+var_290], rax
 * 00000001405D1446: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D144D: mov     [rbp+0FD0h+var_280], rax
 * 00000001405D1454: lea     rax, aZwalpcqueryinf; "ZwAlpcQueryInformation"
 * 00000001405D145B: mov     [rbp+0FD0h+var_270], rax
 * 00000001405D1462: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1469: mov     [rbp+0FD0h+var_260], rax
 * 00000001405D1470: lea     rax, aZwremoveiocomp; "ZwRemoveIoCompletionEx"
 * 00000001405D1477: mov     [rbp+0FD0h+var_250], rax
 * 00000001405D147E: lea     rax, VfZwRemoveIoCompletionEx_Entry
 * 00000001405D1485: mov     [rbp+0FD0h+var_240], rax
 * 00000001405D148C: lea     rax, aZwcreatetransa; "ZwCreateTransactionManager"
 * 00000001405D1493: mov     [rbp+0FD0h+var_230], rax
 * 00000001405D149A: lea     rax, VfZwCreateTransactionManager_Entry
 * 00000001405D14A1: mov     [rbp+0FD0h+var_220], rax
 * 00000001405D14A8: lea     rax, aZwopentransact_2; "ZwOpenTransactionManager"
 * 00000001405D14AF: mov     [rbp+0FD0h+var_210], rax
 * 00000001405D14B6: lea     rax, VfZwOpenTransactionManager_Entry
 * 00000001405D14BD: mov     [rbp+0FD0h+var_200], rax
 * 00000001405D14C4: lea     rax, aZwqueryinforma_12; "ZwQueryInformationTransactionManager"
 * 00000001405D14CB: mov     [rbp+0FD0h+var_1F0], rax
 * 00000001405D14D2: lea     rax, VfZwQueryObject_Entry
 * 00000001405D14D9: mov     [rbp+0FD0h+var_1E0], rax
 * 00000001405D14E0: lea     rax, aZwcreatetransa_0; "ZwCreateTransaction"
 * 00000001405D14E7: mov     [rbp+0FD0h+var_1D0], rax
 * 00000001405D14EE: lea     rax, VfZwCreateTransaction_Entry
 * 00000001405D14F5: mov     [rbp+0FD0h+var_1C0], rax
 * 00000001405D14FC: lea     rax, aZwopentransact_1; "ZwOpenTransaction"
 * 00000001405D1503: mov     [rbp+0FD0h+var_1B0], rax
 * 00000001405D150A: lea     rax, VfZwOpenTransaction_Entry
 * 00000001405D1511: mov     [rbp+0FD0h+var_1A0], rax
 * 00000001405D1518: lea     rax, aZwqueryinforma_13; "ZwQueryInformationTransaction"
 * 00000001405D151F: mov     [rbp+0FD0h+var_190], rax
 * 00000001405D1526: mov     [rbp+0FD0h+var_328], 1F8h
 * 00000001405D1530: mov     [rbp+0FD0h+var_318], rcx
 * 00000001405D1537: mov     [rbp+0FD0h+var_308], 1F6h
 * 00000001405D1541: mov     [rbp+0FD0h+var_2F8], rcx
 * 00000001405D1548: mov     [rbp+0FD0h+var_2E8], 1F3h
 * 00000001405D1552: mov     [rbp+0FD0h+var_2D8], rcx
 * 00000001405D1559: mov     [rbp+0FD0h+var_2C8], 1F5h
 * 00000001405D1563: mov     [rbp+0FD0h+var_2B8], rcx
 * 00000001405D156A: mov     [rbp+0FD0h+var_2A8], 1F4h
 * 00000001405D1574: mov     [rbp+0FD0h+var_298], rcx
 * 00000001405D157B: mov     [rbp+0FD0h+var_288], 1F9h
 * 00000001405D1585: mov     [rbp+0FD0h+var_278], rcx
 * 00000001405D158C: mov     [rbp+0FD0h+var_268], 1F7h
 * 00000001405D1596: mov     [rbp+0FD0h+var_258], rcx
 * 00000001405D159D: mov     [rbp+0FD0h+var_248], 26Ah
 * 00000001405D15A7: mov     [rbp+0FD0h+var_238], rcx
 * 00000001405D15AE: mov     [rbp+0FD0h+var_228], 20Eh
 * 00000001405D15B8: mov     [rbp+0FD0h+var_218], rcx
 * 00000001405D15BF: mov     [rbp+0FD0h+var_208], 240h
 * 00000001405D15C9: mov     [rbp+0FD0h+var_1F8], rcx
 * 00000001405D15D0: mov     [rbp+0FD0h+var_1E8], 25Ah
 * 00000001405D15DA: mov     [rbp+0FD0h+var_1D8], rcx
 * 00000001405D15E1: mov     [rbp+0FD0h+var_1C8], 20Dh
 * 00000001405D15EB: mov     [rbp+0FD0h+var_1B8], rcx
 * 00000001405D15F2: mov     [rbp+0FD0h+var_1A8], 23Fh
 * 00000001405D15FC: mov     [rbp+0FD0h+var_198], rcx
 * 00000001405D1603: lea     rax, VfZwQueryObject_Entry
 * 00000001405D160A: mov     [rbp+0FD0h+var_188], 259h
 * 00000001405D1614: mov     [rbp+0FD0h+var_180], rax
 * 00000001405D161B: lea     rax, aZwsetinformati_10; "ZwSetInformationTransaction"
 * 00000001405D1622: mov     [rbp+0FD0h+var_170], rax
 * 00000001405D1629: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D1630: mov     [rbp+0FD0h+var_160], rax
 * 00000001405D1637: lea     rax, aZwpreprepareen_0; "ZwPrePrepareEnlistment"
 * 00000001405D163E: mov     [rbp+0FD0h+var_150], rax
 * 00000001405D1645: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D164C: mov     [rbp+0FD0h+var_140], rax
 * 00000001405D1653: lea     rax, aZwprepareenlis; "ZwPrepareEnlistment"
 * 00000001405D165A: mov     [rbp+0FD0h+var_130], rax
 * 00000001405D1661: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1668: mov     [rbp+0FD0h+var_120], rax
 * 00000001405D166F: lea     rax, aZwcommitenlist_0; "ZwCommitEnlistment"
 * 00000001405D1676: mov     [rbp+0FD0h+var_110], rax
 * 00000001405D167D: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1684: mov     [rbp+0FD0h+var_100], rax
 * 00000001405D168B: lea     rax, aZwrollbackenli_0; "ZwRollbackEnlistment"
 * 00000001405D1692: mov     [rbp+0FD0h+var_F0], rax
 * 00000001405D1699: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D16A0: mov     [rbp+0FD0h+var_E0], rax
 * 00000001405D16A7: lea     rax, aZwpreparecompl; "ZwPrepareComplete"
 * 00000001405D16AE: mov     [rbp+0FD0h+var_D0], rax
 * 00000001405D16B5: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D16BC: mov     [rbp+0FD0h+var_C0], rax
 * 00000001405D16C3: lea     rax, aZwcreateenlist_0; "ZwCreateEnlistment"
 * 00000001405D16CA: mov     [rbp+0FD0h+var_B0], rax
 * 00000001405D16D1: lea     rax, VfZwCreateEnlistment_Entry
 * 00000001405D16D8: mov     [rbp+0FD0h+var_A0], rax
 * 00000001405D16DF: lea     rax, aZwopenenlistme; "ZwOpenEnlistment"
 * 00000001405D16E6: mov     [rbp+0FD0h+var_90], rax
 * 00000001405D16ED: lea     rax, VfZwOpenEnlistment_Entry
 * 00000001405D16F4: mov     [rbp+0FD0h+var_80], rax
 * 00000001405D16FB: lea     rax, aZwqueryinforma_9; "ZwQueryInformationEnlistment"
 * 00000001405D1702: mov     [rbp+0FD0h+var_70], rax
 * 00000001405D1709: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1710: mov     [rbp+0FD0h+var_60], rax
 * 00000001405D1717: lea     rax, aZwsetinformati_0; "ZwSetInformationEnlistment"
 * 00000001405D171E: mov     [rbp+0FD0h+var_50], rax
 * 00000001405D1725: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D172C: mov     [rbp+0FD0h+var_40], rax
 * 00000001405D1733: lea     rax, aZwquerylicense; "ZwQueryLicenseValue"
 * 00000001405D173A: mov     [rbp+0FD0h+var_30], rax
 * 00000001405D1741: lea     rax, VfZwQueryLicenseValue_Entry
 * 00000001405D1748: mov     [rbp+0FD0h+var_20], rax
 * 00000001405D174F: mov     [rbp+0FD0h+var_178], rcx
 * 00000001405D1756: mov     [rbp+0FD0h+var_168], 281h
 * 00000001405D1760: mov     [rbp+0FD0h+var_158], rcx
 * 00000001405D1767: mov     [rbp+0FD0h+var_148], 243h
 * 00000001405D1771: mov     [rbp+0FD0h+var_138], rcx
 * 00000001405D1778: mov     [rbp+0FD0h+var_128], 245h
 * 00000001405D1782: mov     [rbp+0FD0h+var_118], rcx
 * 00000001405D1789: mov     [rbp+0FD0h+var_108], 1FFh
 * 00000001405D1793: mov     [rbp+0FD0h+var_F8], rcx
 * 00000001405D179A: mov     [rbp+0FD0h+var_E8], 271h
 * 00000001405D17A4: mov     [rbp+0FD0h+var_D8], rcx
 * 00000001405D17AB: mov     [rbp+0FD0h+var_C8], 244h
 * 00000001405D17B5: mov     [rbp+0FD0h+var_B8], rcx
 * 00000001405D17BC: mov     [rbp+0FD0h+var_A8], 203h
 * 00000001405D17C6: mov     [rbp+0FD0h+var_98], rcx
 * 00000001405D17CD: mov     [rbp+0FD0h+var_88], 22Dh
 * 00000001405D17D7: mov     [rbp+0FD0h+var_78], rcx
 * 00000001405D17DE: mov     [rbp+0FD0h+var_68], 252h
 * 00000001405D17E8: mov     [rbp+0FD0h+var_58], rcx
 * 00000001405D17EF: mov     [rbp+0FD0h+var_48], 278h
 * 00000001405D17F9: mov     [rbp+0FD0h+var_38], rcx
 * 00000001405D1800: mov     [rbp+0FD0h+var_28], 25Dh
 * 00000001405D180A: mov     [rbp+0FD0h+var_18], rcx
 * 00000001405D1811: lea     r8d, [rcx+8]
 * 00000001405D1815: xor     r9d, r9d
 * 00000001405D1818: lea     rcx, [rsp+10D0h+var_10B0]
 * 00000001405D181D: mov     edx, 85h
 * 00000001405D1822: call    DifRegisterPlugin
 * 00000001405D1827: mov     rcx, [rbp+0FD0h+var_10]
 * 00000001405D182E: xor     rcx, rsp; StackCookie
 * 00000001405D1831: call    __security_check_cookie
 * 00000001405D1836: add     rsp, 10D0h
 * 00000001405D183D: pop     rbp
 * 00000001405D183E: retn
 */
