/*
 * XREFs of CmpIsKeyStackDeleted @ 0x140720F74
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpEnlistKeyBody @ 0x1406C1694 (CmpEnlistKeyBody.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpIsKeyDeleted @ 0x14071A6D4 (CmpIsKeyDeleted.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 */

bool __fastcall CmpIsKeyStackDeleted(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 KcbAtLayerHeight; // rax
  __int64 v4; // r9
  __int64 v6; // r10
  __int64 v7; // r8
  int v8; // ecx
  __int64 NextElement; // rax
  __int64 v10; // r9
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = a1;
  for ( i = 0LL; (v1 & 0x8000u) == 0LL; LOWORD(v1) = v1 - 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v2, v1);
    if ( *(_WORD *)(KcbAtLayerHeight + 66) )
    {
      if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
        break;
    }
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
    {
      if ( v4 )
      {
        v6 = *(_QWORD *)(v2 + 8);
        v7 = 32LL;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v6 + 208, &i, v7);
          if ( !NextElement )
            break;
          v8 = *(_DWORD *)(NextElement + 68);
          if ( v8 == 2 || v8 == 11 )
            return (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v10, v7) != 0;
        }
      }
      return 0;
    }
  }
  return 1;
}
