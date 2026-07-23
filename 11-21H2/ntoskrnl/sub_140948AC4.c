/*
 * XREFs of sub_140948AC4 @ 0x140948AC4
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_140948594 @ 0x140948594 (sub_140948594.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140948AC4(__int64 a1, __int64 a2, unsigned int ***a3)
{
  __int64 *Pool2; // rax
  unsigned int v7; // ebx
  int v8; // eax

  Pool2 = (__int64 *)ExAllocatePool2(256LL, 16LL, 1198550608LL);
  *a3 = (unsigned int **)Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
LABEL_8:
    sub_140948594(*a3);
    *a3 = 0LL;
    return v7;
  }
  v7 = sub_14077B0A4(1LL, a1, Pool2);
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741772 )
    goto LABEL_8;
  v8 = sub_14077B0A4(6LL, a2, (__int64 *)*a3 + 1);
  v7 = v8;
  if ( v8 == -1073741772 )
  {
    return 0;
  }
  else if ( v8 < 0 )
  {
    goto LABEL_8;
  }
  return v7;
}
