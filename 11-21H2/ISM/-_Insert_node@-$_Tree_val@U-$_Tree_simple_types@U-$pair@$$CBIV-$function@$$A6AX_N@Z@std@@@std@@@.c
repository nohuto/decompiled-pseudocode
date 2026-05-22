/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800404A4
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800403B8 (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x180040564 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@@std@.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z @ 0x180091390 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@VirtualHot.c)
 */

/*
 * Hex-Rays decompilation failed for ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800404A4
 * Reason: Hex-Rays returned no pseudocode for 0x1800404A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800404A4: push    rbx
 * 00000001800404A6: sub     rsp, 20h
 * 00000001800404AA: inc     qword ptr [rcx+8]
 * 00000001800404AE: mov     r9, r8
 * 00000001800404B1: mov     r11, [rcx]
 * 00000001800404B4: mov     rbx, rcx
 * 00000001800404B7: mov     rax, [rdx]
 * 00000001800404BA: mov     [r8+8], rax
 * 00000001800404BE: cmp     rax, r11
 * 00000001800404C1: jz      short loc_1800404FA
 * 00000001800404C3: cmp     dword ptr [rdx+8], 0
 * 00000001800404C7: jnz     loc_180075C36
 * 00000001800404CD: mov     [rax+10h], r8
 * 00000001800404D1: cmp     rax, [r11+10h]
 * 00000001800404D5: jnz     short loc_1800404DB
 * 00000001800404D7: mov     [r11+10h], r8
 * 00000001800404DB: mov     rax, [r8+8]
 * 00000001800404DF: mov     r10, r9
 * 00000001800404E2: cmp     byte ptr [rax+18h], 0
 * 00000001800404E6: jz      short loc_18004050C
 * 00000001800404E8: mov     rax, [r11+8]
 * 00000001800404EC: mov     byte ptr [rax+18h], 1
 * 00000001800404F0: mov     rax, r9
 * 00000001800404F3: add     rsp, 20h
 * 00000001800404F7: pop     rbx
 * 00000001800404F8: retn
 * 00000001800404FA: mov     [r11], r9
 * 00000001800404FD: mov     [r11+8], r9
 * 0000000180040501: mov     [r11+10h], r9
 * 0000000180040505: mov     byte ptr [r8+18h], 1
 * 000000018004050A: jmp     short loc_1800404F0
 * 000000018004050C: mov     rax, [r10+8]
 * 0000000180040510: mov     rdx, [rax+8]
 * 0000000180040514: mov     rcx, [rdx]
 * 0000000180040517: cmp     rax, rcx
 * 000000018004051A: jz      loc_180075C4A
 * 0000000180040520: cmp     byte ptr [rcx+18h], 0
 * 0000000180040524: jz      loc_180075C92
 * 000000018004052A: cmp     r10, [rax]
 * 000000018004052D: jz      loc_180075CB3
 * 0000000180040533: mov     rax, [r10+8]
 * 0000000180040537: mov     byte ptr [rax+18h], 1
 * 000000018004053B: mov     rax, [r10+8]
 * 000000018004053F: mov     rcx, [rax+8]
 * 0000000180040543: mov     byte ptr [rcx+18h], 0
 * 0000000180040547: mov     rcx, rbx
 * 000000018004054A: mov     rdx, [r10+8]
 * 000000018004054E: mov     rdx, [rdx+8]
 * 0000000180040552: call    ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<uint const,std::function<void (bool)>>>>::_Lrotate(std::_Tree_node<std::pair<uint const,std::function<void (bool)>>,void *> *)
 * 0000000180040557: mov     rax, [r10+8]
 * 000000018004055B: jmp     short loc_1800404E2
 * 0000000180075C36: mov     [rax], r9
 * 0000000180075C39: cmp     rax, [r11]
 * 0000000180075C3C: jnz     loc_1800404DB
 * 0000000180075C42: mov     [r11], r9
 * 0000000180075C45: jmp     loc_1800404DB
 * 0000000180075C4A: mov     rcx, [rdx+10h]
 * 0000000180075C4E: cmp     byte ptr [rcx+18h], 0
 * 0000000180075C52: jz      short loc_180075C92
 * 0000000180075C54: cmp     r10, [rax+10h]
 * 0000000180075C58: jnz     short loc_180075C68
 * 0000000180075C5A: mov     rdx, rax
 * 0000000180075C5D: mov     rcx, rbx
 * 0000000180075C60: mov     r10, rax
 * 0000000180075C63: call    ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<uint const,std::function<void (bool)>>>>::_Lrotate(std::_Tree_node<std::pair<uint const,std::function<void (bool)>>,void *> *)
 * 0000000180075C68: mov     rax, [r10+8]
 * 0000000180075C6C: mov     byte ptr [rax+18h], 1
 * 0000000180075C70: mov     rax, [r10+8]
 * 0000000180075C74: mov     rcx, [rax+8]
 * 0000000180075C78: mov     byte ptr [rcx+18h], 0
 * 0000000180075C7C: mov     rcx, rbx
 * 0000000180075C7F: mov     rdx, [r10+8]
 * 0000000180075C83: mov     rdx, [rdx+8]
 * 0000000180075C87: call    ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *> *)
 * 0000000180075C8C: nop
 * 0000000180075C8D: jmp     loc_180040557
 * 0000000180075C92: mov     byte ptr [rax+18h], 1
 * 0000000180075C96: mov     byte ptr [rcx+18h], 1
 * 0000000180075C9A: mov     rax, [r10+8]
 * 0000000180075C9E: mov     rcx, [rax+8]
 * 0000000180075CA2: mov     byte ptr [rcx+18h], 0
 * 0000000180075CA6: mov     rax, [r10+8]
 * 0000000180075CAA: mov     r10, [rax+8]
 * 0000000180075CAE: jmp     loc_180040557
 * 0000000180075CB3: mov     rdx, rax
 * 0000000180075CB6: mov     rcx, rbx
 * 0000000180075CB9: mov     r10, rax
 * 0000000180075CBC: call    ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *> *)
 * 0000000180075CC1: nop
 * 0000000180075CC2: jmp     loc_180040533
 */
