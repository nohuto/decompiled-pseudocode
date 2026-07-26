/*
 * XREFs of ?ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C012C294
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0018820 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00086F4 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMSetNDKAttributes(struct _NDIS_MINIPORT_BLOCK *a1, union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  unsigned int v2; // ebx
  _OWORD *MiniportAddDeviceContext; // rdi
  __int64 Pool2; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = 0;
  if ( a2->Header.Revision == 1
    && a2->Header.Size == 16
    && (MiniportAddDeviceContext = a2->AddDeviceRegistrationAttributes.MiniportAddDeviceContext) != 0LL
    && *(_BYTE *)MiniportAddDeviceContext == 0x80
    && *((_BYTE *)MiniportAddDeviceContext + 1) == 1
    && *((_WORD *)MiniportAddDeviceContext + 1) >= 0x38u
    && *((_QWORD *)MiniportAddDeviceContext + 6) )
  {
    if ( ndisGetNDKBlock(a1) )
    {
      return (unsigned int)-1073741808;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 192LL, 1919632462);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = Pool2 + 88;
        *(_OWORD *)(Pool2 + 32) = *MiniportAddDeviceContext;
        *(_OWORD *)(Pool2 + 48) = MiniportAddDeviceContext[1];
        *(_OWORD *)(Pool2 + 64) = MiniportAddDeviceContext[2];
        *(_QWORD *)(Pool2 + 80) = *((_QWORD *)MiniportAddDeviceContext + 6);
        v9 = *((_QWORD *)MiniportAddDeviceContext + 6);
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)(v8 + 64) = *(_OWORD *)(v9 + 64);
        *(_OWORD *)(v8 + 80) = *(_OWORD *)(v9 + 80);
        *(_QWORD *)(v8 + 96) = *(_QWORD *)(v9 + 96);
        *(_QWORD *)(v7 + 80) = v8;
        *(_BYTE *)(v7 + 24) = a2->NDKAttributes.Enabled;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_DWORD *)(v7 + 16) = 0;
        a1->NDKBlock = (void *)v7;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xAu,
            (struct _GUID *)&WPP_151f43625ba432ff3b4f32128ec0a405_Traceguids,
            a1);
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
