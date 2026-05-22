/*
 * XREFs of ?AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001F90
 * Callers:
 *     ?AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001DB0 (-AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@34.c)
 *     ?AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z @ 0x180001E50 (-AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@P.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18005B3B4 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B68 (-GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV-$DynArray@PEAVCompositionL.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?SetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEAAXPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@@Z @ 0x18010C288 (-SetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEAAXPEAV-$DynArray@PEAVComposition.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::AddLight(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbx
  __int64 i; // rbx
  __int64 Sparse_ExcludedLightsWeak; // rbx
  unsigned int v9; // edx
  _QWORD *j; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rax
  struct CSparseStorage::DataInfo *SlotForData; // rax
  int v17; // esi
  int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // ecx
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v23; // [rsp+68h] [rbp+20h] BYREF

  v22 = a2;
  v3 = 0;
  if ( a3 == 1 )
  {
    Sparse_ExcludedLightsWeak = Windows::UI::Composition::Visual::GetSparse_ExcludedLightsWeak();
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 112);
    if ( (*(_DWORD *)(v6 + 4) & 0x80000) == 0 )
      goto LABEL_14;
    for ( i = v6 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    Sparse_ExcludedLightsWeak = *(_QWORD *)(i + 4);
  }
  if ( Sparse_ExcludedLightsWeak )
  {
    v9 = 0;
    for ( j = *(_QWORD **)Sparse_ExcludedLightsWeak; v9 < *(_DWORD *)(Sparse_ExcludedLightsWeak + 24); ++j )
    {
      if ( v22 == *j )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      ++v9;
    }
    goto LABEL_10;
  }
LABEL_14:
  ProcessHeap = GetProcessHeap();
  v15 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  Sparse_ExcludedLightsWeak = (__int64)v15;
  if ( !v15 )
  {
    v21 = -2147024882;
    v20 = 2280;
    v3 = -2147024882;
    goto LABEL_29;
  }
  *v15 = 0LL;
  v15[1] = 0LL;
  v15[2] = 0LL;
  *((_DWORD *)v15 + 6) = 0;
  if ( a3 == 1 )
  {
    Windows::UI::Composition::Visual::SetSparse_ExcludedLightsWeak(a1, v15);
  }
  else if ( v15 == (_QWORD *)`Windows::UI::Composition::Visual::SetSparse_LightsWeak'::`2'::sc_defaultValue )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) &= ~0x80000u;
  }
  else
  {
    SlotForData = CSparseStorage::FindSlotForData((CSparseStorage *)(a1 + 112), 0xDu, 8u);
    *(_QWORD *)((char *)SlotForData + 4) = Sparse_ExcludedLightsWeak;
    *(_DWORD *)SlotForData &= 0x8DFFFFFF;
    *(_DWORD *)SlotForData |= 0xD000000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) |= 0x80000u;
  }
LABEL_10:
  v11 = *(_DWORD *)(Sparse_ExcludedLightsWeak + 24);
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v17 = -2147024362;
    v19 = 181;
    v18 = -2147024362;
LABEL_27:
    v3 = v17;
    DoStackCaptureDirect(v18, v19);
    v20 = 2286;
    v21 = v17;
LABEL_29:
    DoStackCaptureDirect(v21, v20);
    return v3;
  }
  if ( v12 > *(_DWORD *)(Sparse_ExcludedLightsWeak + 20) )
  {
    v23 = &v22;
    v17 = DynArrayImpl<0>::Grow(Sparse_ExcludedLightsWeak, 8, 1, 0, (__int64)&v23);
    v18 = v17;
    if ( v17 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(Sparse_ExcludedLightsWeak + 24))++)
                + *(_QWORD *)Sparse_ExcludedLightsWeak) = *v23;
      return v3;
    }
    v19 = 192;
    goto LABEL_27;
  }
  *(_QWORD *)(*(_QWORD *)Sparse_ExcludedLightsWeak + 8LL * v11) = v22;
  *(_DWORD *)(Sparse_ExcludedLightsWeak + 24) = v12;
  return v3;
}
