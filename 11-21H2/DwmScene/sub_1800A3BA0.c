/*
 * XREFs of sub_1800A3BA0 @ 0x1800A3BA0
 * Callers:
 *     sub_1800A3E10 @ 0x1800A3E10 (sub_1800A3E10.c)
 *     sub_1800A6640 @ 0x1800A6640 (sub_1800A6640.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018350 @ 0x180018350 (sub_180018350.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_1800A3C8C @ 0x1800A3C8C (sub_1800A3C8C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800A3BA0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _OWORD v9[2]; // [rsp+28h] [rbp-20h] BYREF

  v4 = sub_18001D684();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    sub_1800A3C8C(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a2[1];
  }
  v6 = *a2;
  *(_QWORD *)&v9[0] = *a2;
  *((_QWORD *)&v9[0] + 1) = v5;
  v7 = a1[20];
  if ( v7 == a1[21] )
  {
    sub_180018350(a1 + 19, (char *)v7, v9);
  }
  else
  {
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v5;
    v9[0] = 0LL;
    a1[20] += 16LL;
  }
  sub_180010910((__int64)v9);
  return a2;
}
