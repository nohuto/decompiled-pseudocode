/*
 * XREFs of RtlpCopyRemoteDebugInformation @ 0x1800E40C0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180001934 (RtlpCommitQueryDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

NTSTATUS __fastcall RtlpCopyRemoteDebugInformation(__int64 a1)
{
  NTSTATUS result; // eax
  unsigned int v3; // edi
  int v4; // ecx
  __int128 v5; // [rsp+70h] [rbp-39h]
  __int128 v6; // [rsp+90h] [rbp-19h]
  __int128 v7; // [rsp+A0h] [rbp-9h]
  __int128 v8; // [rsp+C0h] [rbp+17h]
  __int128 v9; // [rsp+D0h] [rbp+27h]
  ULONG_PTR RegionSize; // [rsp+110h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+118h] [rbp+6Fh] BYREF

  BaseAddress = (PVOID)(a1 + *(_QWORD *)(a1 + 88));
  v5 = *((_OWORD *)BaseAddress + 4);
  v6 = *((_OWORD *)BaseAddress + 6);
  v7 = *((_OWORD *)BaseAddress + 7);
  v8 = *((_OWORD *)BaseAddress + 9);
  v9 = *((_OWORD *)BaseAddress + 10);
  RegionSize = *((_QWORD *)BaseAddress + 9);
  if ( *((_QWORD *)&v5 + 1) > *(_QWORD *)(a1 + 88) || *((_QWORD *)&v5 + 1) < 0xD0uLL )
    return -1073741823;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 208LL;
    v3 = RegionSize - 208;
    if ( RtlpCommitQueryDebugInfo((_QWORD *)a1, (int)RegionSize - 208) )
    {
      memmove((void *)(a1 + 208), (char *)BaseAddress + 208, v3);
      v4 = *(_DWORD *)(a1 + 64);
      if ( (v4 & 0x21C) != 0 )
      {
        *(_QWORD *)(a1 + 112) = v7;
        *(_QWORD *)(a1 + 152) = *((_QWORD *)&v8 + 1);
      }
      if ( (v4 & 0x41) != 0 )
        *(_QWORD *)(a1 + 96) = v6;
      if ( (v4 & 0x20) != 0 )
        *(_QWORD *)(a1 + 120) = *((_QWORD *)&v7 + 1);
      if ( (v4 & 2) != 0 )
        *(_QWORD *)(a1 + 104) = *((_QWORD *)&v6 + 1);
      if ( (v4 & 0x80u) != 0 )
        *(_QWORD *)(a1 + 144) = v8;
      if ( (v4 & 0xC00) != 0 )
        *(_QWORD *)(a1 + 168) = *((_QWORD *)&v9 + 1);
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
