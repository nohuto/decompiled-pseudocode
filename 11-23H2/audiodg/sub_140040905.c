/*
 * XREFs of sub_140040905 @ 0x140040905
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140040905 @ 0x140040905
 * Reason: Hex-Rays returned no pseudocode for 0x140040905
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140040905: mov     edi, dword ptr [rsp+arg_F8]
 * 000000014004090C: xor     ebx, ebx
 * 000000014004090E: test    edi, edi
 * 0000000140040910: jns     loc_1400106E6
 * 0000000140040916: mov     rcx, [rsp+arg_E0]; this
 * 000000014004091E: mov     r9d, edi; char *
 * 0000000140040921: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140040928: mov     edx, 98Dh; void *
 * 000000014004092D: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140040932: nop
 * 0000000140040933: mov     rcx, [rsp+arg_48]
 * 0000000140040938: sub     rcx, 0FFFFFFFFFFFFFF80h
 * 000000014004093C: mov     rdx, [rsp+arg_70]
 * 0000000140040941: call    ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z; ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(unsigned __int64,unsigned __int64)
 * 0000000140040946: nop
 * 0000000140040947: jmp     loc_1400407EC
 */
