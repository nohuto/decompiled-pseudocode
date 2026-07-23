/*
 * XREFs of sub_140697384 @ 0x140697384
 * Callers:
 *     sub_14069726C @ 0x14069726C (sub_14069726C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     sub_140699D9C @ 0x140699D9C (sub_140699D9C.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 */

__int64 __fastcall sub_140697384(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned int a8,
        _DWORD *a9,
        __int16 a10)
{
  signed int v14; // eax
  int v15; // r9d
  signed int v16; // ebx
  __int64 v17; // r8
  unsigned int v18; // eax
  int v19; // edx
  signed int v20; // eax
  unsigned int v21; // edx
  unsigned int v23; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+54h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v23 = 0;
  v24 = 0;
  if ( a10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a9 = 0;
    if ( a4 || (v16 = sub_14077C924(a1, a2, a3, 33554433, 0, (__int64)&Handle), v16 >= 0) )
    {
      v14 = sub_140699D9C(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)&v23);
      v16 = v14;
      if ( !v14 || (unsigned int)(v14 + 1073741790) <= 1 )
      {
        if ( v23 >= a8 )
        {
          v17 = 0LL;
          v18 = 0;
        }
        else
        {
          v17 = a7 + 20LL * v23;
          v18 = a8 - v23;
        }
        v19 = (int)Handle;
        LOBYTE(v15) = a6;
        if ( a4 )
          v19 = a4;
        v20 = sub_140698AAC(a1, v19, a5, v15, v17, v18, (__int64)&v24);
        v16 = v20;
        if ( !v20 || (unsigned int)(v20 + 1073741790) <= 1 )
        {
          v21 = v23 + v24;
          *a9 = v23 + v24;
          v16 = a8 < v21 ? 0xC0000023 : 0;
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v16;
}
