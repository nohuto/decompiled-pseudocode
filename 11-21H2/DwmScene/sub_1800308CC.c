/*
 * XREFs of sub_1800308CC @ 0x1800308CC
 * Callers:
 *     sub_180037450 @ 0x180037450 (sub_180037450.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180030774 @ 0x180030774 (sub_180030774.c)
 */

__int64 __fastcall sub_1800308CC(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = sub_18001D684();
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::HighPerfClock>::`vftable';
    sub_180030774((_QWORD *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5[0] = v3 + 16;
  v6 = 0LL;
  v5[1] = v3;
  Mtx_init_in_situ((_Mtx_t)(a1 + 56), 2);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *(_QWORD *)(a1 + 136) = v3 + 16;
  *(_QWORD *)(a1 + 144) = v3;
  sub_180010910((__int64)v5);
  return sub_180010910((__int64)&v6);
}
