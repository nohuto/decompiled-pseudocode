/*
 * XREFs of sub_14077DBE8 @ 0x14077DBE8
 * Callers:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140771CD0 @ 0x140771CD0 (sub_140771CD0.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077DD78 @ 0x14077DD78 (sub_14077DD78.c)
 *     sub_14077DF24 @ 0x14077DF24 (sub_14077DF24.c)
 */

__int64 __fastcall sub_14077DBE8(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 *a8,
        int a9,
        ULONG *a10,
        int a11)
{
  __int64 v12; // rbp
  __int64 *v14; // rdi
  int v15; // esi
  int v16; // ebx
  HANDLE Handle[2]; // [rsp+60h] [rbp-38h] BYREF

  v12 = a4;
  Handle[0] = 0LL;
  if ( (_WORD)a11 )
    return (unsigned int)-1073741811;
  v14 = a8;
  if ( a8 )
  {
    v15 = a9;
    v14 = (__int64 *)(-(__int64)(a9 != 0) & (unsigned __int64)a8);
  }
  else
  {
    v15 = 0;
  }
  *a7 = 0;
  *a10 = 0;
  v16 = sub_14077DD78(a1, a2, a3, a4, a5, a6, (__int64)a7, (__int64)v14, v15, (__int64)a10, a11);
  if ( v16 == -1073741802 )
  {
    if ( !v12 )
    {
      v16 = sub_14077C924(a1, a2, a3, 33554433, 0, (__int64)Handle);
      if ( v16 < 0 )
        goto LABEL_5;
      LODWORD(v12) = Handle[0];
    }
    v16 = sub_14077DF24(a1, v12, a5, a6, (__int64)a7, (__int64)v14, v15, (__int64)a10);
    if ( v16 >= 0 )
      v16 = sub_140771CD0(v14, *a10, *a7);
  }
LABEL_5:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v16;
}
