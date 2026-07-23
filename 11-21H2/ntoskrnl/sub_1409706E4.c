/*
 * XREFs of sub_1409706E4 @ 0x1409706E4
 * Callers:
 *     sub_14059E4B0 @ 0x14059E4B0 (sub_14059E4B0.c)
 * Callees:
 *     sub_14027034C @ 0x14027034C (sub_14027034C.c)
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 */

__int64 __fastcall sub_1409706E4(__int64 a1)
{
  __int64 result; // rax
  int v3; // esi
  ULONG_PTR i; // rdi
  __int64 v5; // rdi

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) == 0 || (result = sub_1406DDB48((__int64 *)a1, 0xFFFFFFFF), (int)result >= 0) )
  {
    v3 = 0;
    for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      v3 = sub_14096F8CC(i, 0, *(_QWORD *)(i + 8), *(_DWORD *)(i + 44), 0, 0xFFFFFFFF);
      if ( v3 < 0 )
      {
        v5 = sub_140287C30((_QWORD *)a1);
        if ( v5 )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = 0LL;
        sub_14027034C(a1);
        if ( v5 )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v5;
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
      sub_1406DDA18((__int64 *)a1, 0xFFFFFFFF);
    return (unsigned int)v3;
  }
  return result;
}
