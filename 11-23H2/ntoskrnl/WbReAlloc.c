/*
 * XREFs of WbReAlloc @ 0x1407E53DC
 * Callers:
 *     sub_140763138 @ 0x140763138 (sub_140763138.c)
 *     sub_140763F54 @ 0x140763F54 (sub_140763F54.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     WbAlloc @ 0x140763B78 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbReAlloc(PVOID P, size_t Size, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  unsigned int v7; // ebp
  int v8; // eax
  PVOID v9; // rbx
  unsigned int v10; // r15d
  PVOID Pa[5]; // [rsp+20h] [rbp-28h] BYREF

  Pa[0] = 0LL;
  v4 = Size;
  v7 = a3;
  v8 = WbAlloc(a3, Pa);
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
