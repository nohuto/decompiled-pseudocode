/*
 * XREFs of ??$emplace_back@PEAVMutex@Engine@Spectre@@AEA_N@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@QEAA?A_T$$QEAPEAVMutex@Engine@Spectre@@AEA_N@Z @ 0x180029DBC
 * Callers:
 *     ??$doLock@$1?lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029A9C (--$doLock@$1-lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doLock@$1?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029B5C (--$doLock@$1-lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::emplace_back<Spectre::Engine::Mutex *,bool &>(
        __int64 a1,
        _QWORD *a2,
        char *a3)
{
  char *v4; // rdx
  char *result; // rax

  v4 = *(char **)(a1 + 8);
  if ( v4 == *(char **)(a1 + 16) )
    return std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Emplace_reallocate<Spectre::Engine::Mutex *,bool &>(
             (__int128 **)a1,
             v4,
             a2,
             a3);
  *(_QWORD *)v4 = *a2;
  v4[8] = *a3;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
