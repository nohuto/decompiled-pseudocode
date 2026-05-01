/*
 * XREFs of _lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator() @ 0x1800B5834
 * Callers:
 *     ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B5728 (-XamlExplorerHost_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator()(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _WORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  _WORD *v6; // rax
  _WORD *v8; // r8

  v3 = (_WORD *)*a2;
  v4 = 2LL * a3[1];
  v5 = a2[1];
  v6 = &v3[v5];
  if ( ((v4 ^ (v5 * 2)) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 0;
  v8 = (_WORD *)(v4 + *a3 - 2LL);
  while ( v6 != v3 )
  {
    if ( *--v6 != *v8 )
      return 0;
    --v8;
  }
  return 1;
}
