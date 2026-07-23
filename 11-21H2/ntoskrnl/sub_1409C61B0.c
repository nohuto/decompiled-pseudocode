/*
 * XREFs of sub_1409C61B0 @ 0x1409C61B0
 * Callers:
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     sub_1409CC028 @ 0x1409CC028 (sub_1409CC028.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     sub_14072295C @ 0x14072295C (sub_14072295C.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 *     sub_1409C664C @ 0x1409C664C (sub_1409C664C.c)
 */

__int64 __fastcall sub_1409C61B0(int a1, int a2, __int64 a3, PVOID *a4)
{
  __int64 result; // rax
  unsigned int ServerSiloServiceSessionId; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx

  result = sub_14072295C(a1, a2, a3, 0, 0LL, a4);
  if ( (int)result >= 0 )
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a3);
    if ( ServerSiloServiceSessionId != -1
      && (v10 = sub_1407530D0((__int64)*a4, ServerSiloServiceSessionId, v8, v9), v10 < 0)
      || (v10 = sub_1409C664C(*a4, a3), v10 < 0) )
    {
      ObfDereferenceObject(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v10;
  }
  return result;
}
