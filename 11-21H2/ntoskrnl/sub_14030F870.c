/*
 * XREFs of sub_14030F870 @ 0x14030F870
 * Callers:
 *     sub_140281480 @ 0x140281480 (sub_140281480.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402E4D70 @ 0x1402E4D70 (sub_1402E4D70.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_140350B40 @ 0x140350B40 (sub_140350B40.c)
 *     sub_14036E550 @ 0x14036E550 (sub_14036E550.c)
 *     sub_14036E5F0 @ 0x14036E5F0 (sub_14036E5F0.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14030F870(int *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  v8 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v8 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v9 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = v9 + 1;
      if ( v9 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
  {
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v11;
        if ( !v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    v6 = sub_140220C30(a1, a2);
  }
  v12 = (unsigned int)*a1;
  v13 = v12 & 0xFFFFFFFFBFFFFFFFuLL;
  if ( (v12 & 0xBFFFFFFF) != 0x80000000 )
  {
    do
    {
      if ( (v12 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( (++v6 & dword_140D0527C) == 0
        && (dword_140D0689C & 0x40) != 0
        && (unsigned __int8)sub_14039EA10(v13, v12, a3, a4) )
      {
        sub_14039D930(v6);
      }
      else
      {
        _mm_pause();
      }
      v12 = (unsigned int)*a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000000 );
  }
  return v6;
}
