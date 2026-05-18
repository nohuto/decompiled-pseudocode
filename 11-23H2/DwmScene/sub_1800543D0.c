/*
 * XREFs of sub_1800543D0 @ 0x1800543D0
 * Callers:
 *     sub_180054464 @ 0x180054464 (sub_180054464.c)
 *     sub_1800544A8 @ 0x1800544A8 (sub_1800544A8.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_1800543D0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::SamplerStateDesc>::`vftable';
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_OWORD *)(v2 + 48) = 0LL;
    *(_DWORD *)(v2 + 64) = 0;
    *(_QWORD *)(v2 + 16) = 1LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 1;
    *(_DWORD *)(v2 + 40) = 7;
    *(_DWORD *)(v2 + 60) = 0;
    *(_DWORD *)(v2 + 64) = 2139095039;
    *(_OWORD *)(v2 + 44) = xmmword_180106A08;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
