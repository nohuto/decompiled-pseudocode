/*
 * XREFs of sub_1406DD6DC @ 0x1406DD6DC
 * Callers:
 *     sub_1407E3E2C @ 0x1407E3E2C (sub_1407E3E2C.c)
 *     sub_1407E4178 @ 0x1407E4178 (sub_1407E4178.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406DD6DC(PVOID P, size_t Size, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi
  int v8; // eax
  PVOID v9; // rbx
  unsigned int v10; // r15d
  PVOID Pa[5]; // [rsp+20h] [rbp-28h] BYREF

  Pa[0] = 0LL;
  v4 = Size;
  v7 = a3;
  v8 = sub_1407E3010(a3, Pa);
  v9 = Pa[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( P )
    {
      if ( v4 )
      {
        if ( v7 >= v4 )
          v7 = v4;
        memmove(Pa[0], P, v7);
      }
      ExFreePoolWithTag(P, 0);
    }
    if ( a4 )
    {
      *a4 = v9;
      v9 = 0LL;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
