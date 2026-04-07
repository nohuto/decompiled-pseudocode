/*
 * XREFs of ?Resize@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1800F1EEC
 * Callers:
 *     ??$Expand@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1800EF16C (--$Expand@ULevel@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rcx
  __int64 v6; // rbp
  __int64 result; // rax

  v3 = 0LL;
  v4 = (void *)a1[2];
  v6 = a1[3] - (_QWORD)v4;
  if ( a2 )
    v3 = _o_realloc();
  else
    free(v4);
  a1[2] = v3;
  result = v3 + a2;
  a1[3] = v3 + v6;
  a1[4] = v3 + a2;
  return result;
}
