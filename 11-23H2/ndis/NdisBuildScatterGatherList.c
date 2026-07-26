/*
 * XREFs of NdisBuildScatterGatherList @ 0x1C00CDF40
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013024 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092378 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

NDIS_STATUS __stdcall NdisBuildScatterGatherList(
        NDIS_HANDLE NdisHandle,
        PNDIS_SCATTER_GATHER_LIST_PARAMETERS SGListParameters)
{
  NDIS_STATUS v3; // ebx
  struct _NDIS_MINIPORT_BLOCK *v4; // r11
  __int64 v5; // r11
  __int16 v6; // si
  __int64 v7; // r14
  _MDL *Mdl; // r8
  char *v9; // rbp
  _SCATTER_GATHER_LIST *ScatterGatherListBuffer; // r9
  char v12[8]; // [rsp+60h] [rbp-38h] BYREF
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]

  v3 = -1073741670;
  v4 = (struct _NDIS_MINIPORT_BLOCK *)NdisHandle;
  if ( !NdisHandle )
    return -1073741811;
  if ( *(_BYTE *)NdisHandle != 18 )
  {
    if ( *(_BYTE *)NdisHandle == 17 )
      goto LABEL_5;
    return -1073741811;
  }
  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisHandle + 2);
LABEL_5:
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v12, v4);
  if ( (v13 & 0x400) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)v12, 10LL, 1LL);
  v6 = v14;
  if ( (v14 & 0x400) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v12, 0xAu);
    v6 = v14;
  }
  v7 = *(_QWORD *)(v5 + 504);
  if ( v7 )
  {
    Mdl = SGListParameters->Mdl;
    if ( Mdl )
    {
      v9 = (char *)Mdl->StartVa + Mdl->ByteOffset;
      ScatterGatherListBuffer = SGListParameters->ScatterGatherListBuffer;
      if ( ScatterGatherListBuffer )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, void *, _SCATTER_GATHER_LIST *, void *), void *, _BYTE, _SCATTER_GATHER_LIST *, unsigned int))(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 8LL) + 112LL))(
               *(_QWORD *)(v7 + 40),
               *(_QWORD *)(v5 + 3824),
               Mdl,
               v9,
               SGListParameters->Length,
               SGListParameters->ProcessSGListHandler,
               SGListParameters->Context,
               SGListParameters->Flags & 1,
               ScatterGatherListBuffer,
               SGListParameters->ScatterGatherListBufferSize);
        if ( v3 == -1073741789 )
        {
          v3 = -1073676266;
          if ( (*(int (__fastcall **)(_QWORD, _MDL *, char *, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 8LL)
                                                                                             + 104LL))(
                 *(_QWORD *)(v7 + 40),
                 SGListParameters->Mdl,
                 v9,
                 SGListParameters->Length,
                 &SGListParameters->ScatterGatherListBufferSizeNeeded,
                 0LL) < 0 )
            v3 = -1073741670;
        }
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    SGListParameters->ProcessSGListHandler(
      *(_DEVICE_OBJECT **)(v5 + 3824),
      0LL,
      SGListParameters->ScatterGatherListBuffer,
      SGListParameters->Context);
    v3 = 0;
  }
  if ( (v6 & 0x400) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v12, 0xAu, 23LL);
  return v3;
}
