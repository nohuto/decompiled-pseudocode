/*
 * XREFs of CmGetKCBCacheSecurity @ 0x140721D00
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140721F88 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 PrevElement; // rsi
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  if ( !a2 )
    return *(_QWORD *)(a1 + 88);
  v7 = a1 + 208;
  v12 = 0LL;
  PrevElement = CmListGetPrevElement(a1 + 208, &v12, a3, a4);
  if ( !PrevElement )
    return v4;
  while ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2, v9) || *(_DWORD *)(PrevElement + 68) != 9 )
  {
    PrevElement = CmListGetPrevElement(v7, &v12, v10, v11);
    if ( !PrevElement )
      return v4;
  }
  return *(_QWORD *)(PrevElement + 88);
}
