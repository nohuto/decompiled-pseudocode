/*
 * XREFs of sub_18002B970 @ 0x18002B970
 * Callers:
 *     sub_18002B9A8 @ 0x18002B9A8 (sub_18002B9A8.c)
 *     sub_18002BC20 @ 0x18002BC20 (sub_18002BC20.c)
 *     unknown_libname_22 @ 0x1800E5092 (unknown_libname_22.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_18002B970(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = (volatile signed __int32 *)a1[9];
  if ( v2 )
    sub_180010574(v2);
  return sub_180025BB0((__int64)(a1 + 1));
}
