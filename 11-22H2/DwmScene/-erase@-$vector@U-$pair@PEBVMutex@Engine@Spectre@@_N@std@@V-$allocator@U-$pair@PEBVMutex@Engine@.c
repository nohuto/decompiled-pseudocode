/*
 * XREFs of ?erase@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@2@@Z @ 0x18002A4B8
 * Callers:
 *     ??$doUnlock@$1?unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029C1C (--$doUnlock@$1-unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doUnlock@$1?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029CEC (--$doUnlock@$1-unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 i; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 16; i != v3; i += 16LL )
  {
    *(_QWORD *)(i - 16) = *(_QWORD *)i;
    *(_BYTE *)(i - 8) = *(_BYTE *)(i + 8);
  }
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
