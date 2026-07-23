/*
 * XREFs of sub_140399104 @ 0x140399104
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 */

LONG sub_140399104()
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  result = KeWaitForSingleObject(&stru_140C205C0, Executive, 0, 0, &Timeout);
  if ( result )
  {
    if ( KeCancelTimer2((__int64)&unk_140C204E0) )
      return KeSetEvent(&stru_140C205C0, 0, 0);
    else
      return KeWaitForSingleObject(&stru_140C205C0, Executive, 0, 0, 0LL);
  }
  return result;
}
