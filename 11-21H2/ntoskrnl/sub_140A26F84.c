/*
 * XREFs of sub_140A26F84 @ 0x140A26F84
 * Callers:
 *     sub_140A26E60 @ 0x140A26E60 (sub_140A26E60.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 *     sub_140A279B4 @ 0x140A279B4 (sub_140A279B4.c)
 */

__int64 __fastcall sub_140A26F84(__int64 a1, __int64 a2, int a3, int a4)
{
  int v8; // ebx
  _QWORD v10[10]; // [rsp+30h] [rbp-58h] BYREF

  v10[0] = 0LL;
  memset(&v10[2], 0, 0x40uLL);
  if ( (_WORD)a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = sub_14077DE44(a1, a3, v10);
    if ( v8 >= 0 )
    {
      if ( v10[0] )
      {
        LODWORD(v10[2]) = a4;
        v8 = sub_14042A5E0(a1, a2);
        if ( v8 >= 0 && a3 >= 7 )
          sub_140A279B4(a1, a2, (unsigned int)a3);
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)v8;
}
