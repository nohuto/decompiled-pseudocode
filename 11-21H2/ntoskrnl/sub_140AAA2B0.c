/*
 * XREFs of sub_140AAA2B0 @ 0x140AAA2B0
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 * Callees:
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_140639960 @ 0x140639960 (sub_140639960.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 */

__int64 __fastcall sub_140AAA2B0(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rbx
  KSPIN_LOCK v2; // rdi
  _BYTE *v3; // r9
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned int i; // edx
  char v7; // cl
  __int16 v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+32h] [rbp+Ah]

  v1 = a1;
  v9 = 0;
  v10 = 0;
  v2 = qword_140D01468[3];
  v3 = (_BYTE *)v2;
  v4 = (_BYTE *)(v2 + 79);
  while ( *v1 )
  {
    if ( v3 < v4 )
    {
      sub_140639960(*v1, &v9);
      v5 = 0LL;
      for ( i = 0; i < 3; ++i )
      {
        v7 = *((_BYTE *)&v9 + v5);
        if ( v7 )
        {
          *v3++ = v7;
          if ( v5 >= 3 )
            sub_140502A3C();
          *((_BYTE *)&v9 + v5) = 0;
        }
        ++v5;
      }
      ++v1;
    }
    else
    {
      *v4 = 0;
      sub_140AAA418(v2);
      v3 = (_BYTE *)qword_140D01468[3];
    }
  }
  *v3 = 0;
  return sub_140AAA418(v2);
}
