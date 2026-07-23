/*
 * XREFs of sub_1402D925C @ 0x1402D925C
 * Callers:
 *     sub_1402D8F30 @ 0x1402D8F30 (sub_1402D8F30.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_1402D925C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 272);
  v3 = (a2 - ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3;
  if ( (unsigned int)v3 >= *(_DWORD *)v2 )
    return 0;
  else
    return _bittest64(*(const signed __int64 **)(v2 + 8), (unsigned int)v3);
}
