/*
 * XREFs of wistd::__function::__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl(void)_::__clone @ 0x18054CC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl_void__::__clone(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *a2 = &off_1806267C0;
  a2[1] = a1[1];
  v4 = a1[2];
  a2[2] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = a1[3];
  a2[3] = result;
  return result;
}
