/*
 * XREFs of Xp10ReadAndValidateCrc @ 0x18011D4B4
 * Callers:
 *     RtlDecompressBufferXp10 @ 0x180119570 (RtlDecompressBufferXp10.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A8B30 (RtlCompareMemory.c)
 *     Xp10ComputeCrc32 @ 0x18011B0A0 (Xp10ComputeCrc32.c)
 *     Xp10ComputeCrc64 @ 0x18011B0EC (Xp10ComputeCrc64.c)
 */

__int64 __fastcall Xp10ReadAndValidateCrc(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // eax
  const void *v6; // rcx
  unsigned __int64 v7; // rax
  const void *v8; // rcx
  int Source2; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  if ( (v3 & 7) != 0 )
  {
    v3 = (v3 & 0xFFFFFFF8) + 8;
    *(_DWORD *)(a3 + 8) = v3;
  }
  if ( ((*a1 >> 14) & 1) != 0 )
  {
    if ( v3 + 32 <= *(_DWORD *)(a3 + 12) )
    {
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 8);
      v5 = Xp10ComputeCrc32((unsigned __int8 **)a2);
      v6 = (const void *)(*(_QWORD *)a3 + ((unsigned __int64)v3 >> 3));
      Source2 = v5;
      if ( RtlCompareMemory(v6, &Source2, 4uLL) == 4 )
      {
        *(_DWORD *)(a3 + 8) += 32;
        return 0LL;
      }
    }
  }
  else if ( v3 + 64 <= *(_DWORD *)(a3 + 12) )
  {
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 8);
    v7 = Xp10ComputeCrc64((unsigned __int8 **)a2);
    v8 = (const void *)(*(_QWORD *)a3 + ((unsigned __int64)v3 >> 3));
    v11 = v7;
    if ( RtlCompareMemory(v8, &v11, 8uLL) == 8 )
    {
      *(_DWORD *)(a3 + 8) += 64;
      return 0LL;
    }
  }
  return 3221226050LL;
}
