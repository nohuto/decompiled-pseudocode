/*
 * XREFs of sub_1405FEC4C @ 0x1405FEC4C
 * Callers:
 *     sub_1402D8724 @ 0x1402D8724 (sub_1402D8724.c)
 *     sub_140A800C4 @ 0x140A800C4 (sub_140A800C4.c)
 * Callees:
 *     sub_1405FEE84 @ 0x1405FEE84 (sub_1405FEE84.c)
 */

char __fastcall sub_1405FEC4C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rax

  if ( (qword_140D01450 & 0x800000000LL) != 0 )
  {
    v1 = sub_1405FEE84(268435484LL, a1);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 8) & 1) != 0 )
      {
        v4 = *(_QWORD *)(v2 + 88);
        if ( v4 )
        {
          *v3 = v4;
          *(_QWORD *)(v2 + 88) = qword_140C1A9A0;
        }
      }
    }
  }
  else
  {
    **(_QWORD **)(*(_QWORD *)(a1 + 48) + 64LL) = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 88) )
      *(_QWORD *)(a1 + 88) = qword_140C1A9A0;
  }
  return 1;
}
