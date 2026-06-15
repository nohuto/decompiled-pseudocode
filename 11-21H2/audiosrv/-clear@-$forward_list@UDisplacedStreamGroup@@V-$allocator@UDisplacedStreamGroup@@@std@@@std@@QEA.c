/*
 * XREFs of ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x180117994
 * Callers:
 *     ??1?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ @ 0x1801138B4 (--1-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ.c)
 *     ??1CBtAudioResourceManager@@UEAA@XZ @ 0x18011397C (--1CBtAudioResourceManager@@UEAA@XZ.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

void __fastcall std::forward_list<DisplacedStreamGroup>::clear(_QWORD **a1)
{
  _QWORD *v1; // rbx
  SaDeviceParams *v2; // rcx
  _QWORD *v3; // rsi

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (SaDeviceParams *)v1[2];
      v3 = (_QWORD *)*v1;
      if ( v2 )
        SaDeviceParams::`scalar deleting destructor'(v2);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1 + 1);
      std::_Deallocate<16,0>(v1, 0x18uLL);
      v1 = v3;
    }
    while ( v3 );
  }
}
