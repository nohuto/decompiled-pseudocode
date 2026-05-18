/*
 * XREFs of sub_18004DDDC @ 0x18004DDDC
 * Callers:
 *     sub_1800181D8 @ 0x1800181D8 (sub_1800181D8.c)
 *     sub_180019150 @ 0x180019150 (sub_180019150.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180029DE4 @ 0x180029DE4 (sub_180029DE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004DDDC(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::Mesh::`vftable';
  sub_180010910((__int64)(a1 + 34));
  sub_180010910((__int64)(a1 + 32));
  sub_180010910((__int64)(a1 + 30));
  sub_180010910((__int64)(a1 + 28));
  sub_180010910((__int64)(a1 + 26));
  sub_180010910((__int64)(a1 + 24));
  sub_180010910((__int64)(a1 + 22));
  sub_180010910((__int64)(a1 + 20));
  sub_180010910((__int64)(a1 + 18));
  sub_180029C94(a1 + 16);
  result = sub_180029DE4((__int64)a1);
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
