/*
 * XREFs of sub_140417378 @ 0x140417378
 * Callers:
 *     sub_140657894 @ 0x140657894 (sub_140657894.c)
 *     sub_1407C6580 @ 0x1407C6580 (sub_1407C6580.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140417378(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 12);
  result = 0LL;
  if ( !v3 )
    KeBugCheckEx(0x51u, 4uLL, 6uLL, a2, a3);
  if ( v3 + 1 < v3 )
    return 3221225621LL;
  *(_DWORD *)(a1 + 12) = v3 + 1;
  return result;
}
