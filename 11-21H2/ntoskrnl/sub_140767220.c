/*
 * XREFs of sub_140767220 @ 0x140767220
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_1409404FC @ 0x1409404FC (sub_1409404FC.c)
 *     sub_1409473F0 @ 0x1409473F0 (sub_1409473F0.c)
 *     sub_140947628 @ 0x140947628 (sub_140947628.c)
 *     sub_140947A8C @ 0x140947A8C (sub_140947A8C.c)
 *     sub_140950DA4 @ 0x140950DA4 (sub_140950DA4.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

__int64 __fastcall sub_140767220(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 400) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (((unsigned __int16)v2 ^ (unsigned __int16)(a2 | v2)) & 0x347) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      sub_140772044(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 400);
      result = v2 ^ *(_DWORD *)(a1 + 400);
      if ( (((unsigned __int8)v2 ^ *(_BYTE *)(a1 + 400)) & 0x40) != 0 )
      {
        result = sub_140772044(v6, *(_QWORD *)(a1 + 48), 29LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 400);
      }
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 4) != 0 )
        return sub_140772044(v7, *(_QWORD *)(a1 + 48), 30LL);
    }
  }
  return result;
}
