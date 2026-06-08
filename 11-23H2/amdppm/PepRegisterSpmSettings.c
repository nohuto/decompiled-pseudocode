/*
 * XREFs of PepRegisterSpmSettings @ 0x1C003B608
 * Callers:
 *     RegisterIdleComplete @ 0x1C00331D0 (RegisterIdleComplete.c)
 *     RegisterKernelPepIdleStates @ 0x1C00345D8 (RegisterKernelPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepRegisterSpmSettings(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( !PepSpmHandleQueried && (*(_DWORD *)(a1 + 280) & 0x800LL) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 1120);
    v3 = 0LL;
    PepSpmHandleQueried = 1;
    if ( (int)PoFxProcessorNotification(v1, 17LL, &v3) >= 0 )
    {
      if ( v3 )
      {
        v2 = ((__int64 (*)(void))qword_1C00127E0)();
        if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x14u,
            (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
            v2);
      }
    }
  }
}
