/*
 * XREFs of ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QBE?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@2@PAKKH@Z @ 0x1000444E
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ @ 0x10004163 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x10003429 (-FailFast_Unexpected@in1diag3@details@wil@@YGXPAXIPBD@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QBE?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@2@PAKKH@Z @ 0x1000444E
 * Reason: Hex-Rays returned no pseudocode for 0x1000444E
 * Fallback: raw IDA disassembly follows.
 *
 * 000000001000444E: mov     edi, edi
 * 0000000010004450: push    ebp; unsigned int
 * 0000000010004451: mov     ebp, esp
 * 0000000010004453: push    esi; void *
 * 0000000010004454: mov     esi, [ecx]
 * 0000000010004456: push    0; bAlertable
 * 0000000010004458: push    0FFFFFFFFh; dwMilliseconds
 * 000000001000445A: push    esi; hHandle
 * 000000001000445B: call    ds:__imp__WaitForSingleObjectEx@12; WaitForSingleObjectEx(x,x,x)
 * 0000000010004461: cmp     eax, 102h
 * 0000000010004466: jz      short loc_10004475
 * 0000000010004468: test    eax, eax
 * 000000001000446A: jz      short loc_10004477
 * 000000001000446C: cmp     eax, 80h
 * 0000000010004471: jnz     short loc_10004481
 * 0000000010004473: jmp     short loc_10004477
 * 0000000010004475: xor     esi, esi
 * 0000000010004477: mov     eax, [ebp+arg_0]
 * 000000001000447A: mov     [eax], esi
 * 000000001000447C: pop     esi
 * 000000001000447D: pop     ebp
 * 000000001000447E: retn    10h
 * 0000000010004481: push    ecx; this
 * 0000000010004482: mov     ecx, [ebp+4]
 * 0000000010004485: call    ?FailFast_Unexpected@in1diag3@details@wil@@YGXPAXIPBD@Z; wil::details::in1diag3::FailFast_Unexpected(void *,uint,char const *)
 */
