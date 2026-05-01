/*
 * XREFs of ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x18031E924
 * Callers:
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18031FFF0 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x180320F94 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall FullScreenPositioner::ApplyPendingPositioningOperations(FullScreenPositioner *this, volatile int *a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  const void *v6; // rbx
  int v7; // eax
  __int64 *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int64 *v11; // [rsp+30h] [rbp+8h] BYREF
  const void *v12; // [rsp+38h] [rbp+10h] BYREF

  while ( *((_QWORD *)this + 42) )
  {
    v3 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)this + 39)
                                                 + 8 * (*((_QWORD *)this + 41) & (*((_QWORD *)this + 40) - 1LL)))
                                     + 8LL);
    v11 = v3;
    if ( v3 )
    {
      v4 = *((_QWORD *)v3 + 8);
      while ( v4 >= 0 )
      {
        if ( (_DWORD)v4 != 0x7FFFFFFF )
        {
          v5 = v4;
          v4 = _InterlockedCompareExchange64(v3 + 8, v4 + 1, v4);
          if ( v5 != v4 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
LABEL_9:
      v3 = v11;
    }
    v12 = **(const void ***)(*((_QWORD *)this + 39) + 8 * (*((_QWORD *)this + 41) & (*((_QWORD *)this + 40) - 1LL)));
    v6 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    FullScreenPositionerLogging::TraceLoggingInfo(
      "FullScreenPositioner - Applying pending positioning operation: %p for view: %p",
      (const void *)v3,
      v6);
    v7 = (*(__int64 (__fastcall **)(const void *, volatile signed __int64 *))(*(_QWORD *)v6 + 320LL))(v6, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B9,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v7);
    v8 = *(__int64 **)(*((_QWORD *)this + 39) + 8 * (*((_QWORD *)this + 41) & (*((_QWORD *)this + 40) - 1LL)));
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v8 + 1);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v8);
    if ( (*((_QWORD *)this + 42))-- == 1LL )
      *((_QWORD *)this + 41) = 0LL;
    else
      ++*((_QWORD *)this + 41);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v11);
  }
}
