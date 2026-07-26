/*
 * XREFs of ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C0088914
 * Callers:
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C008732C (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C00863CC (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
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
  unsigned int v12; // eax
  __int64 v13; // r14
  unsigned __int16 v14; // bp
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v15; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v16; // rcx
  __int128 v17; // xmm1
  unsigned int NumberOfProcessorMasks; // eax
  UCHAR *v19; // rdx
  UCHAR *v20; // rdi
  unsigned int v21; // r9d
  char *v22; // r8
  signed int v23; // edx

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
  if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
    a2->VPortParams.NumQueuePairs = *((_DWORD *)a4 + 5);
  v11 = *((_DWORD *)a4 + 1);
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 2) != 0 )
      a3->HashInformation = *((_DWORD *)a4 + 2);
    if ( (*((_DWORD *)a4 + 1) & 4) != 0 )
    {
      v12 = *((_DWORD *)a4 + 3);
      if ( v12 )
        memmove(&a3->Header.Type + a3->HashSecretKeyOffset, (char *)a4 + *((unsigned int *)a4 + 4), v12);
    }
  }
  if ( (*((_DWORD *)a4 + 1) & 0x10) != 0 )
  {
    v13 = *((unsigned __int16 *)a4 + 12);
    v14 = a3->IndirectionTableSize >> 2;
    if ( (_WORD)v13 != v14 )
    {
      v15 = a3;
      v16 = a5;
      do
      {
        *(_OWORD *)&v16->Header.Type = *(_OWORD *)&v15->Header.Type;
        *(_OWORD *)&v16->IndirectionTableOffset = *(_OWORD *)&v15->IndirectionTableOffset;
        *(_OWORD *)&v16->NumberOfProcessorMasks = *(_OWORD *)&v15->NumberOfProcessorMasks;
        *(_OWORD *)&v16[1].Flags = *(_OWORD *)&v15[1].Flags;
        *(_OWORD *)&v16[1].HashSecretKeySize = *(_OWORD *)&v15[1].HashSecretKeySize;
        *(_OWORD *)&v16[1].ProcessorMasksEntrySize = *(_OWORD *)&v15[1].ProcessorMasksEntrySize;
        *(_OWORD *)&v16[2].HashInformation = *(_OWORD *)&v15[2].HashInformation;
        v16 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v16 + 128);
        v17 = *(_OWORD *)&v15[2].HashSecretKeyOffset;
        v15 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v15 + 128);
        *(_OWORD *)&v16[-1].ProcessorMasksOffset = v17;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)&v16->Header.Type = *(_OWORD *)&v15->Header.Type;
      *(_OWORD *)&v16->IndirectionTableOffset = *(_OWORD *)&v15->IndirectionTableOffset;
      *(_OWORD *)&v16->NumberOfProcessorMasks = *(_OWORD *)&v15->NumberOfProcessorMasks;
      *(_OWORD *)&v16[1].Flags = *(_OWORD *)&v15[1].Flags;
      *(_OWORD *)&v16[1].HashSecretKeySize = *(_OWORD *)&v15[1].HashSecretKeySize;
      v16[1].ProcessorMasksEntrySize = v15[1].ProcessorMasksEntrySize;
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
          a5->ProcessorMasksEntrySize * NumberOfProcessorMasks);
      if ( (_WORD)v13 )
      {
        v19 = &a5->Header.Type + a5->IndirectionTableOffset;
        v20 = &a3->Header.Type + a3->IndirectionTableOffset;
        if ( v20 <= v19 )
        {
          memmove(v20, v19, 4 * v13);
        }
        else
        {
          memmove(v20, v19, 4LL * v14);
          if ( v14 < (unsigned __int16)v13 )
          {
            v21 = v14;
            v22 = (char *)&v20[4 * v14];
            do
            {
              v23 = v14++ % v21;
              *(_DWORD *)v22 = *(_DWORD *)&v20[4 * v23];
              v22 += 4;
            }
            while ( v14 < (unsigned __int16)v13 );
          }
        }
      }
    }
  }
}
