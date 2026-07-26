/*
 * XREFs of NdisMCmRegisterAddressFamilyEx @ 0x1C00B8650
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamilyEx(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily)
{
  NDIS_STATUS v4; // edi
  _OWORD *v5; // rsi
  __int64 **i; // rcx
  unsigned __int64 v7; // rdx
  __int64 Pool2; // rax
  __int128 v9; // xmm1
  KIRQL v10; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  v4 = -1073676286;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = (_OWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 632LL);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) != 0 )
  {
    if ( *(_BYTE *)v5 == 0xA5 )
    {
      for ( i = (__int64 **)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 **)*i )
      {
        v7 = (unsigned __int64)i[2] - *(_QWORD *)&AddressFamily->AddressFamily;
        if ( !v7 )
          v7 = *((unsigned int *)i + 6) - (unsigned __int64)AddressFamily->MinorVersion;
        if ( !v7 )
        {
          v4 = -1073741823;
          goto LABEL_17;
        }
      }
      if ( ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x50u) )
      {
        Pool2 = ExAllocatePool2(64LL, 320LL, 1868776526);
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 16) = *(_QWORD *)&AddressFamily->AddressFamily;
          *(_DWORD *)(Pool2 + 24) = AddressFamily->MinorVersion;
          *(_OWORD *)(Pool2 + 168) = *v5;
          *(_OWORD *)(Pool2 + 184) = v5[1];
          *(_OWORD *)(Pool2 + 200) = v5[2];
          *(_OWORD *)(Pool2 + 216) = v5[3];
          *(_OWORD *)(Pool2 + 232) = v5[4];
          *(_OWORD *)(Pool2 + 248) = v5[5];
          *(_OWORD *)(Pool2 + 264) = v5[6];
          *(_OWORD *)(Pool2 + 280) = v5[7];
          v9 = v5[8];
          *(_QWORD *)(Pool2 + 8) = 0LL;
          *(_OWORD *)(Pool2 + 296) = v9;
          *(_QWORD *)Pool2 = *((_QWORD *)MiniportAdapterHandle + 64);
          *(_DWORD *)(Pool2 + 312) = 6;
          *((_QWORD *)MiniportAdapterHandle + 64) = Pool2;
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x50u);
          v4 = 0;
        }
        else
        {
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x50u);
          v4 = -1073741670;
        }
      }
    }
    else
    {
      v4 = -1073676283;
    }
  }
  else
  {
    v4 = -1073741823;
  }
LABEL_17:
  v10 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v10);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
