/*
 * XREFs of sub_18008E620 @ 0x18008E620
 * Callers:
 *     sub_180048550 @ 0x180048550 (sub_180048550.c)
 *     sub_1800504B0 @ 0x1800504B0 (sub_1800504B0.c)
 *     sub_180051B50 @ 0x180051B50 (sub_180051B50.c)
 *     sub_180059110 @ 0x180059110 (sub_180059110.c)
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 *     sub_18009F2D0 @ 0x18009F2D0 (sub_18009F2D0.c)
 *     sub_1800A6E20 @ 0x1800A6E20 (sub_1800A6E20.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008E620(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  size_t v6; // r8

  v4 = (__int64 *)(a1 + 24);
  v5 = (__int64 *)(*(_QWORD *)a2 + 24LL);
  if ( v5 != v4 )
  {
    v6 = v4[2];
    if ( (unsigned __int64)v4[3] >= 0x10 )
      v4 = (__int64 *)*v4;
    sub_180012190(v5, v4, v6);
  }
  *(_BYTE *)(*(_QWORD *)a2 + 72LL) = *(_BYTE *)(a1 + 72);
  *(_DWORD *)(*(_QWORD *)a2 + 76LL) = *(_DWORD *)(a1 + 76);
  return sub_180010910(a2);
}
