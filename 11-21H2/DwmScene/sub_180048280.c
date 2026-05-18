/*
 * XREFs of sub_180048280 @ 0x180048280
 * Callers:
 *     sub_180048354 @ 0x180048354 (sub_180048354.c)
 *     sub_180048370 @ 0x180048370 (sub_180048370.c)
 *     sub_180050304 @ 0x180050304 (sub_180050304.c)
 *     sub_180051338 @ 0x180051338 (sub_180051338.c)
 *     sub_180058B60 @ 0x180058B60 (sub_180058B60.c)
 *     sub_180061488 @ 0x180061488 (sub_180061488.c)
 *     sub_18009EFAC @ 0x18009EFAC (sub_18009EFAC.c)
 *     sub_1800A6C80 @ 0x1800A6C80 (sub_1800A6C80.c)
 *     unknown_libname_49 @ 0x1801021D1 (unknown_libname_49.c)
 *     sub_180102E70 @ 0x180102E70 (sub_180102E70.c)
 *     sub_18010376D @ 0x18010376D (sub_18010376D.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_180048280(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(volatile signed __int32 **)(a1 + 64);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 >= 0x10 )
    sub_180010884(*(char **)(a1 + 24), v4 + 1);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 15LL;
  *(_BYTE *)(a1 + 24) = 0;
  result = (unsigned __int64)&Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  v6 = *(volatile signed __int32 **)(a1 + 16);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
