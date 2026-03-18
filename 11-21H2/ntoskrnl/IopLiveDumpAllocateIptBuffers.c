/*
 * XREFs of IopLiveDumpAllocateIptBuffers @ 0x14093BF5C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14055A6A0 (IopLiveDumpIsUnderMemoryPressure.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14093C268 (IopLiveDumpDiscardVirtualAddressRange.c)
 */

__int64 __fastcall IopLiveDumpAllocateIptBuffers(__int64 a1)
{
  unsigned int v1; // edi
  void **v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 IndependentPages; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r10d
  __int64 v17; // r11
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_DWORD *)(a1 + 1052) = 0x10000000;
  v2 = (void **)(a1 + 1040);
  *(_QWORD *)(a1 + 1072) = 0LL;
  v19 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(IptInterface + 40))(2LL, 0LL, a1 + 1040, 48LL);
  v4 = *(_DWORD *)(a1 + 1080);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 1072);
    if ( v5 )
    {
      IopLiveDumpDiscardVirtualAddressRange(a1, v5, v4);
      v4 = *(_DWORD *)(a1 + 1080);
    }
    *(_QWORD *)(a1 + 1072) = 0LL;
    *(_DWORD *)(a1 + 1080) = 0;
    *(_DWORD *)(a1 + 1048) = 0;
    IndependentPages = MmAllocateIndependentPagesEx(v4, -1, 0LL, 0);
    *v2 = (void *)IndependentPages;
    if ( IndependentPages )
    {
      v7 = *(_QWORD *)(a1 + 936);
      v8 = *(_QWORD *)(a1 + 928);
      v9 = *(_QWORD *)(a1 + 920);
      *(_DWORD *)(a1 + 1048) = v4;
      if ( IopLiveDumpIsUnderMemoryPressure(v9, v8, v7) )
        return (unsigned int)-1073741248;
      IopLiveDumpDiscardVirtualAddressRange(a1, v10, (v4 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
      memset(*v2, 0, *(unsigned int *)(a1 + 1048));
      if ( (*(int (__fastcall **)(__int128 *))(IptInterface + 24))(&v19) >= 0 )
      {
        if ( (_QWORD)v19 )
        {
          if ( *((_QWORD *)&v19 + 1) )
          {
            IopLiveDumpDiscardVirtualAddressRange(a1, v19, *((_QWORD *)&v19 + 1));
            v11 = *((_QWORD *)&v19 + 1);
            *(_QWORD *)(a1 + 1024) = 0LL;
            *(_DWORD *)(a1 + 1032) = 0;
            *(_DWORD *)(a1 + 1000) = 0;
            v12 = MmAllocateIndependentPagesEx(v11, -1, 0LL, 0);
            *(_QWORD *)(a1 + 992) = v12;
            if ( v12 )
            {
              v13 = *(_QWORD *)(a1 + 936);
              v14 = *(_QWORD *)(a1 + 928);
              v15 = *(_QWORD *)(a1 + 920);
              *(_DWORD *)(a1 + 1000) = DWORD2(v19);
              if ( !IopLiveDumpIsUnderMemoryPressure(v15, v14, v13) )
              {
                IopLiveDumpDiscardVirtualAddressRange(a1, v17, (v16 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
                memset(*(void **)(a1 + 992), 0, *(unsigned int *)(a1 + 1000));
                return v1;
              }
              return (unsigned int)-1073741248;
            }
          }
        }
      }
    }
  }
  return v1;
}
