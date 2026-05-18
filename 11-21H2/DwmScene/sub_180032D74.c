/*
 * XREFs of sub_180032D74 @ 0x180032D74
 * Callers:
 *     sub_180030E20 @ 0x180030E20 (sub_180030E20.c)
 *     sub_180032894 @ 0x180032894 (sub_180032894.c)
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032D74(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    sub_1800126E8(v2, *(_QWORD *)(a1 + 24));
    result = sub_180010884(*(char **)(a1 + 16), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
