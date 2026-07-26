/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C011140C
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0019168 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A588 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CF10 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B825C (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C0007D8C (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqqL @ 0x1C001B65C (WPP_RECORDER_SF_qqqqL.c)
 *     ?ndisIfNdisProviderGetHandle@@YAPEAX_N@Z @ 0x1C001B734 (-ndisIfNdisProviderGetHandle@@YAPEAX_N@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C001BA9C (ndisIfRegisterInterfaceEx.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0035AF0 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1C0035E7C (ndisIfUpdateLoopbackInterfaceOnNetwork.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C010FFD0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C013E1D0 (NdisIfAllocateNetLuidIndexEx.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        const union _NET_LUID_LH *a4,
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
  _NDIS_MINIPORT_BLOCK *v16; // rbx
  unsigned int v17; // ecx
  size_t v18; // r8
  unsigned int SupportedStatistics; // ecx
  _NET_IF_ADMIN_STATUS ifAdminStatus; // ecx
  unsigned __int64 Value; // rbx
  __int128 v22; // xmm0
  __int64 v23; // rax
  _QWORD *Handle; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  char v27; // r9
  unsigned int v28; // edi
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  bool v36; // zf
  int v37; // eax
  unsigned __int16 *v38; // rax
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // cx
  unsigned int v41; // eax
  size_t v42; // r8
  __int128 v43; // xmm0
  size_t v44; // r8
  size_t v45; // r8
  char *v46; // rdx
  char *v47; // rcx
  NTSTATUS v48; // eax
  NTSTATUS appended; // eax
  NTSTATUS v50; // eax
  NTSTATUS v51; // eax
  unsigned __int16 v52; // ax
  NTSTATUS v53; // eax
  NTSTATUS v54; // eax
  __int16 v55; // ax
  unsigned int v56; // edi
  size_t v57; // r8
  int v58; // [rsp+28h] [rbp-79h]
  char v59; // [rsp+58h] [rbp-49h]
  UINT32 v60; // [rsp+5Ch] [rbp-45h] BYREF
  UINT32 NetLuidIndex; // [rsp+60h] [rbp-41h]
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-29h] BYREF
  _UNICODE_STRING String; // [rsp+88h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-9h] BYREF
  char v67; // [rsp+F0h] [rbp+4Fh]
  const union _NET_LUID_LH *v68; // [rsp+100h] [rbp+5Fh]

  v68 = a4;
  v67 = a2;
  Source.Buffer = L" ";
  *(_QWORD *)&Source.Length = 262146LL;
  NetLuidIndex = 0;
  v60 = 0;
  v59 = 0;
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
      (struct _GUID *)&WPP_9cab5530743f3d13a616f229202fc263_Traceguids,
      (char)a1,
      (char)a3,
      (char)a4,
      a7);
  if ( !v10 || a6 && *((_WORD *)a6 + 32) > 0x20u || a7 && a7->Miniport->IfBlock->ifPhysAddress.Length > 0x20u )
  {
    v28 = -1073741811;
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
          *(_WORD *)(v13 + 48) = Length;
          if ( Length )
            memmove((void *)(v13 + 754), a7->FilterFriendlyName->Buffer, Length);
          v16 = a7->Miniport;
          *(_BYTE *)(v13 + 738) = v16->IfBlock->ifHideInterfaceInUi;
          v17 = v16->IfBlock->ifPhysAddress.Length;
          *(_WORD *)(v13 + 42) = v17;
          *(_WORD *)(v13 + 644) = v17;
          *(_DWORD *)(v13 + 44) = 44565126;
          memmove((void *)(v13 + 646), v16->IfBlock->ifPhysAddress.Address, v17);
          v18 = *(unsigned __int16 *)(v13 + 42);
          *(_WORD *)(v13 + 678) = v18;
          memmove((void *)(v13 + 680), v16->IfBlock->PermanentPhysAddress.Address, v18);
          *(_GUID *)(v13 + 52) = a7->InterfaceGuid;
          SupportedStatistics = v16->IfBlock->SupportedStatistics;
          *(_DWORD *)(v13 + 88) = a7->MediaType;
          *(_DWORD *)(v13 + 92) = a7->PhysicalMediaType;
          *(_DWORD *)(v13 + 84) = SupportedStatistics;
          ifAdminStatus = v16->IfBlock->ifAdminStatus;
          *(_QWORD *)(v13 + 720) = a7->XmitLinkSpeed;
          *(_QWORD *)(v13 + 728) = a7->RcvLinkSpeed;
          *(_DWORD *)(v13 + 740) = a7->MediaConnectState;
          *(_DWORD *)(v13 + 744) = a7->MediaDuplexState;
          *(_DWORD *)(v13 + 712) = ifAdminStatus;
          *(_DWORD *)(v13 + 632) = v16->IfBlock->ifOperStatus;
          *(_DWORD *)(v13 + 636) = v16->IfBlock->ifOperStatusFlags;
          *(_DWORD *)(v13 + 640) = v16->IfBlock->ifMtu;
LABEL_15:
          Value = v68->Value;
          goto LABEL_16;
        }
        if ( !v9 )
          goto LABEL_46;
        v28 = NdisIfAllocateNetLuidIndexEx(24LL, *((_DWORD *)a3 + 404) & 1, &v60, 0LL);
        if ( v28 )
          goto LABEL_19;
        v59 = 1;
        *((_WORD *)a3 + 7) = 24;
        NetLuidIndex = v60;
        *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 1) & 0xFFFF000000000000uLL | ((unsigned __int64)(v60 & 0xFFFFFF) << 24);
        v48 = ExUuidCreate((UUID *)a3 + 2);
        v27 = 0;
        v28 = v48;
        if ( v48 >= 0 )
        {
LABEL_46:
          Value = *((_QWORD *)a3 + 1);
          v43 = *((_OWORD *)a3 + 2);
          *(_QWORD *)(v13 + 28) = 1LL;
          *(_DWORD *)(v13 + 36) = 1;
          *(_OWORD *)(v13 + 52) = v43;
          *(_BYTE *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 88) = 17LL;
          *(_DWORD *)(v13 + 640) = 1500;
          *(_QWORD *)(v13 + 720) = 0x40000000LL;
          *(_QWORD *)(v13 + 728) = 0x40000000LL;
          *(_DWORD *)(v13 + 740) = 1;
          *(_DWORD *)(v13 + 744) = 2;
          *(_QWORD *)(v13 + 632) = 1LL;
          if ( !v67 )
          {
            if ( !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 48))
              || !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 564)) )
            {
              v28 = -1073676267;
              goto LABEL_72;
            }
            v44 = *((unsigned __int16 *)a3 + 24);
            *(_WORD *)(v13 + 48) = v44;
            memmove((void *)(v13 + 754), (char *)a3 + 50, v44);
            v45 = *((unsigned __int16 *)a3 + 282);
            v46 = (char *)a3 + 566;
            *(_WORD *)(v13 + 116) = v45;
            v47 = (char *)(v13 + 118);
            goto LABEL_50;
          }
          RtlInitUnicodeString(&DestinationString, &xmmword_1C00F5752);
          *(_DWORD *)&Destination.Length = 0x2000000;
          Destination.Buffer = (wchar_t *)(v13 + 754);
          RtlCopyUnicodeString(&Destination, &DestinationString);
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          v27 = 0;
          v28 = appended;
          if ( appended >= 0 )
          {
            v50 = RtlIntegerToUnicodeString(*(_DWORD *)(*((_QWORD *)a1 + 6) + 16LL), 0xAu, &String);
            v27 = 0;
            v28 = v50;
            if ( v50 >= 0 )
            {
              v51 = RtlAppendUnicodeStringToString(&Destination, &String);
              v27 = 0;
              v28 = v51;
              if ( v51 >= 0 )
              {
                v52 = Destination.Length;
                *(_WORD *)(v13 + 752) = Destination.Length;
                *(_WORD *)(v13 + 48) = v52;
                RtlInitUnicodeString(&DestinationString, &xmmword_1C00F5962);
                *(_DWORD *)&Destination.Length = 0x2000000;
                Destination.Buffer = (wchar_t *)(v13 + 118);
                RtlCopyUnicodeString(&Destination, &DestinationString);
                v53 = RtlAppendUnicodeStringToString(&Destination, &Source);
                v27 = 0;
                v28 = v53;
                if ( v53 >= 0 )
                {
                  v54 = RtlAppendUnicodeStringToString(&Destination, &String);
                  v27 = 0;
                  v28 = v54;
                  if ( v54 >= 0 )
                  {
                    v55 = *(_WORD *)(v13 + 48);
                    v56 = Destination.Length;
                    v57 = *(unsigned __int16 *)(v13 + 752);
                    *(_WORD *)(v13 + 116) = Destination.Length;
                    *((_WORD *)a3 + 24) = v55;
                    memmove((char *)a3 + 50, (const void *)(v13 + 754), v57);
                    v45 = v56;
                    *((_WORD *)a3 + 282) = v56;
                    v47 = (char *)a3 + 566;
                    v46 = (char *)(v13 + 118);
LABEL_50:
                    memmove(v47, v46, v45);
                    v10 = a1;
                    *(_DWORD *)(v13 + 712) = 1;
LABEL_16:
                    v22 = *((_OWORD *)v10 + 2);
                    *(_WORD *)(v13 + 50) = 754;
                    v23 = *((_QWORD *)v10 + 6);
                    *(_OWORD *)(v13 + 68) = v22;
                    *(_DWORD *)(v13 + 96) = *(_DWORD *)(v23 + 16);
                    *(_WORD *)(v13 + 736) = 0;
                    *(_OWORD *)(v13 + 100) = v22;
                    Handle = ndisIfNdisProviderGetHandle(a3 != 0LL);
                    v26 = ndisIfRegisterInterfaceEx(
                            Handle,
                            Value,
                            (unsigned __int64)a7 & -(__int64)(a7 != 0LL),
                            v13,
                            a8,
                            v25,
                            &v60);
                    v27 = 0;
                    v28 = v26;
                    if ( !v26 )
                    {
                      if ( a3 )
                        ndisIfUpdateLoopbackInterfaceOnNetwork((__int64)a1, (union _NET_LUID_LH)Value);
                      goto LABEL_19;
                    }
LABEL_72:
                    if ( v59 != v27 )
                      NdisIfFreeNetLuidIndex(0x18u, NetLuidIndex);
                    goto LABEL_19;
                  }
                }
              }
            }
          }
        }
        if ( v28 )
          goto LABEL_72;
