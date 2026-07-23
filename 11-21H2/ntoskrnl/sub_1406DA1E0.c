/*
 * XREFs of sub_1406DA1E0 @ 0x1406DA1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406DA1E0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx

  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    v5 = 0x7FFFFFFF0000LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a2;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a3;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    *a1 = DesiredTime;
    *a2 = dword_140D06960;
    *a3 = dword_140D06984;
  }
  else
  {
    *a1 = DesiredTime;
    *a2 = dword_140D06960;
    *a3 = dword_140D06984;
  }
  return 0LL;
}
