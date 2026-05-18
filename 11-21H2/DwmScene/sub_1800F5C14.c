/*
 * XREFs of sub_1800F5C14 @ 0x1800F5C14
 * Callers:
 *     sub_1800F5C80 @ 0x1800F5C80 (sub_1800F5C80.c)
 *     sub_1800F875C @ 0x1800F875C (sub_1800F875C.c)
 *     sub_18010D198 @ 0x18010D198 (sub_18010D198.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800F5B88 @ 0x1800F5B88 (sub_1800F5B88.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F5C14(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  sub_1800F5B88((char **)(a1 + 48));
  result = sub_180010910(a1 + 32);
  v3 = *(volatile signed __int32 **)(a1 + 16);
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
