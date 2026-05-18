/*
 * XREFs of sub_18002858C @ 0x18002858C
 * Callers:
 *     sub_180027F40 @ 0x180027F40 (sub_180027F40.c)
 *     sub_180029590 @ 0x180029590 (sub_180029590.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_180036B84 @ 0x180036B84 (sub_180036B84.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_1800DD040 @ 0x1800DD040 (sub_1800DD040.c)
 * Callees:
 *     sub_1800297CC @ 0x1800297CC (sub_1800297CC.c)
 *     sub_18002C730 @ 0x18002C730 (sub_18002C730.c)
 */

_QWORD *__fastcall sub_18002858C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *result; // rax

  v4 = a3;
  sub_18002C730(a1 + 24);
  v7 = *(_QWORD *)(a1 + 248);
  if ( (*(_QWORD *)(a1 + 256) - v7) >> 4 <= v4 )
  {
    sub_1800297CC(v6, (unsigned int)v4);
    JUMPOUT(0x18002860CLL);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4 + 8);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4 + 8);
  }
  *a2 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4);
  result = a2;
  a2[1] = v8;
  return result;
}
