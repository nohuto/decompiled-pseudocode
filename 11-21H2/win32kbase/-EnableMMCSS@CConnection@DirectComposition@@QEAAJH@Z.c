/*
 * XREFs of ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0212ECC
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0211AD0 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0013C00 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02154E8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::EnableMMCSS(DirectComposition::CConnection *this, int a2)
{
  struct _ERESOURCE *v2; // rbx
  unsigned int v5; // ebp
  int v6; // ecx
  bool v7; // al
  struct _ERESOURCE *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdi
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  v6 = *((_DWORD *)this + 56);
  v7 = 0;
  if ( a2 )
  {
    if ( v6 == -1 )
    {
      v5 = -1073741823;
    }
    else
    {
      *((_DWORD *)this + 56) = v6 + 1;
      v7 = v6 == 0;
    }
    if ( !v7 )
      goto LABEL_19;
  }
  else
  {
    *((_DWORD *)this + 56) = v6 - 1;
    if ( v6 != 1 )
      goto LABEL_19;
  }
  if ( DirectComposition::CConnection::IsConnected(this) )
  {
    v8 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    v9 = DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), a2);
    v10 = *((_QWORD *)this + 19);
    v5 = v9;
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
    KeLeaveCriticalRegion();
    do
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 2, 1) == 1 )
      {
        v11 = *(struct _ERESOURCE **)(v10 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v11, 1u);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, 0LL);
        v12 = *(struct _ERESOURCE **)(*(_QWORD *)(v10 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v12, 1u);
        if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v10 + 40)) )
          *(_DWORD *)(v10 + 24) = 4;
        ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v10 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 5, 4) == 4 )
      {
        v13 = *(struct _ERESOURCE **)(v10 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v13, 1u);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
        v14 = *(struct _ERESOURCE **)(*(_QWORD *)(v10 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v14, 1u);
        if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v10 + 40)) )
          *(_DWORD *)(v10 + 24) = 1;
        ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v10 + 40) + 8LL));
        KeLeaveCriticalRegion();
      }
    }
    while ( *(_DWORD *)(v10 + 24) == 1 );
  }
LABEL_19:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return v5;
}
