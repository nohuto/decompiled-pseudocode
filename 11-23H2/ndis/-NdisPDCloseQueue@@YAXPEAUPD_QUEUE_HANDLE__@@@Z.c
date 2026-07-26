/*
 * XREFs of ?NdisPDCloseQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C0131120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NdisPDCloseQueue(struct PD_QUEUE_HANDLE__ *a1)
{
  __int64 v2; // rcx
  struct PD_QUEUE_HANDLE__ **v3; // rax
  KLockHolder v4; // [rsp+30h] [rbp-28h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x60u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
  v4.m_State = Unlocked;
  v4.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = *(_QWORD *)a1;
  if ( *(struct PD_QUEUE_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v3 = (struct PD_QUEUE_HANDLE__ **)*((_QWORD *)a1 + 1), *v3 != a1) )
  {
    __fastfail(3u);
  }
  *v3 = (struct PD_QUEUE_HANDLE__ *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(a1, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x61u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
}
