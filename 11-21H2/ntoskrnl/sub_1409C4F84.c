/*
 * XREFs of sub_1409C4F84 @ 0x1409C4F84
 * Callers:
 *     sub_1409C0EC0 @ 0x1409C0EC0 (sub_1409C0EC0.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1409C2A48 @ 0x1409C2A48 (sub_1409C2A48.c)
 *     sub_1409C2A94 @ 0x1409C2A94 (sub_1409C2A94.c)
 */

__int64 __fastcall sub_1409C4F84(unsigned __int16 *a1, __int64 a2, __int64 a3)
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
      v5 = sub_1409C2A48((unsigned __int8 **)a2);
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
    v7 = sub_1409C2A94((unsigned __int8 **)a2);
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
