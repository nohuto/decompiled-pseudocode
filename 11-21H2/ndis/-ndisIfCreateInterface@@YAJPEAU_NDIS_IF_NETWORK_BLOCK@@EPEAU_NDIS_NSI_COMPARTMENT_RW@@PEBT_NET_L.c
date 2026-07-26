/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010A270
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0022F50 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A280 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002D278 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B300C (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C001E5B8 (WPP_RECORDER_SF_qqqq.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C0021AA4 (ndisIfRegisterInterfaceEx.c)
 *     WPP_RECORDER_SF_qqqqL @ 0x1C00225C8 (WPP_RECORDER_SF_qqqqL.c)
 *     ?ndisIfNdisProviderGetHandle@@YAPEAX_N@Z @ 0x1C00226A0 (-ndisIfNdisProviderGetHandle@@YAPEAX_N@Z.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0033F60 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1C00342F4 (ndisIfUpdateLoopbackInterfaceOnNetwork.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0104890 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C0132610 (NdisIfAllocateNetLuidIndexEx.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        _LIST_ENTRY **a4,
        const struct _GUID *a5,
        const struct NdisNetworkInterfacePersistedState *a6,
        struct _NDIS_FILTER_BLOCK *a7,
        enum NdisIfBlockSource a8)
{
  char v9; // bl
  struct _NDIS_IF_NETWORK_BLOCK *v10; // rdi
  unsigned __int16 Length; // r12
  __int64 Pool2; // rax
  __int64 v13; // rsi
  _NDIS_MINIPORT_BLOCK *Miniport; // rdx
  _UNICODE_STRING *FilterFriendlyName; // rax
  unsigned int v16; // eax
  _NDIS_MINIPORT_BLOCK *v17; // rbx
  unsigned int v18; // ecx
  size_t v19; // r8
  unsigned int SupportedStatistics; // ecx
  _NET_IF_ADMIN_STATUS ifAdminStatus; // ecx
  _LIST_ENTRY *v22; // rbx
  __int128 v23; // xmm0
  __int64 v24; // rax
  _QWORD *Handle; // rax
  unsigned int v26; // edx
  unsigned int v27; // eax
  char v28; // r9
  unsigned int v29; // edi
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  bool v37; // zf
  int v38; // eax
  unsigned __int16 *v39; // rax
  unsigned __int16 v40; // cx
  unsigned __int16 v41; // cx
  unsigned int v42; // eax
  size_t v43; // r8
  __int128 v44; // xmm0
  size_t v45; // r8
  size_t v46; // r8
  char *v47; // rdx
  char *v48; // rcx
  NTSTATUS v49; // eax
  NTSTATUS appended; // eax
  NTSTATUS v51; // eax
  NTSTATUS v52; // eax
  unsigned __int16 v53; // ax
  NTSTATUS v54; // eax
  NTSTATUS v55; // eax
  __int16 v56; // ax
  unsigned int v57; // edi
  size_t v58; // r8
  int v59; // [rsp+28h] [rbp-79h]
  char v60; // [rsp+58h] [rbp-49h]
  UINT32 v61; // [rsp+5Ch] [rbp-45h] BYREF
  UINT32 NetLuidIndex; // [rsp+60h] [rbp-41h]
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-29h] BYREF
  _UNICODE_STRING String; // [rsp+88h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-9h] BYREF
  char v68; // [rsp+F0h] [rbp+4Fh]
  _LIST_ENTRY **v69; // [rsp+100h] [rbp+5Fh]

  v69 = a4;
  v68 = a2;
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = L" ";
  v60 = 0;
  NetLuidIndex = 0;
  v61 = 0;
  v9 = a2;
  v10 = a1;
  Destination = 0LL;
  DestinationString = 0LL;
  String = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_16eb98c3925833bf94e97087bc83531a_Traceguids,
      (char)a1,
      (char)a3,
      (char)a4,
      a7);
  if ( !v10 || a6 && *((_WORD *)a6 + 32) > 0x20u || a7 && a7->Miniport->IfBlock->ifPhysAddress.Length > 0x20u )
  {
    v29 = -1073741811;
  }
  else
  {
    Length = 512;
    String.MaximumLength = 512;
    Pool2 = ExAllocatePool2(64LL, 1784LL, 1718174798);
    a4 = 0LL;
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_WORD *)Pool2 = 384;
      *(_WORD *)(Pool2 + 2) = 96;
      String.Buffer = (wchar_t *)(Pool2 + 1272);
      if ( !a6 )
      {
        if ( a7 )
        {
          *(_DWORD *)(Pool2 + 4) |= 2u;
          *(_DWORD *)(Pool2 + 20) = -1;
          Miniport = a7->Miniport;
          *(_DWORD *)(Pool2 + 28) = Miniport->IfBlock->AccessType;
          *(_DWORD *)(Pool2 + 32) = Miniport->IfBlock->DirectionType;
          FilterFriendlyName = a7->FilterFriendlyName;
          *(_DWORD *)(v13 + 36) = Miniport->IfBlock->ConnectionType;
          *(_BYTE *)(v13 + 40) = 0;
          if ( FilterFriendlyName->Length <= 0x200u )
            Length = FilterFriendlyName->Length;
          *(_WORD *)(v13 + 752) = Length;
          v16 = *(unsigned __int16 *)(v13 + 752);
          *(_WORD *)(v13 + 48) = Length;
          if ( (_WORD)v16 )
            memmove((void *)(v13 + 754), a7->FilterFriendlyName->Buffer, v16);
          v17 = a7->Miniport;
          *(_BYTE *)(v13 + 738) = v17->IfBlock->ifHideInterfaceInUi;
          v18 = v17->IfBlock->ifPhysAddress.Length;
          *(_WORD *)(v13 + 42) = v18;
          *(_WORD *)(v13 + 644) = v18;
          *(_DWORD *)(v13 + 44) = 44565126;
          memmove((void *)(v13 + 646), v17->IfBlock->ifPhysAddress.Address, v18);
          v19 = *(unsigned __int16 *)(v13 + 42);
          *(_WORD *)(v13 + 678) = v19;
          memmove((void *)(v13 + 680), v17->IfBlock->PermanentPhysAddress.Address, v19);
          *(_GUID *)(v13 + 52) = a7->InterfaceGuid;
          SupportedStatistics = v17->IfBlock->SupportedStatistics;
          *(_DWORD *)(v13 + 88) = a7->MediaType;
          *(_DWORD *)(v13 + 92) = a7->PhysicalMediaType;
          *(_DWORD *)(v13 + 84) = SupportedStatistics;
          ifAdminStatus = v17->IfBlock->ifAdminStatus;
          *(_QWORD *)(v13 + 720) = a7->XmitLinkSpeed;
          *(_QWORD *)(v13 + 728) = a7->RcvLinkSpeed;
          *(_DWORD *)(v13 + 740) = a7->MediaConnectState;
          *(_DWORD *)(v13 + 744) = a7->MediaDuplexState;
          *(_DWORD *)(v13 + 712) = ifAdminStatus;
          *(_DWORD *)(v13 + 632) = v17->IfBlock->ifOperStatus;
          *(_DWORD *)(v13 + 636) = v17->IfBlock->ifOperStatusFlags;
          *(_DWORD *)(v13 + 640) = v17->IfBlock->ifMtu;
LABEL_15:
          v22 = *v69;
          goto LABEL_16;
        }
        if ( !v9 )
          goto LABEL_47;
        v29 = NdisIfAllocateNetLuidIndexEx(24LL, *((_DWORD *)a3 + 404) & 1, &v61, 0LL);
        if ( v29 )
          goto LABEL_19;
        v60 = 1;
        *((_WORD *)a3 + 7) = 24;
        NetLuidIndex = v61;
        *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 1) & 0xFFFF000000000000uLL | ((unsigned __int64)(v61 & 0xFFFFFF) << 24);
        v49 = ExUuidCreate((UUID *)a3 + 2);
        v28 = 0;
        v29 = v49;
        if ( v49 >= 0 )
        {
LABEL_47:
          v22 = (_LIST_ENTRY *)*((_QWORD *)a3 + 1);
          v44 = *((_OWORD *)a3 + 2);
          *(_QWORD *)(v13 + 28) = 1LL;
          *(_DWORD *)(v13 + 36) = 1;
          *(_OWORD *)(v13 + 52) = v44;
          *(_BYTE *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 88) = 17LL;
          *(_DWORD *)(v13 + 640) = 1500;
          *(_QWORD *)(v13 + 720) = 0x40000000LL;
          *(_QWORD *)(v13 + 728) = 0x40000000LL;
          *(_DWORD *)(v13 + 740) = 1;
          *(_DWORD *)(v13 + 744) = 2;
          *(_QWORD *)(v13 + 632) = 1LL;
          if ( !v68 )
          {
            if ( !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 48))
              || !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 564)) )
            {
              v29 = -1073676267;
              goto LABEL_72;
            }
            v45 = *((unsigned __int16 *)a3 + 24);
            *(_WORD *)(v13 + 48) = v45;
            memmove((void *)(v13 + 754), (char *)a3 + 50, v45);
            v46 = *((unsigned __int16 *)a3 + 282);
            v47 = (char *)a3 + 566;
            *(_WORD *)(v13 + 116) = v46;
            v48 = (char *)(v13 + 118);
            goto LABEL_51;
          }
          RtlInitUnicodeString(&DestinationString, &xmmword_1C00EC762);
          *(_DWORD *)&Destination.Length = 0x2000000;
          Destination.Buffer = (wchar_t *)(v13 + 754);
          RtlCopyUnicodeString(&Destination, &DestinationString);
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          v28 = 0;
          v29 = appended;
          if ( appended >= 0 )
          {
            v51 = RtlIntegerToUnicodeString(*(_DWORD *)(*((_QWORD *)a1 + 6) + 16LL), 0xAu, &String);
            v28 = 0;
            v29 = v51;
            if ( v51 >= 0 )
            {
              v52 = RtlAppendUnicodeStringToString(&Destination, &String);
              v28 = 0;
              v29 = v52;
              if ( v52 >= 0 )
              {
                v53 = Destination.Length;
                *(_WORD *)(v13 + 752) = Destination.Length;
                *(_WORD *)(v13 + 48) = v53;
                RtlInitUnicodeString(&DestinationString, &xmmword_1C00EC972);
                *(_DWORD *)&Destination.Length = 0x2000000;
                Destination.Buffer = (wchar_t *)(v13 + 118);
                RtlCopyUnicodeString(&Destination, &DestinationString);
                v54 = RtlAppendUnicodeStringToString(&Destination, &Source);
                v28 = 0;
                v29 = v54;
                if ( v54 >= 0 )
                {
                  v55 = RtlAppendUnicodeStringToString(&Destination, &String);
                  v28 = 0;
                  v29 = v55;
                  if ( v55 >= 0 )
                  {
                    v56 = *(_WORD *)(v13 + 48);
                    v57 = Destination.Length;
                    v58 = *(unsigned __int16 *)(v13 + 752);
                    *(_WORD *)(v13 + 116) = Destination.Length;
                    *((_WORD *)a3 + 24) = v56;
                    memmove((char *)a3 + 50, (const void *)(v13 + 754), v58);
                    v46 = v57;
                    *((_WORD *)a3 + 282) = v57;
                    v48 = (char *)a3 + 566;
                    v47 = (char *)(v13 + 118);
LABEL_51:
                    memmove(v48, v47, v46);
                    v10 = a1;
                    *(_DWORD *)(v13 + 712) = 1;
LABEL_16:
                    v23 = *((_OWORD *)v10 + 2);
                    *(_WORD *)(v13 + 50) = 754;
                    v24 = *((_QWORD *)v10 + 6);
                    *(_OWORD *)(v13 + 68) = v23;
                    *(_DWORD *)(v13 + 96) = *(_DWORD *)(v24 + 16);
                    *(_WORD *)(v13 + 736) = 0;
                    *(_OWORD *)(v13 + 100) = v23;
                    Handle = ndisIfNdisProviderGetHandle(a3 != 0LL);
                    v27 = ndisIfRegisterInterfaceEx(Handle, v22, (__int64)a7, v13, a8, v26, &v61);
                    v28 = 0;
                    v29 = v27;
                    if ( !v27 )
                    {
                      if ( a3 )
                        ndisIfUpdateLoopbackInterfaceOnNetwork((__int64)a1, (union _NET_LUID_LH)v22);
                      goto LABEL_19;
                    }
LABEL_72:
                    if ( v60 != v28 )
                      NdisIfFreeNetLuidIndex(0x18u, NetLuidIndex);
                    goto LABEL_19;
                  }
                }
              }
            }
          }
        }
        if ( v29 )
          goto LABEL_72;
