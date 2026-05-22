/*
 * XREFs of ?RebuildInternal@CompositionGradientBrush@Composition@UI@Windows@@UEAAJXZ @ 0x180033C30
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x180033F34 (-reserve@-$vector@IV-$allocator@I@std@@@std@@QEAAX_K@Z.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180169E1C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrush::RebuildInternal(
        Windows::UI::Composition::CompositionGradientBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int *v5; // rdx
  const unsigned int *v6; // r9
  __int64 v7; // rsi
  __int64 i; // rdi
  unsigned int v9; // ecx
  const unsigned int *v10; // rax
  unsigned int *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v13; // [rsp+40h] [rbp-10h]
  unsigned int j; // [rsp+60h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 144) - *(_QWORD *)(v2 + 136);
    v13 = 0LL;
    *(_OWORD *)v12 = 0LL;
    std::vector<unsigned int>::reserve(v12, (unsigned int)(v3 >> 3));
    v4 = *((_QWORD *)this + 6);
    v5 = v12[1];
    v6 = v12[0];
    v7 = *(_QWORD *)(v4 + 144);
    for ( i = *(_QWORD *)(v4 + 136); i != v7; i += 8LL )
    {
      v9 = *(_DWORD *)(*(_QWORD *)i + 128LL);
      v10 = v6;
      for ( j = v9; v10 != v5; ++v10 )
      {
        if ( *v10 == v9 )
          break;
      }
      if ( v5 == v10 )
      {
        if ( v5 == v13 )
        {
          std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(v12, v5, &j);
          v5 = v12[1];
          v6 = v12[0];
        }
        else
        {
          *v5++ = v9;
          v12[1] = v5;
        }
      }
    }
    DirectComposition::CDevice::ResourceSetReferenceArrayProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this - 19) + 456LL),
      *((_DWORD *)this - 12),
      1u,
      v6,
      v5 - v6);
    std::vector<unsigned int>::_Tidy(v12);
  }
  *((_BYTE *)this + 16) &= ~1u;
  return 0LL;
}
