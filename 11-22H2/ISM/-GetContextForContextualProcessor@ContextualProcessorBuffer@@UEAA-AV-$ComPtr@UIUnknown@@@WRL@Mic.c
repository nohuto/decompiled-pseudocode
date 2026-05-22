/*
 * XREFs of ?GetContextForContextualProcessor@ContextualProcessorBuffer@@UEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAUIContextualProcessor@@@Z @ 0x18000EA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ContextualProcessorBuffer::GetContextForContextualProcessor(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  v4 = *(_QWORD **)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 32);
  if ( v4 == v5 )
  {
LABEL_4:
    *a2 = 0LL;
  }
  else
  {
    while ( *v4 != a3 )
    {
      v4 += 28;
      if ( v4 == v5 )
        goto LABEL_4;
    }
    v6 = v4[26];
    *a2 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return a2;
}
