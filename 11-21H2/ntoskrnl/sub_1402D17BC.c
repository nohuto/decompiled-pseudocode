/*
 * XREFs of sub_1402D17BC @ 0x1402D17BC
 * Callers:
 *     sub_1407460F8 @ 0x1407460F8 (sub_1407460F8.c)
 *     sub_1407468A0 @ 0x1407468A0 (sub_1407468A0.c)
 *     sub_140746B5C @ 0x140746B5C (sub_140746B5C.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_1408264C0 @ 0x1408264C0 (sub_1408264C0.c)
 *     sub_140837F88 @ 0x140837F88 (sub_140837F88.c)
 *     sub_140838DE4 @ 0x140838DE4 (sub_140838DE4.c)
 *     sub_140854148 @ 0x140854148 (sub_140854148.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_14099B8FC @ 0x14099B8FC (sub_14099B8FC.c)
 *     sub_14099BFB0 @ 0x14099BFB0 (sub_14099BFB0.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 *     sub_140B2C540 @ 0x140B2C540 (sub_140B2C540.c)
 *     sub_140B4DA1C @ 0x140B4DA1C (sub_140B4DA1C.c)
 *     sub_140B4DCBC @ 0x140B4DCBC (sub_140B4DCBC.c)
 * Callees:
 *     sub_140208BA0 @ 0x140208BA0 (sub_140208BA0.c)
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 */

__int64 sub_1402D17BC(_WORD *a1, const wchar_t *a2, ...)
{
  int v3; // ebx
  int v4; // eax
  size_t Count; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-30h] BYREF
  va_list Args; // [rsp+80h] [rbp+18h] BYREF

  va_start(Args, a2);
  Dest = 0LL;
  Count = 0LL;
  v3 = sub_140208BA0((__int64)a1, &Dest, &Count);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, a2, Args);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    *a1 = 2 * v4;
  }
  return (unsigned int)v3;
}
