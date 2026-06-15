/*
 * XREFs of wistd::__function::__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl(void)_::__clone @ 0x1801576B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *a2 = &off_18016C7D8;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  return result;
}
