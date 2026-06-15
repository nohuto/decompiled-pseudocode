/*
 * XREFs of sub_140040C4C @ 0x140040C4C
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140040C4C @ 0x140040C4C
 * Reason: Hex-Rays returned no pseudocode for 0x140040C4C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140040C4C: mov     edi, dword ptr [rsp+arg_F8]
 * 0000000140040C53: xor     ebx, ebx
 * 0000000140040C55: test    edi, edi
 * 0000000140040C57: jns     loc_1400109DA
 * 0000000140040C5D: mov     rcx, [rsp+arg_E0]; this
 * 0000000140040C65: mov     r9d, edi; char *
 * 0000000140040C68: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140040C6F: mov     edx, 0A53h; void *
 * 0000000140040C74: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140040C79: nop
 * 0000000140040C7A: mov     rcx, [rsp+arg_48]
 * 0000000140040C7F: add     rcx, 0A0h
 * 0000000140040C86: mov     rdx, [rsp+arg_70]
 * 0000000140040C8B: call    ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z; ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(unsigned __int64,unsigned __int64)
 * 0000000140040C90: nop
 * 0000000140040C91: jmp     loc_140040B33
 */
