/*
 * XREFs of sub_1409F7240 @ 0x1409F7240
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1409F7240(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // r9d
  __int64 v6; // rcx
  unsigned __int16 v7; // r8
  unsigned __int16 v9; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp+18h]

  v10 = a3;
  if ( a2 >= 8 )
  {
    v6 = *a1;
    v5 = 0;
    v9 = 0;
    if ( qword_140C54EC0 )
    {
      v5 = sub_14042A5E0(v6, &v9);
      if ( v5 >= 0 )
      {
        v7 = 0;
        if ( word_140D05000 )
        {
          while ( *(_WORD *)qword_140D31700[v7] != v9 )
          {
            if ( ++v7 >= (unsigned __int16)word_140D05000 )
              goto LABEL_10;
          }
          v9 = v7;
        }
LABEL_10:
        if ( v7 >= (unsigned __int16)word_140D05000 )
          v5 = -1073741595;
      }
    }
    if ( v5 >= 0 )
      *((_WORD *)a1 + 2) = v9;
  }
  else
  {
    v5 = -1073741820;
  }
  if ( a3 )
    *a3 = 8;
  return (unsigned int)v5;
}
