/*
 * XREFs of ?make_error_code@std@@YA?AVerror_code@1@W4errc@1@@Z @ 0x180027A04
 * Callers:
 *     ?_Throw_system_error@std@@YAXW4errc@1@@Z @ 0x180027700 (-_Throw_system_error@std@@YAXW4errc@1@@Z.c)
 * Callees:
 *     ?generic_category@std@@YAAEBVerror_category@1@XZ @ 0x1800279B4 (-generic_category@std@@YAAEBVerror_category@1@XZ.c)
 */

__int64 __fastcall std::make_error_code(_DWORD *a1, int a2)
{
  void ***v2; // rax
  __int64 v3; // rcx

  *a1 = a2;
  v2 = std::generic_category();
  *(_QWORD *)(v3 + 8) = v2;
  return v3;
}
