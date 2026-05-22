/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@P6AXPEAUInputInfo@@PEAK@ZXPEAU1@PEAK@std@@EEAAPEAV?$_Func_base@XPEAUInputInfo@@PEAK@2@PEAX@Z @ 0x180031270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<void (*)(InputInfo *,unsigned long *),void,InputInfo *,unsigned long *>::_Move(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &std::_Func_impl_no_alloc<void (*)(InputInfo *,unsigned long *),void,InputInfo *,unsigned long *>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  return a2;
}
