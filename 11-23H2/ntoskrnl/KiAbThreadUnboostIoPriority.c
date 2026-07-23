/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x140318AF4
 * Callers:
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14031A99C (PsBoostThreadIoQoS.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a2 != 0 ? 4 : 0;
  _InterlockedDecrement((volatile signed __int32 *)(v2 + a1 + 860));
  if ( a2 )
    PsBoostThreadIoQoS(a1, 1LL, v2);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
