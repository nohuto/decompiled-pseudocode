/*
 * XREFs of ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x1C01253B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C01289CC (-ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C01290B4 (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C0129274 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall NdisPDAttachQueueToEC(struct _NDIS_PD_QUEUE *a1, struct PD_EC_HANDLE__ *a2)
{
  char *v2; // rdi
  bool v4; // zf
  struct NDIS_PD_COUNTER *v5; // rcx
  char *v6; // rbx
  char *v7; // rax
  char **v8; // rcx
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)a1->PDPlatformReserved[1];
  v9.m_State = Unlocked;
  v9.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v9.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v9);
  ndisPDDetachQueueFromECInternal((struct NDIS_PD_QUEUE_TRACKER *)v2);
  ndisPcwSetQueueInstanceName((struct NDIS_PD_QUEUE_TRACKER *)v2, a2);
  v4 = *((_DWORD *)v2 + 38) == 1;
  *((_QWORD *)v2 + 33) = a2;
  if ( v4 )
    ++*((_DWORD *)a2 + 18);
  else
    ++*((_DWORD *)a2 + 17);
  v5 = (struct NDIS_PD_COUNTER *)*((_QWORD *)v2 + 28);
  if ( v5 )
    ndisPdQCounterUpdateName(v5);
  v6 = (char *)a2 + 120;
  v7 = v2 + 248;
  v8 = (char **)*((_QWORD *)v6 + 1);
  if ( *v8 != v6 )
    __fastfail(3u);
  *((_QWORD *)v2 + 32) = v8;
  *(_QWORD *)v7 = v6;
  *v8 = v7;
  *((_QWORD *)v6 + 1) = v7;
  KLockHolder::~KLockHolder(&v9);
}
