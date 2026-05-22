/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800910BC
 * Callers:
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x180091020 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x180040564 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@@std@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800908D0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18009136C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z @ 0x180091390 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@VirtualHot.c)
 */

/*
 * Hex-Rays decompilation failed for ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800910BC
 * Reason: Hex-Rays returned no pseudocode for 0x1800910BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800910BC: mov     rax, rsp
 * 00000001800910BF: mov     [rax+8], rbx
 * 00000001800910C3: mov     [rax+18h], rbp
 * 00000001800910C7: mov     [rax+10h], rdx
 * 00000001800910CB: push    rdi
 * 00000001800910CC: sub     rsp, 20h
 * 00000001800910D0: mov     rbx, rcx
 * 00000001800910D3: mov     r11, rdx
 * 00000001800910D6: lea     rcx, [rax+10h]
 * 00000001800910DA: call    ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ; std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(void)
 * 00000001800910DF: mov     r9, [r11]
 * 00000001800910E2: xor     ebp, ebp
 * 00000001800910E4: mov     r10, [r11+10h]
 * 00000001800910E8: cmp     [r9+19h], bpl
 * 00000001800910EC: jnz     short loc_18009110B
 * 00000001800910EE: cmp     [r10+19h], bpl
 * 00000001800910F2: jz      short loc_1800910F9
 * 00000001800910F4: mov     r10, r9
 * 00000001800910F7: jmp     short loc_18009110B
 * 00000001800910F9: mov     rax, [rsp+28h+arg_8]
 * 00000001800910FE: mov     r10, [rax+10h]
 * 0000000180091102: cmp     rax, r11
 * 0000000180091105: jnz     loc_180091195
 * 000000018009110B: mov     r9, [r11+8]
 * 000000018009110F: cmp     [r10+19h], bpl
 * 0000000180091113: jnz     short loc_180091119
 * 0000000180091115: mov     [r10+8], r9
 * 0000000180091119: mov     rax, [rbx]
 * 000000018009111C: cmp     [rax+8], r11
 * 0000000180091120: jnz     short loc_180091128
 * 0000000180091122: mov     [rax+8], r10
 * 0000000180091126: jmp     short loc_180091136
 * 0000000180091128: cmp     [r9], r11
 * 000000018009112B: jnz     short loc_180091132
 * 000000018009112D: mov     [r9], r10
 * 0000000180091130: jmp     short loc_180091136
 * 0000000180091132: mov     [r9+10h], r10
 * 0000000180091136: mov     r8, [rbx]
 * 0000000180091139: mov     rax, r8
 * 000000018009113C: cmp     [r8], r11
 * 000000018009113F: jnz     short loc_18009115D
 * 0000000180091141: cmp     [r10+19h], bpl
 * 0000000180091145: jz      short loc_18009114C
 * 0000000180091147: mov     rax, r9
 * 000000018009114A: jmp     short loc_180091154
 * 000000018009114C: mov     rcx, r10
 * 000000018009114F: call    ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min(std::_Tree_node<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>,void *> *)
 * 0000000180091154: mov     [r8], rax
 * 0000000180091157: mov     r8, [rbx]
 * 000000018009115A: mov     rax, r8
 * 000000018009115D: cmp     [rax+10h], r11
 * 0000000180091161: jnz     short loc_18009118F
 * 0000000180091163: cmp     [r10+19h], bpl
 * 0000000180091167: jz      short loc_18009116E
 * 0000000180091169: mov     rcx, r9
 * 000000018009116C: jmp     short loc_18009118B
 * 000000018009116E: mov     rdx, [r10+10h]
 * 0000000180091172: mov     rcx, r10
 * 0000000180091175: cmp     [rdx+19h], bpl
 * 0000000180091179: jnz     short loc_18009118B
 * 000000018009117B: mov     rcx, rdx
 * 000000018009117E: mov     rdx, [rdx+10h]
 * 0000000180091182: cmp     [rdx+19h], bpl
 * 0000000180091186: jz      short loc_18009117B
 * 0000000180091188: mov     rax, r8
 * 000000018009118B: mov     [rax+10h], rcx
 * 000000018009118F: mov     dl, [r11+18h]
 * 0000000180091193: jmp     short loc_180091202
 * 0000000180091195: mov     [r9+8], rax
 * 0000000180091199: mov     rcx, [r11]
 * 000000018009119C: mov     [rax], rcx
 * 000000018009119F: cmp     rax, [r11+10h]
 * 00000001800911A3: jnz     short loc_1800911AA
 * 00000001800911A5: mov     r9, rax
 * 00000001800911A8: jmp     short loc_1800911CB
 * 00000001800911AA: mov     r9, [rax+8]
 * 00000001800911AE: cmp     [r10+19h], bpl
 * 00000001800911B2: jnz     short loc_1800911B8
 * 00000001800911B4: mov     [r10+8], r9
 * 00000001800911B8: mov     [r9], r10
 * 00000001800911BB: mov     rcx, [r11+10h]
 * 00000001800911BF: mov     [rax+10h], rcx
 * 00000001800911C3: mov     rcx, [r11+10h]
 * 00000001800911C7: mov     [rcx+8], rax
 * 00000001800911CB: mov     rcx, [rbx]
 * 00000001800911CE: cmp     [rcx+8], r11
 * 00000001800911D2: jnz     short loc_1800911DA
 * 00000001800911D4: mov     [rcx+8], rax
 * 00000001800911D8: jmp     short loc_1800911EC
 * 00000001800911DA: mov     rcx, [r11+8]
 * 00000001800911DE: cmp     [rcx], r11
 * 00000001800911E1: jnz     short loc_1800911E8
 * 00000001800911E3: mov     [rcx], rax
 * 00000001800911E6: jmp     short loc_1800911EC
 * 00000001800911E8: mov     [rcx+10h], rax
 * 00000001800911EC: mov     rcx, [r11+8]
 * 00000001800911F0: mov     dl, [rax+18h]
 * 00000001800911F3: mov     [rax+8], rcx
 * 00000001800911F7: mov     cl, [r11+18h]
 * 00000001800911FB: mov     [rax+18h], cl
 * 00000001800911FE: mov     [r11+18h], dl
 * 0000000180091202: cmp     dl, 1
 * 0000000180091205: jnz     loc_180091340
 * 000000018009120B: mov     rax, [rbx]
 * 000000018009120E: cmp     r10, [rax+8]
 * 0000000180091212: jz      loc_18009133B
 * 0000000180091218: cmp     byte ptr [r10+18h], 1
 * 000000018009121D: mov     rdi, r9
 * 0000000180091220: jnz     loc_18009133B
 * 0000000180091226: mov     rdx, [r9]
 * 0000000180091229: cmp     r10, rdx
 * 000000018009122C: jnz     loc_1800912B2
 * 0000000180091232: mov     rdx, [r9+10h]
 * 0000000180091236: cmp     [rdx+18h], bpl
 * 000000018009123A: jnz     short loc_180091253
 * 000000018009123C: mov     byte ptr [rdx+18h], 1
 * 0000000180091240: mov     rcx, rbx
 * 0000000180091243: mov     rdx, r9
 * 0000000180091246: mov     [r9+18h], bpl
 * 000000018009124A: call    ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<uint const,std::function<void (bool)>>>>::_Lrotate(std::_Tree_node<std::pair<uint const,std::function<void (bool)>>,void *> *)
 * 000000018009124F: mov     rdx, [r9+10h]
 * 0000000180091253: cmp     [rdx+19h], bpl
 * 0000000180091257: jnz     loc_1800912EB
 * 000000018009125D: mov     rcx, [rdx]
 * 0000000180091260: cmp     byte ptr [rcx+18h], 1
 * 0000000180091264: jnz     short loc_180091270
 * 0000000180091266: mov     rax, [rdx+10h]
 * 000000018009126A: cmp     byte ptr [rax+18h], 1
 * 000000018009126E: jz      short loc_1800912E7
 * 0000000180091270: mov     rax, [rdx+10h]
 * 0000000180091274: cmp     byte ptr [rax+18h], 1
 * 0000000180091278: jnz     short loc_18009128E
 * 000000018009127A: mov     byte ptr [rcx+18h], 1
 * 000000018009127E: mov     rcx, rbx
 * 0000000180091281: mov     [rdx+18h], bpl
 * 0000000180091285: call    ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *> *)
 * 000000018009128A: mov     rdx, [r9+10h]
 * 000000018009128E: mov     al, [r9+18h]
 * 0000000180091292: mov     rcx, rbx
 * 0000000180091295: mov     [rdx+18h], al
 * 0000000180091298: mov     byte ptr [r9+18h], 1
 * 000000018009129D: mov     rax, [rdx+10h]
 * 00000001800912A1: mov     rdx, r9
 * 00000001800912A4: mov     byte ptr [rax+18h], 1
 * 00000001800912A8: call    ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<uint const,std::function<void (bool)>>>>::_Lrotate(std::_Tree_node<std::pair<uint const,std::function<void (bool)>>,void *> *)
 * 00000001800912AD: jmp     loc_18009133B
 * 00000001800912B2: cmp     [rdx+18h], bpl
 * 00000001800912B6: jnz     short loc_1800912CE
 * 00000001800912B8: mov     byte ptr [rdx+18h], 1
 * 00000001800912BC: mov     rcx, rbx
 * 00000001800912BF: mov     rdx, r9
 * 00000001800912C2: mov     [r9+18h], bpl
 * 00000001800912C6: call    ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *> *)
 * 00000001800912CB: mov     rdx, [r9]
 * 00000001800912CE: cmp     [rdx+19h], bpl
 * 00000001800912D2: jnz     short loc_1800912EB
 * 00000001800912D4: mov     rcx, [rdx+10h]
 * 00000001800912D8: cmp     byte ptr [rcx+18h], 1
 * 00000001800912DC: jnz     short loc_180091301
 * 00000001800912DE: mov     rax, [rdx]
 * 00000001800912E1: cmp     byte ptr [rax+18h], 1
 * 00000001800912E5: jnz     short loc_180091301
 * 00000001800912E7: mov     [rdx+18h], bpl
 * 00000001800912EB: mov     rax, [rbx]
 * 00000001800912EE: mov     r10, rdi
 * 00000001800912F1: mov     r9, [r9+8]
 * 00000001800912F5: cmp     rdi, [rax+8]
 * 00000001800912F9: jnz     loc_180091218
 * 00000001800912FF: jmp     short loc_18009133B
 * 0000000180091301: mov     rax, [rdx]
 * 0000000180091304: cmp     byte ptr [rax+18h], 1
 * 0000000180091308: jnz     short loc_18009131D
 * 000000018009130A: mov     byte ptr [rcx+18h], 1
 * 000000018009130E: mov     rcx, rbx
 * 0000000180091311: mov     [rdx+18h], bpl
 * 0000000180091315: call    ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<uint const,std::function<void (bool)>>>>::_Lrotate(std::_Tree_node<std::pair<uint const,std::function<void (bool)>>,void *> *)
 * 000000018009131A: mov     rdx, [r9]
 * 000000018009131D: mov     al, [r9+18h]
 * 0000000180091321: mov     rcx, rbx
 * 0000000180091324: mov     [rdx+18h], al
 * 0000000180091327: mov     byte ptr [r9+18h], 1
 * 000000018009132C: mov     rax, [rdx]
 * 000000018009132F: mov     rdx, r9
 * 0000000180091332: mov     byte ptr [rax+18h], 1
 * 0000000180091336: call    ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z; std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *> *)
 * 000000018009133B: mov     byte ptr [r10+18h], 1
 * 0000000180091340: mov     rcx, [rbx+8]
 * 0000000180091344: test    rcx, rcx
 * 0000000180091347: jz      short loc_180091350
 * 0000000180091349: dec     rcx
 * 000000018009134C: mov     [rbx+8], rcx
 * 0000000180091350: mov     rbx, [rsp+28h+arg_0]
 * 0000000180091355: mov     rax, r11
 * 0000000180091358: mov     rbp, [rsp+28h+arg_10]
 * 000000018009135D: add     rsp, 20h
 * 0000000180091361: pop     rdi
 * 0000000180091362: retn
 */
