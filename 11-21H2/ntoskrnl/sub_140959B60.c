/*
 * XREFs of sub_140959B60 @ 0x140959B60
 * Callers:
 *     sub_140945A10 @ 0x140945A10 (sub_140945A10.c)
 *     sub_140959BF0 @ 0x140959BF0 (sub_140959BF0.c)
 *     sub_140959DF4 @ 0x140959DF4 (sub_140959DF4.c)
 * Callees:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1403A01B0 @ 0x1403A01B0 (sub_1403A01B0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_1409588F0 @ 0x1409588F0 (sub_1409588F0.c)
 */

__int64 __fastcall sub_140959B60(ULONG_PTR BugCheckParameter2)
{
  struct _DEVICE_OBJECT *v2; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 300) == 779 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 0x20) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 0x20uLL, 0LL);
    sub_1402D25CC(*(_QWORD *)(BugCheckParameter2 + 32));
    v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32);
    *(_DWORD *)(BugCheckParameter2 + 704) &= ~0x20u;
    sub_1409588F0(6, v2);
    result = sub_14025B96C(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000000) != 0 )
    {
      sub_1403A01B0(*(_QWORD *)(BugCheckParameter2 + 32));
      return sub_14076FBEC(BugCheckParameter2, 0x1000000);
    }
  }
  return result;
}
