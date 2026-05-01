/*
 * XREFs of ?evaluate@?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXXZ @ 0x18022B360
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>::evaluate(
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

  if ( !*(_BYTE *)(a1 + 296) )
  {
    result = tip::details::reason_string((tip::details *)"reason::no_immersive_shell_service_provider", a2);
    v5 = *(_QWORD *)(v4 + 256);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
      return result;
    v6 = v3 + 1;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a1 + 297) )
  {
    result = *(const char **)(a1 + 256);
    if ( *((_QWORD *)result + 10) )
    {
      if ( result[152] )
        return result;
      *((_BYTE *)result + 152) = 3;
      v9 = 0x4000;
    }
    else
    {
      if ( result[152] )
        return result;
      v9 = 0x8000;
      *((_BYTE *)result + 152) = 1;
    }
    *((_QWORD *)result + 20) = 0LL;
    *((_WORD *)result + 77) = v9;
  }
  else
  {
    result = tip::details::reason_string((tip::details *)"reason::no_snap_extension_statics", a2);
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
