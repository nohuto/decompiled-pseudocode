/*
 * XREFs of CmpConstructAndCacheName @ 0x1407E1D10
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB940 (CmCallbackGetKeyObjectID.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BE0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructAndCacheName(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // ebx
  bool v8; // cf
  signed __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = *(_QWORD *)(a1 + 296);
  if ( (v4 & 1) != 0 )
    v4 &= ~1uLL;
  if ( !v4 )
  {
    v6 = CmpConstructNameWithStatus(a1, &v9, a3);
    if ( v6 < 0 )
      goto LABEL_7;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v9, 0LL) != 0;
    v4 = *(_QWORD *)(a1 + 296);
    v9 &= -(__int64)v8;
    if ( (v4 & 1) != 0 )
      v4 &= ~1uLL;
  }
  if ( a2 )
    *a2 = v4;
  v6 = 0;
LABEL_7:
  if ( v9 )
    CmpFreeTransientPoolWithTag((void *)v9, 0x624E4D43u);
  return (unsigned int)v6;
}
