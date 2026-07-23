/*
 * XREFs of CmGetKeyLastWriteTime @ 0x1406D51E4
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1406D4FE0 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAA80 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x1407C52D0 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKeyLastWriteTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 PrevElement; // rax
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 4);
    if ( !a1 )
      return v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 168);
  }
  if ( a3 )
  {
    v7 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v7, &v11, a3, a4);
      v9 = PrevElement;
      if ( !PrevElement )
        break;
      v10 = CmEqualTrans(*(_QWORD *)(PrevElement + 56), a3);
      if ( v10 && *(_DWORD *)(v9 + 68) == 8 )
        return *(_QWORD *)(v9 + 88);
    }
  }
  return v5;
}
