/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x14006F6EC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCSerialWorkQueue@@@std@@EEAAXXZ @ 0x140038840 (-_Destroy@-$_Ref_count_obj2@VCSerialWorkQueue@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::~CSerialWorkQueue(CSerialWorkQueue *this)
{
  struct _TP_CLEANUP_GROUP *v2; // rcx

  v2 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    CloseThreadpoolCleanupGroupMembers(v2, 1, 0LL);
    CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    CloseThreadpool(*(PTP_POOL *)this);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CSerialWorkQueue *)((char *)this + 88));
}
