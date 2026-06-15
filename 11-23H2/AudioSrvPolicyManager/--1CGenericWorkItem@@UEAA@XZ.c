/*
 * XREFs of ??1CGenericWorkItem@@UEAA@XZ @ 0x18003AD0C
 * Callers:
 *     ??_ECGenericWorkItem@@UEAAPEAXI@Z @ 0x18003AD50 (--_ECGenericWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CGenericWorkItem::~CGenericWorkItem(CGenericWorkItem *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
