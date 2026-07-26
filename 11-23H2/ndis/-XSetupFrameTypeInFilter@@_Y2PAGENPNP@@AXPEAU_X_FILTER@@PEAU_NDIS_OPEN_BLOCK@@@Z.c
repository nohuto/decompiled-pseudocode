/*
 * XREFs of ?XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0149C20
 * Callers:
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0019920 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  unsigned int FrameTypeArraySize; // ecx
  unsigned int NumEntries; // r9d
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int16 v10; // r8
  _NDIS_FRAME_TYPE_AND_OPEN *v11; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xBu,
      (struct _GUID *)&WPP_113b5d63f6553d9bcc3525ff11e8009d_Traceguids,
      a2);
  FrameTypeArraySize = a2->FrameTypeArraySize;
  if ( !FrameTypeArraySize
    || (NumEntries = a1->FrameTypeRecord.NumEntries, NumEntries + FrameTypeArraySize < FrameTypeArraySize)
    || NumEntries + FrameTypeArraySize >= 0x10 )
  {
LABEL_21:
    a2->FilterNextOpen = a1->NoFTypeOpenList;
    ++a1->NumNoETypeOpens;
    a1->NoFTypeOpenList = a2;
    goto LABEL_16;
  }
  v6 = 0;
  if ( NumEntries )
  {
LABEL_7:
    v7 = 0LL;
    while ( a2->FrameTypeArray[v7] != a1->FrameTypeRecord.Entry[v6].Type )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= FrameTypeArraySize )
      {
        if ( ++v6 < NumEntries )
          goto LABEL_7;
        goto LABEL_11;
      }
    }
    goto LABEL_21;
  }
LABEL_11:
  v8 = 0LL;
  do
  {
    v9 = a1->FrameTypeRecord.NumEntries;
    v10 = a2->FrameTypeArray[v8];
    v11 = &a1->FrameTypeRecord.Entry[v9];
    if ( v10 == 8 && (_DWORD)v9 )
    {
      v11->Type = a1->FrameTypeRecord.Entry[0].Type;
      v11->Open = a1->FrameTypeRecord.Entry[0].Open;
      a1->FrameTypeRecord.Entry[0].Type = 8;
      a1->FrameTypeRecord.Entry[0].Open = a2;
    }
    else
    {
      v11->Type = v10;
      v11->Open = a2;
    }
    ++a1->FrameTypeRecord.NumEntries;
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < a2->FrameTypeArraySize );
  a2->FilterNextOpen = a1->FTypeOpenList;
  a1->FTypeOpenList = a2;
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xCu,
      (struct _GUID *)&WPP_113b5d63f6553d9bcc3525ff11e8009d_Traceguids,
      a2);
}
