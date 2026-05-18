/*
 * XREFs of sub_180050D34 @ 0x180050D34
 * Callers:
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180037F54 @ 0x180037F54 (sub_180037F54.c)
 */

void __fastcall sub_180050D34(__int64 a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rsi
  void *v4; // rbx

  if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 >= 0x10 )
    {
      v3 = v2 | 0xF;
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        v3 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v3 < *(_QWORD *)(a1 + 24) )
      {
        v4 = (void *)sub_18001090C(v3 + 1);
        memcpy(v4, *(const void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
        sub_1800100E8(*(void **)a1, *(_QWORD *)(a1 + 24) + 1LL);
        *(_QWORD *)a1 = v4;
        *(_QWORD *)(a1 + 24) = v3;
      }
    }
    else
    {
      sub_180037F54((void **)a1);
    }
  }
}
