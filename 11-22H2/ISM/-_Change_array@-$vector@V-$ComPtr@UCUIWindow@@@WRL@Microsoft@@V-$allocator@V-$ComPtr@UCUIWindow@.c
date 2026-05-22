/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K1@Z @ 0x1800B01A0
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800AD6EC (--$_Emplace_reallocate@AEBV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UCUIWindow@@.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801CAD0C (--$_Emplace_reallocate@AEBV-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@-$vecto.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x1800AD6B4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CUIWindow>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v6, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
