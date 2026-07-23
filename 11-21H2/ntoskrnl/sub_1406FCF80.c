/*
 * XREFs of sub_1406FCF80 @ 0x1406FCF80
 * Callers:
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 */

__int64 __fastcall sub_1406FCF80(__int64 a1)
{
  int v1; // r9d
  int HostSilo; // eax
  int v3; // r8d
  int v4; // edx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 60) & 8) == 0 )
    goto LABEL_5;
  HostSilo = PsGetHostSilo();
  v4 = v3 | 4;
  if ( !HostSilo )
    v4 = v3;
  v1 = v4;
  if ( (v4 & 1) == 0 )
LABEL_5:
    *(_DWORD *)(a1 + 120) &= ~2u;
  if ( (v1 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 8) != 0 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 120) |= v1;
  return 0LL;
}
