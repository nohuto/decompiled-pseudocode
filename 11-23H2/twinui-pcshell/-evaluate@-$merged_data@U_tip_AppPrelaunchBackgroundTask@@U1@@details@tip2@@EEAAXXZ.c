/*
 * XREFs of ?evaluate@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXXZ @ 0x180249EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::evaluate(
        __int64 a1,
        const char *a2)
{
  const char *result; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx

  if ( *(_DWORD *)(a1 + 264) )
  {
    result = tip::details::reason_string((tip::details *)"reason::hr_not_success", a2);
    v5 = *(_QWORD *)(v4 + 256);
    if ( *(_BYTE *)(v5 + 152) == (_BYTE)v3 )
    {
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = v3 + 1;
      *(_QWORD *)(v5 + 160) = result;
    }
  }
  else
  {
    result = *(const char **)(a1 + 256);
    if ( (*((_DWORD *)result + 14) & 0x200) != 0 )
    {
      if ( result[152] )
        return result;
      *((_BYTE *)result + 152) = 1;
      v6 = 0x8000;
    }
    else
    {
      if ( result[152] )
        return result;
      *((_BYTE *)result + 152) = 3;
      v6 = 16385;
    }
    *((_QWORD *)result + 20) = 0LL;
    *((_WORD *)result + 77) = v6;
  }
  return result;
}
