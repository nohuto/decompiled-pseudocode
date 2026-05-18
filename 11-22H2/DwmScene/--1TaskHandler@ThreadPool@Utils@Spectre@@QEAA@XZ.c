/*
 * XREFs of ??1TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ @ 0x1800DF69C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@EEAAXXZ @ 0x1800DF7A0 (-_Destroy@-$_Ref_count_obj2@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall Spectre::Utils::ThreadPool::TaskHandler::~TaskHandler(Spectre::Utils::ThreadPool::TaskHandler *this)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx

  _Mtx_destroy_in_situ((Spectre::Utils::ThreadPool::TaskHandler *)((char *)this + 88));
  std::_Func_class<void,>::_Tidy((__int64)this + 24, v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
