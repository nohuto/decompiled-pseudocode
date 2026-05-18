/*
 * XREFs of sub_180044BB4 @ 0x180044BB4
 * Callers:
 *     sub_180101E76 @ 0x180101E76 (sub_180101E76.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044BB4(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  char *v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 32);
    if ( v3 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    return sub_180010884(v5, 0x28uLL);
  return result;
}