LABEL_19:
        ExFreePoolWithTag((PVOID)v13, 0);
        goto LABEL_20;
      }
      v30 = *((unsigned __int16 *)a6 + 8);
      *(_QWORD *)(Pool2 + 28) = 2LL;
      *(_DWORD *)(Pool2 + 36) = 1;
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 5;
        if ( !v32 )
          goto LABEL_32;
        v33 = v32 - 3;
        if ( !v33 )
          goto LABEL_32;
        v34 = v33 - 14;
        if ( v34 )
        {
          v35 = v34 - 14;
          if ( v35 )
          {
            if ( v35 != 94 )
              goto LABEL_32;
            goto LABEL_31;
          }
          *(_DWORD *)(Pool2 + 28) = 4;
LABEL_32:
          *(_DWORD *)(Pool2 + 20) = -1;
          v36 = *((_BYTE *)a6 + 133) == 0;
          *(_DWORD *)(Pool2 + 4) = 28;
          v37 = *(_DWORD *)(Pool2 + 4);
          if ( !v36 )
            v37 = 29;
          *(_DWORD *)(v13 + 4) = v37;
          if ( *((_BYTE *)a6 + 132) )
            *(_BYTE *)(v13 + 738) = 1;
          *(_DWORD *)(v13 + 88) = *((_DWORD *)a6 + 14);
          *(_DWORD *)(v13 + 92) = *((_DWORD *)a6 + 15);
          v38 = *(unsigned __int16 **)a6;
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
          v39 = *v38;
          if ( *v38 > 0x200u )
          {
            v39 = 512;
            *(_WORD *)(v13 + 116) = 512;
          }
          else
          {
            *(_WORD *)(v13 + 116) = v39;
            if ( !v39 )
            {
LABEL_39:
              v40 = **((_WORD **)a6 + 1);
              if ( v40 )
              {
                if ( v40 <= 0x200u )
                  Length = **((_WORD **)a6 + 1);
                *(_WORD *)(v13 + 752) = Length;
                memmove((void *)(v13 + 754), *(const void **)(*((_QWORD *)a6 + 1) + 8LL), Length);
                *(_WORD *)(v13 + 48) = *(_WORD *)(v13 + 752);
              }
              v41 = *((unsigned __int16 *)a6 + 32);
              *(struct _GUID *)(v13 + 52) = *a5;
              if ( (_WORD)v41 )
              {
                *(_DWORD *)(v13 + 44) = 44565126;
                *(_WORD *)(v13 + 42) = v41;
                *(_WORD *)(v13 + 644) = v41;
                memmove((void *)(v13 + 646), (char *)a6 + 66, v41);
                v42 = *(unsigned __int16 *)(v13 + 42);
                *(_WORD *)(v13 + 678) = v42;
                memmove((void *)(v13 + 680), (char *)a6 + 100, v42);
              }
              goto LABEL_15;
            }
          }
          memmove((void *)(v13 + 118), *(const void **)(*(_QWORD *)a6 + 8LL), v39);
          goto LABEL_39;
        }
      }
      else if ( *((_DWORD *)a6 + 14) != 9 )
      {
        if ( *((_DWORD *)a6 + 14) == 10 )
        {
LABEL_31:
          *(_DWORD *)(Pool2 + 28) = 3;
          goto LABEL_32;
        }
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
    v28 = -1073741670;
  }
LABEL_20:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, (__int64)a4, v58);
  return v28;
}
