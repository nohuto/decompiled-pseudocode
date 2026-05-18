/*
 * XREFs of sub_180034C00 @ 0x180034C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180030750 @ 0x180030750 (sub_180030750.c)
 */

_QWORD *__fastcall sub_180034C00(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001D684();
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    sub_180030750((_QWORD *)(v3 + 16));
  }
  else
  {
    v4 = 0LL;
  }
  a2[1] = v4;
  *a2 = v4 + 16;
  v6 = 0LL;
  sub_180010910((__int64)&v6);
  return a2;
}
