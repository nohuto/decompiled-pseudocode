/*
 * XREFs of ?NdisPDPIClearReceiveFilter@@YAXPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C0126680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C01249DC (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDPIClearReceiveFilter(struct NDIS_PD_FILTER_HANDLE__ *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  struct NDIS_PD_FILTER_HANDLE__ *v5; // rcx
  struct NDIS_PD_FILTER_HANDLE__ **v6; // rax
  struct NDIS_PD_FILTER_HANDLE__ *v7; // rax
  struct NDIS_PD_FILTER_HANDLE__ *v8; // rdx
  struct NDIS_PD_FILTER_HANDLE__ **v9; // rcx
  struct NDIS_PD_FILTER_HANDLE__ *v10; // rax
  struct NDIS_PD_FILTER_HANDLE__ *v11; // rdx
  struct NDIS_PD_FILTER_HANDLE__ **v12; // r8
  KLockHolder v13; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 5);
  v4 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x32u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      a1);
  v13.m_State = Unlocked;
  v13.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v13.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v13);
  v5 = *(struct NDIS_PD_FILTER_HANDLE__ **)a1;
  if ( *(struct NDIS_PD_FILTER_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_14;
  v6 = (struct NDIS_PD_FILTER_HANDLE__ **)*((_QWORD *)a1 + 1);
  if ( *v6 != a1 )
    goto LABEL_14;
  *v6 = v5;
  *((_QWORD *)v5 + 1) = v6;
  v7 = a1 + 18;
  *(_QWORD *)a1 = 0LL;
  v8 = (struct NDIS_PD_FILTER_HANDLE__ *)*((_QWORD *)a1 + 9);
  if ( *((struct NDIS_PD_FILTER_HANDLE__ **)v8 + 1) != a1 + 18 )
    goto LABEL_14;
  v9 = (struct NDIS_PD_FILTER_HANDLE__ **)*((_QWORD *)a1 + 10);
  if ( *v9 != v7 )
    goto LABEL_14;
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  *(_QWORD *)v7 = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  if ( !v3 )
    goto LABEL_11;
  v10 = a1 + 12;
  v11 = (struct NDIS_PD_FILTER_HANDLE__ *)*((_QWORD *)a1 + 6);
  if ( *((struct NDIS_PD_FILTER_HANDLE__ **)v11 + 1) != a1 + 12
    || (v12 = (struct NDIS_PD_FILTER_HANDLE__ **)*((_QWORD *)a1 + 7), *v12 != v10) )
  {
LABEL_14:
    __fastfail(3u);
  }
  *v12 = v11;
  *((_QWORD *)v11 + 1) = v12;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  --*(_DWORD *)(v3 + 88);
LABEL_11:
  KLockHolder::~KLockHolder(&v13);
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 80) + 72LL))(v4);
  NDIS_PD_FILTER::`scalar deleting destructor'(a1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x33u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      a1);
}
