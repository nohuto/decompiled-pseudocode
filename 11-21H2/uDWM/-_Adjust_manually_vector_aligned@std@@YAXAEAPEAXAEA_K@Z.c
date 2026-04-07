/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068AF0
 * Callers:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2)
{
  _BYTE *v2; // rdx

  *a2 += 39LL;
  v2 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v2 - 8) > 0x1F )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x180068B22LL);
  }
  *a1 = v2;
}
