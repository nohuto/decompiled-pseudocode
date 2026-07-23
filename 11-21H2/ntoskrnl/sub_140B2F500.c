/*
 * XREFs of sub_140B2F500 @ 0x140B2F500
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_1403DDD24 @ 0x1403DDD24 (sub_1403DDD24.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

__int64 __fastcall sub_140B2F500(__int64 a1, __int64 a2)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  NTSTATUS v4; // eax

  v2 = sub_1403DDD24((const GUID *)qword_1400133E8, a2, qword_140C03910, qword_140C03910);
  v3 = 0;
  qword_140C54EA8 = qword_140C03910[0];
  if ( v2 < 0 )
    v3 = v2;
  v4 = EtwRegister(&stru_1400133D8, (PETWENABLECALLBACK)sub_140946400, 0LL, &qword_140D00AB0);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
