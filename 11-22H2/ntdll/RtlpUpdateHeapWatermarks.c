/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x180089BD4
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapWatermarks(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // eax

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v1 = *(_DWORD *)(a1 + 648);
    v2 = *(_DWORD *)(a1 + 640) + 1;
    *(_DWORD *)(a1 + 640) = v2;
    if ( v2 > v1 )
    {
      v3 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 640) = 0;
      if ( v3 > *(_QWORD *)(a1 + 672) )
        *(_QWORD *)(a1 + 672) = v3;
      *(_QWORD *)(a1 + 680) = v3;
    }
    v4 = *(_DWORD *)(a1 + 652) + 1;
    *(_DWORD *)(a1 + 652) = v4;
    if ( v4 >= 0x1000 )
    {
      v5 = 16;
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
        v5 = 256;
      if ( *(_DWORD *)(a1 + 644) > v5 && v1 < 0x10000 )
        *(_DWORD *)(a1 + 648) = 2 * v1;
      *(_DWORD *)(a1 + 644) = 0;
      *(_DWORD *)(a1 + 652) = 0;
    }
  }
}
