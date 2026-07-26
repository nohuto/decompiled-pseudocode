/*
 * XREFs of ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C00833AC
 * Callers:
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0081DF8 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C0080F10 (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 */

void __fastcall ndisUpdateRssV1ParametersFromV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_VPORT_BLOCK *a2,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS_V2 *a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a5)
{
  int v8; // r8d
  __int64 v9; // r15
  unsigned __int16 v10; // dx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r14
  unsigned __int16 v15; // si
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v16; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v17; // rcx
  __int128 v18; // xmm1
  unsigned int NumberOfProcessorMasks; // ecx
  UCHAR *v20; // rdx
  UCHAR *v21; // rdi
  unsigned int v22; // r9d
  char *v23; // r8
  signed int v24; // edx

  v8 = *((_DWORD *)a4 + 1);
  v9 = 8LL;
  if ( (v8 & 1) != 0 )
  {
    v10 = ~(_BYTE)v8 & 2 | 8;
    if ( (v8 & 4) != 0 )
      v10 = ~(_BYTE)v8 & 2;
    if ( (v8 & 0x10) == 0 )
      v10 |= 4u;
  }
  else
  {
    v10 = 16;
  }
  a3->Flags = v10;
  v11 = *((_DWORD *)a4 + 1);
  if ( (v11 & 8) != 0 )
  {
    a2->VPortParams.NumQueuePairs = *((_DWORD *)a4 + 5);
    v11 = *((_DWORD *)a4 + 1);
  }
  if ( (v11 & 1) != 0 )
  {
    LOBYTE(v12) = v11;
    if ( (v11 & 2) != 0 )
    {
      a3->HashInformation = *((_DWORD *)a4 + 2);
      v12 = *((_DWORD *)a4 + 1);
    }
    LOBYTE(v11) = v12;
    if ( (v12 & 4) != 0 )
    {
      v13 = *((_DWORD *)a4 + 3);
      if ( v13 )
      {
        memmove(&a3->Header.Type + a3->HashSecretKeyOffset, (char *)a4 + *((unsigned int *)a4 + 4), v13);
        v11 = *((_DWORD *)a4 + 1);
      }
    }
  }
  if ( (v11 & 0x10) != 0 )
  {
    v14 = *((unsigned __int16 *)a4 + 12);
    v15 = a3->IndirectionTableSize >> 2;
    if ( (_WORD)v14 != v15 )
    {
      v16 = a3;
      v17 = a5;
      do
      {
        *(_OWORD *)&v17->Header.Type = *(_OWORD *)&v16->Header.Type;
        *(_OWORD *)&v17->IndirectionTableOffset = *(_OWORD *)&v16->IndirectionTableOffset;
        *(_OWORD *)&v17->NumberOfProcessorMasks = *(_OWORD *)&v16->NumberOfProcessorMasks;
        *(_OWORD *)&v17[1].Flags = *(_OWORD *)&v16[1].Flags;
        *(_OWORD *)&v17[1].HashSecretKeySize = *(_OWORD *)&v16[1].HashSecretKeySize;
        *(_OWORD *)&v17[1].ProcessorMasksEntrySize = *(_OWORD *)&v16[1].ProcessorMasksEntrySize;
        *(_OWORD *)&v17[2].HashInformation = *(_OWORD *)&v16[2].HashInformation;
        v17 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v17 + 128);
        v18 = *(_OWORD *)&v16[2].HashSecretKeyOffset;
        v16 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v16 + 128);
        *(_OWORD *)&v17[-1].ProcessorMasksOffset = v18;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)&v17->Header.Type = *(_OWORD *)&v16->Header.Type;
      *(_OWORD *)&v17->IndirectionTableOffset = *(_OWORD *)&v16->IndirectionTableOffset;
      *(_OWORD *)&v17->NumberOfProcessorMasks = *(_OWORD *)&v16->NumberOfProcessorMasks;
      *(_OWORD *)&v17[1].Flags = *(_OWORD *)&v16[1].Flags;
      *(_OWORD *)&v17[1].HashSecretKeySize = *(_OWORD *)&v16[1].HashSecretKeySize;
      v17[1].ProcessorMasksEntrySize = v16[1].ProcessorMasksEntrySize;
      ndisCreateRssV1Parameters(a3, *((_DWORD *)a4 + 6), a5->NumberOfProcessorMasks);
      a3->Flags = a5->Flags;
      a3->BaseCpuNumber = a5->BaseCpuNumber;
      a3->HashInformation = a5->HashInformation;
      a3->DefaultProcessorNumber = a5->DefaultProcessorNumber;
      if ( a5->HashSecretKeySize )
        memmove(
          &a3->Header.Type + a3->HashSecretKeyOffset,
          &a5->Header.Type + a5->HashSecretKeyOffset,
          a5->HashSecretKeySize);
      NumberOfProcessorMasks = a5->NumberOfProcessorMasks;
      if ( NumberOfProcessorMasks )
        memmove(
          &a3->Header.Type + a3->ProcessorMasksOffset,
          &a5->Header.Type + a5->ProcessorMasksOffset,
          NumberOfProcessorMasks * a5->ProcessorMasksEntrySize);
      if ( (_WORD)v14 )
      {
        v20 = &a5->Header.Type + a5->IndirectionTableOffset;
        v21 = &a3->Header.Type + a3->IndirectionTableOffset;
        if ( v21 <= v20 )
        {
          memmove(v21, v20, 4 * v14);
        }
        else
        {
          memmove(v21, v20, 4LL * v15);
          if ( v15 < (unsigned __int16)v14 )
          {
            v22 = v15;
            v23 = (char *)&v21[4 * v15];
            do
            {
              v24 = v15++ % v22;
              *(_DWORD *)v23 = *(_DWORD *)&v21[4 * v24];
              v23 += 4;
            }
            while ( v15 < (unsigned __int16)v14 );
          }
        }
      }
    }
  }
}
