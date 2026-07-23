/*
 * XREFs of sub_1406354FC @ 0x1406354FC
 * Callers:
 *     sub_1402E1CBC @ 0x1402E1CBC (sub_1402E1CBC.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_1402E1B84 @ 0x1402E1B84 (sub_1402E1B84.c)
 *     sub_1402E1BD0 @ 0x1402E1BD0 (sub_1402E1BD0.c)
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 */

void __fastcall sub_1406354FC(__int64 a1)
{
  bool v1; // zf
  __int64 *v3; // rdi
  int i; // eax
  __int64 *j; // rcx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 1180) == 2;
  v6 = 0;
  if ( !v1 && KeGetEffectiveIrql() < 2u && _InterlockedExchange((volatile __int32 *)(a1 + 1168), 1) != 1 )
  {
    sub_1402E1BD0(a1, &v6);
    v3 = *(__int64 **)(a1 + 72);
    for ( i = sub_1402E1C80(a1); i && v3; --i )
    {
      if ( *((_DWORD *)v3 + 3) == 4 )
        *((_WORD *)v3 + 10) |= 0x80u;
      v3 = (__int64 *)*v3;
    }
    for ( j = *(__int64 **)(a1 + 56); i && j; j = (__int64 *)*j )
    {
      --i;
      if ( *((_DWORD *)j + 3) == 4 )
        *((_WORD *)j + 10) |= 0x80u;
    }
    sub_1402E1B84(a1, &v6);
  }
}
