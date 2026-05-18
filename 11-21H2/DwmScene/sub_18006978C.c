/*
 * XREFs of sub_18006978C @ 0x18006978C
 * Callers:
 *     sub_180049994 @ 0x180049994 (sub_180049994.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180069F70 @ 0x180069F70 (sub_180069F70.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006978C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  v4 = a1 + 472;
  sub_18002C84C(a1 + 472);
  sub_180069F70(a1 + 480, a2);
  result = j_LanguageEnumProc(v4);
  v6 = *(volatile signed __int32 **)(a2 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
