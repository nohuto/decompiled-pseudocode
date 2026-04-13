/*
 * XREFs of ?do_out@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x180072010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_out(
        __int64 a1,
        _BYTE *a2,
        _WORD *a3,
        __int64 a4,
        _QWORD *a5,
        _BYTE *a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v10; // rdi
  unsigned int v11; // ebx
  _WORD *v12; // r8
  unsigned int v13; // r11d
  char v14; // r9
  int v15; // r10d
  int v16; // ecx

  v10 = a6;
  v11 = 0;
  *a5 = a3;
  *a8 = a6;
  while ( 1 )
  {
    v12 = (_WORD *)*a5;
    if ( *a5 == a4 || v10 == a7 )
      break;
    v13 = *(unsigned __int16 *)*a5;
    if ( v13 >= 0x80 )
    {
      if ( v13 >= 0x800 )
      {
        v15 = 2;
        v14 = (v13 >> 12) | 0xE0;
      }
      else
      {
        v15 = 1;
        v14 = (v13 >> 6) | 0xC0;
      }
    }
    else
    {
      v14 = *(_WORD *)*a5;
      v15 = 0;
    }
    if ( !*a2 )
    {
      *a2 = 1;
      v12 = (_WORD *)*a5;
    }
    if ( (__int64)&a7[-*a8] < (unsigned int)(v15 + 1) )
      break;
    *a5 = v12 + 1;
    *(_BYTE *)*a8 = v14;
    v10 = (_BYTE *)(*a8 + 1LL);
    *a8 = v10;
    if ( v15 )
    {
      v16 = 6 * v15;
      do
      {
        v16 -= 6;
        --v15;
        *v10 = (v13 >> v16) & 0x3F | 0x80;
        v10 = (_BYTE *)(*a8 + 1LL);
        *a8 = v10;
      }
      while ( v15 > 0 );
    }
  }
  LOBYTE(v11) = a3 == v12;
  return v11;
}
