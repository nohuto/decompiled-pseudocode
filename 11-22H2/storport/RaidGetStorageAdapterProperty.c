/*
 * XREFs of RaidGetStorageAdapterProperty @ 0x1C009FE88
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C009FC4C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterProperty(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // r11d
  __int64 result; // rax

  v3 = *a3;
  if ( (unsigned __int64)*a3 < 8 )
  {
    result = 3221225507LL;
    *a3 = 0LL;
  }
  else
  {
    v5 = 30LL;
    if ( v3 < 0x1E )
    {
      *(_DWORD *)a2 = 32;
      *(_DWORD *)(a2 + 4) = 32;
      *a3 = 8LL;
    }
    else
    {
      if ( v3 < 0x20 )
      {
        *(_DWORD *)(a2 + 4) = 30;
        v6 = 30;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 32;
        v6 = 32;
      }
      *(_DWORD *)a2 = v6;
      v7 = *(_DWORD *)(a1 + 372);
      if ( *(_BYTE *)(a1 + 4306) && v7 >= *(_DWORD *)(a1 + 772) )
        v7 = *(_DWORD *)(a1 + 772);
      *(_DWORD *)(a2 + 12) = v7;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 368);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 392);
      *(_BYTE *)(a2 + 20) = *(_BYTE *)(a1 + 433);
      *(_BYTE *)(a2 + 21) = *(_BYTE *)(a1 + 428);
      *(_BYTE *)(a2 + 22) = *(_BYTE *)(a1 + 435);
      *(_BYTE *)(a2 + 23) = 1;
      *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 4212);
      *(_DWORD *)(a2 + 26) = 2;
      if ( (unsigned __int64)*a3 >= 0x20 )
      {
        v5 = 32LL;
        *(_BYTE *)(a2 + 30) = *(_BYTE *)(a1 + 442);
        *(_BYTE *)(a2 + 31) = *(_BYTE *)(a1 + 443);
      }
      *a3 = v5;
    }
    return 0LL;
  }
  return result;
}
