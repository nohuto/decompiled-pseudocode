/*
 * XREFs of sub_18009E320 @ 0x18009E320
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18009E0F0 @ 0x18009E0F0 (sub_18009E0F0.c)
 */

__int64 __fastcall sub_18009E320(__int64 a1, int a2, __int64 a3)
{
  unsigned int i; // ebx

  *(_QWORD *)a1 = &Spectre::Engine::SamplerState::`vftable';
  sub_18000C8C8(a1 + 8, 256LL, 6LL);
  sub_18000C8C8(a1 + 1544, 256LL, 6LL);
  sub_18000C8C8(a1 + 3080, 256LL, 6LL);
  *(_DWORD *)(a1 + 4616) = a2;
  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    if ( _bittest(&a2, i) )
    {
      sub_18009E0F0((__int64 *)(((unsigned __int64)i << 8) + a1 + 3080), a3 + 448);
      a2 = *(_DWORD *)(a1 + 4616);
    }
  }
  return a1;
}
