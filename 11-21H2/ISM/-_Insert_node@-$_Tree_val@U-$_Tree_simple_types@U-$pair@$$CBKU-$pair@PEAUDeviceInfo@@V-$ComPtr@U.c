/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800427E8
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800426F8 (--$_Try_emplace@AEBK$$V@-$map@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z @ 0x180091390 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@VirtualHot.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z @ 0x180092FA0 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAX.c)
 */

/*
 * Hex-Rays decompilation failed for ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800427E8
 * Reason: Hex-Rays returned no pseudocode for 0x1800427E8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800427E8: push    rbx
 * 00000001800427EA: sub     rsp, 20h
 * 00000001800427EE: inc     qword ptr [rcx+8]
 * 00000001800427F2: mov     r9, r8
 * 00000001800427F5: mov     r11, [rcx]
 * 00000001800427F8: mov     rbx, rcx
 * 00000001800427FB: mov     rax, [rdx]
 * 00000001800427FE: mov     [r8+8], rax
 * 0000000180042802: cmp     rax, r11
 * 0000000180042805: jnz     short loc_180042821
 * 0000000180042807: mov     [r11], r8
 * 000000018004280A: mov     [r11+8], r8
 * 000000018004280E: mov     [r11+10h], r8
 * 0000000180042812: mov     byte ptr [r8+18h], 1
 * 0000000180042817: mov     rax, r9
 * 000000018004281A: add     rsp, 20h
 * 000000018004281E: pop     rbx
 * 000000018004281F: retn
 * 0000000180042821: cmp     dword ptr [rdx+8], 0
 * 0000000180042825: jnz     loc_180076D6A
 * 000000018004282B: mov     [rax+10h], r9
 * 000000018004282F: cmp     rax, [r11+10h]
 * 0000000180042833: jnz     short loc_180042839
 * 0000000180042835: mov     [r11+10h], r9
 * 0000000180042839: mov     rax, [r8+8]
 * 000000018004283D: mov     r10, r9
 * 0000000180042840: cmp     byte ptr [rax+18h], 0
 * 0000000180042844: jz      loc_180076D7E
 * 000000018004284A: mov     rax, [r11+8]
 * 000000018004284E: mov     byte ptr [rax+18h], 1
 * 0000000180042852: jmp     short loc_180042817
 * 0000000180076D6A: mov     [rax], r9
 * 0000000180076D6D: cmp     rax, [r11]
 * 0000000180076D70: jnz     loc_180042839
 * 0000000180076D76: mov     [r11], r9
 * 0000000180076D79: jmp     loc_180042839
 * 0000000180076D7E: mov     rax, [r10+8]
 * 0000000180076D82: mov     rdx, [rax+8]
 * 0000000180076D86: mov     rcx, [rdx]
 * 0000000180076D89: cmp     rax, rcx
 * 0000000180076D8C: jnz     short loc_180076DD6
 * 0000000180076D8E: mov     rcx, [rdx+10h]
 * 0000000180076D92: cmp     byte ptr [rcx+18h], 0
 * 0000000180076D96: jz      loc_180076E1C
 * 0000000180076D9C: cmp     r10, [rax+10h]
 * 0000000180076DA0: jnz     short loc_180076DB0
 * 0000000180076DA2: mov     rdx, rax
 * 0000000180076DA5: mov     rcx, rbx
 * 0000000180076DA8: mov     r10, rax
 * 0000000180076DAB: call    ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<GazeProperty const,ushort>>>::_Lrotate(std::_Tree_node<std::pair<GazeProperty const,ushort>,void *> *)
 * 0000000180076DB0: mov     rax, [r10+8]
 * 0000000180076DB4: mov     byte ptr [rax+18h], 1
 * 0000000180076DB8: mov     rax, [r10+8]
 * 0000000180076DBC: mov     rcx, [rax+8]
 * 0000000180076DC0: mov     byte ptr [rcx+18h], 0
 * 0000000180076DC4: mov     rcx, rbx
 * 0000000180076DC7: mov     rdx, [r10+8]
 * 0000000180076DCB: mov     rdx, [rdx+8]
 * 0000000180076DCF: call    ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *> *)
 * 0000000180076DD4: jmp     short loc_180076E13
 * 0000000180076DD6: cmp     byte ptr [rcx+18h], 0
 * 0000000180076DDA: jz      short loc_180076E1C
 * 0000000180076DDC: cmp     r10, [rax]
 * 0000000180076DDF: jnz     short loc_180076DEF
 * 0000000180076DE1: mov     rdx, rax
 * 0000000180076DE4: mov     rcx, rbx
 * 0000000180076DE7: mov     r10, rax
 * 0000000180076DEA: call    ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *> *)
 * 0000000180076DEF: mov     rax, [r10+8]
 * 0000000180076DF3: mov     byte ptr [rax+18h], 1
 * 0000000180076DF7: mov     rax, [r10+8]
 * 0000000180076DFB: mov     rcx, [rax+8]
 * 0000000180076DFF: mov     byte ptr [rcx+18h], 0
 * 0000000180076E03: mov     rcx, rbx
 * 0000000180076E06: mov     rdx, [r10+8]
 * 0000000180076E0A: mov     rdx, [rdx+8]
 * 0000000180076E0E: call    ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<GazeProperty const,ushort>>>::_Lrotate(std::_Tree_node<std::pair<GazeProperty const,ushort>,void *> *)
 * 0000000180076E13: mov     rax, [r10+8]
 * 0000000180076E17: jmp     loc_180042840
 * 0000000180076E1C: mov     byte ptr [rax+18h], 1
 * 0000000180076E20: mov     byte ptr [rcx+18h], 1
 * 0000000180076E24: mov     rax, [r10+8]
 * 0000000180076E28: mov     rcx, [rax+8]
 * 0000000180076E2C: mov     byte ptr [rcx+18h], 0
 * 0000000180076E30: mov     rax, [r10+8]
 * 0000000180076E34: mov     r10, [rax+8]
 * 0000000180076E38: jmp     short loc_180076E13
 */
