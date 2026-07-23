/*
 * XREFs of sub_140AAA178 @ 0x140AAA178
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 *     sub_140AA9C94 @ 0x140AA9C94 (sub_140AA9C94.c)
 *     sub_140AAA09C @ 0x140AAA09C (sub_140AAA09C.c)
 * Callees:
 *     sub_140639960 @ 0x140639960 (sub_140639960.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 */

__int64 __fastcall sub_140AAA178(char *a1)
{
  char *v1; // rbx
  PKSPIN_LOCK v2; // r10
  char *v3; // r9
  char *v4; // rax
  char v5; // al
  __int64 v6; // rcx
  char *v7; // rdx
  PKSPIN_LOCK v8; // rcx
  __int16 v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+32h] [rbp+Ah]

  v1 = a1;
  v2 = qword_140D01468 + 3;
  v3 = (char *)qword_140D01468[3];
  if ( *a1 )
  {
    while ( 1 )
    {
      v4 = (char *)(*v2 + 79);
      if ( v3 < v4 )
        break;
      *v4 = 0;
      sub_140AAA418(*v2);
      v2 = qword_140D01468 + 3;
      v3 = (char *)qword_140D01468[3];
LABEL_37:
      if ( !*v1 )
        goto LABEL_38;
    }
    v5 = *v1;
    if ( *v1 >= 0 )
      goto LABEL_35;
    if ( (unsigned __int8)v5 > 0xC0u )
    {
      if ( v5 == -60 )
      {
        v5 = 45;
        goto LABEL_35;
      }
      if ( (unsigned __int8)v5 <= 0xC7u )
        goto LABEL_16;
      if ( (unsigned __int8)v5 <= 0xC9u )
        goto LABEL_33;
      if ( v5 == -51 )
      {
        v5 = 61;
        goto LABEL_35;
      }
      if ( (unsigned __int8)v5 <= 0xD8u )
        goto LABEL_16;
      if ( (unsigned __int8)v5 > 0xDAu )
      {
        if ( v5 == -37 )
          goto LABEL_31;
        if ( (unsigned __int8)v5 > 0xDFu )
          goto LABEL_16;
        goto LABEL_30;
      }
    }
    else if ( (unsigned __int8)v5 < 0xBFu )
    {
      if ( (unsigned __int8)v5 < 0xA9u )
        goto LABEL_16;
      if ( (unsigned __int8)v5 > 0xAAu )
      {
        if ( v5 == -80 )
        {
LABEL_21:
          v5 = 124;
LABEL_35:
          *v3++ = v5;
LABEL_36:
          ++v1;
          goto LABEL_37;
        }
        if ( v5 != -79 )
        {
          if ( v5 != -78 )
          {
            if ( v5 != -77 && v5 != -70 )
            {
              if ( (unsigned __int8)v5 <= 0xBAu || (unsigned __int8)v5 > 0xBCu )
              {
LABEL_16:
                v10 = 0;
                v11 = 0;
                sub_140639960(*((_WORD *)qword_140041E80 + (v5 & 0x7F)), &v10);
                v6 = 3LL;
                v7 = (char *)&v10;
                do
                {
                  if ( *v7 )
                    *v3++ = *v7;
                  ++v7;
                  --v6;
                }
                while ( v6 );
                goto LABEL_36;
              }
              goto LABEL_33;
            }
            goto LABEL_21;
          }
LABEL_31:
          v5 = 35;
          goto LABEL_35;
        }
LABEL_30:
        v5 = 37;
        goto LABEL_35;
      }
    }
LABEL_33:
    v5 = 43;
    goto LABEL_35;
  }
LABEL_38:
  v8 = qword_140D01468;
  *v3 = 0;
  return sub_140AAA418(v8[3]);
}
