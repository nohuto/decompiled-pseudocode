/*
 * XREFs of ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C0061CC4
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5ED0 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 */

__int64 __fastcall ethDeleteOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  __int64 NumAddresses; // rdx
  __int64 v7; // rbx
  int v8; // ecx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r8
  unsigned int v10; // eax
  unsigned int OldNumAddresses; // ecx
  _ETH_MULTICAST_WRAPPER *v13; // r9
  unsigned int RefCount; // eax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_074752314c3a3f0a224cf35f2e3b0fec_Traceguids,
      a1);
  NumAddresses = a1->NumAddresses;
  v7 = 0LL;
  *a3 = 1;
  v8 = 1;
  if ( !(_DWORD)NumAddresses )
    goto LABEL_8;
  MCastAddressBuf = a1->MCastAddressBuf;
  while ( *(_DWORD *)&MCastAddressBuf[v7].MCastAddress[2] != *(_DWORD *)(a2 + 2)
       || *(_WORD *)MCastAddressBuf[v7].MCastAddress != *(_WORD *)a2 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 = 1;
    if ( (unsigned int)v7 >= (unsigned int)NumAddresses )
      goto LABEL_8;
  }
  v13 = a1->MCastAddressBuf;
  v8 = 0;
  RefCount = v13[v7].RefCount;
  if ( RefCount > 1 )
  {
    v13[v7].RefCount = RefCount - 1;
  }
  else
  {
LABEL_8:
    if ( (_DWORD)v7 != (_DWORD)NumAddresses || !v8 )
    {
      memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * NumAddresses);
      v10 = a1->NumAddresses;
      a1->OldNumAddresses = v10--;
      a1->NumAddresses = v10;
      if ( v10 )
      {
        memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, 12 * v7);
        OldNumAddresses = a1->OldNumAddresses;
        if ( (unsigned int)v7 < OldNumAddresses - 1 )
          memmove(
            &a1->MCastAddressBuf[v7],
            &a1->OldMCastAddressBuf[(unsigned int)(v7 + 1)],
            12LL * (OldNumAddresses - (unsigned int)v7 - 1));
      }
      *a3 = 0;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NumAddresses) = 4;
    WPP_RECORDER_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      NumAddresses,
      11,
      12,
      (struct _GUID *)&WPP_074752314c3a3f0a224cf35f2e3b0fec_Traceguids,
      *a3,
      0);
  }
  return 0LL;
}
