/*
 * XREFs of sub_140A836B4 @ 0x140A836B4
 * Callers:
 *     VfInsertContext @ 0x1405FE110 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405FE2E0 (VfRemoveContext.c)
 *     sub_140A836FC @ 0x140A836FC (sub_140A836FC.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

char __fastcall sub_140A836B4(signed __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a1);
      v5 = *a1;
      if ( (*a1 & 1) != 0 )
        break;
      if ( !v5 )
        return v5;
      sub_1402F32E0(&v8, a2, a3, a4);
    }
    v6 = *a1;
  }
  while ( v6 != _InterlockedCompareExchange64(a1, v5 - 1, v5) );
  LOBYTE(v5) = 1;
  return v5;
}
