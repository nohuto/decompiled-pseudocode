/*
 * XREFs of sub_1405FFDD0 @ 0x1405FFDD0
 * Callers:
 *     sub_140604884 @ 0x140604884 (sub_140604884.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1405FFDD0 @ 0x1405FFDD0
 * Reason: Hex-Rays returned no pseudocode for 0x1405FFDD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405FFDD0: push    rbp
 * 00000001405FFDD2: lea     rbp, [rsp-0FD0h]
 * 00000001405FFDDA: sub     rsp, 10D0h
 * 00000001405FFDE1: mov     rax, cs:__security_cookie
 * 00000001405FFDE8: xor     rax, rsp
 * 00000001405FFDEB: mov     [rbp+0FD0h+var_10], rax
 * 00000001405FFDF2: xor     ecx, ecx
 * 00000001405FFDF4: mov     [rsp+10D0h+var_10A8], 1E0h
 * 00000001405FFDFC: lea     rax, aZwaccesschecka; "ZwAccessCheckAndAuditAlarm"
 * 00000001405FFE03: mov     [rsp+10D0h+var_1098], rcx
 * 00000001405FFE08: mov     [rsp+10D0h+var_10B0], rax
 * 00000001405FFE0D: lea     rax, sub_140A94880
 * 00000001405FFE14: mov     [rsp+10D0h+var_10A0], rax
 * 00000001405FFE19: lea     rax, aZwaddbootentry; "ZwAddBootEntry"
 * 00000001405FFE20: mov     [rsp+10D0h+var_1090], rax
 * 00000001405FFE25: lea     rax, sub_140A94900
 * 00000001405FFE2C: mov     [rsp+10D0h+var_1080], rax
 * 00000001405FFE31: lea     rax, aZwadddriverent; "ZwAddDriverEntry"
 * 00000001405FFE38: mov     [rsp+10D0h+var_1070], rax
 * 00000001405FFE3D: lea     rax, sub_140A94900
 * 00000001405FFE44: mov     [rsp+10D0h+var_1060], rax
 * 00000001405FFE49: lea     rax, aZwadjustprivil; "ZwAdjustPrivilegesToken"
 * 00000001405FFE50: mov     [rbp+0FD0h+var_1050], rax
 * 00000001405FFE54: lea     rax, sub_140A94940
 * 00000001405FFE5B: mov     [rbp+0FD0h+var_1040], rax
 * 00000001405FFE5F: lea     rax, aZwallocatevirt; "ZwAllocateVirtualMemory"
 * 00000001405FFE66: mov     [rbp+0FD0h+var_1030], rax
 * 00000001405FFE6A: lea     rax, sub_140A94990
 * 00000001405FFE71: mov     [rbp+0FD0h+var_1020], rax
 * 00000001405FFE75: lea     rax, aZwcanceliofile; "ZwCancelIoFile"
 * 00000001405FFE7C: mov     [rbp+0FD0h+var_1010], rax
 * 00000001405FFE80: lea     rax, sub_140A94B20
 * 00000001405FFE87: mov     [rbp+0FD0h+var_1000], rax
 * 00000001405FFE8B: lea     rax, aZwcanceltimer; "ZwCancelTimer"
 * 00000001405FFE92: mov     [rbp+0FD0h+var_FF0], rax
 * 00000001405FFE96: lea     rax, sub_140A94B20
 * 00000001405FFE9D: mov     [rbp+0FD0h+var_FE0], rax
 * 00000001405FFEA1: lea     rax, aZwcloseobjecta; "ZwCloseObjectAuditAlarm"
 * 00000001405FFEA8: mov     [rbp+0FD0h+var_FD0], rax
 * 00000001405FFEAC: lea     rax, sub_140A94C30
 * 00000001405FFEB3: mov     [rbp+0FD0h+var_FC0], rax
 * 00000001405FFEB7: lea     rax, aZwconnectport; "ZwConnectPort"
 * 00000001405FFEBE: mov     [rbp+0FD0h+var_FB0], rax
 * 00000001405FFEC2: lea     rax, sub_140A94C60
 * 00000001405FFEC9: mov     [rbp+0FD0h+var_FA0], rax
 * 00000001405FFECD: lea     rax, aZwcreatedirect; "ZwCreateDirectoryObject"
 * 00000001405FFED4: mov     [rbp+0FD0h+var_F90], rax
 * 00000001405FFED8: lea     rax, sub_140A94CE0
 * 00000001405FFEDF: mov     [rbp+0FD0h+var_F80], rax
 * 00000001405FFEE3: lea     rax, aZwcreateevent; "ZwCreateEvent"
 * 00000001405FFEEA: mov     [rbp+0FD0h+var_F70], rax
 * 00000001405FFEEE: lea     rax, sub_140A94D60
 * 00000001405FFEF5: mov     [rbp+0FD0h+var_F60], rax
 * 00000001405FFEF9: lea     rax, aZwcreatefile; "ZwCreateFile"
 * 00000001405FFF00: mov     [rbp+0FD0h+var_F50], rax
 * 00000001405FFF07: lea     rax, sub_140A94DA0
 * 00000001405FFF0E: mov     [rbp+0FD0h+var_F40], rax
 * 00000001405FFF15: lea     rax, aZwcreatejobobj; "ZwCreateJobObject"
 * 00000001405FFF1C: mov     [rbp+0FD0h+var_F30], rax
 * 00000001405FFF23: lea     rax, sub_140A94CE0
 * 00000001405FFF2A: mov     [rbp+0FD0h+var_F20], rax
 * 00000001405FFF31: lea     rax, aZwcreatekey; "ZwCreateKey"
 * 00000001405FFF38: mov     [rbp+0FD0h+var_F10], rax
 * 00000001405FFF3F: mov     [rsp+10D0h+var_1088], 1E1h
 * 00000001405FFF47: mov     [rsp+10D0h+var_1078], rcx
 * 00000001405FFF4C: mov     [rsp+10D0h+var_1068], 1E2h
 * 00000001405FFF54: mov     [rsp+10D0h+var_1058], rcx
 * 00000001405FFF59: mov     [rbp+0FD0h+var_1048], 1E3h
 * 00000001405FFF60: mov     [rbp+0FD0h+var_1038], rcx
 * 00000001405FFF64: mov     [rbp+0FD0h+var_1028], 1E5h
 * 00000001405FFF6B: mov     [rbp+0FD0h+var_1018], rcx
 * 00000001405FFF6F: mov     [rbp+0FD0h+var_1008], 1F0h
 * 00000001405FFF76: mov     [rbp+0FD0h+var_FF8], rcx
 * 00000001405FFF7A: mov     [rbp+0FD0h+var_FE8], 1F1h
 * 00000001405FFF81: mov     [rbp+0FD0h+var_FD8], rcx
 * 00000001405FFF85: mov     [rbp+0FD0h+var_FC8], 1F3h
 * 00000001405FFF8C: mov     [rbp+0FD0h+var_FB8], rcx
 * 00000001405FFF90: mov     [rbp+0FD0h+var_FA8], 1F7h
 * 00000001405FFF97: mov     [rbp+0FD0h+var_F98], rcx
 * 00000001405FFF9B: mov     [rbp+0FD0h+var_F88], 1F8h
 * 00000001405FFFA2: mov     [rbp+0FD0h+var_F78], rcx
 * 00000001405FFFA6: mov     [rbp+0FD0h+var_F68], 1FAh
 * 00000001405FFFAD: mov     [rbp+0FD0h+var_F58], rcx
 * 00000001405FFFB1: mov     [rbp+0FD0h+var_F48], 1FBh
 * 00000001405FFFBB: mov     [rbp+0FD0h+var_F38], rcx
 * 00000001405FFFC2: mov     [rbp+0FD0h+var_F28], 1FCh
 * 00000001405FFFCC: mov     [rbp+0FD0h+var_F18], rcx
 * 00000001405FFFD3: lea     rax, sub_140A94E00
 * 00000001405FFFDA: mov     [rbp+0FD0h+var_F08], 1FDh
 * 00000001405FFFE4: mov     [rbp+0FD0h+var_F00], rax
 * 00000001405FFFEB: lea     rax, aZwcreatesectio; "ZwCreateSection"
 * 00000001405FFFF2: mov     [rbp+0FD0h+var_EF0], rax
 * 00000001405FFFF9: lea     rax, sub_140A94E50
 * 0000000140600000: mov     [rbp+0FD0h+var_EE0], rax
 * 0000000140600007: lea     rax, aZwcreatesymbol; "ZwCreateSymbolicLinkObject"
 * 000000014060000E: mov     [rbp+0FD0h+var_ED0], rax
 * 0000000140600015: lea     rax, sub_140A94EA0
 * 000000014060001C: mov     [rbp+0FD0h+var_EC0], rax
 * 0000000140600023: lea     rax, aZwcreatetimer; "ZwCreateTimer"
 * 000000014060002A: mov     [rbp+0FD0h+var_EB0], rax
 * 0000000140600031: lea     rax, sub_140A94D60
 * 0000000140600038: mov     [rbp+0FD0h+var_EA0], rax
 * 000000014060003F: lea     rax, aZwdeletebooten; "ZwDeleteBootEntry"
 * 0000000140600046: mov     [rbp+0FD0h+var_E90], rax
 * 000000014060004D: lea     rax, sub_140A94FA0
 * 0000000140600054: mov     [rbp+0FD0h+var_E80], rax
 * 000000014060005B: lea     rax, aZwdeletefile; "ZwDeleteFile"
 * 0000000140600062: mov     [rbp+0FD0h+var_E70], rax
 * 0000000140600069: lea     rax, sub_140A94FD0
 * 0000000140600070: mov     [rbp+0FD0h+var_E60], rax
 * 0000000140600077: lea     rax, aZwdeletevaluek; "ZwDeleteValueKey"
 * 000000014060007E: mov     [rbp+0FD0h+var_E50], rax
 * 0000000140600085: lea     rax, sub_140A95000
 * 000000014060008C: mov     [rbp+0FD0h+var_E40], rax
 * 0000000140600093: lea     rax, aZwdeviceiocont; "ZwDeviceIoControlFile"
 * 000000014060009A: mov     [rbp+0FD0h+var_E30], rax
 * 00000001406000A1: lea     rax, sub_140A95030
 * 00000001406000A8: mov     [rbp+0FD0h+var_E20], rax
 * 00000001406000AF: lea     rax, aZwdisplaystrin; "ZwDisplayString"
 * 00000001406000B6: mov     [rbp+0FD0h+var_E10], rax
 * 00000001406000BD: lea     rax, sub_140A95000
 * 00000001406000C4: mov     [rbp+0FD0h+var_E00], rax
 * 00000001406000CB: lea     rax, aZwduplicateobj; "ZwDuplicateObject"
 * 00000001406000D2: mov     [rbp+0FD0h+var_DF0], rax
 * 00000001406000D9: lea     rax, sub_140A950A0
 * 00000001406000E0: mov     [rbp+0FD0h+var_DE0], rax
 * 00000001406000E7: lea     rax, aZwduplicatetok; "ZwDuplicateToken"
 * 00000001406000EE: mov     [rbp+0FD0h+var_DD0], rax
 * 00000001406000F5: lea     rax, sub_140A950D0
 * 00000001406000FC: mov     [rbp+0FD0h+var_DC0], rax
 * 0000000140600103: lea     rax, aZwenumerateboo; "ZwEnumerateBootEntries"
 * 000000014060010A: mov     [rbp+0FD0h+var_DB0], rax
 * 0000000140600111: lea     rax, sub_140A94900
 * 0000000140600118: mov     [rbp+0FD0h+var_DA0], rax
 * 000000014060011F: lea     rax, aZwenumeratedri; "ZwEnumerateDriverEntries"
 * 0000000140600126: mov     [rbp+0FD0h+var_D90], rax
 * 000000014060012D: lea     rax, sub_140A94900
 * 0000000140600134: mov     [rbp+0FD0h+var_D80], rax
 * 000000014060013B: lea     rax, aZwenumeratekey; "ZwEnumerateKey"
 * 0000000140600142: mov     [rbp+0FD0h+var_D70], rax
 * 0000000140600149: lea     rax, sub_140A94B50
 * 0000000140600150: mov     [rbp+0FD0h+var_D60], rax
 * 0000000140600157: mov     [rbp+0FD0h+var_EF8], rcx
 * 000000014060015E: mov     [rbp+0FD0h+var_EE8], 200h
 * 0000000140600168: mov     [rbp+0FD0h+var_ED8], rcx
 * 000000014060016F: mov     [rbp+0FD0h+var_EC8], 201h
 * 0000000140600179: mov     [rbp+0FD0h+var_EB8], rcx
 * 0000000140600180: mov     [rbp+0FD0h+var_EA8], 202h
 * 000000014060018A: mov     [rbp+0FD0h+var_E98], rcx
 * 0000000140600191: mov     [rbp+0FD0h+var_E88], 205h
 * 000000014060019B: mov     [rbp+0FD0h+var_E78], rcx
 * 00000001406001A2: mov     [rbp+0FD0h+var_E68], 206h
 * 00000001406001AC: mov     [rbp+0FD0h+var_E58], rcx
 * 00000001406001B3: mov     [rbp+0FD0h+var_E48], 208h
 * 00000001406001BD: mov     [rbp+0FD0h+var_E38], rcx
 * 00000001406001C4: mov     [rbp+0FD0h+var_E28], 209h
 * 00000001406001CE: mov     [rbp+0FD0h+var_E18], rcx
 * 00000001406001D5: mov     [rbp+0FD0h+var_E08], 20Ah
 * 00000001406001DF: mov     [rbp+0FD0h+var_DF8], rcx
 * 00000001406001E6: mov     [rbp+0FD0h+var_DE8], 20Bh
 * 00000001406001F0: mov     [rbp+0FD0h+var_DD8], rcx
 * 00000001406001F7: mov     [rbp+0FD0h+var_DC8], 20Ch
 * 0000000140600201: mov     [rbp+0FD0h+var_DB8], rcx
 * 0000000140600208: mov     [rbp+0FD0h+var_DA8], 20Dh
 * 0000000140600212: mov     [rbp+0FD0h+var_D98], rcx
 * 0000000140600219: mov     [rbp+0FD0h+var_D88], 20Eh
 * 0000000140600223: mov     [rbp+0FD0h+var_D78], rcx
 * 000000014060022A: mov     [rbp+0FD0h+var_D68], 20Fh
 * 0000000140600234: lea     rax, aZwenumerateval; "ZwEnumerateValueKey"
 * 000000014060023B: mov     [rbp+0FD0h+var_D58], rcx
 * 0000000140600242: mov     [rbp+0FD0h+var_D50], rax
 * 0000000140600249: lea     rax, sub_140A94B50
 * 0000000140600250: mov     [rbp+0FD0h+var_D40], rax
 * 0000000140600257: lea     rax, aZwflushinstruc; "ZwFlushInstructionCache"
 * 000000014060025E: mov     [rbp+0FD0h+var_D30], rax
 * 0000000140600265: lea     rax, sub_140A94C00
 * 000000014060026C: mov     [rbp+0FD0h+var_D20], rax
 * 0000000140600273: lea     rax, aZwflushvirtual; "ZwFlushVirtualMemory"
 * 000000014060027A: mov     [rbp+0FD0h+var_D10], rax
 * 0000000140600281: lea     rax, sub_140A95110
 * 0000000140600288: mov     [rbp+0FD0h+var_D00], rax
 * 000000014060028F: lea     rax, aZwfreevirtualm; "ZwFreeVirtualMemory"
 * 0000000140600296: mov     [rbp+0FD0h+var_CF0], rax
 * 000000014060029D: lea     rax, sub_140A95160
 * 00000001406002A4: mov     [rbp+0FD0h+var_CE0], rax
 * 00000001406002AB: lea     rax, aZwfscontrolfil; "ZwFsControlFile"
 * 00000001406002B2: mov     [rbp+0FD0h+var_CD0], rax
 * 00000001406002B9: lea     rax, sub_140A95030
 * 00000001406002C0: mov     [rbp+0FD0h+var_CC0], rax
 * 00000001406002C7: lea     rax, aZwloaddriver; "ZwLoadDriver"
 * 00000001406002CE: mov     [rbp+0FD0h+var_CB0], rax
 * 00000001406002D5: lea     rax, sub_140A95000
 * 00000001406002DC: mov     [rbp+0FD0h+var_CA0], rax
 * 00000001406002E3: lea     rax, aZwloadkey; "ZwLoadKey"
 * 00000001406002EA: mov     [rbp+0FD0h+var_C90], rax
 * 00000001406002F1: lea     rax, sub_140A951A0
 * 00000001406002F8: mov     [rbp+0FD0h+var_C80], rax
 * 00000001406002FF: lea     rax, aZwmapviewofsec; "ZwMapViewOfSection"
 * 0000000140600306: mov     [rbp+0FD0h+var_C70], rax
 * 000000014060030D: lea     rax, sub_140A951E0
 * 0000000140600314: mov     [rbp+0FD0h+var_C60], rax
 * 000000014060031B: lea     rax, aZwmodifybooten; "ZwModifyBootEntry"
 * 0000000140600322: mov     [rbp+0FD0h+var_C50], rax
 * 0000000140600329: lea     rax, sub_140A94B20
 * 0000000140600330: mov     [rbp+0FD0h+var_C40], rax
 * 0000000140600337: lea     rax, aZwmodifydriver; "ZwModifyDriverEntry"
 * 000000014060033E: mov     [rbp+0FD0h+var_C30], rax
 * 0000000140600345: lea     rax, sub_140A94B20
 * 000000014060034C: mov     [rbp+0FD0h+var_C20], rax
 * 0000000140600353: lea     rax, aZwnotifychange; "ZwNotifyChangeKey"
 * 000000014060035A: mov     [rbp+0FD0h+var_C10], rax
 * 0000000140600361: lea     rax, sub_140A95230
 * 0000000140600368: mov     [rbp+0FD0h+var_C00], rax
 * 000000014060036F: lea     rax, aZwopendirector; "ZwOpenDirectoryObject"
 * 0000000140600376: mov     [rbp+0FD0h+var_BF0], rax
 * 000000014060037D: lea     rax, sub_140A94CE0
 * 0000000140600384: mov     [rbp+0FD0h+var_BE0], rax
 * 000000014060038B: lea     rax, aZwopenevent; "ZwOpenEvent"
 * 0000000140600392: mov     [rbp+0FD0h+var_BD0], rax
 * 0000000140600399: lea     rax, sub_140A94CE0
 * 00000001406003A0: mov     [rbp+0FD0h+var_BC0], rax
 * 00000001406003A7: lea     rax, aZwopenfile; "ZwOpenFile"
 * 00000001406003AE: mov     [rbp+0FD0h+var_BB0], rax
 * 00000001406003B5: mov     [rbp+0FD0h+var_D48], 211h
 * 00000001406003BF: mov     [rbp+0FD0h+var_D38], rcx
 * 00000001406003C6: mov     [rbp+0FD0h+var_D28], 214h
 * 00000001406003D0: mov     [rbp+0FD0h+var_D18], rcx
 * 00000001406003D7: mov     [rbp+0FD0h+var_D08], 216h
 * 00000001406003E1: mov     [rbp+0FD0h+var_CF8], rcx
 * 00000001406003E8: mov     [rbp+0FD0h+var_CE8], 217h
 * 00000001406003F2: mov     [rbp+0FD0h+var_CD8], rcx
 * 00000001406003F9: mov     [rbp+0FD0h+var_CC8], 218h
 * 0000000140600403: mov     [rbp+0FD0h+var_CB8], rcx
 * 000000014060040A: mov     [rbp+0FD0h+var_CA8], 21Ah
 * 0000000140600414: mov     [rbp+0FD0h+var_C98], rcx
 * 000000014060041B: mov     [rbp+0FD0h+var_C88], 21Bh
 * 0000000140600425: mov     [rbp+0FD0h+var_C78], rcx
 * 000000014060042C: mov     [rbp+0FD0h+var_C68], 21Eh
 * 0000000140600436: mov     [rbp+0FD0h+var_C58], rcx
 * 000000014060043D: mov     [rbp+0FD0h+var_C48], 21Fh
 * 0000000140600447: mov     [rbp+0FD0h+var_C38], rcx
 * 000000014060044E: mov     [rbp+0FD0h+var_C28], 220h
 * 0000000140600458: mov     [rbp+0FD0h+var_C18], rcx
 * 000000014060045F: mov     [rbp+0FD0h+var_C08], 221h
 * 0000000140600469: mov     [rbp+0FD0h+var_BF8], rcx
 * 0000000140600470: mov     [rbp+0FD0h+var_BE8], 222h
 * 000000014060047A: mov     [rbp+0FD0h+var_BD8], rcx
 * 0000000140600481: mov     [rbp+0FD0h+var_BC8], 224h
 * 000000014060048B: mov     [rbp+0FD0h+var_BB8], rcx
 * 0000000140600492: lea     rax, sub_140A952F0
 * 0000000140600499: mov     [rbp+0FD0h+var_BA8], 225h
 * 00000001406004A3: mov     [rbp+0FD0h+var_BA0], rax
 * 00000001406004AA: lea     rax, aZwopenjobobjec; "ZwOpenJobObject"
 * 00000001406004B1: mov     [rbp+0FD0h+var_B90], rax
 * 00000001406004B8: lea     rax, sub_140A94CE0
 * 00000001406004BF: mov     [rbp+0FD0h+var_B80], rax
 * 00000001406004C6: lea     rax, aZwopenkey; "ZwOpenKey"
 * 00000001406004CD: mov     [rbp+0FD0h+var_B70], rax
 * 00000001406004D4: lea     rax, sub_140A94CE0
 * 00000001406004DB: mov     [rbp+0FD0h+var_B60], rax
 * 00000001406004E2: lea     rax, aZwopenprocess; "ZwOpenProcess"
 * 00000001406004E9: mov     [rbp+0FD0h+var_B50], rax
 * 00000001406004F0: lea     rax, sub_140A95340
 * 00000001406004F7: mov     [rbp+0FD0h+var_B40], rax
 * 00000001406004FE: lea     rax, aZwopenprocesst; "ZwOpenProcessToken"
 * 0000000140600505: mov     [rbp+0FD0h+var_B30], rax
 * 000000014060050C: lea     rax, sub_140A94B20
 * 0000000140600513: mov     [rbp+0FD0h+var_B20], rax
 * 000000014060051A: lea     rax, aZwopenprocesst_0; "ZwOpenProcessTokenEx"
 * 0000000140600521: mov     [rbp+0FD0h+var_B10], rax
 * 0000000140600528: lea     rax, sub_140A94B20
 * 000000014060052F: mov     [rbp+0FD0h+var_B00], rax
 * 0000000140600536: lea     rax, aZwopensection; "ZwOpenSection"
 * 000000014060053D: mov     [rbp+0FD0h+var_AF0], rax
 * 0000000140600544: lea     rax, sub_140A94CE0
 * 000000014060054B: mov     [rbp+0FD0h+var_AE0], rax
 * 0000000140600552: lea     rax, aZwopensymbolic; "ZwOpenSymbolicLinkObject"
 * 0000000140600559: mov     [rbp+0FD0h+var_AD0], rax
 * 0000000140600560: lea     rax, sub_140A94CE0
 * 0000000140600567: mov     [rbp+0FD0h+var_AC0], rax
 * 000000014060056E: lea     rax, aZwopenthread; "ZwOpenThread"
 * 0000000140600575: mov     [rbp+0FD0h+var_AB0], rax
 * 000000014060057C: lea     rax, sub_140A95340
 * 0000000140600583: mov     [rbp+0FD0h+var_AA0], rax
 * 000000014060058A: lea     rax, aZwopenthreadto; "ZwOpenThreadToken"
 * 0000000140600591: mov     [rbp+0FD0h+var_A90], rax
 * 0000000140600598: lea     rax, sub_140A94B20
 * 000000014060059F: mov     [rbp+0FD0h+var_A80], rax
 * 00000001406005A6: lea     rax, aZwopenthreadto_0; "ZwOpenThreadTokenEx"
 * 00000001406005AD: mov     [rbp+0FD0h+var_A70], rax
 * 00000001406005B4: lea     rax, sub_140A94B20
 * 00000001406005BB: mov     [rbp+0FD0h+var_A60], rax
 * 00000001406005C2: lea     rax, aZwopentimer; "ZwOpenTimer"
 * 00000001406005C9: mov     [rbp+0FD0h+var_A50], rax
 * 00000001406005D0: lea     rax, sub_140A94CE0
 * 00000001406005D7: mov     [rbp+0FD0h+var_A40], rax
 * 00000001406005DE: lea     rax, aZwpowerinforma; "ZwPowerInformation"
 * 00000001406005E5: mov     [rbp+0FD0h+var_A30], rax
 * 00000001406005EC: lea     rax, sub_140A94990
 * 00000001406005F3: mov     [rbp+0FD0h+var_A20], rax
 * 00000001406005FA: lea     rax, aZwprotectvirtu; "ZwProtectVirtualMemory"
 * 0000000140600601: mov     [rbp+0FD0h+var_A10], rax
 * 0000000140600608: lea     rax, sub_140A95430
 * 000000014060060F: mov     [rbp+0FD0h+var_A00], rax
 * 0000000140600616: mov     [rbp+0FD0h+var_B98], rcx
 * 000000014060061D: mov     [rbp+0FD0h+var_B88], 226h
 * 0000000140600627: mov     [rbp+0FD0h+var_B78], rcx
 * 000000014060062E: mov     [rbp+0FD0h+var_B68], 227h
 * 0000000140600638: mov     [rbp+0FD0h+var_B58], rcx
 * 000000014060063F: mov     [rbp+0FD0h+var_B48], 22Bh
 * 0000000140600649: mov     [rbp+0FD0h+var_B38], rcx
 * 0000000140600650: mov     [rbp+0FD0h+var_B28], 22Ch
 * 000000014060065A: mov     [rbp+0FD0h+var_B18], rcx
 * 0000000140600661: mov     [rbp+0FD0h+var_B08], 22Dh
 * 000000014060066B: mov     [rbp+0FD0h+var_AF8], rcx
 * 0000000140600672: mov     [rbp+0FD0h+var_AE8], 22Fh
 * 000000014060067C: mov     [rbp+0FD0h+var_AD8], rcx
 * 0000000140600683: mov     [rbp+0FD0h+var_AC8], 230h
 * 000000014060068D: mov     [rbp+0FD0h+var_AB8], rcx
 * 0000000140600694: mov     [rbp+0FD0h+var_AA8], 231h
 * 000000014060069E: mov     [rbp+0FD0h+var_A98], rcx
 * 00000001406006A5: mov     [rbp+0FD0h+var_A88], 232h
 * 00000001406006AF: mov     [rbp+0FD0h+var_A78], rcx
 * 00000001406006B6: mov     [rbp+0FD0h+var_A68], 233h
 * 00000001406006C0: mov     [rbp+0FD0h+var_A58], rcx
 * 00000001406006C7: mov     [rbp+0FD0h+var_A48], 234h
 * 00000001406006D1: mov     [rbp+0FD0h+var_A38], rcx
 * 00000001406006D8: mov     [rbp+0FD0h+var_A28], 237h
 * 00000001406006E2: mov     [rbp+0FD0h+var_A18], rcx
 * 00000001406006E9: mov     [rbp+0FD0h+var_A08], 23Ch
 * 00000001406006F3: lea     rax, aZwpulseevent; "ZwPulseEvent"
 * 00000001406006FA: mov     [rbp+0FD0h+var_9F8], rcx
 * 0000000140600701: mov     [rbp+0FD0h+var_9F0], rax
 * 0000000140600708: lea     rax, sub_140A94B20
 * 000000014060070F: mov     [rbp+0FD0h+var_9E0], rax
 * 0000000140600716: lea     rax, aZwquerybootent; "ZwQueryBootEntryOrder"
 * 000000014060071D: mov     [rbp+0FD0h+var_9D0], rax
 * 0000000140600724: lea     rax, sub_140A94900
 * 000000014060072B: mov     [rbp+0FD0h+var_9C0], rax
 * 0000000140600732: lea     rax, aZwquerybootopt; "ZwQueryBootOptions"
 * 0000000140600739: mov     [rbp+0FD0h+var_9B0], rax
 * 0000000140600740: lea     rax, sub_140A94900
 * 0000000140600747: mov     [rbp+0FD0h+var_9A0], rax
 * 000000014060074E: lea     rax, aZwquerydefault; "ZwQueryDefaultLocale"
 * 0000000140600755: mov     [rbp+0FD0h+var_990], rax
 * 000000014060075C: lea     rax, sub_140A94B20
 * 0000000140600763: mov     [rbp+0FD0h+var_980], rax
 * 000000014060076A: lea     rax, aZwquerydefault_0; "ZwQueryDefaultUILanguage"
 * 0000000140600771: mov     [rbp+0FD0h+var_970], rax
 * 0000000140600778: lea     rax, sub_140A94B20
 * 000000014060077F: mov     [rbp+0FD0h+var_960], rax
 * 0000000140600786: lea     rax, aZwquerydrivere; "ZwQueryDriverEntryOrder"
 * 000000014060078D: mov     [rbp+0FD0h+var_950], rax
 * 0000000140600794: lea     rax, sub_140A94900
 * 000000014060079B: mov     [rbp+0FD0h+var_940], rax
 * 00000001406007A2: lea     rax, aZwqueryinstall; "ZwQueryInstallUILanguage"
 * 00000001406007A9: mov     [rbp+0FD0h+var_930], rax
 * 00000001406007B0: lea     rax, sub_140A94B20
 * 00000001406007B7: mov     [rbp+0FD0h+var_920], rax
 * 00000001406007BE: lea     rax, aZwquerydirecto; "ZwQueryDirectoryFile"
 * 00000001406007C5: mov     [rbp+0FD0h+var_910], rax
 * 00000001406007CC: lea     rax, sub_140A954F0
 * 00000001406007D3: mov     [rbp+0FD0h+var_900], rax
 * 00000001406007DA: lea     rax, aZwquerydirecto_0; "ZwQueryDirectoryFileEx"
 * 00000001406007E1: mov     [rbp+0FD0h+var_8F0], rax
 * 00000001406007E8: lea     rax, sub_140A95480
 * 00000001406007EF: mov     [rbp+0FD0h+var_8E0], rax
 * 00000001406007F6: lea     rax, aZwquerydirecto_1; "ZwQueryDirectoryObject"
 * 00000001406007FD: mov     [rbp+0FD0h+var_8D0], rax
 * 0000000140600804: lea     rax, sub_140A94940
 * 000000014060080B: mov     [rbp+0FD0h+var_8C0], rax
 * 0000000140600812: lea     rax, aZwqueryeafile; "ZwQueryEaFile"
 * 0000000140600819: mov     [rbp+0FD0h+var_8B0], rax
 * 0000000140600820: lea     rax, sub_140A95560
 * 0000000140600827: mov     [rbp+0FD0h+var_8A0], rax
 * 000000014060082E: lea     rax, aZwqueryfullatt; "ZwQueryFullAttributesFile"
 * 0000000140600835: mov     [rbp+0FD0h+var_890], rax
 * 000000014060083C: lea     rax, sub_140A955B0
 * 0000000140600843: mov     [rbp+0FD0h+var_880], rax
 * 000000014060084A: lea     rax, aZwqueryinforma; "ZwQueryInformationFile"
 * 0000000140600851: mov     [rbp+0FD0h+var_870], rax
 * 0000000140600858: lea     rax, sub_140A95160
 * 000000014060085F: mov     [rbp+0FD0h+var_860], rax
 * 0000000140600866: lea     rax, aZwqueryinforma_0; "ZwQueryInformationJobObject"
 * 000000014060086D: mov     [rbp+0FD0h+var_850], rax
 * 0000000140600874: mov     [rbp+0FD0h+var_9E8], 23Dh
 * 000000014060087E: mov     [rbp+0FD0h+var_9D8], rcx
 * 0000000140600885: mov     [rbp+0FD0h+var_9C8], 23Eh
 * 000000014060088F: mov     [rbp+0FD0h+var_9B8], rcx
 * 0000000140600896: mov     [rbp+0FD0h+var_9A8], 23Fh
 * 00000001406008A0: mov     [rbp+0FD0h+var_998], rcx
 * 00000001406008A7: mov     [rbp+0FD0h+var_988], 240h
 * 00000001406008B1: mov     [rbp+0FD0h+var_978], rcx
 * 00000001406008B8: mov     [rbp+0FD0h+var_968], 241h
 * 00000001406008C2: mov     [rbp+0FD0h+var_958], rcx
 * 00000001406008C9: mov     [rbp+0FD0h+var_948], 245h
 * 00000001406008D3: mov     [rbp+0FD0h+var_938], rcx
 * 00000001406008DA: mov     [rbp+0FD0h+var_928], 251h
 * 00000001406008E4: mov     [rbp+0FD0h+var_918], rcx
 * 00000001406008EB: mov     [rbp+0FD0h+var_908], 242h
 * 00000001406008F5: mov     [rbp+0FD0h+var_8F8], rcx
 * 00000001406008FC: mov     [rbp+0FD0h+var_8E8], 243h
 * 0000000140600906: mov     [rbp+0FD0h+var_8D8], rcx
 * 000000014060090D: mov     [rbp+0FD0h+var_8C8], 244h
 * 0000000140600917: mov     [rbp+0FD0h+var_8B8], rcx
 * 000000014060091E: mov     [rbp+0FD0h+var_8A8], 246h
 * 0000000140600928: mov     [rbp+0FD0h+var_898], rcx
 * 000000014060092F: mov     [rbp+0FD0h+var_888], 247h
 * 0000000140600939: mov     [rbp+0FD0h+var_878], rcx
 * 0000000140600940: mov     [rbp+0FD0h+var_868], 249h
 * 000000014060094A: mov     [rbp+0FD0h+var_858], rcx
 * 0000000140600951: lea     rax, sub_140A94B50
 * 0000000140600958: mov     [rbp+0FD0h+var_848], 24Ah
 * 0000000140600962: mov     [rbp+0FD0h+var_840], rax
 * 0000000140600969: lea     rax, aZwqueryinforma_1; "ZwQueryInformationProcess"
 * 0000000140600970: mov     [rbp+0FD0h+var_830], rax
 * 0000000140600977: lea     rax, sub_140A94B50
 * 000000014060097E: mov     [rbp+0FD0h+var_820], rax
 * 0000000140600985: lea     rax, aZwqueryinforma_2; "ZwQueryInformationThread"
 * 000000014060098C: mov     [rbp+0FD0h+var_810], rax
 * 0000000140600993: lea     rax, sub_140A94B50
 * 000000014060099A: mov     [rbp+0FD0h+var_800], rax
 * 00000001406009A1: lea     rax, aZwqueryinforma_3; "ZwQueryInformationToken"
 * 00000001406009A8: mov     [rbp+0FD0h+var_7F0], rax
 * 00000001406009AF: lea     rax, sub_140A94B50
 * 00000001406009B6: mov     [rbp+0FD0h+var_7E0], rax
 * 00000001406009BD: lea     rax, aZwquerykey; "ZwQueryKey"
 * 00000001406009C4: mov     [rbp+0FD0h+var_7D0], rax
 * 00000001406009CB: lea     rax, sub_140A94B50
 * 00000001406009D2: mov     [rbp+0FD0h+var_7C0], rax
 * 00000001406009D9: lea     rax, aZwqueryobject; "ZwQueryObject"
 * 00000001406009E0: mov     [rbp+0FD0h+var_7B0], rax
 * 00000001406009E7: lea     rax, sub_140A94B50
 * 00000001406009EE: mov     [rbp+0FD0h+var_7A0], rax
 * 00000001406009F5: lea     rax, aZwquerysection; "ZwQuerySection"
 * 00000001406009FC: mov     [rbp+0FD0h+var_790], rax
 * 0000000140600A03: lea     rax, sub_140A94B50
 * 0000000140600A0A: mov     [rbp+0FD0h+var_780], rax
 * 0000000140600A11: lea     rax, aZwquerysecurit; "ZwQuerySecurityObject"
 * 0000000140600A18: mov     [rbp+0FD0h+var_770], rax
 * 0000000140600A1F: lea     rax, sub_140A94B50
 * 0000000140600A26: mov     [rbp+0FD0h+var_760], rax
 * 0000000140600A2D: lea     rax, aZwquerysymboli; "ZwQuerySymbolicLinkObject"
 * 0000000140600A34: mov     [rbp+0FD0h+var_750], rax
 * 0000000140600A3B: lea     rax, sub_140A95640
 * 0000000140600A42: mov     [rbp+0FD0h+var_740], rax
 * 0000000140600A49: lea     rax, aZwquerysystemi; "ZwQuerySystemInformation"
 * 0000000140600A50: mov     [rbp+0FD0h+var_730], rax
 * 0000000140600A57: lea     rax, sub_140A94B50
 * 0000000140600A5E: mov     [rbp+0FD0h+var_720], rax
 * 0000000140600A65: lea     rax, aZwqueryvalueke; "ZwQueryValueKey"
 * 0000000140600A6C: mov     [rbp+0FD0h+var_710], rax
 * 0000000140600A73: lea     rax, sub_140A95680
 * 0000000140600A7A: mov     [rbp+0FD0h+var_700], rax
 * 0000000140600A81: lea     rax, aZwqueryvolumei; "ZwQueryVolumeInformationFile"
 * 0000000140600A88: mov     [rbp+0FD0h+var_6F0], rax
 * 0000000140600A8F: lea     rax, sub_140A95160
 * 0000000140600A96: mov     [rbp+0FD0h+var_6E0], rax
 * 0000000140600A9D: lea     rax, aZwreadfile; "ZwReadFile"
 * 0000000140600AA4: mov     [rbp+0FD0h+var_6D0], rax
 * 0000000140600AAB: lea     rax, sub_140A956D0
 * 0000000140600AB2: mov     [rbp+0FD0h+var_6C0], rax
 * 0000000140600AB9: lea     rax, aZwreplacekey; "ZwReplaceKey"
 * 0000000140600AC0: mov     [rbp+0FD0h+var_6B0], rax
 * 0000000140600AC7: lea     rax, sub_140A95790
 * 0000000140600ACE: mov     [rbp+0FD0h+var_6A0], rax
 * 0000000140600AD5: mov     [rbp+0FD0h+var_838], rcx
 * 0000000140600ADC: mov     [rbp+0FD0h+var_828], 24Bh
 * 0000000140600AE6: mov     [rbp+0FD0h+var_818], rcx
 * 0000000140600AED: mov     [rbp+0FD0h+var_808], 24Dh
 * 0000000140600AF7: mov     [rbp+0FD0h+var_7F8], rcx
 * 0000000140600AFE: mov     [rbp+0FD0h+var_7E8], 24Eh
 * 0000000140600B08: mov     [rbp+0FD0h+var_7D8], rcx
 * 0000000140600B0F: mov     [rbp+0FD0h+var_7C8], 252h
 * 0000000140600B19: mov     [rbp+0FD0h+var_7B8], rcx
 * 0000000140600B20: mov     [rbp+0FD0h+var_7A8], 254h
 * 0000000140600B2A: mov     [rbp+0FD0h+var_798], rcx
 * 0000000140600B31: mov     [rbp+0FD0h+var_788], 256h
 * 0000000140600B3B: mov     [rbp+0FD0h+var_778], rcx
 * 0000000140600B42: mov     [rbp+0FD0h+var_768], 257h
 * 0000000140600B4C: mov     [rbp+0FD0h+var_758], rcx
 * 0000000140600B53: mov     [rbp+0FD0h+var_748], 258h
 * 0000000140600B5D: mov     [rbp+0FD0h+var_738], rcx
 * 0000000140600B64: mov     [rbp+0FD0h+var_728], 259h
 * 0000000140600B6E: mov     [rbp+0FD0h+var_718], rcx
 * 0000000140600B75: mov     [rbp+0FD0h+var_708], 25Ah
 * 0000000140600B7F: mov     [rbp+0FD0h+var_6F8], rcx
 * 0000000140600B86: mov     [rbp+0FD0h+var_6E8], 25Bh
 * 0000000140600B90: mov     [rbp+0FD0h+var_6D8], rcx
 * 0000000140600B97: mov     [rbp+0FD0h+var_6C8], 25Ch
 * 0000000140600BA1: mov     [rbp+0FD0h+var_6B8], rcx
 * 0000000140600BA8: mov     [rbp+0FD0h+var_6A8], 262h
 * 0000000140600BB2: lea     rax, aZwrequestwaitr; "ZwRequestWaitReplyPort"
 * 0000000140600BB9: mov     [rbp+0FD0h+var_698], rcx
 * 0000000140600BC0: mov     [rbp+0FD0h+var_690], rax
 * 0000000140600BC7: lea     rax, sub_140A94900
 * 0000000140600BCE: mov     [rbp+0FD0h+var_680], rax
 * 0000000140600BD5: lea     rax, aZwresetevent; "ZwResetEvent"
 * 0000000140600BDC: mov     [rbp+0FD0h+var_670], rax
 * 0000000140600BE3: lea     rax, sub_140A94B20
 * 0000000140600BEA: mov     [rbp+0FD0h+var_660], rax
 * 0000000140600BF1: lea     rax, aZwsetbootentry; "ZwSetBootEntryOrder"
 * 0000000140600BF8: mov     [rbp+0FD0h+var_650], rax
 * 0000000140600BFF: lea     rax, sub_140A94C00
 * 0000000140600C06: mov     [rbp+0FD0h+var_640], rax
 * 0000000140600C0D: lea     rax, aZwsetbootoptio; "ZwSetBootOptions"
 * 0000000140600C14: mov     [rbp+0FD0h+var_630], rax
 * 0000000140600C1B: lea     rax, sub_140A94C00
 * 0000000140600C22: mov     [rbp+0FD0h+var_620], rax
 * 0000000140600C29: lea     rax, aZwsetdriverent; "ZwSetDriverEntryOrder"
 * 0000000140600C30: mov     [rbp+0FD0h+var_610], rax
 * 0000000140600C37: lea     rax, sub_140A94C00
 * 0000000140600C3E: mov     [rbp+0FD0h+var_600], rax
 * 0000000140600C45: lea     rax, aZwseteafile; "ZwSetEaFile"
 * 0000000140600C4C: mov     [rbp+0FD0h+var_5F0], rax
 * 0000000140600C53: lea     rax, sub_140A95160
 * 0000000140600C5A: mov     [rbp+0FD0h+var_5E0], rax
 * 0000000140600C61: lea     rax, aZwsetevent; "ZwSetEvent"
 * 0000000140600C68: mov     [rbp+0FD0h+var_5D0], rax
 * 0000000140600C6F: lea     rax, sub_140A94B20
 * 0000000140600C76: mov     [rbp+0FD0h+var_5C0], rax
 * 0000000140600C7D: lea     rax, aZwsetinformati; "ZwSetInformationFile"
 * 0000000140600C84: mov     [rbp+0FD0h+var_5B0], rax
 * 0000000140600C8B: lea     rax, sub_140A95160
 * 0000000140600C92: mov     [rbp+0FD0h+var_5A0], rax
 * 0000000140600C99: lea     rax, aZwsetinformati_0; "ZwSetInformationJobObject"
 * 0000000140600CA0: mov     [rbp+0FD0h+var_590], rax
 * 0000000140600CA7: lea     rax, sub_140A94C00
 * 0000000140600CAE: mov     [rbp+0FD0h+var_580], rax
 * 0000000140600CB5: lea     rax, aZwsetinformati_1; "ZwSetInformationObject"
 * 0000000140600CBC: mov     [rbp+0FD0h+var_570], rax
 * 0000000140600CC3: lea     rax, sub_140A94C00
 * 0000000140600CCA: mov     [rbp+0FD0h+var_560], rax
 * 0000000140600CD1: lea     rax, aZwsetinformati_2; "ZwSetInformationProcess"
 * 0000000140600CD8: mov     [rbp+0FD0h+var_550], rax
 * 0000000140600CDF: lea     rax, sub_140A94C00
 * 0000000140600CE6: mov     [rbp+0FD0h+var_540], rax
 * 0000000140600CED: lea     rax, aZwsetinformati_3; "ZwSetInformationThread"
 * 0000000140600CF4: mov     [rbp+0FD0h+var_530], rax
 * 0000000140600CFB: lea     rax, sub_140A94C00
 * 0000000140600D02: mov     [rbp+0FD0h+var_520], rax
 * 0000000140600D09: lea     rax, aZwsetsecurityo; "ZwSetSecurityObject"
 * 0000000140600D10: mov     [rbp+0FD0h+var_510], rax
 * 0000000140600D17: lea     rax, sub_140A94B20
 * 0000000140600D1E: mov     [rbp+0FD0h+var_500], rax
 * 0000000140600D25: lea     rax, aZwsetsysteminf; "ZwSetSystemInformation"
 * 0000000140600D2C: mov     [rbp+0FD0h+var_4F0], rax
 * 0000000140600D33: mov     [rbp+0FD0h+var_688], 263h
 * 0000000140600D3D: mov     [rbp+0FD0h+var_678], rcx
 * 0000000140600D44: mov     [rbp+0FD0h+var_668], 264h
 * 0000000140600D4E: mov     [rbp+0FD0h+var_658], rcx
 * 0000000140600D55: mov     [rbp+0FD0h+var_648], 269h
 * 0000000140600D5F: mov     [rbp+0FD0h+var_638], rcx
 * 0000000140600D66: mov     [rbp+0FD0h+var_628], 26Ah
 * 0000000140600D70: mov     [rbp+0FD0h+var_618], rcx
 * 0000000140600D77: mov     [rbp+0FD0h+var_608], 26Bh
 * 0000000140600D81: mov     [rbp+0FD0h+var_5F8], rcx
 * 0000000140600D88: mov     [rbp+0FD0h+var_5E8], 26Ch
 * 0000000140600D92: mov     [rbp+0FD0h+var_5D8], rcx
 * 0000000140600D99: mov     [rbp+0FD0h+var_5C8], 26Dh
 * 0000000140600DA3: mov     [rbp+0FD0h+var_5B8], rcx
 * 0000000140600DAA: mov     [rbp+0FD0h+var_5A8], 26Fh
 * 0000000140600DB4: mov     [rbp+0FD0h+var_598], rcx
 * 0000000140600DBB: mov     [rbp+0FD0h+var_588], 270h
 * 0000000140600DC5: mov     [rbp+0FD0h+var_578], rcx
 * 0000000140600DCC: mov     [rbp+0FD0h+var_568], 272h
 * 0000000140600DD6: mov     [rbp+0FD0h+var_558], rcx
 * 0000000140600DDD: mov     [rbp+0FD0h+var_548], 273h
 * 0000000140600DE7: mov     [rbp+0FD0h+var_538], rcx
 * 0000000140600DEE: mov     [rbp+0FD0h+var_528], 275h
 * 0000000140600DF8: mov     [rbp+0FD0h+var_518], rcx
 * 0000000140600DFF: mov     [rbp+0FD0h+var_508], 279h
 * 0000000140600E09: mov     [rbp+0FD0h+var_4F8], rcx
 * 0000000140600E10: lea     rax, sub_140A94C00
 * 0000000140600E17: mov     [rbp+0FD0h+var_4E8], 27Ah
 * 0000000140600E21: mov     [rbp+0FD0h+var_4E0], rax
 * 0000000140600E28: lea     rax, aZwsetsystemtim; "ZwSetSystemTime"
 * 0000000140600E2F: mov     [rbp+0FD0h+var_4D0], rax
 * 0000000140600E36: lea     rax, sub_140A94900
 * 0000000140600E3D: mov     [rbp+0FD0h+var_4C0], rax
 * 0000000140600E44: lea     rax, aZwsettimer; "ZwSetTimer"
 * 0000000140600E4B: mov     [rbp+0FD0h+var_4B0], rax
 * 0000000140600E52: lea     rax, sub_140A957D0
 * 0000000140600E59: mov     [rbp+0FD0h+var_4A0], rax
 * 0000000140600E60: lea     rax, aZwsetvaluekey; "ZwSetValueKey"
 * 0000000140600E67: mov     [rbp+0FD0h+var_490], rax
 * 0000000140600E6E: lea     rax, sub_140A95820
 * 0000000140600E75: mov     [rbp+0FD0h+var_480], rax
 * 0000000140600E7C: lea     rax, aZwsetvolumeinf; "ZwSetVolumeInformationFile"
 * 0000000140600E83: mov     [rbp+0FD0h+var_470], rax
 * 0000000140600E8A: lea     rax, sub_140A95160
 * 0000000140600E91: mov     [rbp+0FD0h+var_460], rax
 * 0000000140600E98: lea     rax, aZwtranslatefil; "ZwTranslateFilePath"
 * 0000000140600E9F: mov     [rbp+0FD0h+var_450], rax
 * 0000000140600EA6: lea     rax, sub_140A94940
 * 0000000140600EAD: mov     [rbp+0FD0h+var_440], rax
 * 0000000140600EB4: lea     rax, aZwunloaddriver; "ZwUnloadDriver"
 * 0000000140600EBB: mov     [rbp+0FD0h+var_430], rax
 * 0000000140600EC2: lea     rax, sub_140A95000
 * 0000000140600EC9: mov     [rbp+0FD0h+var_420], rax
 * 0000000140600ED0: lea     rax, aZwunloadkey; "ZwUnloadKey"
 * 0000000140600ED7: mov     [rbp+0FD0h+var_410], rax
 * 0000000140600EDE: lea     rax, sub_140A94FD0
 * 0000000140600EE5: mov     [rbp+0FD0h+var_400], rax
 * 0000000140600EEC: lea     rax, aZwwaitformulti; "ZwWaitForMultipleObjects"
 * 0000000140600EF3: mov     [rbp+0FD0h+var_3F0], rax
 * 0000000140600EFA: lea     rax, sub_140A94B50
 * 0000000140600F01: mov     [rbp+0FD0h+var_3E0], rax
 * 0000000140600F08: lea     rax, aZwwaitforsingl; "ZwWaitForSingleObject"
 * 0000000140600F0F: mov     [rbp+0FD0h+var_3D0], rax
 * 0000000140600F16: lea     rax, sub_140A94B20
 * 0000000140600F1D: mov     [rbp+0FD0h+var_3C0], rax
 * 0000000140600F24: lea     rax, aZwwritefile; "ZwWriteFile"
 * 0000000140600F2B: mov     [rbp+0FD0h+var_3B0], rax
 * 0000000140600F32: lea     rax, sub_140A956D0
 * 0000000140600F39: mov     [rbp+0FD0h+var_3A0], rax
 * 0000000140600F40: lea     rax, aZwalpccreatepo; "ZwAlpcCreatePort"
 * 0000000140600F47: mov     [rbp+0FD0h+var_390], rax
 * 0000000140600F4E: lea     rax, sub_140A94AD0
 * 0000000140600F55: mov     [rbp+0FD0h+var_380], rax
 * 0000000140600F5C: lea     rax, aZwalpcconnectp; "ZwAlpcConnectPort"
 * 0000000140600F63: mov     [rbp+0FD0h+var_370], rax
 * 0000000140600F6A: lea     rax, sub_140A94A30
 * 0000000140600F71: mov     [rbp+0FD0h+var_360], rax
 * 0000000140600F78: lea     rax, aZwalpcacceptco; "ZwAlpcAcceptConnectPort"
 * 0000000140600F7F: mov     [rbp+0FD0h+var_350], rax
 * 0000000140600F86: lea     rax, sub_140A949D0
 * 0000000140600F8D: mov     [rbp+0FD0h+var_340], rax
 * 0000000140600F94: mov     [rbp+0FD0h+var_4D8], rcx
 * 0000000140600F9B: mov     [rbp+0FD0h+var_4C8], 27Bh
 * 0000000140600FA5: mov     [rbp+0FD0h+var_4B8], rcx
 * 0000000140600FAC: mov     [rbp+0FD0h+var_4A8], 27Ch
 * 0000000140600FB6: mov     [rbp+0FD0h+var_498], rcx
 * 0000000140600FBD: mov     [rbp+0FD0h+var_488], 27Eh
 * 0000000140600FC7: mov     [rbp+0FD0h+var_478], rcx
 * 0000000140600FCE: mov     [rbp+0FD0h+var_468], 27Fh
 * 0000000140600FD8: mov     [rbp+0FD0h+var_458], rcx
 * 0000000140600FDF: mov     [rbp+0FD0h+var_448], 281h
 * 0000000140600FE9: mov     [rbp+0FD0h+var_438], rcx
 * 0000000140600FF0: mov     [rbp+0FD0h+var_428], 282h
 * 0000000140600FFA: mov     [rbp+0FD0h+var_418], rcx
 * 0000000140601001: mov     [rbp+0FD0h+var_408], 283h
 * 000000014060100B: mov     [rbp+0FD0h+var_3F8], rcx
 * 0000000140601012: mov     [rbp+0FD0h+var_3E8], 286h
 * 000000014060101C: mov     [rbp+0FD0h+var_3D8], rcx
 * 0000000140601023: mov     [rbp+0FD0h+var_3C8], 287h
 * 000000014060102D: mov     [rbp+0FD0h+var_3B8], rcx
 * 0000000140601034: mov     [rbp+0FD0h+var_3A8], 288h
 * 000000014060103E: mov     [rbp+0FD0h+var_398], rcx
 * 0000000140601045: mov     [rbp+0FD0h+var_388], 1E8h
 * 000000014060104F: mov     [rbp+0FD0h+var_378], rcx
 * 0000000140601056: mov     [rbp+0FD0h+var_368], 1E7h
 * 0000000140601060: mov     [rbp+0FD0h+var_358], rcx
 * 0000000140601067: mov     [rbp+0FD0h+var_348], 1E6h
 * 0000000140601071: lea     rax, aZwalpcsendwait; "ZwAlpcSendWaitReceivePort"
 * 0000000140601078: mov     [rbp+0FD0h+var_338], rcx
 * 000000014060107F: mov     [rbp+0FD0h+var_330], rax
 * 0000000140601086: lea     rax, sub_140A94B90
 * 000000014060108D: mov     [rbp+0FD0h+var_320], rax
 * 0000000140601094: lea     rax, aZwalpccreatese; "ZwAlpcCreateSecurityContext"
 * 000000014060109B: mov     [rbp+0FD0h+var_310], rax
 * 00000001406010A2: lea     rax, sub_140A94B20
 * 00000001406010A9: mov     [rbp+0FD0h+var_300], rax
 * 00000001406010B0: lea     rax, aZwalpccreatepo_0; "ZwAlpcCreatePortSection"
 * 00000001406010B7: mov     [rbp+0FD0h+var_2F0], rax
 * 00000001406010BE: lea     rax, sub_140A94900
 * 00000001406010C5: mov     [rbp+0FD0h+var_2E0], rax
 * 00000001406010CC: lea     rax, aZwalpccreatese_0; "ZwAlpcCreateSectionView"
 * 00000001406010D3: mov     [rbp+0FD0h+var_2D0], rax
 * 00000001406010DA: lea     rax, sub_140A94B20
 * 00000001406010E1: mov     [rbp+0FD0h+var_2C0], rax
 * 00000001406010E8: lea     rax, aZwalpccreatere; "ZwAlpcCreateResourceReserve"
 * 00000001406010EF: mov     [rbp+0FD0h+var_2B0], rax
 * 00000001406010F6: lea     rax, sub_140A94B20
 * 00000001406010FD: mov     [rbp+0FD0h+var_2A0], rax
 * 0000000140601104: lea     rax, aZwalpcsetinfor; "ZwAlpcSetInformation"
 * 000000014060110B: mov     [rbp+0FD0h+var_290], rax
 * 0000000140601112: lea     rax, sub_140A94C00
 * 0000000140601119: mov     [rbp+0FD0h+var_280], rax
 * 0000000140601120: lea     rax, aZwalpcqueryinf; "ZwAlpcQueryInformation"
 * 0000000140601127: mov     [rbp+0FD0h+var_270], rax
 * 000000014060112E: lea     rax, sub_140A94B50
 * 0000000140601135: mov     [rbp+0FD0h+var_260], rax
 * 000000014060113C: lea     rax, aZwremoveiocomp; "ZwRemoveIoCompletionEx"
 * 0000000140601143: mov     [rbp+0FD0h+var_250], rax
 * 000000014060114A: lea     rax, sub_140A95740
 * 0000000140601151: mov     [rbp+0FD0h+var_240], rax
 * 0000000140601158: lea     rax, aZwcreatetransa; "ZwCreateTransactionManager"
 * 000000014060115F: mov     [rbp+0FD0h+var_230], rax
 * 0000000140601166: lea     rax, sub_140A94EF0
 * 000000014060116D: mov     [rbp+0FD0h+var_220], rax
 * 0000000140601174: lea     rax, aZwopentransact; "ZwOpenTransactionManager"
 * 000000014060117B: mov     [rbp+0FD0h+var_210], rax
 * 0000000140601182: lea     rax, sub_140A95390
 * 0000000140601189: mov     [rbp+0FD0h+var_200], rax
 * 0000000140601190: lea     rax, aZwqueryinforma_4; "ZwQueryInformationTransactionManager"
 * 0000000140601197: mov     [rbp+0FD0h+var_1F0], rax
 * 000000014060119E: lea     rax, sub_140A94B50
 * 00000001406011A5: mov     [rbp+0FD0h+var_1E0], rax
 * 00000001406011AC: lea     rax, aZwcreatetransa_0; "ZwCreateTransaction"
 * 00000001406011B3: mov     [rbp+0FD0h+var_1D0], rax
 * 00000001406011BA: lea     rax, sub_140A94F40
 * 00000001406011C1: mov     [rbp+0FD0h+var_1C0], rax
 * 00000001406011C8: lea     rax, aZwopentransact_0; "ZwOpenTransaction"
 * 00000001406011CF: mov     [rbp+0FD0h+var_1B0], rax
 * 00000001406011D6: lea     rax, sub_140A953E0
 * 00000001406011DD: mov     [rbp+0FD0h+var_1A0], rax
 * 00000001406011E4: lea     rax, aZwqueryinforma_5; "ZwQueryInformationTransaction"
 * 00000001406011EB: mov     [rbp+0FD0h+var_190], rax
 * 00000001406011F2: mov     [rbp+0FD0h+var_328], 1EEh
 * 00000001406011FC: mov     [rbp+0FD0h+var_318], rcx
 * 0000000140601203: mov     [rbp+0FD0h+var_308], 1ECh
 * 000000014060120D: mov     [rbp+0FD0h+var_2F8], rcx
 * 0000000140601214: mov     [rbp+0FD0h+var_2E8], 1E9h
 * 000000014060121E: mov     [rbp+0FD0h+var_2D8], rcx
 * 0000000140601225: mov     [rbp+0FD0h+var_2C8], 1EBh
 * 000000014060122F: mov     [rbp+0FD0h+var_2B8], rcx
 * 0000000140601236: mov     [rbp+0FD0h+var_2A8], 1EAh
 * 0000000140601240: mov     [rbp+0FD0h+var_298], rcx
 * 0000000140601247: mov     [rbp+0FD0h+var_288], 1EFh
 * 0000000140601251: mov     [rbp+0FD0h+var_278], rcx
 * 0000000140601258: mov     [rbp+0FD0h+var_268], 1EDh
 * 0000000140601262: mov     [rbp+0FD0h+var_258], rcx
 * 0000000140601269: mov     [rbp+0FD0h+var_248], 260h
 * 0000000140601273: mov     [rbp+0FD0h+var_238], rcx
 * 000000014060127A: mov     [rbp+0FD0h+var_228], 204h
 * 0000000140601284: mov     [rbp+0FD0h+var_218], rcx
 * 000000014060128B: mov     [rbp+0FD0h+var_208], 236h
 * 0000000140601295: mov     [rbp+0FD0h+var_1F8], rcx
 * 000000014060129C: mov     [rbp+0FD0h+var_1E8], 250h
 * 00000001406012A6: mov     [rbp+0FD0h+var_1D8], rcx
 * 00000001406012AD: mov     [rbp+0FD0h+var_1C8], 203h
 * 00000001406012B7: mov     [rbp+0FD0h+var_1B8], rcx
 * 00000001406012BE: mov     [rbp+0FD0h+var_1A8], 235h
 * 00000001406012C8: mov     [rbp+0FD0h+var_198], rcx
 * 00000001406012CF: lea     rax, sub_140A94B50
 * 00000001406012D6: mov     [rbp+0FD0h+var_188], 24Fh
 * 00000001406012E0: mov     [rbp+0FD0h+var_180], rax
 * 00000001406012E7: lea     rax, aZwsetinformati_4; "ZwSetInformationTransaction"
 * 00000001406012EE: mov     [rbp+0FD0h+var_170], rax
 * 00000001406012F5: lea     rax, sub_140A94C00
 * 00000001406012FC: mov     [rbp+0FD0h+var_160], rax
 * 0000000140601303: lea     rax, aZwpreprepareen; "ZwPrePrepareEnlistment"
 * 000000014060130A: mov     [rbp+0FD0h+var_150], rax
 * 0000000140601311: lea     rax, sub_140A94B20
 * 0000000140601318: mov     [rbp+0FD0h+var_140], rax
 * 000000014060131F: lea     rax, aZwprepareenlis; "ZwPrepareEnlistment"
 * 0000000140601326: mov     [rbp+0FD0h+var_130], rax
 * 000000014060132D: lea     rax, sub_140A94B20
 * 0000000140601334: mov     [rbp+0FD0h+var_120], rax
 * 000000014060133B: lea     rax, aZwcommitenlist; "ZwCommitEnlistment"
 * 0000000140601342: mov     [rbp+0FD0h+var_110], rax
 * 0000000140601349: lea     rax, sub_140A94B20
 * 0000000140601350: mov     [rbp+0FD0h+var_100], rax
 * 0000000140601357: lea     rax, aZwrollbackenli; "ZwRollbackEnlistment"
 * 000000014060135E: mov     [rbp+0FD0h+var_F0], rax
 * 0000000140601365: lea     rax, sub_140A94B20
 * 000000014060136C: mov     [rbp+0FD0h+var_E0], rax
 * 0000000140601373: lea     rax, aZwpreparecompl; "ZwPrepareComplete"
 * 000000014060137A: mov     [rbp+0FD0h+var_D0], rax
 * 0000000140601381: lea     rax, sub_140A94B20
 * 0000000140601388: mov     [rbp+0FD0h+var_C0], rax
 * 000000014060138F: lea     rax, aZwcreateenlist; "ZwCreateEnlistment"
 * 0000000140601396: mov     [rbp+0FD0h+var_B0], rax
 * 000000014060139D: lea     rax, sub_140A94D20
 * 00000001406013A4: mov     [rbp+0FD0h+var_A0], rax
 * 00000001406013AB: lea     rax, aZwopenenlistme; "ZwOpenEnlistment"
 * 00000001406013B2: mov     [rbp+0FD0h+var_90], rax
 * 00000001406013B9: lea     rax, sub_140A952B0
 * 00000001406013C0: mov     [rbp+0FD0h+var_80], rax
 * 00000001406013C7: lea     rax, aZwqueryinforma_6; "ZwQueryInformationEnlistment"
 * 00000001406013CE: mov     [rbp+0FD0h+var_70], rax
 * 00000001406013D5: lea     rax, sub_140A94B50
 * 00000001406013DC: mov     [rbp+0FD0h+var_60], rax
 * 00000001406013E3: lea     rax, aZwsetinformati_5; "ZwSetInformationEnlistment"
 * 00000001406013EA: mov     [rbp+0FD0h+var_50], rax
 * 00000001406013F1: lea     rax, sub_140A94C00
 * 00000001406013F8: mov     [rbp+0FD0h+var_40], rax
 * 00000001406013FF: lea     rax, aZwquerylicense; "ZwQueryLicenseValue"
 * 0000000140601406: mov     [rbp+0FD0h+var_30], rax
 * 000000014060140D: lea     rax, sub_140A955F0
 * 0000000140601414: mov     [rbp+0FD0h+var_20], rax
 * 000000014060141B: mov     [rbp+0FD0h+var_178], rcx
 * 0000000140601422: mov     [rbp+0FD0h+var_168], 277h
 * 000000014060142C: mov     [rbp+0FD0h+var_158], rcx
 * 0000000140601433: mov     [rbp+0FD0h+var_148], 239h
 * 000000014060143D: mov     [rbp+0FD0h+var_138], rcx
 * 0000000140601444: mov     [rbp+0FD0h+var_128], 23Bh
 * 000000014060144E: mov     [rbp+0FD0h+var_118], rcx
 * 0000000140601455: mov     [rbp+0FD0h+var_108], 1F5h
 * 000000014060145F: mov     [rbp+0FD0h+var_F8], rcx
 * 0000000140601466: mov     [rbp+0FD0h+var_E8], 267h
 * 0000000140601470: mov     [rbp+0FD0h+var_D8], rcx
 * 0000000140601477: mov     [rbp+0FD0h+var_C8], 23Ah
 * 0000000140601481: mov     [rbp+0FD0h+var_B8], rcx
 * 0000000140601488: mov     [rbp+0FD0h+var_A8], 1F9h
 * 0000000140601492: mov     [rbp+0FD0h+var_98], rcx
 * 0000000140601499: mov     [rbp+0FD0h+var_88], 223h
 * 00000001406014A3: mov     [rbp+0FD0h+var_78], rcx
 * 00000001406014AA: mov     [rbp+0FD0h+var_68], 248h
 * 00000001406014B4: mov     [rbp+0FD0h+var_58], rcx
 * 00000001406014BB: mov     [rbp+0FD0h+var_48], 26Eh
 * 00000001406014C5: mov     [rbp+0FD0h+var_38], rcx
 * 00000001406014CC: mov     [rbp+0FD0h+var_28], 253h
 * 00000001406014D6: mov     [rbp+0FD0h+var_18], rcx
 * 00000001406014DD: lea     r8d, [rcx+8]
 * 00000001406014E1: xor     r9d, r9d
 * 00000001406014E4: lea     rcx, [rsp+10D0h+var_10B0]
 * 00000001406014E9: mov     edx, 85h
 * 00000001406014EE: call    DifRegisterPlugin
 * 00000001406014F3: mov     rcx, [rbp+0FD0h+var_10]
 * 00000001406014FA: xor     rcx, rsp; _StackCookie
 * 00000001406014FD: call    __security_check_cookie
 * 0000000140601502: add     rsp, 10D0h
 * 0000000140601509: pop     rbp
 * 000000014060150A: retn
 */
