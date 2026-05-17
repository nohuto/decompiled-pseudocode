/*
 * XREFs of RtlpNtCreateKey @ 0x1801162A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateKey @ 0x1800A1250 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpNtCreateKey(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    *(_DWORD *)(a3 + 24) &= 0xFFFFFFCF;
  return ZwCreateKey();
}
