/*
 * XREFs of ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C011C8C8
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C011E9A4 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011EB14 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C012D280 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

char __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>(__int64 *a1)
{
  _WORD *PoolWithTag; // rax
  char v3; // bl
  _WORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rsi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x446C4642u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v5 = PoolWithTag + 4;
    *((_DWORD *)v4 + 10) = 0;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    v5[1] = v5;
    *v5 = v5;
    *((_DWORD *)v4 + 16) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::reset(a1, 0LL);
  if ( v4 )
  {
    v6 = *a1;
    if ( *a1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 64), 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v6);
      ExFreePoolWithTag((PVOID)v6, 0x446C4642u);
    }
    *a1 = (__int64)v4;
    return 1;
  }
  return v3;
}