LABEL_19:
        ExFreePoolWithTag((PVOID)v13, 0);
        goto LABEL_20;
      }
      v31 = *((unsigned __int16 *)a6 + 8);
      *(_QWORD *)(Pool2 + 28) = 2LL;
      *(_DWORD *)(Pool2 + 36) = 1;
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 5;
        if ( !v33 )
          goto LABEL_32;
        v34 = v33 - 3;
        if ( !v34 )
          goto LABEL_32;
        v35 = v34 - 14;
        if ( v35 )
        {
          v36 = v35 - 14;
          if ( !v36 )
          {
            *(_DWORD *)(Pool2 + 28) = 4;
            goto LABEL_32;
          }
          if ( v36 != 94 )
          {
LABEL_32:
            *(_DWORD *)(Pool2 + 20) = -1;
            v37 = *((_BYTE *)a6 + 133) == 0;
            *(_DWORD *)(Pool2 + 4) = 28;
            v38 = *(_DWORD *)(Pool2 + 4);
            if ( !v37 )
              v38 = 29;
            *(_DWORD *)(v13 + 4) = v38;
            if ( *((_BYTE *)a6 + 132) )
              *(_BYTE *)(v13 + 738) = 1;
            *(_DWORD *)(v13 + 88) = *((_DWORD *)a6 + 14);
            *(_DWORD *)(v13 + 92) = *((_DWORD *)a6 + 15);
            v39 = *(unsigned __int16 **)a6;
            *(_DWORD *)(v13 + 24) = 0;
            *(_BYTE *)(v13 + 40) = 0;
            *(_DWORD *)(v13 + 42) = 0;
            *(_WORD *)(v13 + 46) = 0;
            *(_QWORD *)(v13 + 636) = 0LL;
            *(_WORD *)(v13 + 644) = 0;
            *(_WORD *)(v13 + 678) = 0;
            *(_QWORD *)(v13 + 720) = 0LL;
            *(_QWORD *)(v13 + 728) = 0LL;
            *(_QWORD *)(v13 + 740) = 0LL;
            *(_DWORD *)(v13 + 712) = 2;
            *(_DWORD *)(v13 + 632) = 6;
            v40 = *v39;
            if ( *v39 > 0x200u )
              v40 = 512;
            *(_WORD *)(v13 + 116) = v40;
            if ( v40 )
              memmove((void *)(v13 + 118), *(const void **)(*(_QWORD *)a6 + 8LL), v40);
            v41 = **((_WORD **)a6 + 1);
            if ( v41 )
            {
              if ( v41 <= 0x200u )
                Length = **((_WORD **)a6 + 1);
              *(_WORD *)(v13 + 752) = Length;
              memmove((void *)(v13 + 754), *(const void **)(*((_QWORD *)a6 + 1) + 8LL), Length);
              *(_WORD *)(v13 + 48) = *(_WORD *)(v13 + 752);
            }
            v42 = *((unsigned __int16 *)a6 + 32);
            *(struct _GUID *)(v13 + 52) = *a5;
            if ( (_WORD)v42 )
            {
              *(_DWORD *)(v13 + 44) = 44565126;
              *(_WORD *)(v13 + 42) = v42;
              *(_WORD *)(v13 + 644) = v42;
              memmove((void *)(v13 + 646), (char *)a6 + 66, v42);
              v43 = *(unsigned __int16 *)(v13 + 42);
              *(_WORD *)(v13 + 678) = v43;
              memmove((void *)(v13 + 680), (char *)a6 + 100, v43);
            }
            goto LABEL_15;
          }
LABEL_31:
          *(_DWORD *)(Pool2 + 28) = 3;
          goto LABEL_32;
        }
      }
      else if ( *((_DWORD *)a6 + 14) != 9 )
      {
        if ( *((_DWORD *)a6 + 14) == 10 )
          goto LABEL_31;
        if ( *((_DWORD *)a6 + 14) == 11 )
        {
          *(_DWORD *)(Pool2 + 32) = 2;
          goto LABEL_31;
        }
        if ( *((_DWORD *)a6 + 14) != 12 )
          goto LABEL_32;
      }
      *(_DWORD *)(Pool2 + 36) = 3;
      goto LABEL_31;
    }
    v29 = -1073741670;
  }
LABEL_20:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, (__int64)a4, v59);
  return v29;
}
