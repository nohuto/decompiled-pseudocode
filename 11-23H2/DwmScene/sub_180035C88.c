/*
 * XREFs of sub_180035C88 @ 0x180035C88
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 *     sub_18003881C @ 0x18003881C (sub_18003881C.c)
 */

__int64 __fastcall sub_180035C88(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // r14
  __int64 *i; // rbx
  __int64 v5; // rax
  __int64 *j; // rdi
  __int64 v7; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 896);
  v2 = a1 + 888;
  for ( i = *(__int64 **)(a1 + 888); i != v1; i += 2 )
  {
    v5 = i[1];
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
      break;
  }
  if ( i != v1 )
  {
    for ( j = i + 2; j != v1; j += 2 )
    {
      v7 = j[1];
      if ( v7 && *(_DWORD *)(v7 + 8) )
      {
        sub_180032160(i, j);
        i += 2;
      }
    }
  }
  return sub_18003881C(v2, &v9, i, *(_QWORD *)(a1 + 896));
}
