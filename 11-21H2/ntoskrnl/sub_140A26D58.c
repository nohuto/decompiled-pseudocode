/*
 * XREFs of sub_140A26D58 @ 0x140A26D58
 * Callers:
 *     sub_140A26BE8 @ 0x140A26BE8 (sub_140A26BE8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14076A960 @ 0x14076A960 (sub_14076A960.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_140A26D58(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, _BYTE *a6, __int16 a7)
{
  int v11; // ebx
  int v12; // r10d
  char v13; // cl
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF

  v15[0] = 0LL;
  memset(&v15[2], 0, 0x40uLL);
  if ( a7 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = sub_14077DE44(a1, a3, v15);
    if ( v11 >= 0 )
    {
      if ( v15[0] )
      {
        LODWORD(v15[2]) = a4;
        HIDWORD(v15[4]) = v12;
        v11 = sub_14042A5E0(a1, a2);
        if ( v11 >= 0 )
        {
          v13 = v15[4];
          *a5 = v15[3];
          *a6 = v13;
          if ( v13 )
          {
            if ( a3 >= 7 )
              sub_14076A960(a1, a2);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)v11;
}
