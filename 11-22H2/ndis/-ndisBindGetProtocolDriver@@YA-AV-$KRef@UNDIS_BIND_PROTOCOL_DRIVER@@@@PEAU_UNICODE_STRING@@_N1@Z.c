/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C011D0E0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002FA30 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C009D830 (NdisRegisterProtocol.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C011CDB4 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01170A4 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C011D270 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C011E3B8 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C011E3FC (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D704 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

_QWORD *__fastcall ndisBindGetProtocolDriver(_QWORD *a1, const struct _UNICODE_STRING *a2, char a3, bool a4)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // ecx
  __int64 v11; // rsi
  const wchar_t **v12; // r8
  unsigned __int64 v13; // rax
  PVOID v14; // rbx
  struct Rtl::KString *v15; // rax
  void *v16; // rcx
  __int64 v17; // rsi
  PVOID v18; // rax
  __int64 v20; // rax
  volatile signed __int32 *v21; // rax
  bool v22; // zf
  PVOID P; // [rsp+20h] [rbp-20h] BYREF
  KLockHolder v24; // [rsp+28h] [rbp-18h] BYREF

  v24.m_State = Unlocked;
  v24.m_Lock = (KPushLockBase *)qword_1C00F5728;
  v24.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v24);
  v7 = qword_1C00F5728;
  v8 = 0LL;
  v9 = *(unsigned int *)(qword_1C00F5728 + 44);
  v10 = *(_DWORD *)(qword_1C00F5728 + 44);
  while ( v8 != v9 )
  {
    if ( v8 >= v10 )
      __fastfail(5u);
    v11 = *(_QWORD *)(v7 + 48);
    v12 = *(const wchar_t ***)(*(_QWORD *)(v11 + 8 * v8) + 24LL);
    v13 = *(unsigned __int16 *)v12;
    if ( (_WORD)v13 == a2->Length )
    {
      if ( !_wcsnicmp(v12[1], a2->Buffer, v13 >> 1) )
      {
        if ( a3 && !ndisBindReadProtocolDriverConfiguration(*(struct NDIS_BIND_PROTOCOL_DRIVER **)(v11 + 8 * v8), 1) )
        {
          *a1 = 0LL;
        }
        else
        {
          v20 = *(_QWORD *)(v11 + 8 * v8);
          *a1 = v20;
          if ( v20 )
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 48));
        }
        goto LABEL_15;
      }
      v10 = *(_DWORD *)(v7 + 44);
    }
    ++v8;
  }
  P = 0LL;
  if ( (unsigned __int8)KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(&P) )
  {
    v14 = P;
    v15 = Rtl::KString::Initialize(a2);
    v16 = (void *)*((_QWORD *)v14 + 3);
    *((_QWORD *)v14 + 3) = v15;
    if ( v16 )
      ExFreePoolWithTag(v16, 0x7274534Bu);
    if ( *((_QWORD *)v14 + 3) && ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)v14, a4) )
    {
      v17 = qword_1C00F5728;
      if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::grow(
                              qword_1C00F5728 + 40,
                              (unsigned int)(*(_DWORD *)(qword_1C00F5728 + 44) + 1)) )
      {
        *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL * *(unsigned int *)(v17 + 44)) = v14;
        _InterlockedIncrement((volatile signed __int32 *)v14 + 12);
        v18 = P;
        ++*(_DWORD *)(v17 + 44);
        *a1 = v18;
        goto LABEL_15;
      }
      *a1 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 12, 0xFFFFFFFF) == 1;
  }
  else
  {
    v21 = (volatile signed __int32 *)P;
    *a1 = 0LL;
    if ( !v21 )
      goto LABEL_15;
    v22 = _InterlockedExchangeAdd(v21 + 12, 0xFFFFFFFF) == 1;
  }
  if ( v22 )
  {
    NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)P);
    ExFreePoolWithTag(P, 0x44745042u);
  }
LABEL_15:
  KLockHolder::~KLockHolder(&v24);
  return a1;
}
