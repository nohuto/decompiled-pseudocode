/*
 * XREFs of ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001EBF4
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00C2D60 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C840 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E39C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00902F4 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        const struct _NDIS_STATUS_INDICATION *a3,
        unsigned int a4,
        int *Src,
        unsigned int a6)
{
  unsigned int Flags; // ecx
  bool v11; // r8
  _NDIS_GUID *pNdisGuidMap; // r9
  unsigned int v13; // ecx
  __int64 result; // rax
  unsigned int v15; // ecx
  int v16; // edx
  size_t v17; // rbx
  unsigned int v18; // r15d
  unsigned int v19; // r13d
  int v20; // r13d
  int v21; // ecx
  PVOID v22; // r14
  _NDIS_GUID *v23; // rcx
  unsigned int *v24; // rdi
  unsigned int v25; // eax
  const struct _NDIS_STATUS_INDICATION *v26; // r13
  _DWORD *v27; // rdi
  unsigned int v28; // eax
  NTSTATUS v29; // ebx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  int v31; // [rsp+40h] [rbp-20h] BYREF
  _NDIS_GUID *v32; // [rsp+48h] [rbp-18h] BYREF
  PVOID WnodeEventItem; // [rsp+50h] [rbp-10h] BYREF
  bool v34; // [rsp+A0h] [rbp+40h]

  Flags = a1->Flags;
  WnodeEventItem = 0LL;
  v31 = 0;
  v32 = 0LL;
  if ( (Flags & 0x100) != 0 )
    return 0LL;
  v11 = a4 - 1073807371 <= 1;
  v34 = v11;
  if ( (Flags & 0x80u) == 0 )
  {
    pNdisGuidMap = a1->pNdisGuidMap;
    if ( !pNdisGuidMap )
      return 3221225473LL;
    v13 = 0;
    if ( !a1->cNdisGuidMap )
      return 3221225473LL;
    while ( (pNdisGuidMap->Flags & 2) == 0 || pNdisGuidMap->Oid != a4 )
    {
      ++v13;
      ++pNdisGuidMap;
      if ( v13 >= a1->cNdisGuidMap )
        return 3221225473LL;
    }
    v32 = pNdisGuidMap;
    v15 = 0;
LABEL_10:
    if ( !pNdisGuidMap )
      return v15;
    v16 = pNdisGuidMap->Flags;
    if ( v16 >= 0 || (a3->Flags & 1) != 0 )
      return v15;
    v17 = Src != 0LL ? a6 : 0;
    v18 = v17 + 4;
    if ( (v16 & 0x10) == 0 )
      v18 = Src != 0LL ? a6 : 0;
    v19 = v18;
    if ( (v16 & 0x200) != 0 )
    {
      v20 = a1->MiniportName.Length + 46;
    }
    else
    {
      if ( !v11 )
      {
LABEL_20:
        ndisSetupWmiNode(a1, a2, v19, (__int128 *)pNdisGuidMap, (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
        v22 = WnodeEventItem;
        if ( WnodeEventItem )
        {
          v23 = v32;
          v24 = (unsigned int *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
          if ( (v32->Flags & 0x200) != 0 )
          {
            v25 = v19 - 4;
            v26 = a3;
            *v24 = v25;
            v27 = v24 + 1;
            *v27 = 2621699;
            v27[1] = a1->IfIndex;
            *((_QWORD *)v27 + 1) = a1->NetLuid.Value;
            v27[6] = a3->PortNumber;
            if ( a3->DestinationHandle == &ndisIntReqWmi )
              *((_QWORD *)v27 + 2) = a3->RequestId;
            v27[7] = a1->MiniportName.Length;
            v27[8] = v18 + 40;
            memmove((char *)v27 + v18 + 40, a1->MiniportName.Buffer, a1->MiniportName.Length);
            v23 = v32;
            v24 = v27 + 10;
          }
          else
          {
            v26 = a3;
          }
          v28 = v23->Flags;
          if ( (_DWORD)v17 )
          {
            if ( (v28 & 0x10) != 0 )
            {
              *v24++ = (unsigned int)v17 / v23->Size;
            }
            else if ( a4 == 1073807384 && (v26->Flags & 4) != 0 )
            {
              v31 = 3;
              Src = &v31;
              v17 = 4LL;
            }
            memmove(v24, Src, v17);
            v24 = (unsigned int *)((char *)v24 + v17);
          }
          else if ( (v28 & 0x10) != 0 )
          {
            *v24++ = 0;
          }
          if ( v34 )
            memmove(v24, a1->MiniportName.Buffer, a1->MiniportName.Length);
          v29 = IoWMIWriteEvent(v22);
          if ( v29 >= 0 )
            return (unsigned int)v29;
        }
        else
        {
          v29 = -1073741670;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x18u,
            0x36u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            (char)a1,
            v29);
        if ( (byte_1C00F7641 & 0x10) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v21, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v29, 3, 0);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        return (unsigned int)v29;
      }
      v20 = a1->MiniportName.Length + 2;
    }
    v19 = v18 + v20;
    goto LABEL_20;
  }
  CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
  result = ((__int64 (__fastcall *)(void *, _QWORD, _NDIS_GUID **))CxBlockFromMiniport->Chars.EvtCxGetWmiEventGuid)(
             a1->MiniportAdapterContext,
             a4,
             &v32);
  v15 = result;
  if ( (int)result >= 0 )
  {
    pNdisGuidMap = v32;
    v11 = v34;
    goto LABEL_10;
  }
  return result;
}
