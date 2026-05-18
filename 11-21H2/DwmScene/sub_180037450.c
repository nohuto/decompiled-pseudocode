/*
 * XREFs of sub_180037450 @ 0x180037450
 * Callers:
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_1800A2E10 @ 0x1800A2E10 (sub_1800A2E10.c)
 *     sub_1800A30A0 @ 0x1800A30A0 (sub_1800A30A0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180030598 @ 0x180030598 (sub_180030598.c)
 *     sub_1800308CC @ 0x1800308CC (sub_1800308CC.c)
 */

_QWORD *__fastcall sub_180037450(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = (_QWORD *)(sub_180030598(*a3) + 8);
  if ( sub_1800122B0(v4) )
  {
    v5 = sub_18001D684();
    v6 = v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::TweenManager>::`vftable';
      sub_1800308CC(v5 + 16);
    }
    else
    {
      v6 = 0LL;
    }
    v9[0] = *v4;
    *v4 = v6 + 16;
    v9[1] = v4[1];
    v10 = 0LL;
    v4[1] = v6;
    sub_180010910((__int64)v9);
    sub_180010910((__int64)&v10);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v7 = v4[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = v4[1];
  }
  *a2 = *v4;
  result = a2;
  a2[1] = v7;
  return result;
}
