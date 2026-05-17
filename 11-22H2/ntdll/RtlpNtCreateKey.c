/*
 * XREFs of RtlpNtCreateKey @ 0x180114DF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateKey @ 0x18009F190 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpNtCreateKey(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    *(_DWORD *)(a3 + 24) &= 0xFFFFFFCF;
  return ZwCreateKey();
}
