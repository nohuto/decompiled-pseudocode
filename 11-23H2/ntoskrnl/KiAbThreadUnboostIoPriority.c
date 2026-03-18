/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x140318864
 * Callers:
 *     KiAbThreadRemoveBoostsSlow @ 0x140317E40 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14031A70C (PsBoostThreadIoQoS.c)
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
