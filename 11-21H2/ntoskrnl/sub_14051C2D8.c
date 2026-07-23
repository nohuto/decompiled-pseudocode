/*
 * XREFs of sub_14051C2D8 @ 0x14051C2D8
 * Callers:
 *     sub_14050E73C @ 0x14050E73C (sub_14050E73C.c)
 *     sub_14051C1B8 @ 0x14051C1B8 (sub_14051C1B8.c)
 *     sub_14051CB78 @ 0x14051CB78 (sub_14051CB78.c)
 *     sub_14051CBE4 @ 0x14051CBE4 (sub_14051CBE4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050F040 @ 0x14050F040 (sub_14050F040.c)
 *     sub_14051BF88 @ 0x14051BF88 (sub_14051BF88.c)
 *     sub_14051C060 @ 0x14051C060 (sub_14051C060.c)
 *     WheaRequestDeferredRecovery @ 0x140645B10 (WheaRequestDeferredRecovery.c)
 */

__int64 __fastcall sub_14051C2D8(__int64 a1, char a2, __int64 a3, int a4, __int16 a5, char a6, char a7, char a8)
{
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // ebx
  int v15; // eax

  v13 = sub_14051BF88();
  if ( v13 )
  {
    if ( !byte_140C4C450 )
    {
LABEL_12:
      *(_WORD *)(v13 + 58) = a5;
      *(_BYTE *)(v13 + 60) = a6;
      *(_BYTE *)(v13 + 61) = a7;
      *(_QWORD *)(v13 + 48) = a1;
      *(_BYTE *)(v13 + 62) = a8 & 1;
      *(_BYTE *)(v13 + 56) = a2;
      *(_QWORD *)(v13 + 64) = a3;
      *(_DWORD *)(v13 + 72) = a4;
      *(_DWORD *)(v13 + 76) = 1;
      if ( (unsigned __int8)WheaRequestDeferredRecovery(v13 + 8, v13 + 48) )
        return 0;
      sub_14051C060((_DWORD *)v13);
      return (unsigned int)-1073741757;
    }
    if ( a3 )
    {
      if ( !qword_140C4C500 )
      {
        v14 = -1073741823;
        goto LABEL_10;
      }
      v15 = sub_14042A5E0(a3, v12);
    }
    else
    {
      v15 = sub_14050F040(1);
    }
    v14 = v15;
LABEL_10:
    if ( v14 < 0 )
    {
      sub_14051C060((_DWORD *)v13);
      return (unsigned int)v14;
    }
    goto LABEL_12;
  }
  return (unsigned int)-1073741757;
}
