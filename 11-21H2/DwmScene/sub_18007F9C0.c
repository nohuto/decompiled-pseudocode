/*
 * XREFs of sub_18007F9C0 @ 0x18007F9C0
 * Callers:
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 * Callees:
 *     sub_18007F898 @ 0x18007F898 (sub_18007F898.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007F9C0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(__int64 **)(a1 + 40);
  v4 = *(__int64 **)(a1 + 48);
  while ( v2 != v4 )
  {
    v6 = v2[1];
    *(_OWORD *)v9 = 0LL;
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = v2[1];
    }
    v7 = *v2;
    v9[1] = v6;
    v9[0] = v7;
    sub_18007F898((_QWORD *)a1, v9);
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v2 + 8LL))(
               *v2,
               a2,
               *(unsigned int *)(a1 + 8),
               *(unsigned int *)(a1 + 12),
               *(_DWORD *)(a1 + 20),
               *(_DWORD *)(a1 + 28));
    v2 += 2;
  }
  return result;
}
