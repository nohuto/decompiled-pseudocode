/*
 * XREFs of sub_14077C780 @ 0x14077C780
 * Callers:
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_1406DB388 @ 0x1406DB388 (sub_1406DB388.c)
 *     sub_140778DA4 @ 0x140778DA4 (sub_140778DA4.c)
 *     sub_14077BF70 @ 0x14077BF70 (sub_14077BF70.c)
 *     sub_140788300 @ 0x140788300 (sub_140788300.c)
 *     sub_140789E04 @ 0x140789E04 (sub_140789E04.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140955628 @ 0x140955628 (sub_140955628.c)
 *     sub_140955CA4 @ 0x140955CA4 (sub_140955CA4.c)
 *     sub_140955EF8 @ 0x140955EF8 (sub_140955EF8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_14077C780(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        _DWORD *Address,
        unsigned int Length,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-38h]

  *a9 = 0;
  v10 = 0;
  if ( Length >= Size + 20 && a6 == 20 )
  {
    LODWORD(v12) = 20;
    *(_QWORD *)((char *)&v12 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v12) = a3;
    ProbeForWrite(Address, Length, 4u);
    *(_OWORD *)Address = v12;
    Address[4] = 0;
    if ( Size )
      memmove(Address + 4, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
