/*
 * XREFs of sub_180071610 @ 0x180071610
 * Callers:
 *     <none>
 * Callees:
 *     sub_180063FE4 @ 0x180063FE4 (sub_180063FE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

Concurrency::details::UMSThreadProxy *__fastcall sub_180071610(
        __int64 a1,
        Concurrency::details::UMSThreadProxy ***a2,
        __int64 a3,
        __int64 a4)
{
  Concurrency::details::UMSThreadProxy *result; // rax
  Concurrency::details::UMSThreadProxy **v5; // rdi
  Concurrency::details::UMSThreadProxy **i; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (Concurrency::details::UMSThreadProxy *)&retaddr;
  v5 = a2[1];
  for ( i = *a2; i != v5; i += 2 )
  {
    result = *i;
    if ( *((_BYTE *)*i + 72) )
    {
      (*(void (__fastcall **)(__int64, Concurrency::details::UMSThreadProxy **, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
        a1,
        i,
        a3,
        a4);
      result = (Concurrency::details::UMSThreadProxy *)sub_180063FE4(*i, a3, a4);
    }
  }
  return result;
}
