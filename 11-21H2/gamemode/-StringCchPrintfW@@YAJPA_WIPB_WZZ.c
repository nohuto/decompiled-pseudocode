/*
 * XREFs of ?StringCchPrintfW@@YAJPA_WIPB_WZZ @ 0x1000224F
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x100022E9 (StringVPrintfWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for ?StringCchPrintfW@@YAJPA_WIPB_WZZ @ 0x1000224F
 * Reason: Hex-Rays returned no pseudocode for 0x1000224F
 * Fallback: raw IDA disassembly follows.
 *
 * 000000001000224F: mov     edi, edi
 * 0000000010002251: push    ebp; pszFormat
 * 0000000010002252: mov     ebp, esp
 * 0000000010002254: mov     eax, [ebp+arg_4]
 * 0000000010002257: test    eax, eax
 * 0000000010002259: jz      short loc_10002278
 * 000000001000225B: cmp     eax, 7FFFFFFFh
 * 0000000010002260: ja      short loc_10002278
 * 0000000010002262: lea     ecx, [ebp+pszDest]
 * 0000000010002265: mov     edx, eax
 * 0000000010002267: push    ecx; pcchNewDestLength
 * 0000000010002268: push    [ebp+cchDest]; cchDest
 * 000000001000226B: push    ecx; pszDest
 * 000000001000226C: mov     ecx, [ebp+arg_0]
 * 000000001000226F: call    StringVPrintfWorkerW
 * 0000000010002274: mov     ecx, eax
 * 0000000010002276: jmp     short loc_10002289
 * 0000000010002278: mov     ecx, 80070057h
 * 000000001000227D: test    eax, eax
 * 000000001000227F: jz      short loc_10002289
 * 0000000010002281: mov     eax, [ebp+arg_0]
 * 0000000010002284: xor     edx, edx
 * 0000000010002286: mov     [eax], dx
 * 0000000010002289: mov     eax, ecx
 * 000000001000228B: pop     ebp
 * 000000001000228C: retn
 */
