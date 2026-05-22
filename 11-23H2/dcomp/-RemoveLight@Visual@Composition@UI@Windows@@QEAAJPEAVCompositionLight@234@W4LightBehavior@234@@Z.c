/*
 * XREFs of ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58
 * Callers:
 *     ?RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001950 (-RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImp.c)
 *     ?RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001A90 (-RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl.c)
 *     ?RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4LightBehavior@234@@Z @ 0x180001B20 (-RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4Ligh.c)
 *     ?RemoveSharedLight@Visual@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavior@234@@Z @ 0x18010B788 (-RemoveSharedLight@Visual@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavi.c)
 *     ?RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4LightBehavior@345@@Z @ 0x1801827A0 (-RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4L.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B68 (-GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV-$DynArray@PEAVCompositionL.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEAAXPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@@Z @ 0x18010C288 (-SetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEAAXPEAV-$DynArray@PEAVComposition.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::RemoveLight(__int64 a1, __int64 a2, int a3, const char *a4)
{
  __int64 v5; // r10
  __int64 v7; // rbx
  __int64 i; // rbx
  _DWORD *Sparse_ExcludedLightsWeak; // rbx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 j; // r8
  void *v14; // rdi
  HANDLE ProcessHeap; // rax
  CSparseStorage *v16; // rcx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v19; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2;
  if ( a3 == 1 )
  {
    Sparse_ExcludedLightsWeak = (_DWORD *)Windows::UI::Composition::Visual::GetSparse_ExcludedLightsWeak();
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 112);
    if ( (*(_DWORD *)(v7 + 4) & 0x80000) == 0 )
      goto LABEL_30;
    for ( i = v7 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    Sparse_ExcludedLightsWeak = *(_DWORD **)(i + 4);
  }
  if ( !Sparse_ExcludedLightsWeak )
LABEL_30:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x908,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      a4);
  v10 = Sparse_ExcludedLightsWeak[6];
  v11 = 0LL;
  for ( j = *(_QWORD *)Sparse_ExcludedLightsWeak; (unsigned int)v11 < v10; v11 = (unsigned int)(v11 + 1) )
  {
    if ( v5 == *(_QWORD *)(j + 8 * v11) )
      break;
  }
  if ( (_DWORD)v11 == v10 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x90E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      a4);
  if ( (unsigned int)v11 >= v10 )
  {
    DoStackCaptureDirect(-2147024809, 0x19Cu);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x911,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)0x80070057LL,
      v17);
    return 2147942487LL;
  }
  else
  {
    while ( (unsigned int)v11 < v10 - 1 )
    {
      *(_QWORD *)(j + 8 * v11) = *(_QWORD *)(j + 8LL * (unsigned int)(v11 + 1));
      v11 = (unsigned int)(v11 + 1);
      v10 = Sparse_ExcludedLightsWeak[6];
    }
    Sparse_ExcludedLightsWeak[6] = v10 - 1;
    if ( v10 == 1 )
    {
      v14 = *(void **)Sparse_ExcludedLightsWeak;
      if ( *(_QWORD *)Sparse_ExcludedLightsWeak != *((_QWORD *)Sparse_ExcludedLightsWeak + 1) )
      {
        if ( v14 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v14);
        }
        *(_QWORD *)Sparse_ExcludedLightsWeak = 0LL;
      }
      operator delete(Sparse_ExcludedLightsWeak, 0x20uLL);
      if ( a3 == 1 )
      {
        Windows::UI::Composition::Visual::SetSparse_ExcludedLightsWeak(a1, 0LL);
      }
      else
      {
        v19 = 0LL;
        v16 = (CSparseStorage *)(a1 + 112);
        if ( `Windows::UI::Composition::Visual::SetSparse_LightsWeak'::`2'::sc_defaultValue )
          CSparseStorage::SetData(v16, 0xDu, 8u, &v19);
        else
          *(_DWORD *)(*(_QWORD *)v16 + 4LL) &= ~0x80000u;
      }
    }
    return 0LL;
  }
}
