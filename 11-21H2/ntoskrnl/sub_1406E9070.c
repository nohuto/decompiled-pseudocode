/*
 * XREFs of sub_1406E9070 @ 0x1406E9070
 * Callers:
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     sub_14077D624 @ 0x14077D624 (sub_14077D624.c)
 */

bool __fastcall sub_1406E9070(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v1 = a1;
  if ( !(_DWORD)a1 )
    return 1;
  if ( (int)sub_14077D624(a1, &v3) < 0 )
    return 0;
  return (unsigned int)PsGetServerSiloServiceSessionId(v3) == v1;
}
