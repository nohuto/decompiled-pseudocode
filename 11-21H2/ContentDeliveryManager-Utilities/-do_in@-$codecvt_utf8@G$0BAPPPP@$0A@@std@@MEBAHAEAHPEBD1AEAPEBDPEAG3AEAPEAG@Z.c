/*
 * XREFs of ?do_in@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x18007BC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_in(
        __int64 a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned int v8; // ebx
  __int64 v10; // rax
  unsigned __int8 *v12; // r10
  unsigned __int8 v13; // al
  unsigned int v14; // r9d
  char v15; // al
  int v16; // r8d
  bool v17; // cf
  unsigned __int8 *v18; // r10

  v8 = 0;
  v10 = a6;
  *a5 = a3;
  *a8 = a6;
  v12 = *a5;
  if ( *a5 != a4 )
  {
    while ( 1 )
    {
      if ( v10 == a7 )
        goto LABEL_22;
      v13 = *v12;
      if ( *v12 >= 0x80u )
        break;
      v14 = *v12;
      *a5 = v12 + 1;
LABEL_18:
      if ( !*a2 )
        *a2 = 1;
      if ( v14 > 0x10FFFF )
        return 2LL;
      *(_WORD *)*a8 = v14;
      *a8 += 2LL;
      v12 = *a5;
      v10 = *a8;
      if ( *a5 == a4 )
        goto LABEL_22;
    }
    if ( v13 < 0xC0u )
    {
      *a5 = v12 + 1;
      return 2LL;
    }
    if ( v13 >= 0xE0u )
    {
      if ( v13 >= 0xF0u )
      {
        if ( v13 >= 0xF8u )
        {
          v17 = v13 < 0xFCu;
          v15 = 3;
          v16 = 4;
          if ( !v17 )
            v16 = 5;
        }
        else
        {
          v15 = 7;
          v16 = 3;
        }
      }
      else
      {
        v15 = 15;
        v16 = 2;
      }
    }
    else
    {
      v15 = 31;
      v16 = 1;
    }
    v14 = (unsigned __int8)(v15 & *v12);
    if ( a4 - v12 >= (unsigned int)(v16 + 1) )
    {
      v18 = v12 + 1;
      *a5 = v18;
      while ( (unsigned __int8)(*v18 + 0x80) <= 0x3Fu )
      {
        --v16;
        v14 = (v14 << 6) | *v18++ & 0x3F;
        *a5 = v18;
        if ( v16 <= 0 )
          goto LABEL_18;
      }
      return 2LL;
    }
  }
LABEL_22:
  LOBYTE(v8) = a3 == v12;
  return v8;
}
