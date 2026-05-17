/*
 * XREFs of RtlDeleteElementGenericTable @ 0x180062B60
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180062DC8 (FindNodeOrParent.c)
 *     RtlDelete @ 0x180063070 (RtlDelete.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall RtlDeleteElementGenericTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(a1, a2, &v7) != 1 )
    return 0;
  v3 = v7;
  *(_QWORD *)a1 = RtlDelete(v7);
  v4 = *(_QWORD *)(v3 + 24);
  if ( *(_QWORD *)(v4 + 8) != v3 + 24 || (v5 = *(_QWORD **)(v3 + 32), *v5 != v3 + 24) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  --*(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 56))(a1, v3);
  return 1;
}
