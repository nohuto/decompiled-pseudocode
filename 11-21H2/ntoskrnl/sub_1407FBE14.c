/*
 * XREFs of sub_1407FBE14 @ 0x1407FBE14
 * Callers:
 *     sub_14074C1F8 @ 0x14074C1F8 (sub_14074C1F8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D2B6C @ 0x1402D2B6C (sub_1402D2B6C.c)
 *     sub_1402D2BA0 @ 0x1402D2BA0 (sub_1402D2BA0.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     FsRtlNotifyVolumeEvent @ 0x1407FC020 (FsRtlNotifyVolumeEvent.c)
 *     sub_1409B54D8 @ 0x1409B54D8 (sub_1409B54D8.c)
 */

__int64 __fastcall sub_1407FBE14(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // ebx
  struct _FILE_OBJECT *v5; // rsi
  char v6; // r15
  int v10; // ebp
  struct _FAST_MUTEX *v12; // r14
  int v13; // eax
  int v14; // eax
  ULONG v15; // edx
  BOOLEAN v16; // al
  int v17; // ecx
  BOOLEAN v18; // r14
  int v19; // ecx

  v3 = *(_DWORD *)(a2 + 24);
  v4 = 0;
  v5 = *(struct _FILE_OBJECT **)(a2 + 48);
  v6 = 0;
  if ( v3 == 589848 )
  {
    FsRtlNotifyVolumeEvent(v5, 3u);
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a2 + 24) != 589856 )
  {
    if ( v3 == 589824 || v3 == 589828 || v3 == 589836 || v3 == 589844 )
    {
      if ( !sub_1402D2BA0(a3, *(_QWORD *)(a2 + 48)) )
      {
        v4 = -1073741202;
        goto LABEL_12;
      }
      v4 = -1073741822;
      goto LABEL_34;
    }
    if ( v3 != 589848 )
    {
      if ( v3 == 589852 )
      {
        v12 = (struct _FAST_MUTEX *)(a3 + 232);
        ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
        v14 = *(_DWORD *)(a3 + 112);
        if ( (v14 & 1) != 0 )
        {
          *(_QWORD *)(a3 + 216) = 0LL;
          *(_DWORD *)(a3 + 112) = v14 & 0xFFFFFFFE;
        }
        else
        {
          v4 = -1073741782;
        }
        goto LABEL_22;
      }
      if ( v3 != 589856 )
      {
        if ( v3 != 590412 )
        {
          v4 = -1073741811;
          goto LABEL_12;
        }
        if ( !sub_1402D2BA0(a3, *(_QWORD *)(a2 + 48)) )
          return (unsigned int)-1073741202;
        v4 = sub_1409B54D8(a1, a2, a3);
        goto LABEL_34;
      }
      goto LABEL_16;
    }
LABEL_28:
    v16 = sub_1402D2BA0(a3, (__int64)v5);
    v17 = 0;
    v18 = v16;
    if ( !v16 )
      v17 = -1073741202;
    v4 = v17;
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
    v19 = *(_DWORD *)(a3 + 112);
    if ( (v19 & 1) != 0 || *(_DWORD *)(a3 + 116) != 1 )
    {
      v4 = -1073741790;
    }
    else
    {
      *(_QWORD *)(a3 + 216) = v5;
      *(_DWORD *)(a3 + 112) = v19 | 1;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 232));
    if ( v18 )
    {
LABEL_34:
      sub_1402D2B6C(a3, (__int64)v5);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  FsRtlNotifyVolumeEvent(v5, 1u);
LABEL_16:
  v12 = (struct _FAST_MUTEX *)(a3 + 232);
  ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
  v13 = *(_DWORD *)(a3 + 112);
  if ( (v13 & 2) != 0 )
  {
    v4 = -1073741202;
  }
  else
  {
    v6 = 1;
    *(_DWORD *)(a3 + 112) = v13 | 2;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 232));
  if ( v6 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 224));
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
    *(_QWORD *)(a3 + 208) = v5;
LABEL_22:
    KeReleaseGuardedMutex(v12);
  }
LABEL_23:
  if ( (v4 & 0x80000000) == 0 )
  {
    if ( v3 != 589852 )
      return v4;
    v15 = 5;
LABEL_26:
    FsRtlNotifyVolumeEvent(v5, v15);
    return v4;
  }
LABEL_12:
  v10 = v3 - 589848;
  if ( !v10 )
  {
    v15 = 4;
    goto LABEL_26;
  }
  if ( v10 == 8 )
  {
    v15 = 2;
    goto LABEL_26;
  }
  return v4;
}
