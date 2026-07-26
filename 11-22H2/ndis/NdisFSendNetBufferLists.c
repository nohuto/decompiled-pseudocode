/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C0005410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0024FC0 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C0040E3A (PktMonClientNblLogNdis.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00653E0 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072708 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072BAC (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  NDIS_PORT_NUMBER v5; // r15d
  struct _NET_BUFFER_LIST *v6; // r14
  void (*v8)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  ULONG v12; // ebp
  struct _NET_BUFFER_LIST *v13; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v14; // r10
  unsigned __int64 v15; // rbx
  char v16; // di
  unsigned int v17; // r13d
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  char v20; // cl
  __int64 v21; // r12
  unsigned __int64 v22; // rbx
  unsigned int *v23; // r11
  _QWORD *v24; // r13
  unsigned __int64 v25; // rdi
  char *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  bool v29; // zf
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rcx
  KIRQL CurrentIrql; // al
  __int64 v35; // rax
  struct _NET_BUFFER_LIST **p_Next; // rcx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int v38; // [rsp+40h] [rbp-68h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  struct _NET_BUFFER_LIST *v40; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-50h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v42; // [rsp+60h] [rbp-48h]
  char v43[8]; // [rsp+68h] [rbp-40h]
  char v44; // [rsp+B0h] [rbp+8h]
  NDIS_PORT_NUMBER v45; // [rsp+C0h] [rbp+18h]

  v45 = PortNumber;
  v5 = PortNumber;
  v6 = NetBufferList;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
  {
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferList, PortNumber, SendFlags, (ULONG_PTR)NdisFilterHandle);
    ndisNblPoisonScratchFields(v6);
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v14 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 81);
    v15 = *((_QWORD *)NdisFilterHandle + 56);
    v16 = ndisNblTrackerEpoch;
    v42 = v14;
    v17 = (SendFlags & 1) != 0;
    v18 = 0LL;
    v19 = 0LL;
    v38 = v17;
    v20 = 0;
    v41 = 0LL;
    v21 = 0LL;
    v39 = 0LL;
    v44 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v6, v14, 0x90u, (void *)v15, v17);
      v14 = v42;
      v20 = 0;
      v19 = 0LL;
    }
    v22 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v22 & 1) != 0 )
    {
      *(_QWORD *)&PortNumber = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v22 |= 2LL * (v16 & 1);
    }
    else
    {
      *(_QWORD *)&PortNumber = v22;
    }
    v40 = *(struct _NET_BUFFER_LIST **)&PortNumber;
    *(_QWORD *)v43 = v6;
    if ( v6 )
    {
      v23 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        v24 = *(_QWORD **)v43;
        v25 = *(_QWORD *)(*(_QWORD *)v43 + 360LL);
        while ( v24[45] == v25 )
        {
          if ( v25 )
          {
            if ( (v25 & 4) != 0 )
              goto LABEL_59;
          }
          else if ( !v24[15] )
          {
            v24[15] = ndisSourceHandleFromOwner(
                        (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFDuLL,
                        v18,
                        *(_QWORD *)&PortNumber,
                        v19);
          }
          v26 = (char *)v24[15];
          if ( v26 )
          {
            v18 = (unsigned __int8)*v26;
            if ( (unsigned __int8)(v18 - 17) <= 1u || (_BYTE)v18 == 5 )
            {
              if ( v26 != *(char **)&PortNumber || v24[3] )
              {
                ++v21;
                v27 = v22;
              }
              else
              {
                ++v19;
                v27 = 24LL;
                v39 = v19;
                ++v21;
              }
              goto LABEL_30;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v23 )
            {
              LOBYTE(v18) = 3;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v18,
                27,
                12,
                (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
                (char)v24,
                *v26);
              goto LABEL_58;
            }
          }
          else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v23 )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              27,
              11,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)v24);
LABEL_58:
            *(_QWORD *)&PortNumber = v40;
            v23 = &WPP_RECORDER_INITIALIZED;
            v19 = v39;
            v14 = v42;
          }
LABEL_59:
          v27 = v22 | 4;
