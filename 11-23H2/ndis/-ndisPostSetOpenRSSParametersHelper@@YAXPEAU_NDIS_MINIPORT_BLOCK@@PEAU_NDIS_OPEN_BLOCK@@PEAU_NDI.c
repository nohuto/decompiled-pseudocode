/*
 * XREFs of ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C00A44B8
 * Callers:
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00874A8 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00A43AC (-ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void __fastcall ndisPostSetOpenRSSParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx
  bool v8; // cf
  unsigned int v9; // esi
  int HashInformation; // r12d
  __int16 v11; // r13
  _NDIS_OPEN_BLOCK *i; // rbp
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  int v14; // ebx
  _NDIS_RECEIVE_SCALE_PARAMETERS *RssParametersBuffer; // rcx
  KIRQL v16; // dl
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3->IndirectionTableOffset + a3->IndirectionTableSize;
  v7 = a3->HashSecretKeyOffset + a3->HashSecretKeySize;
  v8 = a3->Header.Revision < 2u;
  NewIrql = 0;
  if ( v8 )
    v9 = 0;
  else
    v9 = a3->ProcessorMasksOffset + a3->NumberOfProcessorMasks * a3->ProcessorMasksEntrySize;
  if ( v6 <= v7 )
    v6 = v7;
  HashInformation = (unsigned __int8)a3->HashInformation;
  if ( v6 > v9 )
    v9 = v6;
  v11 = a3->Flags & 0x10;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
  {
    NdisRSSParameters = i->NdisRSSParameters;
    if ( NdisRSSParameters && i != a2 )
    {
      if ( !HashInformation || v11 )
      {
        i->NdisRSSParameters = 0LL;
      }
      else
      {
        v14 = NdisRSSParameters->HashInformation & 0xFFFF00;
        memmove(NdisRSSParameters, a3, v9);
        i->NdisRSSParameters->HashInformation = HashInformation | v14;
      }
    }
  }
  if ( !HashInformation || v11 )
  {
    a2->NdisRSSParameters = 0LL;
  }
  else
  {
    RssParametersBuffer = (_NDIS_RECEIVE_SCALE_PARAMETERS *)a2->RssParametersBuffer;
    a2->NdisRSSParameters = RssParametersBuffer;
    memmove(RssParametersBuffer, a3, v9);
  }
  v16 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v16);
}
