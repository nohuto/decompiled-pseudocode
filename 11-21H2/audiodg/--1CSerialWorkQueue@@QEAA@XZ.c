/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x140067BB8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCSerialWorkQueue@@@std@@EEAAXXZ @ 0x140068790 (-_Destroy@-$_Ref_count_obj2@VCSerialWorkQueue@@@std@@EEAAXXZ.c)
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
