/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@2@PEAU32@@Z @ 0x1801EE2A0
 * Callers:
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801EE048 (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 appended; // rax
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx

  std::_Fnv1a_append_bytes((__int64)a1, a2 + 20, 4uLL);
  appended = std::_Fnv1a_append_bytes(v4, a2 + 16, v5);
  v8 = a1[3];
  v9 = 2 * (a1[6] & (v7 ^ appended));
  if ( *(unsigned __int8 **)(v8 + 16 * (a1[6] & (v7 ^ appended)) + 8) == a2 )
  {
    if ( *(unsigned __int8 **)(v8 + 16 * (a1[6] & (v7 ^ appended))) == a2 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 8 * v9) = v10;
    }
    else
    {
      v10 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(unsigned __int8 **)(v8 + 16 * (a1[6] & (v7 ^ appended))) == a2 )
  {
    *(_QWORD *)(v8 + 16 * (a1[6] & (v7 ^ appended))) = *(_QWORD *)a2;
  }
  v11 = *(_QWORD *)a2;
  --a1[2];
  **((_QWORD **)a2 + 1) = v11;
  *(_QWORD *)(v11 + 8) = *((_QWORD *)a2 + 1);
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v11;
}
