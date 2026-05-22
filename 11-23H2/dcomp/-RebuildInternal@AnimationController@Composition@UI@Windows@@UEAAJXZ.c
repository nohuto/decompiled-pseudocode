/*
 * XREFs of ?RebuildInternal@AnimationController@Composition@UI@Windows@@UEAAJXZ @ 0x180034290
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x180033F34 (-reserve@-$vector@IV-$allocator@I@std@@@std@@QEAAX_K@Z.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x180041510 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::RebuildInternal(
        Windows::UI::Composition::AnimationController *this)
{
  __int64 v2; // rdx
  unsigned int *v3; // rdx
  __int64 v4; // rsi
  __int64 i; // rbx
  unsigned int v6; // ecx
  unsigned int *v8[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v9; // [rsp+40h] [rbp-10h]
  unsigned int v10; // [rsp+60h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 9) - *((_QWORD *)this + 8);
  v9 = 0LL;
  *(_OWORD *)v8 = 0LL;
  std::vector<unsigned int>::reserve((char *)v8, v2 >> 3);
  v3 = v8[1];
  v4 = *((_QWORD *)this + 9);
  for ( i = *((_QWORD *)this + 8); i != v4; i += 8LL )
  {
    v6 = *(_DWORD *)(*(_QWORD *)i + 128LL);
    v10 = v6;
    if ( v3 == v9 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(v8, v3, &v10);
      v3 = v8[1];
    }
    else
    {
      *v3++ = v6;
      v8[1] = v3;
    }
  }
  DirectComposition::CDevice::ResourceSetReferenceArrayProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this - 14) + 456LL),
    *((_DWORD *)this - 2),
    0,
    v8[0],
    v3 - v8[0]);
  *((_BYTE *)this + 16) &= ~1u;
  std::vector<unsigned int>::_Tidy(v8);
  return 0LL;
}
