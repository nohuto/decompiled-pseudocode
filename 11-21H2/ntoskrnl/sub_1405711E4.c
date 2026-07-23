/*
 * XREFs of sub_1405711E4 @ 0x1405711E4
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_1403DF020 @ 0x1403DF020 (sub_1403DF020.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_1405711E4(unsigned int *a1, size_t Size, _DWORD *a3)
{
  size_t v4; // r14
  int v6; // esi
  unsigned int v8; // eax

  v4 = (unsigned int)Size;
  v6 = sub_1403DF020();
  *a3 = 8;
  if ( (unsigned int)v4 < 4 )
    return 3221225476LL;
  memset(a1, 0, v4);
  if ( (v6 & 1) != 0 )
    *a1 |= 1u;
  if ( (v6 & 2) != 0 )
    *a1 |= 2u;
  if ( (v6 & 4) != 0 )
  {
    *a1 |= 4u;
    v8 = *a1 & 0xFFFFFFF7;
LABEL_11:
    *a1 = v8;
    goto LABEL_12;
  }
  if ( (v6 & 8) != 0 )
  {
    *a1 |= 8u;
    v8 = *a1 & 0xFFFFFFFB;
    goto LABEL_11;
  }
LABEL_12:
  if ( (v6 & 0x100) != 0 )
    *a1 |= 0x40u;
  if ( (v6 & 0x200) != 0 )
    *a1 |= 0x80u;
  if ( (v6 & 0x400) != 0 )
    *a1 |= 0x100u;
  if ( (v6 & 0x2000) != 0 )
    *a1 |= 0x200u;
  if ( (v6 & 0x4000) != 0 )
    *a1 |= 0x400u;
  if ( (v6 & 0x8000) != 0 )
    *a1 |= 0x800u;
  if ( (v6 & 0x800) != 0 )
    *a1 |= 0x1000u;
  if ( (v6 & 0x1000) != 0 )
    *a1 |= 0x2000u;
  if ( (v6 & 0x10000) != 0 )
    *a1 |= 0x20u;
  if ( (v6 & 0x20000) != 0 )
    *a1 |= 0x10u;
  if ( (v6 & 0x40000) != 0 )
    *a1 |= 0x4000u;
  if ( (v6 & 0x80000) != 0 )
    *a1 |= 0x8000u;
  return 0LL;
}
