/*
 * XREFs of sub_180032A24 @ 0x180032A24
 * Callers:
 *     sub_180033A0C @ 0x180033A0C (sub_180033A0C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032A24(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx
  char *v5; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    result = sub_180010910(v1 + 48);
    v4 = *(volatile signed __int32 **)(v1 + 40);
    if ( v4 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    return sub_180010884(v5, 0x40uLL);
  return result;
}
