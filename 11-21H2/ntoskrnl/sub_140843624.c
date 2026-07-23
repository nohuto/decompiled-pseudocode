/*
 * XREFs of sub_140843624 @ 0x140843624
 * Callers:
 *     sub_1408434E0 @ 0x1408434E0 (sub_1408434E0.c)
 * Callees:
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140843624(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // r9

  v8 = sub_14079499C(a4, a5);
  if ( a5 )
  {
    v9 = 0;
    while ( v8 != *(_DWORD *)(32LL * v9 + a3 + 584) )
    {
      if ( ++v9 >= 0x18u )
        goto LABEL_5;
    }
    *a1 = *(_QWORD *)(32LL * v9 + a3 + 600);
    *a2 = *(_DWORD *)(32 * (v9 + 19LL) + a3);
    return *(_QWORD *)(32LL * v9 + a3 + 592);
  }
  else
  {
LABEL_5:
    *a2 = 0;
    return 0LL;
  }
}
