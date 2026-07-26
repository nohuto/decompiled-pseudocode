/*
 * XREFs of ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C0125470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C012899C (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisPDCleanup(struct PD_CLIENT_HANDLE__ *a1)
{
  __int64 v2; // rcx
  struct PD_CLIENT_HANDLE__ **v3; // rax
  __int64 v4; // rcx
  KLockHolder v5; // [rsp+30h] [rbp-28h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x15u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      a1);
  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v2 = *(_QWORD *)a1;
  if ( *(struct PD_CLIENT_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v3 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 1), *v3 != a1) )
  {
    __fastfail(3u);
  }
  *v3 = (struct PD_CLIENT_HANDLE__ *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = qword_1C00EC710;
  *(_QWORD *)a1 = 0LL;
  RtlClearBit((PRTL_BITMAP)(v4 + 24), *((unsigned __int16 *)a1 + 52));
  KLockHolder::~KLockHolder(&v5);
  ndisPDDereferenceClientDriver(*((void **)a1 + 10));
  *((_QWORD *)a1 + 10) = 0LL;
  ExFreePoolWithTag(a1, 0x6341444Eu);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x16u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      a1);
}
