/*
 * XREFs of sub_1800A3B10 @ 0x1800A3B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A1C3C @ 0x1800A1C3C (sub_1800A1C3C.c)
 */

__int64 __fastcall sub_1800A3B10(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  __int64 result; // rax

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    sub_1800A1C3C(*(_QWORD **)(a1 + 16), a2);
    return sub_18000B998(v2);
  }
  return result;
}
