/*
 * XREFs of MoveObjData @ 0x1C0066938
 * Callers:
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     CopyObject @ 0x1C0069E40 (CopyObject.c)
 *     RefOf @ 0x1C006AE50 (RefOf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MoveObjData(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != a2 )
  {
    result = 0LL;
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return result;
}
