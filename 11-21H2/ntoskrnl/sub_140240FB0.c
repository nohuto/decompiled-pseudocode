/*
 * XREFs of sub_140240FB0 @ 0x140240FB0
 * Callers:
 *     sub_14035F344 @ 0x14035F344 (sub_14035F344.c)
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 *     sub_1405FA434 @ 0x1405FA434 (sub_1405FA434.c)
 *     sub_1405FCA9C @ 0x1405FCA9C (sub_1405FCA9C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140240FB0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int *v3; // r9
  int v4; // eax
  unsigned __int64 v5; // rcx

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v3 = (int *)(a1 + 1828);
  LOBYTE(v4) = -(char)*(_DWORD *)(a1 + 776);
  v5 = (-(__int64)((unsigned __int8)*(_DWORD *)(a1 + 776) != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
  do
  {
    if ( a2 )
    {
      v4 = *(v3 - 1);
      *a2 += v4;
    }
    if ( a3 )
    {
      v4 = *v3;
      *a3 += *v3;
    }
    v3 += 2;
    --v5;
  }
  while ( v5 );
  return v4;
}
