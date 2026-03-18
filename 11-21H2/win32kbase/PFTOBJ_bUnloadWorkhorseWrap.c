/*
 * XREFs of PFTOBJ_bUnloadWorkhorseWrap @ 0x1C023DB18
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PFTOBJ_bUnloadWorkhorseWrap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  result = qword_1C029B578;
  if ( qword_1C029B578 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C029B578(a1, a2, a3, a4);
  return result;
}
