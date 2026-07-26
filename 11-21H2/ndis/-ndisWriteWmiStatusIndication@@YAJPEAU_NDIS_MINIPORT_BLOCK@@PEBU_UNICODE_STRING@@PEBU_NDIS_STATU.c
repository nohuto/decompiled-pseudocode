/*
 * XREFs of ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001DE0C
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00BDD10 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001B880 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        const struct _NDIS_STATUS_INDICATION *a3,
        unsigned int a4,
        int *Src,
        unsigned int a6)
{
  unsigned int Flags; // eax
  bool v8; // r8
  _NDIS_GUID *pNdisGuidMap; // r9
  unsigned int cNdisGuidMap; // edx
  unsigned int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // ecx
  int v17; // edx
  size_t v18; // rbx
  unsigned int v19; // r15d
  unsigned int v20; // r13d
  int v21; // r13d
  int v22; // ecx
  PVOID v23; // r14
  _NDIS_GUID *v24; // rcx
  unsigned int *v25; // rdi
  unsigned int v26; // eax
  const struct _NDIS_STATUS_INDICATION *v27; // r13
  _DWORD *v28; // rdi
  unsigned int v29; // eax
  NTSTATUS v30; // ebx
  _NDIS_GUID *v31; // [rsp+40h] [rbp-10h] BYREF
  PVOID WnodeEventItem; // [rsp+48h] [rbp-8h] BYREF
  int v33; // [rsp+90h] [rbp+40h] BYREF
  const struct _NDIS_STATUS_INDICATION *v34; // [rsp+A0h] [rbp+50h]
  bool v35; // [rsp+A8h] [rbp+58h]

  v34 = a3;
  WnodeEventItem = 0LL;
  Flags = a1->Flags;
  v8 = a4 - 1073807371 <= 1;
  v33 = 0;
  v35 = v8;
  v31 = 0LL;
  if ( (Flags & 0x80u) != 0 )
  {
    result = ((__int64 (__fastcall *)(void *, _QWORD, _NDIS_GUID **))a1->DriverHandle->CxBlock->Chars.EvtCxGetWmiEventGuid)(
               a1->MiniportAdapterContext,
               a4,
               &v31);
    v16 = result;
    if ( (int)result < 0 )
      return result;
    pNdisGuidMap = v31;
    v8 = v35;
  }
  else
  {
    pNdisGuidMap = a1->pNdisGuidMap;
    if ( !pNdisGuidMap )
      return 3221225473LL;
    cNdisGuidMap = a1->cNdisGuidMap;
    v14 = 0;
    if ( !a1->cNdisGuidMap )
      return 3221225473LL;
    while ( (pNdisGuidMap->Flags & 2) == 0 || pNdisGuidMap->Oid != a4 )
    {
      ++v14;
      ++pNdisGuidMap;
      if ( v14 >= cNdisGuidMap )
        return 3221225473LL;
    }
    v31 = pNdisGuidMap;
    v16 = 0;
  }
  if ( pNdisGuidMap )
  {
    v17 = pNdisGuidMap->Flags;
    if ( v17 < 0 && (a3->Flags & 1) == 0 )
    {
      v18 = Src != 0LL ? a6 : 0;
      v19 = v18 + 4;
      if ( (v17 & 0x10) == 0 )
        v19 = Src != 0LL ? a6 : 0;
      v20 = v19;
      if ( (v17 & 0x200) != 0 )
      {
        v21 = a1->MiniportName.Length + 46;
      }
      else
      {
        if ( !v8 )
        {
LABEL_19:
          ndisSetupWmiNode(a1, a2, v20, (__int128 *)pNdisGuidMap, (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
          v23 = WnodeEventItem;
          if ( WnodeEventItem )
          {
            v24 = v31;
            v25 = (unsigned int *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
            if ( (v31->Flags & 0x200) != 0 )
            {
              v26 = v20 - 4;
              v27 = v34;
              *v25 = v26;
              v28 = v25 + 1;
              *v28 = 2621699;
              v28[1] = a1->IfIndex;
              *((_QWORD *)v28 + 1) = a1->NetLuid.Value;
              v28[6] = v27->PortNumber;
              if ( v27->DestinationHandle == &ndisIntReqWmi )
                *((_QWORD *)v28 + 2) = v27->RequestId;
              v28[7] = a1->MiniportName.Length;
              v28[8] = v19 + 40;
              memmove((char *)v28 + v19 + 40, a1->MiniportName.Buffer, a1->MiniportName.Length);
              v24 = v31;
              v25 = v28 + 10;
            }
            else
            {
              v27 = v34;
            }
            v29 = v24->Flags;
            if ( (_DWORD)v18 )
            {
              if ( (v29 & 0x10) != 0 )
              {
                *v25++ = (unsigned int)v18 / v24->Size;
              }
              else if ( a4 == 1073807384 && (v27->Flags & 4) != 0 )
              {
                v33 = 3;
                Src = &v33;
                v18 = 4LL;
              }
              memmove(v25, Src, v18);
              v25 = (unsigned int *)((char *)v25 + v18);
            }
            else if ( (v29 & 0x10) != 0 )
            {
              *v25++ = 0;
            }
            if ( v35 )
              memmove(v25, a1->MiniportName.Buffer, a1->MiniportName.Length);
            v30 = IoWMIWriteEvent(v23);
            if ( v30 >= 0 )
              return (unsigned int)v30;
          }
          else
          {
            v30 = -1073741670;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x18u,
              0x36u,
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
              (char)a1,
              v30);
          if ( (byte_1C00EE581 & 0x10) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(v22, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v30, 3, 0);
          if ( v23 )
            ExFreePoolWithTag(v23, 0);
          return (unsigned int)v30;
        }
        v21 = a1->MiniportName.Length + 2;
      }
      v20 = v19 + v21;
      goto LABEL_19;
    }
  }
  return v16;
}
