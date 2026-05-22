/*
 * XREFs of ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x1801741CC
 * Callers:
 *     ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180172CB0 (-OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18013F064 (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801566F0 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_UNKNOWN **__fastcall InputAttemptedTargetManager::Unregister(__int64 a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  char *v3; // rdi
  __int64 *v5; // rbx
  char *i; // rsi
  char *v8; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(char **)(a1 + 24);
  v5 = *(__int64 **)(a1 + 16);
  if ( v5 != (__int64 *)v3 )
  {
    result = (_UNKNOWN **)*a2;
    do
    {
      if ( (_UNKNOWN **)*v5 == result )
        break;
      ++v5;
    }
    while ( v5 != (__int64 *)v3 );
    if ( v5 != (__int64 *)v3 )
    {
      for ( i = (char *)(v5 + 1); i != v3; i += 8 )
      {
        result = (_UNKNOWN **)*a2;
        if ( *(_QWORD *)i != *a2 )
          result = (_UNKNOWN **)Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(v5++, i);
      }
      if ( v5 != (__int64 *)v3 )
      {
        v8 = *(char **)(a1 + 24);
        while ( v3 != v8 )
        {
          Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(v5++, v3);
          v3 += 8;
        }
        result = (_UNKNOWN **)std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
                                v5,
                                *(__int64 **)(a1 + 24));
        *(_QWORD *)(a1 + 24) = v5;
      }
    }
  }
  return result;
}
