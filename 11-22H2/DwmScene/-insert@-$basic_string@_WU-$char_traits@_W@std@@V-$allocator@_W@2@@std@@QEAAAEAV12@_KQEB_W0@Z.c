/*
 * XREFs of ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_KQEB_W0@Z @ 0x18001F88C
 * Callers:
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEB_W$$QEAV10@@Z @ 0x1800C2DCC (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_ea_1800C2DCC.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBAX_K@Z @ 0x18001DB50 (-_Check_offset@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_967c2ed818824c5314a20ec3af46b793_@@_KPEB_W_K@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_967c2ed818824c5314a20ec3af46b793_@@_KPEB_W2@Z @ 0x18001EAD4 (--$_Reallocate_grow_by@V_lambda_967c2ed818824c5314a20ec3af46b793_@@_KPEB_W_K@-$basic_string@_WU-.c)
 */

void **__fastcall std::wstring::insert(void **Src, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // r8
  bool v8; // cf
  char *v9; // rsi
  __int64 v10; // rdi
  int v12; // [rsp+20h] [rbp-28h]

  std::_String_val<std::_Simple_types<char>>::_Check_offset((__int64)Src, 0LL);
  v7 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v7 )
    return std::wstring::_Reallocate_grow_by<_lambda_967c2ed818824c5314a20ec3af46b793_,unsigned __int64,wchar_t const *,unsigned __int64>(
             Src,
             a4,
             v7,
             v6,
             v12,
             a4);
  v8 = (unsigned __int64)Src[3] < 8;
  Src[2] = (void *)(v7 + a4);
  v9 = (char *)Src;
  if ( !v8 )
    v9 = (char *)*Src;
  if ( &aFl[a4] <= (wchar_t *)v9 || L"FL_" > (wchar_t *)&v9[2 * v7] )
  {
    v10 = a4;
  }
  else if ( v9 > (char *)L"FL_" )
  {
    v10 = (v9 - (char *)L"FL_") >> 1;
  }
  else
  {
    v10 = 0LL;
  }
  memmove_0(&v9[2 * a4], v9, 2 * v7 + 2);
  memcpy_0(v9, L"FL_", 2 * v10);
  memcpy_0(&v9[2 * v10], &aFl[v10 + a4], 2 * (a4 - v10));
  return Src;
}
