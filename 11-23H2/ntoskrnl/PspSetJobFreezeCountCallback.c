/*
 * XREFs of PspSetJobFreezeCountCallback @ 0x14036BEC0
 * Callers:
 *     <none>
 * Callees:
 *     PspComputeExecutionState @ 0x1406A70DC (PspComputeExecutionState.c)
 */

__int64 __fastcall PspSetJobFreezeCountCallback(_DWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // al
  __int64 v12; // r10

  v3 = *a2;
  if ( (*(_DWORD *)v3 & 1) != 0 )
  {
    v4 = a1[262];
    v5 = v4 - 1;
    v6 = v4 + 1;
    if ( !*(_BYTE *)(v3 + 4) )
      v6 = v5;
    a1[262] = v6;
    if ( (*(_DWORD *)*a2 & 8) == 0 )
    {
      v7 = a1[263];
      if ( *(_BYTE *)(*a2 + 4) )
        v8 = v7 + 1;
      else
        v8 = v7 - 1;
      a1[263] = v8;
    }
  }
  if ( (*(_DWORD *)*a2 & 4) != 0 )
  {
    v9 = a1[265];
    if ( *(_BYTE *)(*a2 + 5) )
      v10 = v9 + 1;
    else
      v10 = v9 - 1;
    a1[265] = v10;
  }
  v11 = PspComputeExecutionState();
  *(_BYTE *)(v12 + 8) = v11;
  return 0LL;
}
