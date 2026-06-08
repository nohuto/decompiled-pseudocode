/*
 * XREFs of FxGetNextClassBindInfo @ 0x1C0003784
 * Callers:
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003564 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C00036C8 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FxGetNextClassBindInfo(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *i; // rax

  for ( i = a1 + 1; (unsigned __int64)i <= a2 && !*a1; ++i )
    a1 = i;
  if ( (unsigned __int64)a1 >= a2 )
    return (_QWORD *)a2;
  if ( (unsigned __int64)(a1 + 10) <= a2 && *(_DWORD *)a1 == 80 )
    return a1;
  return 0LL;
}
