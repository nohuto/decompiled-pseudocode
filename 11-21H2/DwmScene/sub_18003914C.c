/*
 * XREFs of sub_18003914C @ 0x18003914C
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_18003174C @ 0x18003174C (sub_18003174C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003914C(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  __int64 v4; // rax
  __int64 *j; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx

  v1 = *(__int64 **)(a1 + 896);
  for ( i = *(__int64 **)(a1 + 888); i != v1; i += 2 )
  {
    v4 = i[1];
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
      break;
  }
  if ( i != v1 )
  {
    for ( j = i + 2; j != v1; j += 2 )
    {
      v6 = j[1];
      if ( v6 && *(_DWORD *)(v6 + 8) )
      {
        j[1] = 0LL;
        v7 = *j;
        *j = 0LL;
        v8 = (volatile signed __int32 *)i[1];
        *i = v7;
        i[1] = v6;
        if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        i += 2;
      }
    }
  }
  result = sub_18003174C((__int64)i);
  v11 = result;
  if ( result != v10 )
  {
    result = sub_180011138(result, v10);
    *(_QWORD *)(a1 + 896) = v11;
  }
  return result;
}
