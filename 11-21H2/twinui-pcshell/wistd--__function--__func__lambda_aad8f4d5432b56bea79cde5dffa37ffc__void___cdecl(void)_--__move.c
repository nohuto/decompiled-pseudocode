/*
 * XREFs of wistd::__function::__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl(void)_::__move @ 0x1800B4A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl_void__::__move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *a2 = &off_1806267C0;
  a2[1] = a1[1];
  v2 = a1[2];
  a1[2] = 0LL;
  a2[2] = v2;
  result = a1[3];
  a2[3] = result;
  return result;
}
