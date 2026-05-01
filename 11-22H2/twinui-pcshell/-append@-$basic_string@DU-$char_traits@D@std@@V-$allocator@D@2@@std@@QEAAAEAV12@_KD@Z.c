/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1802D236A
 * Callers:
 *     ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1802D3DFC (-wstring_to_string@util@cereal@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x1803D2D24 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1803D3A88 (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, size_t Size)
{
  __int64 v4; // rcx
  bool v5; // cf
  _QWORD *v6; // rax
  char *v7; // rbx
  _QWORD *result; // rax

  v4 = Src[2];
  if ( Size > Src[3] - v4 )
    return (_QWORD *)std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(Src);
  v5 = Src[3] < 0x10uLL;
  Src[2] = v4 + Size;
  v6 = Src;
  if ( !v5 )
    v6 = (_QWORD *)*Src;
  v7 = (char *)v6 + v4;
  memset_0((char *)v6 + v4, 0, Size);
  result = Src;
  v7[Size] = 0;
  return result;
}
