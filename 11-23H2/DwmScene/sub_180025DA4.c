/*
 * XREFs of sub_180025DA4 @ 0x180025DA4
 * Callers:
 *     sub_18002C9D8 @ 0x18002C9D8 (sub_18002C9D8.c)
 *     sub_1800E0100 @ 0x1800E0100 (sub_1800E0100.c)
 *     sub_1800E0400 @ 0x1800E0400 (sub_1800E0400.c)
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025DA4(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
