/*
 * XREFs of sub_140763500 @ 0x140763500
 * Callers:
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 * Callees:
 *     sub_140764604 @ 0x140764604 (sub_140764604.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_1409536B0 @ 0x1409536B0 (sub_1409536B0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140763500(__int64 a1, int a2, int a3, PVOID *a4)
{
  __int64 Pool2; // rax
  int v9; // ebx
  int v10; // r8d

  Pool2 = ExAllocatePool2(256LL, 40LL, 1466986064LL);
  *a4 = (PVOID)Pool2;
  if ( Pool2 )
  {
    v9 = sub_14077DE70(a1, 0x7FFFFFFFLL, 1466986064LL, Pool2 + 16);
    if ( v9 >= 0 )
    {
      v9 = sub_140764604(a3, a2, v10, *(_DWORD *)a4 + 32, (__int64)*a4 + 24);
      if ( v9 >= 0 )
        return (unsigned int)v9;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  if ( *a4 )
  {
    sub_1409536B0(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
