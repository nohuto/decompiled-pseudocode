/*
 * XREFs of ?evaluate@?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXXZ @ 0x18021E710
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  const char *result; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  __int16 v6; // dx
  __int64 v7; // r9
  char v8; // r10
  __int16 v9; // cx

  if ( !*(_QWORD *)(a1 + 280) )
  {
    result = tip::details::reason_string((tip::details *)"reason::group_id_property_not_set", a2);
    v5 = *(_QWORD *)(v4 + 256);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
      return result;
    v6 = v3 + 1;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 296) )
  {
    result = *(const char **)(a1 + 256);
    if ( (*((_DWORD *)result + 14) & 0x200) != 0 )
    {
      if ( result[152] )
        return result;
      v9 = 0x8000;
      *((_BYTE *)result + 152) = 1;
    }
    else
    {
      if ( result[152] )
        return result;
      *((_BYTE *)result + 152) = 3;
      v9 = 16385;
    }
    *((_QWORD *)result + 20) = 0LL;
    *((_WORD *)result + 77) = v9;
  }
  else
  {
    result = tip::details::reason_string((tip::details *)"reason::switcher_surface_property_not_set", a2);
    v5 = *(_QWORD *)(v7 + 256);
    if ( *(_BYTE *)(v5 + 152) == v8 )
    {
      v6 = 2;
LABEL_4:
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = v6;
      *(_QWORD *)(v5 + 160) = result;
    }
  }
  return result;
}
