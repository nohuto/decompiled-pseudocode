/*
 * XREFs of sub_180087FA4 @ 0x180087FA4
 * Callers:
 *     sub_180087E74 @ 0x180087E74 (sub_180087E74.c)
 *     sub_180087F0C @ 0x180087F0C (sub_180087F0C.c)
 *     sub_1800880BC @ 0x1800880BC (sub_1800880BC.c)
 *     sub_180088100 @ 0x180088100 (sub_180088100.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_180105CCA @ 0x180105CCA (sub_180105CCA.c)
 *     sub_180105D4B @ 0x180105D4B (sub_180105D4B.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180087FA4(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
