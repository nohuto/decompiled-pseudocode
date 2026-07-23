/*
 * XREFs of sub_14093D400 @ 0x14093D400
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 * Callees:
 *     sub_14093D33C @ 0x14093D33C (sub_14093D33C.c)
 *     sub_14093D3A4 @ 0x14093D3A4 (sub_14093D3A4.c)
 */

int __fastcall sub_14093D400(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int result; // eax
  unsigned int v6; // eax
  __int64 i; // rax
  unsigned int v8; // eax
  __int64 v9; // rcx

  v2 = 0LL;
  if ( !a2 )
    return -1073741811;
  if ( *(_DWORD *)a2 != 1 )
    return -1073741811;
  if ( *(_DWORD *)(a2 + 4) < 0x30u )
    return -1073741811;
  v6 = *(_DWORD *)(a2 + 28);
  if ( v6 >= 4 )
    return -1073741811;
  *(_DWORD *)(a1 + 44) = v6;
  if ( *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 32) )
    return -1073741811;
  for ( i = *(_QWORD *)(a2 + 40); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_DWORD *)(i + 28) || !*(_QWORD *)(i + 16) || !*(_DWORD *)(i + 24) )
      return -1073741811;
  }
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a2 + 24);
  if ( v8 >= 0x20 )
    return -1073741811;
  if ( (v8 & 3) != 0 )
    return -1073741822;
  *(_DWORD *)(a1 + 40) = v8;
  result = sub_14093D3A4(*(void **)(a2 + 8));
  if ( result < 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 8);
    result = sub_14093D33C(*(_QWORD *)(a2 + 16));
    if ( result >= 0 )
      v2 = v9;
    *(_QWORD *)(a1 + 72) = v2;
  }
  return result;
}
