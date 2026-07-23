/*
 * XREFs of sub_1402FF4D0 @ 0x1402FF4D0
 * Callers:
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 * Callees:
 *     sub_140248E38 @ 0x140248E38 (sub_140248E38.c)
 *     sub_14024D740 @ 0x14024D740 (sub_14024D740.c)
 */

__int64 __fastcall sub_1402FF4D0(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR j; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 i; // [rsp+20h] [rbp-18h] BYREF

  v3 = qword_140C2AD50;
  for ( i = 0LL; (ULONG_PTR *)v3 != &qword_140C2AD50; v3 = *(_QWORD *)v3 )
  {
    if ( *(_BYTE *)(v3 + 132) )
    {
      v4 = *(_QWORD *)(v3 + 176);
      v5 = *(_QWORD *)(v3 + 160);
      if ( v4 != v5 )
      {
        WORD4(i) = *(_WORD *)(v3 + 184);
        if ( WORD4(i) == *(_WORD *)(v3 + 168) )
          v8 = v4 & ~v5;
        else
          v8 = v4;
        *(_QWORD *)&i = v8;
        sub_140248E38((__int64)&i, 0, a3);
      }
    }
  }
  for ( j = qword_140C2AD50; (ULONG_PTR *)j != &qword_140C2AD50; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 132) && *(_QWORD *)(j + 176) != *(_QWORD *)(j + 160) )
    {
      sub_14024D740(j);
      WORD4(i) = *(_WORD *)(j + 184);
      if ( *(_WORD *)(j + 168) == WORD4(i) )
        v10 = *(_QWORD *)(j + 160) & ~*(_QWORD *)(j + 176);
      else
        v10 = *(_QWORD *)(j + 160);
      *(_QWORD *)&i = v10;
      sub_140248E38((__int64)&i, 1, v9);
      *(_WORD *)(j + 168) = *(_WORD *)(j + 184);
      *(_QWORD *)(j + 160) = *(_QWORD *)(j + 176);
    }
  }
  return 0LL;
}
