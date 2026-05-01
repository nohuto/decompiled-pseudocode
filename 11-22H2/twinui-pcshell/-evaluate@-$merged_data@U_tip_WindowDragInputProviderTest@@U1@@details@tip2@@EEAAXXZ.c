/*
 * XREFs of ?evaluate@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXXZ @ 0x18022BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  int v3; // ecx
  _DWORD *v4; // rax
  const char *result; // rax
  __int16 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // r9
  __int64 v11; // rdx
  __int16 v12; // r10
  __int64 v13; // r9

  v3 = *(_DWORD *)(a1 + 264);
  v4 = (_DWORD *)(a1 + 268);
  if ( v3 == 834 && *v4 == 3 )
  {
    result = tip::details::reason_string((tip::details *)"reason::reset_event", a2);
    v8 = *(_QWORD *)(v7 + 256);
    if ( *(_BYTE *)(v8 + 152) )
      return result;
    v9 = v6 - 2;
    *(_WORD *)(v8 + 154) = v6 - 2;
LABEL_11:
    *(_QWORD *)(v8 + 160) = result;
    *(_BYTE *)(v8 + 152) = v9;
    return result;
  }
  if ( v3 != 833 || *v4 )
  {
    result = tip::details::reason_string((tip::details *)"reason::unknown_event", a2);
    v8 = *(_QWORD *)(v13 + 256);
    if ( *(_BYTE *)(v8 + 152) )
      return result;
    v9 = 1;
    *(_WORD *)(v8 + 154) = v12;
    goto LABEL_11;
  }
  result = tip::details::reason_string((tip::details *)"reason::get_rect_event", a2);
  v11 = *(_QWORD *)(v10 + 256);
  if ( !*(_BYTE *)(v11 + 152) )
  {
    *(_QWORD *)(v11 + 160) = result;
    *(_BYTE *)(v11 + 152) = 1;
    *(_WORD *)(v11 + 154) = 2;
  }
  return result;
}
