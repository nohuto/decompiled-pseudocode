/*
 * XREFs of ?_Change_array@?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@std@@AEAAXQEAUD3D11_SUBRESOURCE_DATA@@_K1@Z @ 0x1800CF3FC
 * Callers:
 *     ??$_Emplace_reallocate@AEBUD3D11_SUBRESOURCE_DATA@@@?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@std@@QEAAPEAUD3D11_SUBRESOURCE_DATA@@QEAU2@AEBU2@@Z @ 0x1800CC544 (--$_Emplace_reallocate@AEBUD3D11_SUBRESOURCE_DATA@@@-$vector@UD3D11_SUBRESOURCE_DATA@@V-$allocat.c)
 *     ?_Reallocate_exactly@?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@std@@AEAAX_K@Z @ 0x1800CF46C (-_Reallocate_exactly@-$vector@UD3D11_SUBRESOURCE_DATA@@V-$allocator@UD3D11_SUBRESOURCE_DATA@@@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<D3D11_SUBRESOURCE_DATA>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
