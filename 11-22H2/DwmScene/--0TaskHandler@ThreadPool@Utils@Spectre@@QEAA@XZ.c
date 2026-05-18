/*
 * XREFs of ??0TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ @ 0x1800DF608
 * Callers:
 *     ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714 (-GetCompletedTaskHandler@Utils@Spectre@@YA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Atomic_integral@I$03@std@@QEAAIXZ @ 0x180070118 (--E-$_Atomic_integral@I$03@std@@QEAAIXZ.c)
 *     ?MakeCancellationToken@Utils@Spectre@@YA?AV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@XZ @ 0x1800E0304 (-MakeCancellationToken@Utils@Spectre@@YA-AV-$shared_ptr@VICancellationToken@Utils@Spectre@@@std@.c)
 */

// Hidden C++ exception states: #wind=3
Spectre::Utils::ThreadPool::TaskHandler *__fastcall Spectre::Utils::ThreadPool::TaskHandler::TaskHandler(
        Spectre::Utils::ThreadPool::TaskHandler *this)
{
  __int64 *CancellationToken; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  std::_Ref_count_base *v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 10) = 0LL;
  _Mtx_init_in_situ((Spectre::Utils::ThreadPool::TaskHandler *)((char *)this + 88), 2);
  *((_DWORD *)this + 5) = std::_Atomic_integral<unsigned int,4>::operator++((__int64)&`Spectre::Utils::ThreadPool::TaskHandler::TaskHandler'::`2'::s_id);
  CancellationToken = (__int64 *)Spectre::Utils::MakeCancellationToken(v7);
  v3 = *CancellationToken;
  v4 = CancellationToken[1];
  *CancellationToken = 0LL;
  CancellationToken[1] = 0LL;
  *(_QWORD *)this = v3;
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return this;
}
