/*
 * XREFs of sub_1409F68DC @ 0x1409F68DC
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_14026A0BC @ 0x14026A0BC (sub_14026A0BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14082BB8C @ 0x14082BB8C (sub_14082BB8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F68DC(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  size_t v4; // rsi
  int v6; // ebx
  unsigned __int16 v7; // ax
  size_t v8; // r8
  unsigned int v10; // [rsp+24h] [rbp-24h]
  size_t Size[4]; // [rsp+28h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  Size[0] = 0LL;
  Src = 0LL;
  if ( a2 >= 4 )
  {
    v10 = *a1;
    v7 = sub_14026A0BC(*((_QWORD *)KeGetCurrentThread() + 23));
    v6 = sub_14082BB8C(v7, v10, &Src, Size);
    if ( v6 >= 0 )
    {
      v8 = Size[0];
      *a3 = Size[0];
      if ( v8 <= 0xFFFFFFFF )
      {
        if ( v4 >= v8 )
        {
          memmove(a1, Src, v8);
          v6 = 0;
        }
        else
        {
          v6 = -1073741789;
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
  }
  else
  {
    v6 = -1073741306;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v6;
}
