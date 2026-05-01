/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_DashboardExtensionCall@@@details@tip@@EEAAXXZ @ 0x18003EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip::details::test_merged_data<_tip_DashboardExtensionCall>::evaluate(
        __int64 a1,
        const char *a2)
{
  const char *result; // rax
  __int16 v3; // cx
  __int64 v4; // r9
  __int64 v5; // rcx
  char v6; // r10

  if ( *(_BYTE *)(a1 + 153) && *(_BYTE *)(a1 + 152) )
  {
    result = tip::details::reason_string((tip::details *)"reason::extension_creation_failed", a2);
    v5 = *(_QWORD *)(v4 + 144);
    if ( *(_BYTE *)(v5 + 72) == v6 )
    {
      *(_BYTE *)(v5 + 72) = 3;
      *(_WORD *)(v5 + 74) = 1;
      *(_QWORD *)(v5 + 80) = result;
    }
  }
  else
  {
    result = *(const char **)(a1 + 144);
    if ( (*(_DWORD *)result & 0x200) != 0 )
    {
      if ( result[72] )
        return result;
      v3 = 0x8000;
      *((_BYTE *)result + 72) = 1;
      goto LABEL_6;
    }
    if ( !result[72] )
    {
      *((_BYTE *)result + 72) = 3;
      v3 = 16385;
LABEL_6:
      *((_QWORD *)result + 10) = 0LL;
      *((_WORD *)result + 37) = v3;
    }
  }
  return result;
}
