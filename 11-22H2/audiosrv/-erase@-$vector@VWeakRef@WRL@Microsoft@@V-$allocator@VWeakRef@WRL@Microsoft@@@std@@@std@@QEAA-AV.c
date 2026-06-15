/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001262C
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180011C08 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180012540 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180013C14 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E8750 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@QEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x1800126A0 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 **result; // rax
  __int64 *v9; // r15
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a4;
  if ( a3 != a4 )
  {
    v9 = *(__int64 **)(a1 + 8);
    v10 = a3;
    if ( a4 != v9 )
    {
      do
      {
        v11 = 0LL;
        if ( &v13 != v4 )
        {
          v11 = *v4;
          *v4 = 0LL;
        }
        v12 = *v10;
        *v10 = v11;
        v13 = v12;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
        ++v10;
        ++v4;
      }
      while ( v4 != v9 );
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>>(v10, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v10;
  }
  result = a2;
  *a2 = a3;
  return result;
}
