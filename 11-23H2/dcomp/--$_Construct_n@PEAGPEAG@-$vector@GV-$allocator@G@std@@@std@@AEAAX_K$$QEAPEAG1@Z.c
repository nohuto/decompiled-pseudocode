/*
 * XREFs of ??$_Construct_n@PEAGPEAG@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z @ 0x18014E410
 * Callers:
 *     ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x18014EA40 (--$transform_primary@PEAG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$transform_primary@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0@Z @ 0x18014EC74 (--$transform_primary@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@-$_.c)
 * Callees:
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x180150460 (-_Buy_nonzero@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 */

char *__fastcall std::vector<unsigned short>::_Construct_n<unsigned short *,unsigned short *>(
        void **a1,
        __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  signed __int64 v7; // rbx
  char *v8; // rdi
  char *result; // rax

  if ( a2 )
  {
    std::vector<unsigned short>::_Buy_nonzero(a1, a2);
    v7 = *a4 - (_QWORD)*a3;
    v8 = (char *)*a1;
    memmove_0(*a1, *a3, v7);
    result = &v8[2 * (v7 >> 1)];
    a1[1] = result;
  }
  return result;
}
