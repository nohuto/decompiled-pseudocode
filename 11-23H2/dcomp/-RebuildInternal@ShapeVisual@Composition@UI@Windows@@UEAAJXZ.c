/*
 * XREFs of ?RebuildInternal@ShapeVisual@Composition@UI@Windows@@UEAAJXZ @ 0x180033D40
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x180033F34 (-reserve@-$vector@IV-$allocator@I@std@@@std@@QEAAX_K@Z.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x180041510 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ShapeVisual::RebuildInternal(Windows::UI::Composition::ShapeVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rsi
  __int64 i; // rdi
  unsigned int v8; // ecx
  unsigned int *v10[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v11; // [rsp+40h] [rbp-10h]
  unsigned int v12; // [rsp+60h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 144) - *(_QWORD *)(v2 + 136);
    v11 = 0LL;
    *(_OWORD *)v10 = 0LL;
    std::vector<unsigned int>::reserve(v10, (unsigned int)(v3 >> 3));
    v4 = *((_QWORD *)this + 4);
    v5 = v10[1];
    v6 = *(_QWORD *)(v4 + 144);
    for ( i = *(_QWORD *)(v4 + 136); i != v6; i += 8LL )
    {
      v8 = *(_DWORD *)(*(_QWORD *)i + 128LL);
      v12 = v8;
      if ( v5 == v11 )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(v10, v5, &v12);
        v5 = v10[1];
      }
      else
      {
        *v5++ = v8;
        v10[1] = v5;
      }
    }
    DirectComposition::CDevice::ResourceSetReferenceArrayProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this - 36) + 456LL),
      *((_DWORD *)this - 46),
      0x34u,
      v10[0],
      v5 - v10[0]);
    std::vector<unsigned int>::_Tidy(v10);
  }
  *((_BYTE *)this + 16) &= ~1u;
  return 0LL;
}
