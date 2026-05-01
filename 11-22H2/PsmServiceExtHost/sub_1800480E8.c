/*
 * XREFs of sub_1800480E8 @ 0x1800480E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800480E8(__int64 a1, __int64 a2)
{
  char v2; // cf
  char v3; // of
  __int64 v4; // rdi

  if ( !v3 )
    JUMPOUT(0x180048122LL);
  LOBYTE(a2) = *(_BYTE *)(5 * v4) + v2 + a2;
  return RtlpTestHookInitialize(a1, a2);
}
