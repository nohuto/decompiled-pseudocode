/*
 * XREFs of ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C01316F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C01305E0 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeBufferSet(struct PD_BUFFER_SET_HANDLE__ *a1)
{
  struct PD_BUFFER_SET_HANDLE__ *v2; // rdi
  __int64 v3; // rcx
  struct PD_BUFFER_SET_HANDLE__ **v4; // rax
  _QWORD *v5; // rsi
  NDIS_PD_MEM_BLOCK *v6; // rbp
  KLockHolder v7; // [rsp+40h] [rbp-38h] BYREF

  v2 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x53u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
  v7.m_State = Unlocked;
  v7.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v7);
  v3 = *(_QWORD *)a1;
  if ( *(struct PD_BUFFER_SET_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v4 = (struct PD_BUFFER_SET_HANDLE__ **)*((_QWORD *)a1 + 1), *v4 != a1) )
  {
    __fastfail(3u);
  }
  *v4 = (struct PD_BUFFER_SET_HANDLE__ *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v7);
  do
  {
    v5 = (_QWORD *)((char *)v2 + 64);
    v6 = v2;
    v2 = (struct PD_BUFFER_SET_HANDLE__ *)*((_QWORD *)v2 + 8);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Du,
        0x54u,
        (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
        (char)a1,
        v6);
    *v5 = 0LL;
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v6);
  }
  while ( v2 );
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x55u,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      a1);
}
