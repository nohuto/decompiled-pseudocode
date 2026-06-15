/*
 * XREFs of sub_140040424 @ 0x140040424
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400201C4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140040424 @ 0x140040424
 * Reason: Hex-Rays returned no pseudocode for 0x140040424
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140040424: mov     edi, dword ptr [rsp+arg_38]
 * 0000000140040428: xor     ebx, ebx
 * 000000014004042A: test    edi, edi
 * 000000014004042C: jns     loc_14000FAD8
 * 0000000140040432: mov     rcx, [rsp+arg_580]; this
 * 000000014004043A: mov     r9d, edi; char *
 * 000000014004043D: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140040444: mov     edx, 843h; void *
 * 0000000140040449: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000014004044E: nop
 * 000000014004044F: mov     rdx, [rsp+arg_98]
 * 0000000140040457: mov     rcx, [rsp+arg_50]
 * 000000014004045C: call    ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z; ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(CAPONode * const &,__POSITION *)
 * 0000000140040461: mov     rdx, rax
 * 0000000140040464: mov     rcx, [rsp+arg_50]
 * 0000000140040469: call    ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z; ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(__POSITION *)
 * 000000014004046E: nop
 * 000000014004046F: mov     rcx, [rsp+arg_40]; this
 * 0000000140040474: call    ?UnlockForProcess@CAPONode@@QEAAJXZ; CAPONode::UnlockForProcess(void)
 * 0000000140040479: nop
 * 000000014004047A: jmp     loc_14004011E
 */
