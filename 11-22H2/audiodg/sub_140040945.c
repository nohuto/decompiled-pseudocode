/*
 * XREFs of sub_140040945 @ 0x140040945
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140040945 @ 0x140040945
 * Reason: Hex-Rays returned no pseudocode for 0x140040945
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140040945: mov     edi, dword ptr [rsp+arg_F8]
 * 000000014004094C: xor     ebx, ebx
 * 000000014004094E: test    edi, edi
 * 0000000140040950: jns     loc_1400106E6
 * 0000000140040956: mov     rcx, [rsp+arg_E0]; this
 * 000000014004095E: mov     r9d, edi; char *
 * 0000000140040961: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140040968: mov     edx, 98Dh; void *
 * 000000014004096D: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140040972: nop
 * 0000000140040973: mov     rcx, [rsp+arg_48]
 * 0000000140040978: sub     rcx, 0FFFFFFFFFFFFFF80h
 * 000000014004097C: mov     rdx, [rsp+arg_70]
 * 0000000140040981: call    ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z; ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(unsigned __int64,unsigned __int64)
 * 0000000140040986: nop
 * 0000000140040987: jmp     loc_14004082C
 */
