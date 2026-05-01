/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180020840
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000E970 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180020BE0 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x18008DEA4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  int v8; // r10d
  _QWORD *i; // rdx
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  DWORD v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  __int64 v27; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-19h] BYREF
  void *v30; // [rsp+80h] [rbp-9h]
  __int64 v31; // [rsp+88h] [rbp-1h]
  __int64 *v32; // [rsp+90h] [rbp+7h]
  __int64 v33; // [rsp+98h] [rbp+Fh]
  __int64 v34; // [rsp+A0h] [rbp+17h]

  if ( (*((_BYTE *)this + 1284) & 1) != 0 )
  {
    if ( dword_1800DC1E0 )
    {
      v16 = GetTickCount() - *((_DWORD *)this + 443);
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*((_QWORD *)this + 164) + 64LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)&UserData);
      if ( (unsigned int)dword_1800DC1E0 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v17, v18) )
        {
          v25 = v16;
          v27 = v31;
          *(_QWORD *)&EventDescriptor.Id = v34;
          v24 = *((_QWORD *)this + 219);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v19,
            (unsigned int)&unk_1800C49E3,
            v20,
            v21,
            (__int64)&v24,
            (__int64)&EventDescriptor,
            (__int64)&v27,
            (__int64)&v25);
        }
      }
    }
  }
  v2 = (_QWORD *)*((_QWORD *)this + 164);
  v3 = v2 + 10;
  if ( v2[10] && v2[11] )
  {
    v22 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_26;
    v23 = (_QWORD *)v2[11];
    if ( (_QWORD *)*v23 != v3 )
      goto LABEL_26;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    *(_OWORD *)v3 = 0LL;
  }
  v4 = (__int64 *)v2[6];
  RmpObjectRelease(v2);
  v5 = *v4;
  v4[164] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v5 + 16))(v4);
  v6 = v2[8];
  v2[6] = 0LL;
  v7 = *(_QWORD *)(v6 + 24) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v6 + 24) + 552LL);
  v8 = *(_DWORD *)(v7 + 4) >> 5;
  v28 = v2[1] & (-1LL << (*(_DWORD *)(v7 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v7 + 8)
                     + 8
                     * ((HIBYTE(v28)
                       + 37
                       * (BYTE6(v28)
                        + 37
                        * (BYTE5(v28)
                         + 37
                         * (BYTE4(v28)
                          + 37
                          * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (37 * ((unsigned __int8)v28 + 11623883) + BYTE1(v28)))))))) & (unsigned int)(v8 - 1)));
        (*i & 1) == 0;
        i = (_QWORD *)*i )
  {
    if ( (_QWORD *)*i == v2 )
    {
      *i = *v2;
      --*(_DWORD *)v7;
      *v2 |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)v2 + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v7 + 16);
  RmpObjectRelease(v2);
  *((_QWORD *)this + 164) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v10 = *((_QWORD *)this + 165) + 24 * (*((int *)this + 332) + 47LL);
  v11 = (_OWORD *)((char *)this + 1296);
  v12 = *((_QWORD *)this + 162);
  if ( *(ExecutionModel::ResourceSet **)(v12 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1296)
    || (v13 = (_QWORD *)*((_QWORD *)this + 163), (_OWORD *)*v13 != v11) )
  {
LABEL_26:
    __fastfail(3u);
  }
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  --*(_DWORD *)(v10 + 16);
  v14 = *(_QWORD *)this;
  *((_DWORD *)this + 332) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v14 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v15 = *((_QWORD *)this + 214);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    *((_QWORD *)this + 214) = 0LL;
  }
  *((_OWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v24 = *((_QWORD *)this + 219);
    v33 = 8LL;
    v32 = &v24;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v30 = &unk_1800C4831;
    UserData.Reserved = 2;
    v31 = 0x10000002BLL;
    LODWORD(v25) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  *((_BYTE *)this + 12) = 0;
}
