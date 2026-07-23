/*
 * XREFs of CmShutdownSystem @ 0x140A11588
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140606BC4 (ExRebootSystemForRecovery.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmShutdownSystem0 @ 0x1406160EC (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x140616114 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14061636C (CmShutdownSystem2.c)
 */

__int64 CmShutdownSystem()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v6);
  if ( v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
        CmShutdownSystem2();
    }
    else
    {
      CmShutdownSystem1(v1, v0, v4, v3);
    }
  }
  else
  {
    CmShutdownSystem0();
  }
  return CmCleanupThreadInfo(v6);
}
