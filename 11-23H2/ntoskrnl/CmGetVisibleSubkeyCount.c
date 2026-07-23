/*
 * XREFs of CmGetVisibleSubkeyCount @ 0x1407108F8
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1406D4FE0 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAA80 (CmpQueryKeyDataFromNode.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleSubkeyCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rbp
  int v7; // eax
  __int64 NextElement; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v10 = 0LL;
  if ( a1 && a3 )
  {
    v6 = a1 + 208;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v6, &v10, 32LL);
      v9 = NextElement;
      if ( !NextElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a3) )
      {
        v7 = *(_DWORD *)(v9 + 68);
        if ( v7 == 1 )
        {
          ++v4;
        }
        else if ( v7 == 3 )
        {
          --v4;
        }
      }
    }
  }
  return v4;
}
