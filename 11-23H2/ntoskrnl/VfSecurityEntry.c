/*
 * XREFs of VfSecurityEntry @ 0x1405D05E4
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D54B0 (DifRegisterKernelPlugin.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     DifRegisterPlugin @ 0x1405D55E0 (DifRegisterPlugin.c)
 */

/*
 * Hex-Rays decompilation failed for VfSecurityEntry @ 0x1405D05E4
 * Reason: Hex-Rays returned no pseudocode for 0x1405D05E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405D05E4: push    rbp
 * 00000001405D05E6: lea     rbp, [rsp-0FD0h]
 * 00000001405D05EE: sub     rsp, 10D0h
 * 00000001405D05F5: mov     rax, cs:__security_cookie
 * 00000001405D05FC: xor     rax, rsp
 * 00000001405D05FF: mov     [rbp+0FD0h+var_10], rax
 * 00000001405D0606: xor     ecx, ecx
 * 00000001405D0608: mov     [rsp+10D0h+var_10A8], 1EAh
 * 00000001405D0610: lea     rax, aZwaccesschecka; "ZwAccessCheckAndAuditAlarm"
 * 00000001405D0617: mov     [rsp+10D0h+var_1098], rcx
 * 00000001405D061C: mov     [rsp+10D0h+var_10B0], rax
 * 00000001405D0621: lea     rax, VfZwAccessCheckAndAuditAlarm_Entry
 * 00000001405D0628: mov     [rsp+10D0h+var_10A0], rax
 * 00000001405D062D: lea     rax, aZwaddbootentry; "ZwAddBootEntry"
 * 00000001405D0634: mov     [rsp+10D0h+var_1090], rax
 * 00000001405D0639: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0640: mov     [rsp+10D0h+var_1080], rax
 * 00000001405D0645: lea     rax, aZwadddriverent; "ZwAddDriverEntry"
 * 00000001405D064C: mov     [rsp+10D0h+var_1070], rax
 * 00000001405D0651: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0658: mov     [rsp+10D0h+var_1060], rax
 * 00000001405D065D: lea     rax, aZwadjustprivil; "ZwAdjustPrivilegesToken"
 * 00000001405D0664: mov     [rbp+0FD0h+var_1050], rax
 * 00000001405D0668: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D066F: mov     [rbp+0FD0h+var_1040], rax
 * 00000001405D0673: lea     rax, aZwallocatevirt_0; "ZwAllocateVirtualMemory"
 * 00000001405D067A: mov     [rbp+0FD0h+var_1030], rax
 * 00000001405D067E: lea     rax, VfZwPowerInformation_Entry
 * 00000001405D0685: mov     [rbp+0FD0h+var_1020], rax
 * 00000001405D0689: lea     rax, aZwcanceliofile_0; "ZwCancelIoFile"
 * 00000001405D0690: mov     [rbp+0FD0h+var_1010], rax
 * 00000001405D0694: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D069B: mov     [rbp+0FD0h+var_1000], rax
 * 00000001405D069F: lea     rax, aZwcanceltimer; "ZwCancelTimer"
 * 00000001405D06A6: mov     [rbp+0FD0h+var_FF0], rax
 * 00000001405D06AA: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D06B1: mov     [rbp+0FD0h+var_FE0], rax
 * 00000001405D06B5: lea     rax, aZwcloseobjecta_0; "ZwCloseObjectAuditAlarm"
 * 00000001405D06BC: mov     [rbp+0FD0h+var_FD0], rax
 * 00000001405D06C0: lea     rax, VfZwCloseObjectAuditAlarm_Entry
 * 00000001405D06C7: mov     [rbp+0FD0h+var_FC0], rax
 * 00000001405D06CB: lea     rax, aZwconnectport_0; "ZwConnectPort"
 * 00000001405D06D2: mov     [rbp+0FD0h+var_FB0], rax
 * 00000001405D06D6: lea     rax, VfZwConnectPort_Entry
 * 00000001405D06DD: mov     [rbp+0FD0h+var_FA0], rax
 * 00000001405D06E1: lea     rax, aZwcreatedirect; "ZwCreateDirectoryObject"
 * 00000001405D06E8: mov     [rbp+0FD0h+var_F90], rax
 * 00000001405D06EC: lea     rax, VfZwOpenKey_Entry
 * 00000001405D06F3: mov     [rbp+0FD0h+var_F80], rax
 * 00000001405D06F7: lea     rax, aZwcreateevent_0; "ZwCreateEvent"
 * 00000001405D06FE: mov     [rbp+0FD0h+var_F70], rax
 * 00000001405D0702: lea     rax, VfZwCreateTimer_Entry
 * 00000001405D0709: mov     [rbp+0FD0h+var_F60], rax
 * 00000001405D070D: lea     rax, aZwcreatefile; "ZwCreateFile"
 * 00000001405D0714: mov     [rbp+0FD0h+var_F50], rax
 * 00000001405D071B: lea     rax, VfZwCreateFile_Entry
 * 00000001405D0722: mov     [rbp+0FD0h+var_F40], rax
 * 00000001405D0729: lea     rax, aZwcreatejobobj; "ZwCreateJobObject"
 * 00000001405D0730: mov     [rbp+0FD0h+var_F30], rax
 * 00000001405D0737: lea     rax, VfZwOpenKey_Entry
 * 00000001405D073E: mov     [rbp+0FD0h+var_F20], rax
 * 00000001405D0745: lea     rax, aZwcreatekey; "ZwCreateKey"
 * 00000001405D074C: mov     [rbp+0FD0h+var_F10], rax
 * 00000001405D0753: mov     [rsp+10D0h+var_1088], 1EBh
 * 00000001405D075B: mov     [rsp+10D0h+var_1078], rcx
 * 00000001405D0760: mov     [rsp+10D0h+var_1068], 1ECh
 * 00000001405D0768: mov     [rsp+10D0h+var_1058], rcx
 * 00000001405D076D: mov     [rbp+0FD0h+var_1048], 1EDh
 * 00000001405D0774: mov     [rbp+0FD0h+var_1038], rcx
 * 00000001405D0778: mov     [rbp+0FD0h+var_1028], 1EFh
 * 00000001405D077F: mov     [rbp+0FD0h+var_1018], rcx
 * 00000001405D0783: mov     [rbp+0FD0h+var_1008], 1FAh
 * 00000001405D078A: mov     [rbp+0FD0h+var_FF8], rcx
 * 00000001405D078E: mov     [rbp+0FD0h+var_FE8], 1FBh
 * 00000001405D0795: mov     [rbp+0FD0h+var_FD8], rcx
 * 00000001405D0799: mov     [rbp+0FD0h+var_FC8], 1FDh
 * 00000001405D07A0: mov     [rbp+0FD0h+var_FB8], rcx
 * 00000001405D07A4: mov     [rbp+0FD0h+var_FA8], 201h
 * 00000001405D07AB: mov     [rbp+0FD0h+var_F98], rcx
 * 00000001405D07AF: mov     [rbp+0FD0h+var_F88], 202h
 * 00000001405D07B6: mov     [rbp+0FD0h+var_F78], rcx
 * 00000001405D07BA: mov     [rbp+0FD0h+var_F68], 204h
 * 00000001405D07C1: mov     [rbp+0FD0h+var_F58], rcx
 * 00000001405D07C5: mov     [rbp+0FD0h+var_F48], 205h
 * 00000001405D07CF: mov     [rbp+0FD0h+var_F38], rcx
 * 00000001405D07D6: mov     [rbp+0FD0h+var_F28], 206h
 * 00000001405D07E0: mov     [rbp+0FD0h+var_F18], rcx
 * 00000001405D07E7: lea     rax, VfZwCreateKey_Entry
 * 00000001405D07EE: mov     [rbp+0FD0h+var_F08], 207h
 * 00000001405D07F8: mov     [rbp+0FD0h+var_F00], rax
 * 00000001405D07FF: lea     rax, aZwcreatesectio; "ZwCreateSection"
 * 00000001405D0806: mov     [rbp+0FD0h+var_EF0], rax
 * 00000001405D080D: lea     rax, VfZwCreateSection_Entry
 * 00000001405D0814: mov     [rbp+0FD0h+var_EE0], rax
 * 00000001405D081B: lea     rax, aZwcreatesymbol_0; "ZwCreateSymbolicLinkObject"
 * 00000001405D0822: mov     [rbp+0FD0h+var_ED0], rax
 * 00000001405D0829: lea     rax, VfZwCreateSymbolicLinkObject_Entry
 * 00000001405D0830: mov     [rbp+0FD0h+var_EC0], rax
 * 00000001405D0837: lea     rax, aZwcreatetimer; "ZwCreateTimer"
 * 00000001405D083E: mov     [rbp+0FD0h+var_EB0], rax
 * 00000001405D0845: lea     rax, VfZwCreateTimer_Entry
 * 00000001405D084C: mov     [rbp+0FD0h+var_EA0], rax
 * 00000001405D0853: lea     rax, aZwdeletebooten_0; "ZwDeleteBootEntry"
 * 00000001405D085A: mov     [rbp+0FD0h+var_E90], rax
 * 00000001405D0861: lea     rax, VfZwDeleteBootEntry_Entry
 * 00000001405D0868: mov     [rbp+0FD0h+var_E80], rax
 * 00000001405D086F: lea     rax, aZwdeletefile; "ZwDeleteFile"
 * 00000001405D0876: mov     [rbp+0FD0h+var_E70], rax
 * 00000001405D087D: lea     rax, VfZwDeleteFile_Entry
 * 00000001405D0884: mov     [rbp+0FD0h+var_E60], rax
 * 00000001405D088B: lea     rax, aZwdeletevaluek; "ZwDeleteValueKey"
 * 00000001405D0892: mov     [rbp+0FD0h+var_E50], rax
 * 00000001405D0899: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D08A0: mov     [rbp+0FD0h+var_E40], rax
 * 00000001405D08A7: lea     rax, aZwdeviceiocont_0; "ZwDeviceIoControlFile"
 * 00000001405D08AE: mov     [rbp+0FD0h+var_E30], rax
 * 00000001405D08B5: lea     rax, VfZwDeviceIoControlFile_Entry
 * 00000001405D08BC: mov     [rbp+0FD0h+var_E20], rax
 * 00000001405D08C3: lea     rax, aZwdisplaystrin_0; "ZwDisplayString"
 * 00000001405D08CA: mov     [rbp+0FD0h+var_E10], rax
 * 00000001405D08D1: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D08D8: mov     [rbp+0FD0h+var_E00], rax
 * 00000001405D08DF: lea     rax, aZwduplicateobj; "ZwDuplicateObject"
 * 00000001405D08E6: mov     [rbp+0FD0h+var_DF0], rax
 * 00000001405D08ED: lea     rax, VfZwDuplicateObject_Entry
 * 00000001405D08F4: mov     [rbp+0FD0h+var_DE0], rax
 * 00000001405D08FB: lea     rax, aZwduplicatetok_0; "ZwDuplicateToken"
 * 00000001405D0902: mov     [rbp+0FD0h+var_DD0], rax
 * 00000001405D0909: lea     rax, VfZwDuplicateToken_Entry
 * 00000001405D0910: mov     [rbp+0FD0h+var_DC0], rax
 * 00000001405D0917: lea     rax, aZwenumerateboo_0; "ZwEnumerateBootEntries"
 * 00000001405D091E: mov     [rbp+0FD0h+var_DB0], rax
 * 00000001405D0925: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D092C: mov     [rbp+0FD0h+var_DA0], rax
 * 00000001405D0933: lea     rax, aZwenumeratedri_0; "ZwEnumerateDriverEntries"
 * 00000001405D093A: mov     [rbp+0FD0h+var_D90], rax
 * 00000001405D0941: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0948: mov     [rbp+0FD0h+var_D80], rax
 * 00000001405D094F: lea     rax, aZwenumeratekey; "ZwEnumerateKey"
 * 00000001405D0956: mov     [rbp+0FD0h+var_D70], rax
 * 00000001405D095D: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0964: mov     [rbp+0FD0h+var_D60], rax
 * 00000001405D096B: mov     [rbp+0FD0h+var_EF8], rcx
 * 00000001405D0972: mov     [rbp+0FD0h+var_EE8], 20Ah
 * 00000001405D097C: mov     [rbp+0FD0h+var_ED8], rcx
 * 00000001405D0983: mov     [rbp+0FD0h+var_EC8], 20Bh
 * 00000001405D098D: mov     [rbp+0FD0h+var_EB8], rcx
 * 00000001405D0994: mov     [rbp+0FD0h+var_EA8], 20Ch
 * 00000001405D099E: mov     [rbp+0FD0h+var_E98], rcx
 * 00000001405D09A5: mov     [rbp+0FD0h+var_E88], 20Fh
 * 00000001405D09AF: mov     [rbp+0FD0h+var_E78], rcx
 * 00000001405D09B6: mov     [rbp+0FD0h+var_E68], 210h
 * 00000001405D09C0: mov     [rbp+0FD0h+var_E58], rcx
 * 00000001405D09C7: mov     [rbp+0FD0h+var_E48], 212h
 * 00000001405D09D1: mov     [rbp+0FD0h+var_E38], rcx
 * 00000001405D09D8: mov     [rbp+0FD0h+var_E28], 213h
 * 00000001405D09E2: mov     [rbp+0FD0h+var_E18], rcx
 * 00000001405D09E9: mov     [rbp+0FD0h+var_E08], 214h
 * 00000001405D09F3: mov     [rbp+0FD0h+var_DF8], rcx
 * 00000001405D09FA: mov     [rbp+0FD0h+var_DE8], 215h
 * 00000001405D0A04: mov     [rbp+0FD0h+var_DD8], rcx
 * 00000001405D0A0B: mov     [rbp+0FD0h+var_DC8], 216h
 * 00000001405D0A15: mov     [rbp+0FD0h+var_DB8], rcx
 * 00000001405D0A1C: mov     [rbp+0FD0h+var_DA8], 217h
 * 00000001405D0A26: mov     [rbp+0FD0h+var_D98], rcx
 * 00000001405D0A2D: mov     [rbp+0FD0h+var_D88], 218h
 * 00000001405D0A37: mov     [rbp+0FD0h+var_D78], rcx
 * 00000001405D0A3E: mov     [rbp+0FD0h+var_D68], 219h
 * 00000001405D0A48: lea     rax, aZwenumerateval; "ZwEnumerateValueKey"
 * 00000001405D0A4F: mov     [rbp+0FD0h+var_D58], rcx
 * 00000001405D0A56: mov     [rbp+0FD0h+var_D50], rax
 * 00000001405D0A5D: lea     rax, VfZwQueryObject_Entry
 * 00000001405D0A64: mov     [rbp+0FD0h+var_D40], rax
 * 00000001405D0A6B: lea     rax, aZwflushinstruc_0; "ZwFlushInstructionCache"
 * 00000001405D0A72: mov     [rbp+0FD0h+var_D30], rax
 * 00000001405D0A79: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D0A80: mov     [rbp+0FD0h+var_D20], rax
 * 00000001405D0A87: lea     rax, aZwflushvirtual; "ZwFlushVirtualMemory"
 * 00000001405D0A8E: mov     [rbp+0FD0h+var_D10], rax
 * 00000001405D0A95: lea     rax, VfZwFlushVirtualMemory_Entry
 * 00000001405D0A9C: mov     [rbp+0FD0h+var_D00], rax
 * 00000001405D0AA3: lea     rax, aZwfreevirtualm_0; "ZwFreeVirtualMemory"
 * 00000001405D0AAA: mov     [rbp+0FD0h+var_CF0], rax
 * 00000001405D0AB1: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D0AB8: mov     [rbp+0FD0h+var_CE0], rax
 * 00000001405D0ABF: lea     rax, aZwfscontrolfil; "ZwFsControlFile"
 * 00000001405D0AC6: mov     [rbp+0FD0h+var_CD0], rax
 * 00000001405D0ACD: lea     rax, VfZwDeviceIoControlFile_Entry
 * 00000001405D0AD4: mov     [rbp+0FD0h+var_CC0], rax
 * 00000001405D0ADB: lea     rax, aZwloaddriver_0; "ZwLoadDriver"
 * 00000001405D0AE2: mov     [rbp+0FD0h+var_CB0], rax
 * 00000001405D0AE9: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D0AF0: mov     [rbp+0FD0h+var_CA0], rax
 * 00000001405D0AF7: lea     rax, aZwloadkey; "ZwLoadKey"
 * 00000001405D0AFE: mov     [rbp+0FD0h+var_C90], rax
 * 00000001405D0B05: lea     rax, VfZwLoadKey_Entry
 * 00000001405D0B0C: mov     [rbp+0FD0h+var_C80], rax
 * 00000001405D0B13: lea     rax, aZwmapviewofsec; "ZwMapViewOfSection"
 * 00000001405D0B1A: mov     [rbp+0FD0h+var_C70], rax
 * 00000001405D0B21: lea     rax, VfZwMapViewOfSection_Entry
 * 00000001405D0B28: mov     [rbp+0FD0h+var_C60], rax
 * 00000001405D0B2F: lea     rax, aZwmodifybooten; "ZwModifyBootEntry"
 * 00000001405D0B36: mov     [rbp+0FD0h+var_C50], rax
 * 00000001405D0B3D: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0B44: mov     [rbp+0FD0h+var_C40], rax
 * 00000001405D0B4B: lea     rax, aZwmodifydriver_0; "ZwModifyDriverEntry"
 * 00000001405D0B52: mov     [rbp+0FD0h+var_C30], rax
 * 00000001405D0B59: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0B60: mov     [rbp+0FD0h+var_C20], rax
 * 00000001405D0B67: lea     rax, aZwnotifychange_0; "ZwNotifyChangeKey"
 * 00000001405D0B6E: mov     [rbp+0FD0h+var_C10], rax
 * 00000001405D0B75: lea     rax, VfZwNotifyChangeKey_Entry
 * 00000001405D0B7C: mov     [rbp+0FD0h+var_C00], rax
 * 00000001405D0B83: lea     rax, aZwopendirector_0; "ZwOpenDirectoryObject"
 * 00000001405D0B8A: mov     [rbp+0FD0h+var_BF0], rax
 * 00000001405D0B91: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0B98: mov     [rbp+0FD0h+var_BE0], rax
 * 00000001405D0B9F: lea     rax, aZwopenevent; "ZwOpenEvent"
 * 00000001405D0BA6: mov     [rbp+0FD0h+var_BD0], rax
 * 00000001405D0BAD: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0BB4: mov     [rbp+0FD0h+var_BC0], rax
 * 00000001405D0BBB: lea     rax, aZwopenfile; "ZwOpenFile"
 * 00000001405D0BC2: mov     [rbp+0FD0h+var_BB0], rax
 * 00000001405D0BC9: mov     [rbp+0FD0h+var_D48], 21Bh
 * 00000001405D0BD3: mov     [rbp+0FD0h+var_D38], rcx
 * 00000001405D0BDA: mov     [rbp+0FD0h+var_D28], 21Eh
 * 00000001405D0BE4: mov     [rbp+0FD0h+var_D18], rcx
 * 00000001405D0BEB: mov     [rbp+0FD0h+var_D08], 220h
 * 00000001405D0BF5: mov     [rbp+0FD0h+var_CF8], rcx
 * 00000001405D0BFC: mov     [rbp+0FD0h+var_CE8], 221h
 * 00000001405D0C06: mov     [rbp+0FD0h+var_CD8], rcx
 * 00000001405D0C0D: mov     [rbp+0FD0h+var_CC8], 222h
 * 00000001405D0C17: mov     [rbp+0FD0h+var_CB8], rcx
 * 00000001405D0C1E: mov     [rbp+0FD0h+var_CA8], 224h
 * 00000001405D0C28: mov     [rbp+0FD0h+var_C98], rcx
 * 00000001405D0C2F: mov     [rbp+0FD0h+var_C88], 225h
 * 00000001405D0C39: mov     [rbp+0FD0h+var_C78], rcx
 * 00000001405D0C40: mov     [rbp+0FD0h+var_C68], 228h
 * 00000001405D0C4A: mov     [rbp+0FD0h+var_C58], rcx
 * 00000001405D0C51: mov     [rbp+0FD0h+var_C48], 229h
 * 00000001405D0C5B: mov     [rbp+0FD0h+var_C38], rcx
 * 00000001405D0C62: mov     [rbp+0FD0h+var_C28], 22Ah
 * 00000001405D0C6C: mov     [rbp+0FD0h+var_C18], rcx
 * 00000001405D0C73: mov     [rbp+0FD0h+var_C08], 22Bh
 * 00000001405D0C7D: mov     [rbp+0FD0h+var_BF8], rcx
 * 00000001405D0C84: mov     [rbp+0FD0h+var_BE8], 22Ch
 * 00000001405D0C8E: mov     [rbp+0FD0h+var_BD8], rcx
 * 00000001405D0C95: mov     [rbp+0FD0h+var_BC8], 22Eh
 * 00000001405D0C9F: mov     [rbp+0FD0h+var_BB8], rcx
 * 00000001405D0CA6: lea     rax, VfZwOpenFile_Entry
 * 00000001405D0CAD: mov     [rbp+0FD0h+var_BA8], 22Fh
 * 00000001405D0CB7: mov     [rbp+0FD0h+var_BA0], rax
 * 00000001405D0CBE: lea     rax, aZwopenjobobjec; "ZwOpenJobObject"
 * 00000001405D0CC5: mov     [rbp+0FD0h+var_B90], rax
 * 00000001405D0CCC: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0CD3: mov     [rbp+0FD0h+var_B80], rax
 * 00000001405D0CDA: lea     rax, aZwopenkey; "ZwOpenKey"
 * 00000001405D0CE1: mov     [rbp+0FD0h+var_B70], rax
 * 00000001405D0CE8: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0CEF: mov     [rbp+0FD0h+var_B60], rax
 * 00000001405D0CF6: lea     rax, aZwopenprocess_0; "ZwOpenProcess"
 * 00000001405D0CFD: mov     [rbp+0FD0h+var_B50], rax
 * 00000001405D0D04: lea     rax, VfZwOpenThread_Entry
 * 00000001405D0D0B: mov     [rbp+0FD0h+var_B40], rax
 * 00000001405D0D12: lea     rax, aZwopenprocesst; "ZwOpenProcessToken"
 * 00000001405D0D19: mov     [rbp+0FD0h+var_B30], rax
 * 00000001405D0D20: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0D27: mov     [rbp+0FD0h+var_B20], rax
 * 00000001405D0D2E: lea     rax, aZwopenprocesst_1; "ZwOpenProcessTokenEx"
 * 00000001405D0D35: mov     [rbp+0FD0h+var_B10], rax
 * 00000001405D0D3C: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0D43: mov     [rbp+0FD0h+var_B00], rax
 * 00000001405D0D4A: lea     rax, aZwopensection; "ZwOpenSection"
 * 00000001405D0D51: mov     [rbp+0FD0h+var_AF0], rax
 * 00000001405D0D58: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0D5F: mov     [rbp+0FD0h+var_AE0], rax
 * 00000001405D0D66: lea     rax, aZwopensymbolic_0; "ZwOpenSymbolicLinkObject"
 * 00000001405D0D6D: mov     [rbp+0FD0h+var_AD0], rax
 * 00000001405D0D74: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0D7B: mov     [rbp+0FD0h+var_AC0], rax
 * 00000001405D0D82: lea     rax, aZwopenthread_0; "ZwOpenThread"
 * 00000001405D0D89: mov     [rbp+0FD0h+var_AB0], rax
 * 00000001405D0D90: lea     rax, VfZwOpenThread_Entry
 * 00000001405D0D97: mov     [rbp+0FD0h+var_AA0], rax
 * 00000001405D0D9E: lea     rax, aZwopenthreadto_1; "ZwOpenThreadToken"
 * 00000001405D0DA5: mov     [rbp+0FD0h+var_A90], rax
 * 00000001405D0DAC: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0DB3: mov     [rbp+0FD0h+var_A80], rax
 * 00000001405D0DBA: lea     rax, aZwopenthreadto; "ZwOpenThreadTokenEx"
 * 00000001405D0DC1: mov     [rbp+0FD0h+var_A70], rax
 * 00000001405D0DC8: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0DCF: mov     [rbp+0FD0h+var_A60], rax
 * 00000001405D0DD6: lea     rax, aZwopentimer_0; "ZwOpenTimer"
 * 00000001405D0DDD: mov     [rbp+0FD0h+var_A50], rax
 * 00000001405D0DE4: lea     rax, VfZwOpenKey_Entry
 * 00000001405D0DEB: mov     [rbp+0FD0h+var_A40], rax
 * 00000001405D0DF2: lea     rax, aZwpowerinforma; "ZwPowerInformation"
 * 00000001405D0DF9: mov     [rbp+0FD0h+var_A30], rax
 * 00000001405D0E00: lea     rax, VfZwPowerInformation_Entry
 * 00000001405D0E07: mov     [rbp+0FD0h+var_A20], rax
 * 00000001405D0E0E: lea     rax, aZwprotectvirtu; "ZwProtectVirtualMemory"
 * 00000001405D0E15: mov     [rbp+0FD0h+var_A10], rax
 * 00000001405D0E1C: lea     rax, VfZwProtectVirtualMemory_Entry
 * 00000001405D0E23: mov     [rbp+0FD0h+var_A00], rax
 * 00000001405D0E2A: mov     [rbp+0FD0h+var_B98], rcx
 * 00000001405D0E31: mov     [rbp+0FD0h+var_B88], 230h
 * 00000001405D0E3B: mov     [rbp+0FD0h+var_B78], rcx
 * 00000001405D0E42: mov     [rbp+0FD0h+var_B68], 231h
 * 00000001405D0E4C: mov     [rbp+0FD0h+var_B58], rcx
 * 00000001405D0E53: mov     [rbp+0FD0h+var_B48], 235h
 * 00000001405D0E5D: mov     [rbp+0FD0h+var_B38], rcx
 * 00000001405D0E64: mov     [rbp+0FD0h+var_B28], 236h
 * 00000001405D0E6E: mov     [rbp+0FD0h+var_B18], rcx
 * 00000001405D0E75: mov     [rbp+0FD0h+var_B08], 237h
 * 00000001405D0E7F: mov     [rbp+0FD0h+var_AF8], rcx
 * 00000001405D0E86: mov     [rbp+0FD0h+var_AE8], 239h
 * 00000001405D0E90: mov     [rbp+0FD0h+var_AD8], rcx
 * 00000001405D0E97: mov     [rbp+0FD0h+var_AC8], 23Ah
 * 00000001405D0EA1: mov     [rbp+0FD0h+var_AB8], rcx
 * 00000001405D0EA8: mov     [rbp+0FD0h+var_AA8], 23Bh
 * 00000001405D0EB2: mov     [rbp+0FD0h+var_A98], rcx
 * 00000001405D0EB9: mov     [rbp+0FD0h+var_A88], 23Ch
 * 00000001405D0EC3: mov     [rbp+0FD0h+var_A78], rcx
 * 00000001405D0ECA: mov     [rbp+0FD0h+var_A68], 23Dh
 * 00000001405D0ED4: mov     [rbp+0FD0h+var_A58], rcx
 * 00000001405D0EDB: mov     [rbp+0FD0h+var_A48], 23Eh
 * 00000001405D0EE5: mov     [rbp+0FD0h+var_A38], rcx
 * 00000001405D0EEC: mov     [rbp+0FD0h+var_A28], 241h
 * 00000001405D0EF6: mov     [rbp+0FD0h+var_A18], rcx
 * 00000001405D0EFD: mov     [rbp+0FD0h+var_A08], 246h
 * 00000001405D0F07: lea     rax, aZwpulseevent_0; "ZwPulseEvent"
 * 00000001405D0F0E: mov     [rbp+0FD0h+var_9F8], rcx
 * 00000001405D0F15: mov     [rbp+0FD0h+var_9F0], rax
 * 00000001405D0F1C: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0F23: mov     [rbp+0FD0h+var_9E0], rax
 * 00000001405D0F2A: lea     rax, aZwquerybootent_0; "ZwQueryBootEntryOrder"
 * 00000001405D0F31: mov     [rbp+0FD0h+var_9D0], rax
 * 00000001405D0F38: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0F3F: mov     [rbp+0FD0h+var_9C0], rax
 * 00000001405D0F46: lea     rax, aZwquerybootopt_0; "ZwQueryBootOptions"
 * 00000001405D0F4D: mov     [rbp+0FD0h+var_9B0], rax
 * 00000001405D0F54: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0F5B: mov     [rbp+0FD0h+var_9A0], rax
 * 00000001405D0F62: lea     rax, aZwquerydefault_2; "ZwQueryDefaultLocale"
 * 00000001405D0F69: mov     [rbp+0FD0h+var_990], rax
 * 00000001405D0F70: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0F77: mov     [rbp+0FD0h+var_980], rax
 * 00000001405D0F7E: lea     rax, aZwquerydefault; "ZwQueryDefaultUILanguage"
 * 00000001405D0F85: mov     [rbp+0FD0h+var_970], rax
 * 00000001405D0F8C: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0F93: mov     [rbp+0FD0h+var_960], rax
 * 00000001405D0F9A: lea     rax, aZwquerydrivere; "ZwQueryDriverEntryOrder"
 * 00000001405D0FA1: mov     [rbp+0FD0h+var_950], rax
 * 00000001405D0FA8: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D0FAF: mov     [rbp+0FD0h+var_940], rax
 * 00000001405D0FB6: lea     rax, aZwqueryinstall_0; "ZwQueryInstallUILanguage"
 * 00000001405D0FBD: mov     [rbp+0FD0h+var_930], rax
 * 00000001405D0FC4: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D0FCB: mov     [rbp+0FD0h+var_920], rax
 * 00000001405D0FD2: lea     rax, aZwquerydirecto_4; "ZwQueryDirectoryFile"
 * 00000001405D0FD9: mov     [rbp+0FD0h+var_910], rax
 * 00000001405D0FE0: lea     rax, VfZwQueryDirectoryFile_Entry
 * 00000001405D0FE7: mov     [rbp+0FD0h+var_900], rax
 * 00000001405D0FEE: lea     rax, aZwquerydirecto; "ZwQueryDirectoryFileEx"
 * 00000001405D0FF5: mov     [rbp+0FD0h+var_8F0], rax
 * 00000001405D0FFC: lea     rax, VfZwQueryDirectoryFileEx_Entry
 * 00000001405D1003: mov     [rbp+0FD0h+var_8E0], rax
 * 00000001405D100A: lea     rax, aZwquerydirecto_3; "ZwQueryDirectoryObject"
 * 00000001405D1011: mov     [rbp+0FD0h+var_8D0], rax
 * 00000001405D1018: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D101F: mov     [rbp+0FD0h+var_8C0], rax
 * 00000001405D1026: lea     rax, aZwqueryeafile; "ZwQueryEaFile"
 * 00000001405D102D: mov     [rbp+0FD0h+var_8B0], rax
 * 00000001405D1034: lea     rax, VfZwQueryEaFile_Entry
 * 00000001405D103B: mov     [rbp+0FD0h+var_8A0], rax
 * 00000001405D1042: lea     rax, aZwqueryfullatt_0; "ZwQueryFullAttributesFile"
 * 00000001405D1049: mov     [rbp+0FD0h+var_890], rax
 * 00000001405D1050: lea     rax, VfZwQueryFullAttributesFile_Entry
 * 00000001405D1057: mov     [rbp+0FD0h+var_880], rax
 * 00000001405D105E: lea     rax, aZwqueryinforma_8; "ZwQueryInformationFile"
 * 00000001405D1065: mov     [rbp+0FD0h+var_870], rax
 * 00000001405D106C: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D1073: mov     [rbp+0FD0h+var_860], rax
 * 00000001405D107A: lea     rax, aZwqueryinforma_11; "ZwQueryInformationJobObject"
 * 00000001405D1081: mov     [rbp+0FD0h+var_850], rax
 * 00000001405D1088: mov     [rbp+0FD0h+var_9E8], 247h
 * 00000001405D1092: mov     [rbp+0FD0h+var_9D8], rcx
 * 00000001405D1099: mov     [rbp+0FD0h+var_9C8], 248h
 * 00000001405D10A3: mov     [rbp+0FD0h+var_9B8], rcx
 * 00000001405D10AA: mov     [rbp+0FD0h+var_9A8], 249h
 * 00000001405D10B4: mov     [rbp+0FD0h+var_998], rcx
 * 00000001405D10BB: mov     [rbp+0FD0h+var_988], 24Ah
 * 00000001405D10C5: mov     [rbp+0FD0h+var_978], rcx
 * 00000001405D10CC: mov     [rbp+0FD0h+var_968], 24Bh
 * 00000001405D10D6: mov     [rbp+0FD0h+var_958], rcx
 * 00000001405D10DD: mov     [rbp+0FD0h+var_948], 24Fh
 * 00000001405D10E7: mov     [rbp+0FD0h+var_938], rcx
 * 00000001405D10EE: mov     [rbp+0FD0h+var_928], 25Bh
 * 00000001405D10F8: mov     [rbp+0FD0h+var_918], rcx
 * 00000001405D10FF: mov     [rbp+0FD0h+var_908], 24Ch
 * 00000001405D1109: mov     [rbp+0FD0h+var_8F8], rcx
 * 00000001405D1110: mov     [rbp+0FD0h+var_8E8], 24Dh
 * 00000001405D111A: mov     [rbp+0FD0h+var_8D8], rcx
 * 00000001405D1121: mov     [rbp+0FD0h+var_8C8], 24Eh
 * 00000001405D112B: mov     [rbp+0FD0h+var_8B8], rcx
 * 00000001405D1132: mov     [rbp+0FD0h+var_8A8], 250h
 * 00000001405D113C: mov     [rbp+0FD0h+var_898], rcx
 * 00000001405D1143: mov     [rbp+0FD0h+var_888], 251h
 * 00000001405D114D: mov     [rbp+0FD0h+var_878], rcx
 * 00000001405D1154: mov     [rbp+0FD0h+var_868], 253h
 * 00000001405D115E: mov     [rbp+0FD0h+var_858], rcx
 * 00000001405D1165: lea     rax, VfZwQueryObject_Entry
 * 00000001405D116C: mov     [rbp+0FD0h+var_848], 254h
 * 00000001405D1176: mov     [rbp+0FD0h+var_840], rax
 * 00000001405D117D: lea     rax, aZwqueryinforma_15; "ZwQueryInformationProcess"
 * 00000001405D1184: mov     [rbp+0FD0h+var_830], rax
 * 00000001405D118B: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1192: mov     [rbp+0FD0h+var_820], rax
 * 00000001405D1199: lea     rax, aZwqueryinforma_7; "ZwQueryInformationThread"
 * 00000001405D11A0: mov     [rbp+0FD0h+var_810], rax
 * 00000001405D11A7: lea     rax, VfZwQueryObject_Entry
 * 00000001405D11AE: mov     [rbp+0FD0h+var_800], rax
 * 00000001405D11B5: lea     rax, aZwqueryinforma_10; "ZwQueryInformationToken"
 * 00000001405D11BC: mov     [rbp+0FD0h+var_7F0], rax
 * 00000001405D11C3: lea     rax, VfZwQueryObject_Entry
 * 00000001405D11CA: mov     [rbp+0FD0h+var_7E0], rax
 * 00000001405D11D1: lea     rax, aZwquerykey; "ZwQueryKey"
 * 00000001405D11D8: mov     [rbp+0FD0h+var_7D0], rax
 * 00000001405D11DF: lea     rax, VfZwQueryObject_Entry
 * 00000001405D11E6: mov     [rbp+0FD0h+var_7C0], rax
 * 00000001405D11ED: lea     rax, aZwqueryobject_0; "ZwQueryObject"
 * 00000001405D11F4: mov     [rbp+0FD0h+var_7B0], rax
 * 00000001405D11FB: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1202: mov     [rbp+0FD0h+var_7A0], rax
 * 00000001405D1209: lea     rax, aZwquerysection; "ZwQuerySection"
 * 00000001405D1210: mov     [rbp+0FD0h+var_790], rax
 * 00000001405D1217: lea     rax, VfZwQueryObject_Entry
 * 00000001405D121E: mov     [rbp+0FD0h+var_780], rax
 * 00000001405D1225: lea     rax, aZwquerysecurit_0; "ZwQuerySecurityObject"
 * 00000001405D122C: mov     [rbp+0FD0h+var_770], rax
 * 00000001405D1233: lea     rax, VfZwQueryObject_Entry
 * 00000001405D123A: mov     [rbp+0FD0h+var_760], rax
 * 00000001405D1241: lea     rax, aZwquerysymboli; "ZwQuerySymbolicLinkObject"
 * 00000001405D1248: mov     [rbp+0FD0h+var_750], rax
 * 00000001405D124F: lea     rax, VfZwQuerySymbolicLinkObject_Entry
 * 00000001405D1256: mov     [rbp+0FD0h+var_740], rax
 * 00000001405D125D: lea     rax, aZwquerysystemi_0; "ZwQuerySystemInformation"
 * 00000001405D1264: mov     [rbp+0FD0h+var_730], rax
 * 00000001405D126B: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1272: mov     [rbp+0FD0h+var_720], rax
 * 00000001405D1279: lea     rax, aZwqueryvalueke_1; "ZwQueryValueKey"
 * 00000001405D1280: mov     [rbp+0FD0h+var_710], rax
 * 00000001405D1287: lea     rax, VfZwQueryValueKey_Entry
 * 00000001405D128E: mov     [rbp+0FD0h+var_700], rax
 * 00000001405D1295: lea     rax, aZwqueryvolumei_0; "ZwQueryVolumeInformationFile"
 * 00000001405D129C: mov     [rbp+0FD0h+var_6F0], rax
 * 00000001405D12A3: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D12AA: mov     [rbp+0FD0h+var_6E0], rax
 * 00000001405D12B1: lea     rax, aZwreadfile; "ZwReadFile"
 * 00000001405D12B8: mov     [rbp+0FD0h+var_6D0], rax
 * 00000001405D12BF: lea     rax, VfZwWriteFile_Entry
 * 00000001405D12C6: mov     [rbp+0FD0h+var_6C0], rax
 * 00000001405D12CD: lea     rax, aZwreplacekey_0; "ZwReplaceKey"
 * 00000001405D12D4: mov     [rbp+0FD0h+var_6B0], rax
 * 00000001405D12DB: lea     rax, VfZwReplaceKey_Entry
 * 00000001405D12E2: mov     [rbp+0FD0h+var_6A0], rax
 * 00000001405D12E9: mov     [rbp+0FD0h+var_838], rcx
 * 00000001405D12F0: mov     [rbp+0FD0h+var_828], 255h
 * 00000001405D12FA: mov     [rbp+0FD0h+var_818], rcx
 * 00000001405D1301: mov     [rbp+0FD0h+var_808], 257h
 * 00000001405D130B: mov     [rbp+0FD0h+var_7F8], rcx
 * 00000001405D1312: mov     [rbp+0FD0h+var_7E8], 258h
 * 00000001405D131C: mov     [rbp+0FD0h+var_7D8], rcx
 * 00000001405D1323: mov     [rbp+0FD0h+var_7C8], 25Ch
 * 00000001405D132D: mov     [rbp+0FD0h+var_7B8], rcx
 * 00000001405D1334: mov     [rbp+0FD0h+var_7A8], 25Eh
 * 00000001405D133E: mov     [rbp+0FD0h+var_798], rcx
 * 00000001405D1345: mov     [rbp+0FD0h+var_788], 260h
 * 00000001405D134F: mov     [rbp+0FD0h+var_778], rcx
 * 00000001405D1356: mov     [rbp+0FD0h+var_768], 261h
 * 00000001405D1360: mov     [rbp+0FD0h+var_758], rcx
 * 00000001405D1367: mov     [rbp+0FD0h+var_748], 262h
 * 00000001405D1371: mov     [rbp+0FD0h+var_738], rcx
 * 00000001405D1378: mov     [rbp+0FD0h+var_728], 263h
 * 00000001405D1382: mov     [rbp+0FD0h+var_718], rcx
 * 00000001405D1389: mov     [rbp+0FD0h+var_708], 264h
 * 00000001405D1393: mov     [rbp+0FD0h+var_6F8], rcx
 * 00000001405D139A: mov     [rbp+0FD0h+var_6E8], 265h
 * 00000001405D13A4: mov     [rbp+0FD0h+var_6D8], rcx
 * 00000001405D13AB: mov     [rbp+0FD0h+var_6C8], 266h
 * 00000001405D13B5: mov     [rbp+0FD0h+var_6B8], rcx
 * 00000001405D13BC: mov     [rbp+0FD0h+var_6A8], 26Ch
 * 00000001405D13C6: lea     rax, aZwrequestwaitr_0; "ZwRequestWaitReplyPort"
 * 00000001405D13CD: mov     [rbp+0FD0h+var_698], rcx
 * 00000001405D13D4: mov     [rbp+0FD0h+var_690], rax
 * 00000001405D13DB: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D13E2: mov     [rbp+0FD0h+var_680], rax
 * 00000001405D13E9: lea     rax, aZwresetevent; "ZwResetEvent"
 * 00000001405D13F0: mov     [rbp+0FD0h+var_670], rax
 * 00000001405D13F7: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D13FE: mov     [rbp+0FD0h+var_660], rax
 * 00000001405D1405: lea     rax, aZwsetbootentry_0; "ZwSetBootEntryOrder"
 * 00000001405D140C: mov     [rbp+0FD0h+var_650], rax
 * 00000001405D1413: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D141A: mov     [rbp+0FD0h+var_640], rax
 * 00000001405D1421: lea     rax, aZwsetbootoptio_0; "ZwSetBootOptions"
 * 00000001405D1428: mov     [rbp+0FD0h+var_630], rax
 * 00000001405D142F: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D1436: mov     [rbp+0FD0h+var_620], rax
 * 00000001405D143D: lea     rax, aZwsetdriverent; "ZwSetDriverEntryOrder"
 * 00000001405D1444: mov     [rbp+0FD0h+var_610], rax
 * 00000001405D144B: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D1452: mov     [rbp+0FD0h+var_600], rax
 * 00000001405D1459: lea     rax, aZwseteafile; "ZwSetEaFile"
 * 00000001405D1460: mov     [rbp+0FD0h+var_5F0], rax
 * 00000001405D1467: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D146E: mov     [rbp+0FD0h+var_5E0], rax
 * 00000001405D1475: lea     rax, aZwsetevent_0; "ZwSetEvent"
 * 00000001405D147C: mov     [rbp+0FD0h+var_5D0], rax
 * 00000001405D1483: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D148A: mov     [rbp+0FD0h+var_5C0], rax
 * 00000001405D1491: lea     rax, aZwsetinformati_12; "ZwSetInformationFile"
 * 00000001405D1498: mov     [rbp+0FD0h+var_5B0], rax
 * 00000001405D149F: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D14A6: mov     [rbp+0FD0h+var_5A0], rax
 * 00000001405D14AD: lea     rax, aZwsetinformati_14; "ZwSetInformationJobObject"
 * 00000001405D14B4: mov     [rbp+0FD0h+var_590], rax
 * 00000001405D14BB: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D14C2: mov     [rbp+0FD0h+var_580], rax
 * 00000001405D14C9: lea     rax, aZwsetinformati_11; "ZwSetInformationObject"
 * 00000001405D14D0: mov     [rbp+0FD0h+var_570], rax
 * 00000001405D14D7: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D14DE: mov     [rbp+0FD0h+var_560], rax
 * 00000001405D14E5: lea     rax, aZwsetinformati_6; "ZwSetInformationProcess"
 * 00000001405D14EC: mov     [rbp+0FD0h+var_550], rax
 * 00000001405D14F3: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D14FA: mov     [rbp+0FD0h+var_540], rax
 * 00000001405D1501: lea     rax, aZwsetinformati_2; "ZwSetInformationThread"
 * 00000001405D1508: mov     [rbp+0FD0h+var_530], rax
 * 00000001405D150F: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D1516: mov     [rbp+0FD0h+var_520], rax
 * 00000001405D151D: lea     rax, aZwsetsecurityo_0; "ZwSetSecurityObject"
 * 00000001405D1524: mov     [rbp+0FD0h+var_510], rax
 * 00000001405D152B: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1532: mov     [rbp+0FD0h+var_500], rax
 * 00000001405D1539: lea     rax, aZwsetsysteminf_0; "ZwSetSystemInformation"
 * 00000001405D1540: mov     [rbp+0FD0h+var_4F0], rax
 * 00000001405D1547: mov     [rbp+0FD0h+var_688], 26Dh
 * 00000001405D1551: mov     [rbp+0FD0h+var_678], rcx
 * 00000001405D1558: mov     [rbp+0FD0h+var_668], 26Eh
 * 00000001405D1562: mov     [rbp+0FD0h+var_658], rcx
 * 00000001405D1569: mov     [rbp+0FD0h+var_648], 273h
 * 00000001405D1573: mov     [rbp+0FD0h+var_638], rcx
 * 00000001405D157A: mov     [rbp+0FD0h+var_628], 274h
 * 00000001405D1584: mov     [rbp+0FD0h+var_618], rcx
 * 00000001405D158B: mov     [rbp+0FD0h+var_608], 275h
 * 00000001405D1595: mov     [rbp+0FD0h+var_5F8], rcx
 * 00000001405D159C: mov     [rbp+0FD0h+var_5E8], 276h
 * 00000001405D15A6: mov     [rbp+0FD0h+var_5D8], rcx
 * 00000001405D15AD: mov     [rbp+0FD0h+var_5C8], 277h
 * 00000001405D15B7: mov     [rbp+0FD0h+var_5B8], rcx
 * 00000001405D15BE: mov     [rbp+0FD0h+var_5A8], 279h
 * 00000001405D15C8: mov     [rbp+0FD0h+var_598], rcx
 * 00000001405D15CF: mov     [rbp+0FD0h+var_588], 27Ah
 * 00000001405D15D9: mov     [rbp+0FD0h+var_578], rcx
 * 00000001405D15E0: mov     [rbp+0FD0h+var_568], 27Ch
 * 00000001405D15EA: mov     [rbp+0FD0h+var_558], rcx
 * 00000001405D15F1: mov     [rbp+0FD0h+var_548], 27Dh
 * 00000001405D15FB: mov     [rbp+0FD0h+var_538], rcx
 * 00000001405D1602: mov     [rbp+0FD0h+var_528], 27Fh
 * 00000001405D160C: mov     [rbp+0FD0h+var_518], rcx
 * 00000001405D1613: mov     [rbp+0FD0h+var_508], 283h
 * 00000001405D161D: mov     [rbp+0FD0h+var_4F8], rcx
 * 00000001405D1624: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D162B: mov     [rbp+0FD0h+var_4E8], 284h
 * 00000001405D1635: mov     [rbp+0FD0h+var_4E0], rax
 * 00000001405D163C: lea     rax, aZwsetsystemtim; "ZwSetSystemTime"
 * 00000001405D1643: mov     [rbp+0FD0h+var_4D0], rax
 * 00000001405D164A: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D1651: mov     [rbp+0FD0h+var_4C0], rax
 * 00000001405D1658: lea     rax, aZwsettimer_0; "ZwSetTimer"
 * 00000001405D165F: mov     [rbp+0FD0h+var_4B0], rax
 * 00000001405D1666: lea     rax, VfZwSetTimer_Entry
 * 00000001405D166D: mov     [rbp+0FD0h+var_4A0], rax
 * 00000001405D1674: lea     rax, aZwsetvaluekey; "ZwSetValueKey"
 * 00000001405D167B: mov     [rbp+0FD0h+var_490], rax
 * 00000001405D1682: lea     rax, VfZwSetValueKey_Entry
 * 00000001405D1689: mov     [rbp+0FD0h+var_480], rax
 * 00000001405D1690: lea     rax, aZwsetvolumeinf; "ZwSetVolumeInformationFile"
 * 00000001405D1697: mov     [rbp+0FD0h+var_470], rax
 * 00000001405D169E: lea     rax, VfZwFreeVirtualMemory_Entry
 * 00000001405D16A5: mov     [rbp+0FD0h+var_460], rax
 * 00000001405D16AC: lea     rax, aZwtranslatefil; "ZwTranslateFilePath"
 * 00000001405D16B3: mov     [rbp+0FD0h+var_450], rax
 * 00000001405D16BA: lea     rax, VfZwTranslateFilePath_Entry
 * 00000001405D16C1: mov     [rbp+0FD0h+var_440], rax
 * 00000001405D16C8: lea     rax, aZwunloaddriver_0; "ZwUnloadDriver"
 * 00000001405D16CF: mov     [rbp+0FD0h+var_430], rax
 * 00000001405D16D6: lea     rax, VfZwDeleteValueKey_Entry
 * 00000001405D16DD: mov     [rbp+0FD0h+var_420], rax
 * 00000001405D16E4: lea     rax, aZwunloadkey_0; "ZwUnloadKey"
 * 00000001405D16EB: mov     [rbp+0FD0h+var_410], rax
 * 00000001405D16F2: lea     rax, VfZwDeleteFile_Entry
 * 00000001405D16F9: mov     [rbp+0FD0h+var_400], rax
 * 00000001405D1700: lea     rax, aZwwaitformulti_0; "ZwWaitForMultipleObjects"
 * 00000001405D1707: mov     [rbp+0FD0h+var_3F0], rax
 * 00000001405D170E: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1715: mov     [rbp+0FD0h+var_3E0], rax
 * 00000001405D171C: lea     rax, aZwwaitforsingl_0; "ZwWaitForSingleObject"
 * 00000001405D1723: mov     [rbp+0FD0h+var_3D0], rax
 * 00000001405D172A: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1731: mov     [rbp+0FD0h+var_3C0], rax
 * 00000001405D1738: lea     rax, aZwwritefile; "ZwWriteFile"
 * 00000001405D173F: mov     [rbp+0FD0h+var_3B0], rax
 * 00000001405D1746: lea     rax, VfZwWriteFile_Entry
 * 00000001405D174D: mov     [rbp+0FD0h+var_3A0], rax
 * 00000001405D1754: lea     rax, aZwalpccreatepo_2; "ZwAlpcCreatePort"
 * 00000001405D175B: mov     [rbp+0FD0h+var_390], rax
 * 00000001405D1762: lea     rax, VfZwAlpcCreatePort_Entry
 * 00000001405D1769: mov     [rbp+0FD0h+var_380], rax
 * 00000001405D1770: lea     rax, aZwalpcconnectp; "ZwAlpcConnectPort"
 * 00000001405D1777: mov     [rbp+0FD0h+var_370], rax
 * 00000001405D177E: lea     rax, VfZwAlpcConnectPort_Entry
 * 00000001405D1785: mov     [rbp+0FD0h+var_360], rax
 * 00000001405D178C: lea     rax, aZwalpcacceptco; "ZwAlpcAcceptConnectPort"
 * 00000001405D1793: mov     [rbp+0FD0h+var_350], rax
 * 00000001405D179A: lea     rax, VfZwAlpcAcceptConnectPort_Entry
 * 00000001405D17A1: mov     [rbp+0FD0h+var_340], rax
 * 00000001405D17A8: mov     [rbp+0FD0h+var_4D8], rcx
 * 00000001405D17AF: mov     [rbp+0FD0h+var_4C8], 285h
 * 00000001405D17B9: mov     [rbp+0FD0h+var_4B8], rcx
 * 00000001405D17C0: mov     [rbp+0FD0h+var_4A8], 286h
 * 00000001405D17CA: mov     [rbp+0FD0h+var_498], rcx
 * 00000001405D17D1: mov     [rbp+0FD0h+var_488], 288h
 * 00000001405D17DB: mov     [rbp+0FD0h+var_478], rcx
 * 00000001405D17E2: mov     [rbp+0FD0h+var_468], 289h
 * 00000001405D17EC: mov     [rbp+0FD0h+var_458], rcx
 * 00000001405D17F3: mov     [rbp+0FD0h+var_448], 28Bh
 * 00000001405D17FD: mov     [rbp+0FD0h+var_438], rcx
 * 00000001405D1804: mov     [rbp+0FD0h+var_428], 28Ch
 * 00000001405D180E: mov     [rbp+0FD0h+var_418], rcx
 * 00000001405D1815: mov     [rbp+0FD0h+var_408], 28Dh
 * 00000001405D181F: mov     [rbp+0FD0h+var_3F8], rcx
 * 00000001405D1826: mov     [rbp+0FD0h+var_3E8], 290h
 * 00000001405D1830: mov     [rbp+0FD0h+var_3D8], rcx
 * 00000001405D1837: mov     [rbp+0FD0h+var_3C8], 291h
 * 00000001405D1841: mov     [rbp+0FD0h+var_3B8], rcx
 * 00000001405D1848: mov     [rbp+0FD0h+var_3A8], 292h
 * 00000001405D1852: mov     [rbp+0FD0h+var_398], rcx
 * 00000001405D1859: mov     [rbp+0FD0h+var_388], 1F2h
 * 00000001405D1863: mov     [rbp+0FD0h+var_378], rcx
 * 00000001405D186A: mov     [rbp+0FD0h+var_368], 1F1h
 * 00000001405D1874: mov     [rbp+0FD0h+var_358], rcx
 * 00000001405D187B: mov     [rbp+0FD0h+var_348], 1F0h
 * 00000001405D1885: lea     rax, aZwalpcsendwait; "ZwAlpcSendWaitReceivePort"
 * 00000001405D188C: mov     [rbp+0FD0h+var_338], rcx
 * 00000001405D1893: mov     [rbp+0FD0h+var_330], rax
 * 00000001405D189A: lea     rax, VfZwAlpcSendWaitReceivePort_Entry
 * 00000001405D18A1: mov     [rbp+0FD0h+var_320], rax
 * 00000001405D18A8: lea     rax, aZwalpccreatese_0; "ZwAlpcCreateSecurityContext"
 * 00000001405D18AF: mov     [rbp+0FD0h+var_310], rax
 * 00000001405D18B6: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D18BD: mov     [rbp+0FD0h+var_300], rax
 * 00000001405D18C4: lea     rax, aZwalpccreatepo_0; "ZwAlpcCreatePortSection"
 * 00000001405D18CB: mov     [rbp+0FD0h+var_2F0], rax
 * 00000001405D18D2: lea     rax, VfZwQueryDriverEntryOrder_Entry
 * 00000001405D18D9: mov     [rbp+0FD0h+var_2E0], rax
 * 00000001405D18E0: lea     rax, aZwalpccreatese_2; "ZwAlpcCreateSectionView"
 * 00000001405D18E7: mov     [rbp+0FD0h+var_2D0], rax
 * 00000001405D18EE: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D18F5: mov     [rbp+0FD0h+var_2C0], rax
 * 00000001405D18FC: lea     rax, aZwalpccreatere; "ZwAlpcCreateResourceReserve"
 * 00000001405D1903: mov     [rbp+0FD0h+var_2B0], rax
 * 00000001405D190A: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1911: mov     [rbp+0FD0h+var_2A0], rax
 * 00000001405D1918: lea     rax, aZwalpcsetinfor_0; "ZwAlpcSetInformation"
 * 00000001405D191F: mov     [rbp+0FD0h+var_290], rax
 * 00000001405D1926: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D192D: mov     [rbp+0FD0h+var_280], rax
 * 00000001405D1934: lea     rax, aZwalpcqueryinf; "ZwAlpcQueryInformation"
 * 00000001405D193B: mov     [rbp+0FD0h+var_270], rax
 * 00000001405D1942: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1949: mov     [rbp+0FD0h+var_260], rax
 * 00000001405D1950: lea     rax, aZwremoveiocomp; "ZwRemoveIoCompletionEx"
 * 00000001405D1957: mov     [rbp+0FD0h+var_250], rax
 * 00000001405D195E: lea     rax, VfZwRemoveIoCompletionEx_Entry
 * 00000001405D1965: mov     [rbp+0FD0h+var_240], rax
 * 00000001405D196C: lea     rax, aZwcreatetransa; "ZwCreateTransactionManager"
 * 00000001405D1973: mov     [rbp+0FD0h+var_230], rax
 * 00000001405D197A: lea     rax, VfZwCreateTransactionManager_Entry
 * 00000001405D1981: mov     [rbp+0FD0h+var_220], rax
 * 00000001405D1988: lea     rax, aZwopentransact_2; "ZwOpenTransactionManager"
 * 00000001405D198F: mov     [rbp+0FD0h+var_210], rax
 * 00000001405D1996: lea     rax, VfZwOpenTransactionManager_Entry
 * 00000001405D199D: mov     [rbp+0FD0h+var_200], rax
 * 00000001405D19A4: lea     rax, aZwqueryinforma_12; "ZwQueryInformationTransactionManager"
 * 00000001405D19AB: mov     [rbp+0FD0h+var_1F0], rax
 * 00000001405D19B2: lea     rax, VfZwQueryObject_Entry
 * 00000001405D19B9: mov     [rbp+0FD0h+var_1E0], rax
 * 00000001405D19C0: lea     rax, aZwcreatetransa_0; "ZwCreateTransaction"
 * 00000001405D19C7: mov     [rbp+0FD0h+var_1D0], rax
 * 00000001405D19CE: lea     rax, VfZwCreateTransaction_Entry
 * 00000001405D19D5: mov     [rbp+0FD0h+var_1C0], rax
 * 00000001405D19DC: lea     rax, aZwopentransact_1; "ZwOpenTransaction"
 * 00000001405D19E3: mov     [rbp+0FD0h+var_1B0], rax
 * 00000001405D19EA: lea     rax, VfZwOpenTransaction_Entry
 * 00000001405D19F1: mov     [rbp+0FD0h+var_1A0], rax
 * 00000001405D19F8: lea     rax, aZwqueryinforma_13; "ZwQueryInformationTransaction"
 * 00000001405D19FF: mov     [rbp+0FD0h+var_190], rax
 * 00000001405D1A06: mov     [rbp+0FD0h+var_328], 1F8h
 * 00000001405D1A10: mov     [rbp+0FD0h+var_318], rcx
 * 00000001405D1A17: mov     [rbp+0FD0h+var_308], 1F6h
 * 00000001405D1A21: mov     [rbp+0FD0h+var_2F8], rcx
 * 00000001405D1A28: mov     [rbp+0FD0h+var_2E8], 1F3h
 * 00000001405D1A32: mov     [rbp+0FD0h+var_2D8], rcx
 * 00000001405D1A39: mov     [rbp+0FD0h+var_2C8], 1F5h
 * 00000001405D1A43: mov     [rbp+0FD0h+var_2B8], rcx
 * 00000001405D1A4A: mov     [rbp+0FD0h+var_2A8], 1F4h
 * 00000001405D1A54: mov     [rbp+0FD0h+var_298], rcx
 * 00000001405D1A5B: mov     [rbp+0FD0h+var_288], 1F9h
 * 00000001405D1A65: mov     [rbp+0FD0h+var_278], rcx
 * 00000001405D1A6C: mov     [rbp+0FD0h+var_268], 1F7h
 * 00000001405D1A76: mov     [rbp+0FD0h+var_258], rcx
 * 00000001405D1A7D: mov     [rbp+0FD0h+var_248], 26Ah
 * 00000001405D1A87: mov     [rbp+0FD0h+var_238], rcx
 * 00000001405D1A8E: mov     [rbp+0FD0h+var_228], 20Eh
 * 00000001405D1A98: mov     [rbp+0FD0h+var_218], rcx
 * 00000001405D1A9F: mov     [rbp+0FD0h+var_208], 240h
 * 00000001405D1AA9: mov     [rbp+0FD0h+var_1F8], rcx
 * 00000001405D1AB0: mov     [rbp+0FD0h+var_1E8], 25Ah
 * 00000001405D1ABA: mov     [rbp+0FD0h+var_1D8], rcx
 * 00000001405D1AC1: mov     [rbp+0FD0h+var_1C8], 20Dh
 * 00000001405D1ACB: mov     [rbp+0FD0h+var_1B8], rcx
 * 00000001405D1AD2: mov     [rbp+0FD0h+var_1A8], 23Fh
 * 00000001405D1ADC: mov     [rbp+0FD0h+var_198], rcx
 * 00000001405D1AE3: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1AEA: mov     [rbp+0FD0h+var_188], 259h
 * 00000001405D1AF4: mov     [rbp+0FD0h+var_180], rax
 * 00000001405D1AFB: lea     rax, aZwsetinformati_10; "ZwSetInformationTransaction"
 * 00000001405D1B02: mov     [rbp+0FD0h+var_170], rax
 * 00000001405D1B09: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D1B10: mov     [rbp+0FD0h+var_160], rax
 * 00000001405D1B17: lea     rax, aZwpreprepareen_0; "ZwPrePrepareEnlistment"
 * 00000001405D1B1E: mov     [rbp+0FD0h+var_150], rax
 * 00000001405D1B25: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1B2C: mov     [rbp+0FD0h+var_140], rax
 * 00000001405D1B33: lea     rax, aZwprepareenlis; "ZwPrepareEnlistment"
 * 00000001405D1B3A: mov     [rbp+0FD0h+var_130], rax
 * 00000001405D1B41: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1B48: mov     [rbp+0FD0h+var_120], rax
 * 00000001405D1B4F: lea     rax, aZwcommitenlist_0; "ZwCommitEnlistment"
 * 00000001405D1B56: mov     [rbp+0FD0h+var_110], rax
 * 00000001405D1B5D: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1B64: mov     [rbp+0FD0h+var_100], rax
 * 00000001405D1B6B: lea     rax, aZwrollbackenli_0; "ZwRollbackEnlistment"
 * 00000001405D1B72: mov     [rbp+0FD0h+var_F0], rax
 * 00000001405D1B79: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1B80: mov     [rbp+0FD0h+var_E0], rax
 * 00000001405D1B87: lea     rax, aZwpreparecompl; "ZwPrepareComplete"
 * 00000001405D1B8E: mov     [rbp+0FD0h+var_D0], rax
 * 00000001405D1B95: lea     rax, VfZwAlpcCreateSecurityContext_Entry
 * 00000001405D1B9C: mov     [rbp+0FD0h+var_C0], rax
 * 00000001405D1BA3: lea     rax, aZwcreateenlist_0; "ZwCreateEnlistment"
 * 00000001405D1BAA: mov     [rbp+0FD0h+var_B0], rax
 * 00000001405D1BB1: lea     rax, VfZwCreateEnlistment_Entry
 * 00000001405D1BB8: mov     [rbp+0FD0h+var_A0], rax
 * 00000001405D1BBF: lea     rax, aZwopenenlistme; "ZwOpenEnlistment"
 * 00000001405D1BC6: mov     [rbp+0FD0h+var_90], rax
 * 00000001405D1BCD: lea     rax, VfZwOpenEnlistment_Entry
 * 00000001405D1BD4: mov     [rbp+0FD0h+var_80], rax
 * 00000001405D1BDB: lea     rax, aZwqueryinforma_9; "ZwQueryInformationEnlistment"
 * 00000001405D1BE2: mov     [rbp+0FD0h+var_70], rax
 * 00000001405D1BE9: lea     rax, VfZwQueryObject_Entry
 * 00000001405D1BF0: mov     [rbp+0FD0h+var_60], rax
 * 00000001405D1BF7: lea     rax, aZwsetinformati_0; "ZwSetInformationEnlistment"
 * 00000001405D1BFE: mov     [rbp+0FD0h+var_50], rax
 * 00000001405D1C05: lea     rax, VfZwSetDriverEntryOrder_Entry
 * 00000001405D1C0C: mov     [rbp+0FD0h+var_40], rax
 * 00000001405D1C13: lea     rax, aZwquerylicense; "ZwQueryLicenseValue"
 * 00000001405D1C1A: mov     [rbp+0FD0h+var_30], rax
 * 00000001405D1C21: lea     rax, VfZwQueryLicenseValue_Entry
 * 00000001405D1C28: mov     [rbp+0FD0h+var_20], rax
 * 00000001405D1C2F: mov     [rbp+0FD0h+var_178], rcx
 * 00000001405D1C36: mov     [rbp+0FD0h+var_168], 281h
 * 00000001405D1C40: mov     [rbp+0FD0h+var_158], rcx
 * 00000001405D1C47: mov     [rbp+0FD0h+var_148], 243h
 * 00000001405D1C51: mov     [rbp+0FD0h+var_138], rcx
 * 00000001405D1C58: mov     [rbp+0FD0h+var_128], 245h
 * 00000001405D1C62: mov     [rbp+0FD0h+var_118], rcx
 * 00000001405D1C69: mov     [rbp+0FD0h+var_108], 1FFh
 * 00000001405D1C73: mov     [rbp+0FD0h+var_F8], rcx
 * 00000001405D1C7A: mov     [rbp+0FD0h+var_E8], 271h
 * 00000001405D1C84: mov     [rbp+0FD0h+var_D8], rcx
 * 00000001405D1C8B: mov     [rbp+0FD0h+var_C8], 244h
 * 00000001405D1C95: mov     [rbp+0FD0h+var_B8], rcx
 * 00000001405D1C9C: mov     [rbp+0FD0h+var_A8], 203h
 * 00000001405D1CA6: mov     [rbp+0FD0h+var_98], rcx
 * 00000001405D1CAD: mov     [rbp+0FD0h+var_88], 22Dh
 * 00000001405D1CB7: mov     [rbp+0FD0h+var_78], rcx
 * 00000001405D1CBE: mov     [rbp+0FD0h+var_68], 252h
 * 00000001405D1CC8: mov     [rbp+0FD0h+var_58], rcx
 * 00000001405D1CCF: mov     [rbp+0FD0h+var_48], 278h
 * 00000001405D1CD9: mov     [rbp+0FD0h+var_38], rcx
 * 00000001405D1CE0: mov     [rbp+0FD0h+var_28], 25Dh
 * 00000001405D1CEA: mov     [rbp+0FD0h+var_18], rcx
 * 00000001405D1CF1: lea     r8d, [rcx+8]
 * 00000001405D1CF5: xor     r9d, r9d
 * 00000001405D1CF8: lea     rcx, [rsp+10D0h+var_10B0]
 * 00000001405D1CFD: mov     edx, 85h
 * 00000001405D1D02: call    DifRegisterPlugin
 * 00000001405D1D07: mov     rcx, [rbp+0FD0h+var_10]
 * 00000001405D1D0E: xor     rcx, rsp; StackCookie
 * 00000001405D1D11: call    __security_check_cookie
 * 00000001405D1D16: add     rsp, 10D0h
 * 00000001405D1D1D: pop     rbp
 * 00000001405D1D1E: retn
 */
