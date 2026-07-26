/*
 * XREFs of ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C013371C
 * Callers:
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0133AD0 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0133EB0 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

struct NDIS_PD_CLIENT *__fastcall ndisFindPDClientViaClientDriverHandle(void *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v5.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
  v5.m_State = Unlocked;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v3 = *(__int64 **)(*(_QWORD *)&qword_1C00F5708 + 8LL);
  while ( v3 != (__int64 *)(*(_QWORD *)&qword_1C00F5708 + 8LL) )
  {
    v2 = v3;
    if ( (void *)v3[10] == a1 )
      break;
    v3 = (__int64 *)*v3;
    v2 = 0LL;
  }
  KLockHolder::~KLockHolder(&v5);
  return (struct NDIS_PD_CLIENT *)v2;
}
