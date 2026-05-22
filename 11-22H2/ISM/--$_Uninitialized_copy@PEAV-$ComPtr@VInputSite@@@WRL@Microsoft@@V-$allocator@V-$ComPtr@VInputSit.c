/*
 * XREFs of ??$_Uninitialized_copy@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18014BFC8
 * Callers:
 *     ??$_Assign_range@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@0Uforward_iterator_tag@1@@Z @ 0x18014BB08 (--$_Assign_range@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@@WRL@M.c)
 *     ??0?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18014C088 (--0-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Micros.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180025304 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

__int64 *__fastcall std::_Uninitialized_copy<Microsoft::WRL::ComPtr<InputSite> *,std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  signed __int64 v5; // rdi

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = (char *)a1 - (char *)a3;
    do
    {
      *v3 = *(__int64 *)((char *)v3 + v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v3++);
    }
    while ( (__int64 *)((char *)v3 + v5) != a2 );
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v3, v3);
  return v3;
}
