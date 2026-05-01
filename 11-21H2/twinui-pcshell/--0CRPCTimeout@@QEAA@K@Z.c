/*
 * XREFs of ??0CRPCTimeout@@QEAA@K@Z @ 0x180030B38
 * Callers:
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180030A6C (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x180306E80 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180312B9C (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1803FC320 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator() @ 0x180405574 (_lambda_b54eacfb88775a45f9bf3f20a89a8862_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x18040E1E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___--Run.c)
 * Callees:
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180030BD8 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 */

CRPCTimeout *__fastcall CRPCTimeout::CRPCTimeout(CRPCTimeout *this, DWORD DueTime)
{
  DWORD CurrentThreadId; // eax
  HRESULT v5; // eax
  DWORD v6; // eax

  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)this + 2) = 0LL;
  *(_DWORD *)this = CurrentThreadId;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = -2147467259;
  CBaseRPCTimeout::Disarm(this);
  v5 = CoEnableCallCancellation(0LL);
  *((_DWORD *)this + 2) = v5;
  if ( v5 >= 0 )
  {
    v6 = 5000;
    if ( DueTime )
      v6 = DueTime;
    CreateTimerQueueTimer((PHANDLE)this + 2, 0LL, CBaseRPCTimeout::s_Callback, this, v6, 0x3E8u, 0);
  }
  return this;
}
