/*
 * XREFs of sub_1409A3B04 @ 0x1409A3B04
 * Callers:
 *     sub_1409A3BE0 @ 0x1409A3BE0 (sub_1409A3BE0.c)
 *     sub_1409A3E48 @ 0x1409A3E48 (sub_1409A3E48.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

char __fastcall sub_1409A3B04(char *Object, __int64 a2)
{
  char result; // al

  if ( a2 )
  {
    ObfReferenceObject(Object);
    result = sub_1402E2D20((unsigned __int64)(Object + 88), -a2, 0, 0, (__int64)(Object + 152));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 88));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
