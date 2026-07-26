/*
 * XREFs of ?NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C0125800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qddqq @ 0x1C0078588 (WPP_RECORDER_SF_qddqq_ea_1C0078588.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall NdisPDCreateQueue(
        struct PD_CLIENT_HANDLE__ *a1,
        __int64 a2,
        __int64 a3,
        struct _KEVENT *a4,
        struct _KEVENT *a5,
        struct PD_QUEUE_HANDLE__ **a6)
{
  char v7; // r12
  unsigned int v8; // esi
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 Pool2; // rax
  __int64 v14; // rdi
  struct PD_CLIENT_HANDLE__ **v15; // rcx
  int v17; // [rsp+20h] [rbp-78h]
  KLockHolder v18; // [rsp+50h] [rbp-48h] BYREF

  v7 = a3;
  v8 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qddqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, (__int64)a4, v17);
  v10 = 0;
  *a6 = 0LL;
  if ( v8 > 0x7FFFFFFF || (v11 = v8 + 1, ((unsigned int)v11 & v8) != 0) )
  {
    v10 = -1073741811;
  }
  else
  {
    v12 = 8 * v11;
    if ( v12 > 0xFFFFFFFF || (int)v12 + 192 < (unsigned int)v12 )
    {
      v10 = -1073741675;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, (unsigned int)(v12 + 192), 1900102734);
      v14 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 52) = v8;
        *(_BYTE *)(Pool2 + 24) = v7;
        *(_QWORD *)(Pool2 + 32) = a5;
        *(_QWORD *)(Pool2 + 40) = a4;
        *(_QWORD *)(Pool2 + 16) = a1;
        v18.m_Lock = (KPushLockBase *)qword_1C00EC710;
        v18.m_State = Unlocked;
        v18.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v18);
        v15 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 9);
        if ( *v15 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 64) )
          __fastfail(3u);
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)v14 = (char *)a1 + 64;
        *v15 = (struct PD_CLIENT_HANDLE__ *)v14;
        *((_QWORD *)a1 + 9) = v14;
        KLockHolder::~KLockHolder(&v18);
        *a6 = (struct PD_QUEUE_HANDLE__ *)v14;
      }
      else
      {
        v10 = -1073741670;
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x5Fu,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)*a6,
      v10);
  return v10;
}
