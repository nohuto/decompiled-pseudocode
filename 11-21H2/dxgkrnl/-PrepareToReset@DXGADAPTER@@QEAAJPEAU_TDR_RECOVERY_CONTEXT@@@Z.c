/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BCC18
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0306540 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026D60 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026DF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C00433D8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02CB288 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0306F50 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v4; // rcx
  bool v5; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  bool v7; // r14
  unsigned int i; // esi
  char v10; // [rsp+80h] [rbp+8h] BYREF
  char v11; // [rsp+81h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 8393LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTdrContext", 8393LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_QWORD *)this + 350);
  if ( !v4 )
  {
    WdLogSingleEntry1(1LL, 8398LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pRenderCore != NULL", 8398LL, 0LL, 0LL, 0LL, 0LL);
    v4 = *((_QWORD *)this + 350);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 648) + 8LL) + 120LL))(*(_QWORD *)(v4 + 656));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 248)) )
  {
    WdLogSingleEntry1(1LL, 8422LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldDdiAccess != 0", 8422LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v10);
  v5 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 34)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 34));
  v7 = IsResourceAcquiredSharedLite != 0;
  if ( v5 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 350)) < 0 )
    {
      *((_QWORD *)a2 + 13) = *((_QWORD *)this + 71);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 2743) = 1;
    if ( !v5 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 34));
      if ( v7 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 34), 1u);
    }
    KeSetEvent((PRKEVENT)((char *)this + 248), 0, 0);
    if ( v11 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v10);
    return 0LL;
  }
  else
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 34));
    for ( i = 0; ; ++i )
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 34), 0) )
      {
        *((_DWORD *)a2 + 699) = i;
        goto LABEL_15;
      }
      if ( i >= dword_1C0130C08 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)((char *)this + 248), 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v10);
    return 3221225653LL;
  }
}
