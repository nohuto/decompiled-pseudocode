/*
 * XREFs of ??0_parameters_@?8??TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@6@@Z@QEAA@0$$QEAU76@@Z @ 0x18070E1C8
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x18027960C (Util--TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall `Util::TryOpenFileMappingAsStreamForWindowAsync'::`9'::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax

  *a1 = a2;
  v3 = *a3;
  *a3 = 0LL;
  a1[1] = v3;
  return a1;
}
