/*
 * XREFs of sub_180067B58 @ 0x180067B58
 * Callers:
 *     sub_1800680A0 @ 0x1800680A0 (sub_1800680A0.c)
 *     sub_18008AEF0 @ 0x18008AEF0 (sub_18008AEF0.c)
 *     sub_18008BDB8 @ 0x18008BDB8 (sub_18008BDB8.c)
 *     sub_18008C3B0 @ 0x18008C3B0 (sub_18008C3B0.c)
 *     sub_18008CBE4 @ 0x18008CBE4 (sub_18008CBE4.c)
 *     sub_1800A94B8 @ 0x1800A94B8 (sub_1800A94B8.c)
 *     unknown_libname_60 @ 0x1801063EC (unknown_libname_60.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067B58(__int64 a1)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 >= 0x10 )
    sub_180010884(*(char **)(a1 + 72), v2 + 1);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 15LL;
  *(_BYTE *)(a1 + 72) = 0;
  result = sub_180010910(a1 + 56);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 >= 0x10 )
    result = sub_180010884(*(char **)(a1 + 24), v4 + 1);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 15LL;
  *(_BYTE *)(a1 + 24) = 0;
  v5 = *(volatile signed __int32 **)(a1 + 16);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
