/*
 * XREFs of ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1400386C2
 * Callers:
 *     ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x14006F67C (--1-$unique_ptr@U_WorkTask@@U-$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x14007016C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x140070540 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_WorkTask *__fastcall _WorkTask::`scalar deleting destructor'(_WorkTask *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  operator delete(this);
  return this;
}
