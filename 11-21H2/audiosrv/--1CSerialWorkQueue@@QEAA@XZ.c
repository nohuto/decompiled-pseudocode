/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800C2B50
 * Callers:
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800C28D8 (--1CAudioSrv@@UEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800C2A7C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::~CSerialWorkQueue(struct _TP_POOL **this)
{
  struct _TP_POOL *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseThreadpool(v2);
    *this = 0LL;
  }
  _Mtx_destroy_in_situ((_Mtx_t)(this + 11));
}
