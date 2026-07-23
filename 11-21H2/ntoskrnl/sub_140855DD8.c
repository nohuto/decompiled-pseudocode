/*
 * XREFs of sub_140855DD8 @ 0x140855DD8
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140855E78 @ 0x140855E78 (sub_140855E78.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140855DD8(void *a1, unsigned int a2, _DWORD *a3)
{
  size_t v4; // rdi
  int v6; // ebx
  size_t v7; // r8
  size_t Size[4]; // [rsp+28h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  Size[0] = 0LL;
  Src = 0LL;
  v6 = sub_140855E78(&Src, Size);
  if ( v6 >= 0 )
  {
    v7 = Size[0];
    *a3 = Size[0];
    if ( v7 > 0xFFFFFFFF )
    {
      v6 = -1073741670;
    }
    else if ( v7 > v4 )
    {
      v6 = -1073741789;
    }
    else
    {
      memmove(a1, Src, v7);
      v6 = 0;
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v6;
}
