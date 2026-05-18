/*
 * XREFs of sub_1800671C8 @ 0x1800671C8
 * Callers:
 *     sub_1800671C8 @ 0x1800671C8 (sub_1800671C8.c)
 *     sub_180067A70 @ 0x180067A70 (sub_180067A70.c)
 *     sub_180067AE0 @ 0x180067AE0 (sub_180067AE0.c)
 *     sub_180067BFC @ 0x180067BFC (sub_180067BFC.c)
 *     sub_18006986C @ 0x18006986C (sub_18006986C.c)
 *     sub_180069F70 @ 0x180069F70 (sub_180069F70.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800671C8 @ 0x1800671C8 (sub_1800671C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800671C8(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x30uLL) )
  {
    sub_1800671C8(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 5);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
