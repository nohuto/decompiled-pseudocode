/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x18001DE9C
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD2@Z @ 0x18001CBE0 (--$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@-$basic_string@DU-$c.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBAX_K@Z @ 0x18001DB50 (-_Check_offset@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBAX_K@Z.c)
 */

void **__fastcall std::string::insert(void **Src, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v7; // r9
  __int64 v8; // r8
  bool v9; // cf
  char *v10; // rbx
  size_t v11; // rdi

  std::_String_val<std::_Simple_types<char>>::_Check_offset((__int64)Src, 0LL);
  v8 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v8 )
    return std::string::_Reallocate_grow_by<_lambda_f3a66ab6a0570788f31503db83886f49_,unsigned __int64,char const *,unsigned __int64>(
             Src,
             a4,
             v8,
             v7,
             a3,
             a4);
  v9 = (unsigned __int64)Src[3] < 0x10;
  Src[2] = (void *)(v8 + a4);
  v10 = (char *)Src;
  if ( !v9 )
    v10 = (char *)*Src;
  if ( &a3[a4] <= v10 || a3 > &v10[v8] )
  {
    v11 = a4;
  }
  else if ( v10 > a3 )
  {
    v11 = v10 - a3;
  }
  else
  {
    v11 = 0LL;
  }
  memmove_0(&v10[a4], v10, v8 + 1);
  memcpy_0(v10, a3, v11);
  memcpy_0(&v10[v11], &a3[v11 + a4], a4 - v11);
  return Src;
}
