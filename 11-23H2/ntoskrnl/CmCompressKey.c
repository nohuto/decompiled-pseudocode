/*
 * XREFs of CmCompressKey @ 0x140A13DB4
 * Callers:
 *     NtCompressKey @ 0x140A0D8F0 (NtCompressKey.c)
 * Callees:
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 */

__int64 __fastcall CmCompressKey(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx

  if ( a1 == CmpMasterHive )
    return 3221225485LL;
  if ( (a2 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 1544) || (*(_DWORD *)(a1 + 160) & 0x8003) != 0 )
    return 3221225485LL;
  if ( a2 != 3 )
    v3 = a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v3;
  HvMarkBaseBlockDirty(a1);
  return 0LL;
}
