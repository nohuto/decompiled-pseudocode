/*
 * XREFs of PiDqQueryAddObjectToResultSet @ 0x1407E0934
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1407871A4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x140788744 (PiDqQueryEnumObject.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x14031EA50 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall PiDqQueryAddObjectToResultSet(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  BOOLEAN v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = 0;
  v4 = 0;
  if ( RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &v5, 8u, &v4) )
  {
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
