/*
 * XREFs of sub_140682C34 @ 0x140682C34
 * Callers:
 *     sub_1406820CC @ 0x1406820CC (sub_1406820CC.c)
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_140682A98 @ 0x140682A98 (sub_140682A98.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_140682CF0 @ 0x140682CF0 (sub_140682CF0.c)
 *     sub_140682D58 @ 0x140682D58 (sub_140682D58.c)
 */

BOOLEAN __fastcall sub_140682C34(__int64 a1, __int64 a2, char a3)
{
  char v5; // bp
  unsigned __int64 v6; // rax
  BOOLEAN result; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 i; // rsi

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  if ( (a3 & 1) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    sub_140682D58(a2);
  }
  v6 = *(_QWORD *)(a1 + 1296);
  if ( v6 )
  {
    if ( v6 > 1 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1272) + 56LL), 1u);
      v8 = *(_QWORD *)(a1 + 1296);
      if ( v8 > 2 )
      {
        for ( i = v8 - 2; i; --i )
          ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1304) + 8 * i - 8) + 56LL), 1u);
      }
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1264) + 56LL), 1u);
  }
  result = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !v5 )
    return sub_140682CF0(a2);
  return result;
}
