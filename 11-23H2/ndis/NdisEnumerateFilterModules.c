/*
 * XREFs of NdisEnumerateFilterModules @ 0x1C0067140
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0111FD8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167A0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

NDIS_STATUS __stdcall NdisEnumerateFilterModules(
        NDIS_HANDLE NdisHandle,
        PVOID InterfaceBuffer,
        ULONG InterfaceBufferLength,
        PULONG BytesNeeded,
        PULONG BytesWritten)
{
  ULONG v5; // r14d
  NDIS_HANDLE v7; // r13
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  char *v9; // rsi
  NDIS_STATUS v10; // r12d
  __m128i *v11; // rdi
  __int64 v12; // rcx
  bool v13; // cf
  __int64 v14; // rcx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  struct _NDIS_MINIPORT_BLOCK *v16; // rbx
  int v17; // r12d
  unsigned int v18; // r14d
  _NDIS_FILTER_BLOCK *HighestFilter; // r14
  KSPIN_LOCK *p_Lock; // rax
  KIRQL v21; // dl
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  __m128i v23; // xmm0
  __m128i *value; // rax
  unsigned int v25; // eax
  int v26; // eax
  Rtl::KString *v27; // rax
  Rtl::KString *v28; // rdx
  KIRQL v29; // dl
  unsigned int v30; // r14d
  _NET_LUID_LH v31; // rax
  char *v32; // rsi
  __int64 Length; // rcx
  struct _NDIS_MINIPORT_BLOCK *v34; // rax
  _NDIS_FILTER_BLOCK *v35; // r14
  KSPIN_LOCK *v36; // rax
  int v37; // r12d
  char *v38; // r13
  unsigned int v39; // edi
  KIRQL v40; // dl
  _NDIS_FILTER_DRIVER_BLOCK *v41; // rax
  __m128i v42; // xmm0
  __m128i *v43; // rax
  unsigned int v44; // eax
  Rtl::KString *v45; // rax
  const void **v46; // rdx
  KIRQL v47; // dl
  char v49; // [rsp+48h] [rbp-31h]
  ULONG v50; // [rsp+4Ch] [rbp-2Dh]
  unsigned int v51; // [rsp+50h] [rbp-29h]
  unsigned int v52; // [rsp+54h] [rbp-25h]
  unsigned int v53; // [rsp+54h] [rbp-25h]
  struct _NDIS_MINIPORT_BLOCK *v54; // [rsp+60h] [rbp-19h]
  Ndis::BindEngine *p_BindEngine; // [rsp+60h] [rbp-19h]
  struct _NDIS_MINIPORT_BLOCK *v56; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-9h]
  __m128i v58; // [rsp+78h] [rbp-1h]
  char v59; // [rsp+D8h] [rbp+5Fh]
  KIRQL NewIrql; // [rsp+E0h] [rbp+67h] BYREF
  ULONG v61; // [rsp+E8h] [rbp+6Fh]
  PULONG v62; // [rsp+F0h] [rbp+77h]

  v62 = BytesNeeded;
  v61 = InterfaceBufferLength;
  v59 = (char)NdisHandle;
  v5 = InterfaceBufferLength;
  v56 = 0LL;
  v7 = NdisHandle;
  v8 = 0LL;
  v50 = InterfaceBufferLength;
  v9 = (char *)InterfaceBuffer + InterfaceBufferLength;
  v52 = 0;
  v10 = 0;
  NewIrql = 0;
  v11 = 0LL;
  v49 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x27u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      NdisHandle);
  if ( *(_BYTE *)v7 == 5 )
  {
    v14 = *((_QWORD *)v7 + 2);
    v8 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 4);
    if ( *(_BYTE *)(v14 + 100) > 6u )
      goto LABEL_16;
    if ( *(_BYTE *)(v14 + 100) != 6 )
      goto LABEL_17;
    v13 = *(_BYTE *)(v14 + 101) < 0x1Eu;
    goto LABEL_15;
  }
  if ( *(_BYTE *)v7 == 17 )
  {
    v8 = (struct _NDIS_MINIPORT_BLOCK *)v7;
    if ( *((_BYTE *)v7 + 32) > 6u )
      goto LABEL_16;
    if ( *((_BYTE *)v7 + 32) != 6 )
      goto LABEL_17;
    v13 = *((_BYTE *)v7 + 33) < 0x1Eu;
LABEL_15:
    if ( v13 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( *(_BYTE *)v7 != 18 )
    goto LABEL_17;
  v12 = *((_QWORD *)v7 + 3);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 2);
  if ( *(_BYTE *)(v12 + 56) <= 6u )
  {
    if ( *(_BYTE *)(v12 + 56) != 6 )
      goto LABEL_17;
    v13 = *(_BYTE *)(v12 + 57) < 0x1Eu;
    goto LABEL_15;
  }
LABEL_16:
  v49 = 2;
LABEL_17:
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v51 = 80;
  if ( !v8 )
  {
    v10 = -1073741811;
    goto LABEL_61;
  }
  if ( v5 >= 0x50 )
  {
    *(_QWORD *)InterfaceBuffer = 5243264LL;
    v50 = v5 - 80;
    v11 = (__m128i *)((char *)InterfaceBuffer + 16);
    *((_DWORD *)InterfaceBuffer + 3) = 16;
    *((_DWORD *)InterfaceBuffer + 2) = 0;
  }
  BindPaths = v8->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v56, 0, MPREF_LWF_ENUMAPI);
    v16 = v56;
    if ( !v56 )
    {
      v10 = -1073676282;
      goto LABEL_61;
    }
    LODWORD(v7) = v50;
    v17 = 80;
    v54 = v56;
    v18 = v56->BindPaths->Number - 1;
    do
    {
      v57 = v16->BindPaths != 0LL ? v18 : 0;
      Ndis::BindEngine::BeginPolicyUpdates(&v16->BindEngine);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v16, &NewIrql);
      HighestFilter = v16->HighestFilter;
      if ( HighestFilter )
      {
        p_Lock = &v16->Lock;
        do
        {
          v21 = NewIrql;
          v16->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v21);
          FilterDriver = HighestFilter->FilterDriver;
          v23 = 0LL;
          v58 = 0LL;
          value = (__m128i *)FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
          if ( value )
          {
            v23 = *value;
            v58 = *value;
          }
          v25 = v23.m128i_u16[1] + HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength + 64;
          v17 += v25;
          v53 = v25;
          if ( (unsigned int)v7 >= v25 )
          {
            v11->m128i_i8[1] = v49;
            v11->m128i_i16[1] = 80;
            v11->m128i_i8[0] = 0x80;
            v11->m128i_i32[3] = (HighestFilter->FilterDriver->Bind._p->_t.FilterBindFlags & 1) + 1;
            v11->m128i_i32[2] = 2 - ((HighestFilter->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0);
            v11[1].m128i_i32[0] = HighestFilter->IfIndex;
            v11[1].m128i_i64[1] = HighestFilter->IfBlock->NetLuid.Value;
            v11->m128i_i32[1] = 2;
            v11[2] = v23;
            if ( (unsigned __int8)v49 >= 2u )
            {
              v26 = 2;
              if ( !HighestFilter->Characteristics.SendNetBufferListsHandler )
              {
                v26 = 6;
                v11->m128i_i32[1] = 6;
              }
              if ( !HighestFilter->Characteristics.ReturnNetBufferListsHandler )
                v11->m128i_i32[1] = v26 | 8;
            }
            v11[3].m128i_i16[1] = HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength;
            v11[3].m128i_i16[0] = HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength;
            v9 -= HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength;
            v11[3].m128i_i64[1] = (__int64)v9;
            memmove(
              v9,
              HighestFilter->FilterInstanceName.__ptr_.__value_->Buffer,
              HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength);
            v27 = HighestFilter->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
            if ( v27 )
            {
              v9 -= v27->MaximumLength;
              v11[2].m128i_i16[0] = v11[2].m128i_i16[1];
              v11[2].m128i_i64[1] = (__int64)v9;
              v28 = HighestFilter->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
              memmove(v9, v28->Buffer, v28->MaximumLength);
            }
            ++*((_DWORD *)InterfaceBuffer + 2);
            v11 += 4;
            LODWORD(v7) = (_DWORD)v7 - v53;
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v16, &NewIrql);
          HighestFilter = HighestFilter->LowerFilter;
          p_Lock = &v16->Lock;
        }
        while ( HighestFilter );
      }
      v29 = NewIrql;
      v16->MiniportThread = 0LL;
      KeReleaseSpinLock(&v16->Lock, v29);
      Ndis::BindEngine::EndPolicyUpdates(&v16->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&v16->BindEngine, RunAsynchronous, 0);
      if ( (v16->PnPFlags & 0x8000000) != 0 )
      {
        v30 = v16->FilterClass.__ptr_.__value_->Length + v16->MiniportName.Length + 80;
        v17 += v30;
        if ( (unsigned int)v7 >= v30 )
        {
          v11->m128i_i32[0] = 5243264;
          v11->m128i_i32[3] = 1;
          v11->m128i_i32[2] = 2;
          v11[1].m128i_i32[0] = v16->IfIndex;
          v31.Value = (ULONG64)v16->NetLuid;
          v11->m128i_i32[1] = 1;
          v11[1].m128i_u64[1] = v31.Value;
          v11[2] = *(__m128i *)v16->FilterClass.__ptr_.__value_;
          v11[3].m128i_i16[1] = v16->MiniportName.Length;
          v11[3].m128i_i16[0] = v16->MiniportName.Length;
          v32 = &v9[-v16->MiniportName.Length];
          v11[3].m128i_i64[1] = (__int64)v32;
          memmove(v32, v16->MiniportName.Buffer, v16->MiniportName.Length);
          Length = v16->FilterClass.__ptr_.__value_->Length;
          v9 = &v32[-Length];
          if ( (_WORD)Length )
          {
            v11[2].m128i_i64[1] = (__int64)v9;
            memmove(v9, v16->FilterClass.__ptr_.__value_->Buffer, v16->FilterClass.__ptr_.__value_->Length);
          }
          ++*((_DWORD *)InterfaceBuffer + 2);
          v11 += 4;
          LODWORD(v7) = (_DWORD)v7 - v30;
        }
      }
      v34 = v54;
      if ( v16 != v54 )
      {
        ndisDereferenceMiniport(v16, 0x25u);
        v34 = v54;
      }
      if ( !v57 )
        break;
      v18 = v57 - 1;
      ndisReferenceMiniportByName(&v34->BindPaths->Paths[v57 - 1], &v56, 1u, MPREF_LWF_ENUMAPI);
      v16 = v56;
    }
    while ( v56 );
    v51 = v17;
    v50 = (unsigned int)v7;
    ndisDereferenceMiniport(v54, 0x25u);
    v10 = 0;
    LOBYTE(v7) = v59;
  }
  else
  {
    p_BindEngine = &v8->BindEngine;
    Ndis::BindEngine::BeginPolicyUpdates(&v8->BindEngine);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
    v35 = v8->HighestFilter;
    v36 = &v8->Lock;
    if ( v35 )
    {
      v37 = 80;
      v38 = &v11->m128i_i8[2];
      v39 = v50;
      do
      {
        v40 = NewIrql;
        v8->MiniportThread = 0LL;
        KeReleaseSpinLock(v36, v40);
        v41 = v35->FilterDriver;
        v42 = 0LL;
        v58 = 0LL;
        v43 = (__m128i *)v41->Bind._p->_t.FilterClass.__ptr_.__value_;
        if ( v43 )
        {
          v42 = *v43;
          v58 = *v43;
        }
        v44 = v52 + (unsigned __int16)_mm_cvtsi128_si32(v42) + v35->FilterInstanceName.__ptr_.__value_->Length + 80;
        v37 += v44;
        v52 = v44;
        if ( v39 >= v44 )
        {
          *(_DWORD *)(v38 - 2) = 5243264;
          *(_DWORD *)(v38 + 10) = (v35->FilterDriver->Bind._p->_t.FilterBindFlags & 1) + 1;
          *(_DWORD *)(v38 + 6) = 2 - ((v35->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0);
          *(_DWORD *)(v38 + 14) = v35->IfIndex;
          *(_QWORD *)(v38 + 22) = v35->IfBlock->NetLuid.Value;
          *(_DWORD *)(v38 + 2) = 2;
          *(__m128i *)(v38 + 30) = v42;
          *((_WORD *)v38 + 24) = v35->FilterInstanceName.__ptr_.__value_->Length;
          *((_WORD *)v38 + 23) = v35->FilterInstanceName.__ptr_.__value_->Length;
          v9 -= v35->FilterInstanceName.__ptr_.__value_->Length;
          *(_QWORD *)(v38 + 54) = v9;
          memmove(v9, v35->FilterInstanceName.__ptr_.__value_->Buffer, v35->FilterInstanceName.__ptr_.__value_->Length);
          v45 = v35->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
          if ( v45 )
          {
            v9 -= v45->Length;
            *(_QWORD *)(v38 + 38) = v9;
            v46 = (const void **)v35->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
            memmove(v9, v46[1], *(unsigned __int16 *)v46);
          }
          ++*((_DWORD *)InterfaceBuffer + 2);
          v38 += 64;
          v39 -= v52;
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
        v35 = v35->LowerFilter;
        v36 = &v8->Lock;
      }
      while ( v35 );
      LOBYTE(v7) = v59;
      v36 = &v8->Lock;
      v51 = v37;
      v10 = 0;
      v50 = v39;
    }
    v47 = NewIrql;
    v8->MiniportThread = 0LL;
    KeReleaseSpinLock(v36, v47);
    Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
    Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
  }
  v5 = v61;
LABEL_61:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( !v10 )
  {
    if ( v51 > v5 )
      v10 = -1073676266;
    *v62 = v51;
    *BytesWritten = v5 - v50;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x28u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)v7,
      v10);
  return v10;
}
