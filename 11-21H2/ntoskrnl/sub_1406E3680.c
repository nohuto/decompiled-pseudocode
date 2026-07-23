/*
 * XREFs of sub_1406E3680 @ 0x1406E3680
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

__int64 __fastcall sub_1406E3680(__int64 a1, __int64 a2)
{
  char v2; // cl
  unsigned int v3; // ebx

  v2 = **(_BYTE **)(a2 + 184);
  if ( !v2 || v2 == 2 || v2 == 18 )
    v3 = 0;
  else
    v3 = -1073741808;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(a2 + 48) = v3;
  IofCompleteRequest((PIRP)a2, 0);
  return v3;
}
