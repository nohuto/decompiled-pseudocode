/*
 * XREFs of ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x140060740
 * Callers:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14001CBBC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x14006117C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(unsigned __int64 a1)
{
  void *v1; // rax
  void *v2; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    std::_Throw_bad_array_new_length();
  v1 = operator new(a1 + 39);
  v2 = v1;
  if ( !v1 )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x140060782LL);
  }
  result = ((unsigned __int64)v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v2;
  return result;
}
