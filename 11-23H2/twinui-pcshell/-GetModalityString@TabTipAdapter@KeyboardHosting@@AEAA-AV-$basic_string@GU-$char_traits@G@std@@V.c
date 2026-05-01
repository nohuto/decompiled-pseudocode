/*
 * XREFs of ?GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1802DD3B4
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1802DD7D6 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

_QWORD *__fastcall KeyboardHosting::TabTipAdapter::GetModalityString(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  _QWORD *v8; // rcx
  wchar_t *v9; // rdx

  if ( !a3 )
  {
    v9 = (wchar_t *)L"None";
    goto LABEL_14;
  }
  v4 = a3 - 1;
  if ( !v4 )
  {
    v9 = L"Mouse";
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = L"Touch";
    goto LABEL_14;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    v9 = L"Keyboard";
    goto LABEL_14;
  }
  v7 = v6 - 12;
  if ( !v7 )
  {
    v9 = L"Pen";
LABEL_14:
    v8 = a2;
    goto LABEL_15;
  }
  v8 = a2;
  if ( v7 == 496 )
    v9 = L"Gaze";
  else
    v9 = (wchar_t *)L"Unknown";
LABEL_15:
  std::wstring::wstring(v8, v9);
  return a2;
}
