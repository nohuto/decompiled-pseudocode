/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YGJXZ @ 0x10002B6A
 * Callers:
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES@@@Z @ 0x10003F52 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@w.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z @ 0x10002B2E (-GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?GetLastErrorFailHr@details@wil@@YGJXZ @ 0x10002B6A
 * Reason: Hex-Rays returned no pseudocode for 0x10002B6A
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000010002B6A: mov     edi, edi
 * 0000000010002B6C: push    ebp; char *
 * 0000000010002B6D: mov     ebp, esp
 * 0000000010002B6F: push    dword ptr [ebp+4]; char *
 * 0000000010002B72: xor     edx, edx
 * 0000000010002B74: push    ecx; unsigned int
 * 0000000010002B75: push    ecx; void *
 * 0000000010002B76: push    0; this
 * 0000000010002B78: xor     ecx, ecx
 * 0000000010002B7A: call    ?GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z; wil::details::GetLastErrorFail(void *,uint,char const *,char const *,char const *,void *)
 * 0000000010002B7F: test    eax, eax
 * 0000000010002B81: jle     short loc_10002B8B
 * 0000000010002B83: movzx   eax, ax
 * 0000000010002B86: or      eax, 80070000h
 * 0000000010002B8B: pop     ebp
 * 0000000010002B8C: retn
 */