LABEL_30:
          v24[45] = v27;
          v24 = (_QWORD *)*v24;
          if ( !v24 )
            break;
        }
        v28 = v41 - v21;
        *(_QWORD *)v43 = v24;
        v17 = v38;
        v41 -= v21;
        if ( (v25 & 1) != 0 && v28 )
        {
          if ( (_BYTE)v38 || v44 )
          {
            v18 = 16 * ((v25 >> 1) & 1) + (v25 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !(_BYTE)v38 )
              goto LABEL_47;
LABEL_37:
            v30 = (_QWORD *)(*(_QWORD *)v18 + (KeGetPcr()->Prcb.Number << 12));
            v18 = v41;
            *v30 += v41;
          }
          else
          {
            v44 = 1;
            v29 = KeGetCurrentIrql() == 2;
            v23 = &WPP_RECORDER_INITIALIZED;
            if ( v29 )
            {
              LOBYTE(v17) = 1;
              v38 = v17;
              v18 = 16 * ((v25 >> 1) & 1) + (v25 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              goto LABEL_37;
            }
            v28 = v41;
            LOBYTE(v17) = 0;
            v38 = v17;
            v18 = 16 * ((v25 >> 1) & 1) + (v25 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_47:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8), v28);
          }
        }
        *(_QWORD *)&PortNumber = v40;
        v19 = v39;
        v14 = v42;
        v41 = v21;
        if ( !*(_QWORD *)v43 )
        {
          v5 = v45;
          v20 = v44;
          break;
        }
      }
    }
    v31 = v21 - v19;
    if ( (v22 & 1) == 0 || !v31 )
      goto LABEL_4;
    if ( (_BYTE)v17 || v20 )
    {
      v32 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v17 )
      {
LABEL_44:
        v33 = (_QWORD *)(*(_QWORD *)v32 + (KeGetPcr()->Prcb.Number << 12));
        *v33 += v31;
        goto LABEL_4;
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql == 2 )
      {
        v32 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_44;
      }
      v32 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8), v31);
  }
LABEL_4:
  if ( byte_1C00F5390 )
  {
    v35 = *((_QWORD *)NdisFilterHandle + 109);
    if ( v35 )
    {
      if ( (*(_DWORD *)(v35 + 56) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 848, v6, *(_QWORD *)&PortNumber, 2LL);
    }
  }
  v8 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)NdisFilterHandle + 78);
  if ( v8 != ndisFilterSendNetBufferLists )
  {
    ((void (__fastcall *)(NDIS_HANDLE, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v8)(
      NdisFilterHandle,
      v6,
      v5,
      SendFlags);
    return;
  }
  v9 = *((_QWORD *)NdisFilterHandle + 57);
  v10 = *((_QWORD *)NdisFilterHandle + 4);
  v40 = v6;
  if ( *(_BYTE *)v9 == 5
    && (*(_DWORD *)(v9 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v9 + 336)
    && (*(_BYTE *)(v10 + 91) && (*(_WORD *)(v10 + 1820) > 1u || *(_BYTE *)(v10 + 1999))
     || (SendFlags & 2) != 0
     || (*(_DWORD *)(v10 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v9, v6, v5, SendFlags, &v40);
    v6 = v40;
  }
  if ( v6 )
  {
    LODWORD(v8) = KeGetPcr()->Prcb.Number;
    v11 = *((_QWORD *)NdisFilterHandle + 53) + 96LL * (_QWORD)v8;
    if ( (SendFlags & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v11 + 16) )
    {
      ndisInvokeNextSendHandler(
        v40,
        v5,
        SendFlags,
        *((struct _NDIS_OBJECT_HEADER **)NdisFilterHandle + 57),
        *((void **)NdisFilterHandle + 55),
        *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))NdisFilterHandle + 54));
      return;
    }
    v12 = SendFlags | 1;
    if ( !*(_QWORD *)v11 )
    {
      v13 = v40;
      *(_QWORD *)v11 = v40;
LABEL_12:
      *(_QWORD *)(v11 + 8) = v13;
      v13->Scratch = 0LL;
      v13->ChildRefCount = v12;
      v13->Status = v5;
      return;
    }
    p_Next = *(struct _NET_BUFFER_LIST ***)(v11 + 8);
    if ( v5 != *((_DWORD *)p_Next + 35) || v12 != *((_DWORD *)p_Next + 33) || (v12 & 0x34) != 0 )
    {
      v13 = v40;
      p_Next[14] = v40;
      goto LABEL_12;
    }
    for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
      p_Next = &i->Next;
    *p_Next = v40;
  }
}
