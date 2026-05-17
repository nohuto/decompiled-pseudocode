/*
 * XREFs of RtlAddActionToRXact @ 0x180091DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAttributeActionToRXact @ 0x180086A10 (RtlAddAttributeActionToRXact.c)
 */

__int64 __fastcall RtlAddActionToRXact(__int64 a1, int a2, const void **a3, int a4, void *a5, size_t a6)
{
  size_t Size; // [rsp+38h] [rbp-20h]
  const void *v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 0LL;
  v8[1] = 0LL;
  LODWORD(Size) = a6;
  return RtlAddAttributeActionToRXact(a1, a2, a3, -1LL, v8, a4, a5, Size);
}
