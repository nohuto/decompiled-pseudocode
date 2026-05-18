/*
 * XREFs of sub_18003D898 @ 0x18003D898
 * Callers:
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_18007D3EC @ 0x18007D3EC (sub_18007D3EC.c)
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D898(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // r9
  volatile signed __int32 *v6; // rcx

  result = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  v5 = *(volatile signed __int32 **)(a1 + 136);
  *(_QWORD *)(a1 + 128) = result;
  *(_QWORD *)(a1 + 136) = v4;
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
