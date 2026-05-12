/*
 * XREFs of sub_1C0035FBC @ 0x1C0035FBC
 * Callers:
 *     sub_1C00456DC @ 0x1C00456DC (sub_1C00456DC.c)
 *     sub_1C0049C54 @ 0x1C0049C54 (sub_1C0049C54.c)
 *     sub_1C00692DC @ 0x1C00692DC (sub_1C00692DC.c)
 * Callees:
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0035FBC(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int CurrentIrql; // ebp
  unsigned int i; // r14d
  _QWORD **v5; // rsi
  _QWORD *j; // r15
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  char (__fastcall *v9)(__int64 *, __int64); // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v8 = 0LL;
  v9 = ArbpQueryConflictCallback;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < *(_DWORD *)(a1 + 736) )
    LOBYTE(CurrentIrql) = sub_1C000889C(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 172); ++i )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 184) + 16LL * i);
    for ( j = *v5; j != v5; j = (_QWORD *)*j )
    {
      if ( !v9(&v8, (__int64)j) )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( (unsigned int)(unsigned __int8)CurrentIrql < *(_DWORD *)(a1 + 736) )
    sub_1C0008914(a1, CurrentIrql);
  if ( v8 )
    return v8 - 72;
  return v1;
}
