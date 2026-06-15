/*
 * XREFs of sub_1400403E4 @ 0x1400403E4
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400201C4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1400403E4 @ 0x1400403E4
 * Reason: Hex-Rays returned no pseudocode for 0x1400403E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400403E4: mov     edi, dword ptr [rsp+arg_38]
 * 00000001400403E8: xor     ebx, ebx
 * 00000001400403EA: test    edi, edi
 * 00000001400403EC: jns     loc_14000FAD8
 * 00000001400403F2: mov     rcx, [rsp+arg_580]; this
 * 00000001400403FA: mov     r9d, edi; char *
 * 00000001400403FD: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140040404: mov     edx, 843h; void *
 * 0000000140040409: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000014004040E: nop
 * 000000014004040F: mov     rdx, [rsp+arg_98]
 * 0000000140040417: mov     rcx, [rsp+arg_50]
 * 000000014004041C: call    ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z; ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(CAPONode * const &,__POSITION *)
 * 0000000140040421: mov     rdx, rax
 * 0000000140040424: mov     rcx, [rsp+arg_50]
 * 0000000140040429: call    ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z; ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(__POSITION *)
 * 000000014004042E: nop
 * 000000014004042F: mov     rcx, [rsp+arg_40]; this
 * 0000000140040434: call    ?UnlockForProcess@CAPONode@@QEAAJXZ; CAPONode::UnlockForProcess(void)
 * 0000000140040439: nop
 * 000000014004043A: jmp     loc_1400400DE
 */
