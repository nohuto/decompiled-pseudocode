/*
 * XREFs of GetFnidString @ 0x1C013DE70
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00C73CC (xxxGetScrollBarInfo.c)
 *     xxxShowScrollBar @ 0x1C0231FE0 (xxxShowScrollBar.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetFnidString(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  v1 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( v1 <= 0x2A2 )
  {
    if ( v1 == 674 )
      return "FNID_COMBOBOX";
    if ( !v1 )
      return "NONE";
    v2 = v1 - 666;
    if ( !v2 )
      return "FNID_SCROLLBAR";
    v3 = v2 - 1;
    if ( !v3 )
      return "FNID_ICONTITLE";
    v4 = v3 - 1;
    if ( !v4 )
      return "FNID_MENU";
    v5 = v4 - 1;
    if ( !v5 )
      return "FNID_DESKTOP";
    v6 = v5 - 1;
    if ( !v6 )
      return "FNID_DEFWINDOWPROC";
    v7 = v6 - 1;
    if ( !v7 )
      return "FNID_MESSAGEWND";
    v8 = v7 - 1;
    if ( !v8 )
      return "FNID_SWITCH";
    if ( v8 == 1 )
      return "FNID_BUTTON";
    return "UNKNOWN";
  }
  v10 = v1 - 675;
  if ( !v10 )
    return "FNID_COMBOLISTBOX";
  v11 = v10 - 1;
  if ( !v11 )
    return "FNID_DIALOG";
  v12 = v11 - 1;
  if ( !v12 )
    return "FNID_EDIT";
  v13 = v12 - 1;
  if ( !v13 )
    return "FNID_LISTBOX";
  v14 = v13 - 1;
  if ( !v14 )
    return "FNID_MDICLIENT";
  v15 = v14 - 1;
  if ( !v15 )
    return "FNID_STATIC";
  v16 = v15 - 1;
  if ( !v16 )
    return "FNID_IME";
  if ( v16 != 1 )
    return "UNKNOWN";
  return "FNID_GHOST";
}
