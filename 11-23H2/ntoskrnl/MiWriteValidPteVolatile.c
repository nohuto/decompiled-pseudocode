/*
 * XREFs of MiWriteValidPteVolatile @ 0x140217020
 * Callers:
 *     MiWriteWsle @ 0x140216174 (MiWriteWsle.c)
 *     MiSetWsleProtection @ 0x140216EC0 (MiSetWsleProtection.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C84C (MiTryLockProtoPoolPageAtDpc.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiCheckProtoPtePageState @ 0x1402DC0C0 (MiCheckProtoPtePageState.c)
 *     MiLockOwnedProtoPage @ 0x1402DD6A0 (MiLockOwnedProtoPage.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rbx
  int v6; // edx
  unsigned __int64 v8; // rax
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 result; // rax

  v3 = *a1;
  v4 = a2 & 0x80000000;
  v5 = a2 & 1;
  v6 = a2 & 2;
  do
  {
    v8 = v3;
    if ( v4 )
      v8 = v3 ^ (v3 ^ ((unsigned __int64)a3 << 56)) & 0x7F00000000000000LL;
    v9 = v8 | 0x20;
    if ( !v5 )
      v9 = v8;
    if ( v6 )
      v9 |= 0x42uLL;
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64(a1, v9, v3);
    v10 = v3 == result;
    v3 = result;
  }
  while ( !v10 );
  return result;
}
