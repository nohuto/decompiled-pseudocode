/*
 * XREFs of ?RebuildInternal@CompositionContainerShape@Composition@UI@Windows@@UEAAJXZ @ 0x180033E30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x180033F34 (-reserve@-$vector@IV-$allocator@I@std@@@std@@QEAAX_K@Z.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x180041510 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionContainerShape::RebuildInternal(
        Windows::UI::Composition::CompositionContainerShape *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rsi
  __int64 i; // rbx
  unsigned int v8; // ecx
  unsigned int *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned int *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v13; // [rsp+40h] [rbp-10h]
  unsigned __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  void *v15; // [rsp+78h] [rbp+28h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 144) - *(_QWORD *)(v2 + 136);
    v13 = 0LL;
    *(_OWORD *)v12 = 0LL;
    std::vector<unsigned int>::reserve(v12, (unsigned int)(v3 >> 3));
    v4 = *((_QWORD *)this + 4);
    v5 = v12[1];
    v6 = *(_QWORD *)(v4 + 144);
    for ( i = *(_QWORD *)(v4 + 136); i != v6; i += 8LL )
    {
      v8 = *(_DWORD *)(*(_QWORD *)i + 128LL);
      LODWORD(v14) = v8;
      if ( v5 == v13 )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(v12, v5, &v14);
        v5 = v12[1];
      }
      else
      {
        *v5++ = v8;
        v12[1] = v5;
      }
    }
    v9 = v12[0];
    DirectComposition::CDevice::ResourceSetReferenceArrayProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this - 19) + 456LL),
      *((_DWORD *)this - 12),
      1u,
      v12[0],
      v5 - v12[0]);
    if ( v9 )
    {
      v15 = v9;
      v10 = ((char *)v13 - (char *)v9) & 0xFFFFFFFFFFFFFFFCuLL;
      v14 = v10;
      if ( v10 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v15, &v14);
        v10 = v14;
        v9 = (unsigned int *)v15;
      }
      operator delete(v9, v10);
    }
  }
  *((_BYTE *)this + 16) &= ~1u;
  return 0LL;
}
