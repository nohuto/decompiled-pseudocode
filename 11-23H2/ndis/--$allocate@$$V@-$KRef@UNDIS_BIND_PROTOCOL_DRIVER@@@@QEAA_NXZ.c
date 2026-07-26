/*
 * XREFs of ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C011E3BC
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C011D0A0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 * Callees:
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011E45C (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D6C4 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

char __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(__int64 *a1)
{
  _WORD *PoolWithTag; // rax
  char v3; // bl
  _WORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rsi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x44745042u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v5 = PoolWithTag + 4;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_DWORD *)v4 + 8) = 0;
    *((_QWORD *)v4 + 5) = 0LL;
    v5[1] = v5;
    *v5 = v5;
    *((_DWORD *)v4 + 12) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(a1, 0LL);
  if ( v4 )
  {
    v6 = *a1;
    if ( *a1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 48), 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)v6);
      ExFreePoolWithTag((PVOID)v6, 0x44745042u);
    }
    *a1 = (__int64)v4;
    return 1;
  }
  return v3;
}
