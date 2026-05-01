/*
 * XREFs of ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023880
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AAF8 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180022910 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAD4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AA80 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampHostCheckCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // ebp
  DWORD v2; // esi
  __int64 v4; // r14
  _QWORD *Value; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  int v9; // edi
  __int64 *v11; // rax
  __int64 v12; // rcx
  DWORD v13; // esi
  _QWORD *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rcx
  DWORD v17; // esi
  _QWORD *v18; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v20; // ecx
  __int64 *v21; // rax
  __int64 v22; // rcx
  DWORD v23; // esi
  _QWORD *v24; // rbx
  DWORD v25; // eax
  DWORD v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // rdx

  v1 = 0;
  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  if ( (*((_QWORD *)a1 + 83) & 0x800000000000LL) == 0 )
  {
    if ( HampLockTrackerId != -1 )
    {
      v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v12 = *v11;
      if ( (*v11 & 2) == 0 )
        __int2c();
      v8 = v11[2]-- == 1;
      if ( v8 )
        *v11 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(a1);
    v1 = 1;
    HampPkgEnterInsertion((struct _HAM_PACKAGE *)v4);
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v14 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v14 |= 2uLL;
      ++v14[2];
    }
    RtlAcquireSRWLockShared(a1);
    if ( (*((_QWORD *)a1 + 83) & 0x800000000000LL) == 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v15 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v16 = *v15;
        if ( (*v15 & 2) == 0 )
          __int2c();
        v8 = v15[2]-- == 1;
        if ( v8 )
          *v15 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(a1);
      v9 = HampHostCompletePackageInsertion(a1);
      if ( v9 >= 0 )
      {
        v17 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v18 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            __int2c();
          *v18 |= 2uLL;
          ++v18[2];
        }
        RtlAcquireSRWLockExclusive(a1);
        CurrentThreadId = GetCurrentThreadId();
        v20 = HampLockTrackerId;
        *((_DWORD *)a1 + 2) = CurrentThreadId;
        *((_QWORD *)a1 + 83) |= 0x800000000000uLL;
        if ( v20 != -1 )
        {
          v21 = (__int64 *)TlsGetValue(v20);
          v22 = *v21;
          if ( (*v21 & 2) == 0 )
            __int2c();
          v8 = v21[2]-- == 1;
          if ( v8 )
            *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        *((_DWORD *)a1 + 2) = 0;
        RtlReleaseSRWLockExclusive(a1);
        v9 = 0;
      }
      goto LABEL_39;
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v6 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v7 = *v6;
    if ( (*v6 & 2) == 0 )
      __int2c();
    v8 = v6[2]-- == 1;
    if ( v8 )
      *v6 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(a1);
  v9 = 0;
  if ( v1 )
  {
LABEL_39:
    v23 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v24 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v24 |= 0x40uLL;
      ++v24[7];
    }
    RtlAcquireSRWLockExclusive(v4 + 304);
    v25 = GetCurrentThreadId();
    v26 = HampLockTrackerId;
    *(_DWORD *)(v4 + 312) = v25;
    *(_DWORD *)(v4 + 336) = 0;
    if ( v26 != -1 )
    {
      v27 = (__int64 *)TlsGetValue(v26);
      v28 = *v27;
      if ( (*v27 & 0x40) == 0 )
        __int2c();
      v8 = v27[7]-- == 1;
      if ( v8 )
        *v27 = v28 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    *(_DWORD *)(v4 + 312) = 0;
    RtlReleaseSRWLockExclusive(v4 + 304);
    RtlWakeAddressSingle(v4 + 336);
  }
  return (unsigned int)v9;
}
