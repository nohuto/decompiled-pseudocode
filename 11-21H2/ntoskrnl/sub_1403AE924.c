/*
 * XREFs of sub_1403AE924 @ 0x1403AE924
 * Callers:
 *     sub_1403B8DA0 @ 0x1403B8DA0 (sub_1403B8DA0.c)
 *     sub_140508F00 @ 0x140508F00 (sub_140508F00.c)
 *     sub_14051DF24 @ 0x14051DF24 (sub_14051DF24.c)
 *     sub_140A505D4 @ 0x140A505D4 (sub_140A505D4.c)
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 * Callees:
 *     sub_1403B0A04 @ 0x1403B0A04 (sub_1403B0A04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403AE924(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // ecx
  unsigned int v6; // ecx
  int v8; // ecx

  if ( (*(_DWORD *)(BugCheckParameter3 + 232) & 1) == 0 )
  {
    v3 = *(_DWORD *)(BugCheckParameter3 + 228);
    if ( (v3 & 1) == 0 )
    {
LABEL_3:
      v4 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 16), a2);
      if ( v4 >= 0 )
        goto LABEL_4;
      sub_14051E038(BugCheckParameter3, 5, v4, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 520);
LABEL_22:
      v5 = *(_DWORD *)(BugCheckParameter3 + 232);
      goto LABEL_23;
    }
    if ( !dword_140C4EFC8 || (unsigned int)dword_140C4EFC8 > *(_DWORD *)(BugCheckParameter3 + 288) )
      dword_140C4EFC8 = *(_DWORD *)(BugCheckParameter3 + 288);
    if ( !(_DWORD)dword_140C4EFC4 || (unsigned int)dword_140C4EFC4 > *(_DWORD *)(BugCheckParameter3 + 292) )
      LODWORD(dword_140C4EFC4) = *(_DWORD *)(BugCheckParameter3 + 292);
    v8 = v3 & 0x400;
    if ( byte_140C4AD58 )
    {
      if ( !v8 )
      {
        if ( !byte_140C4AD7E )
          goto LABEL_14;
LABEL_20:
        sub_14051E038(
          BugCheckParameter3,
          25,
          -1073741811,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
          495);
        goto LABEL_22;
      }
      if ( !byte_140C4AD7E )
        goto LABEL_20;
    }
LABEL_14:
    v4 = sub_1403B0A04(BugCheckParameter3);
    if ( v4 < 0 )
    {
LABEL_4:
      v5 = *(_DWORD *)(BugCheckParameter3 + 232);
      if ( v4 >= 0 )
      {
        v6 = v5 & 0xFFFFFFFC | 1;
LABEL_6:
        *(_DWORD *)(BugCheckParameter3 + 232) = v6;
        return (unsigned int)v4;
      }
LABEL_23:
      v6 = v5 & 0xFFFFFFFC | 2;
      goto LABEL_6;
    }
    goto LABEL_3;
  }
  return 0LL;
}
