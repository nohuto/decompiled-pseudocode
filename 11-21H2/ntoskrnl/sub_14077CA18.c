/*
 * XREFs of sub_14077CA18 @ 0x14077CA18
 * Callers:
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_14077CA18(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        __int16 a8)
{
  int v12; // edx
  int v13; // r10d
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF

  v15[0] = 0LL;
  memset(&v15[2], 0, 0x40uLL);
  if ( a8 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v12 = sub_14077DE44(a1, a3, v15);
    if ( v12 >= 0 )
    {
      if ( v15[0] )
      {
        BYTE4(v15[2]) = a5;
        v15[3] = a6;
        LODWORD(v15[2]) = a4;
        HIDWORD(v15[4]) = v13;
        v12 = sub_14042A5E0(a1, a2);
        if ( v12 >= 0 )
          *a7 = v15[4];
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)v12;
}
