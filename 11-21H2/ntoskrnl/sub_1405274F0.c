/*
 * XREFs of sub_1405274F0 @ 0x1405274F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405274F0(__int64 a1, ULONG_PTR *a2, int a3)
{
  ULONG_PTR v3; // rcx
  unsigned __int64 v5; // rax
  __int64 result; // rax

  v3 = a2[5];
  a2[5] = v3 | 0x8000000000000000uLL;
  if ( a3 >= 0 )
  {
    if ( byte_140C4A118 )
      goto LABEL_6;
    v5 = 0xC000000000000000uLL;
  }
  else
  {
    v5 = 0xA000000000000000uLL;
  }
  a2[5] = v5 | v3;
LABEL_6:
  result = sub_14042A5E0(1LL, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0x159u, 0x3102uLL, (int)result, (ULONG_PTR)a2, *a2);
  return result;
}
