/*
 * XREFs of sub_1409A40F8 @ 0x1409A40F8
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 *     sub_1409A536C @ 0x1409A536C (sub_1409A536C.c)
 *     sub_1409A5540 @ 0x1409A5540 (sub_1409A5540.c)
 *     sub_1409A73B4 @ 0x1409A73B4 (sub_1409A73B4.c)
 *     sub_1409A745C @ 0x1409A745C (sub_1409A745C.c)
 */

__int64 sub_1409A40F8()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  sub_1409A73B4();
  ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  v3 = qword_140D3CB08;
  if ( !qword_140D3CB08 || *(_DWORD *)qword_140D3CB08 == v2 )
  {
    sub_1409A536C(qword_140D3CB08);
    ObfDereferenceObject(*(PVOID *)(v3 + 32));
    v4 = *(void **)(v3 + 24);
    *(_QWORD *)(v3 + 32) = 0LL;
    ObCloseHandle(v4, 0);
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_DWORD *)(v3 + 4) |= 4u;
    sub_1409A5540(v3);
    qword_140D3CB08 = 0LL;
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
    v5 = *(void **)(v3 + 248);
    if ( v5 )
    {
      PoUnregisterPowerSettingCallback(v5);
      *(_QWORD *)(v3 + 248) = 0LL;
      sub_1409A5540(v3);
    }
    v6 = *(void **)(v3 + 256);
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      *(_QWORD *)(v3 + 256) = 0LL;
      sub_1409A5540(v3);
    }
  }
  else
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  return sub_1409A745C();
}
