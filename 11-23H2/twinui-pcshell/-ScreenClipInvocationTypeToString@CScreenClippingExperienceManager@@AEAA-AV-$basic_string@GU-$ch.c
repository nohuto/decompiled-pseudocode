/*
 * XREFs of ?ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456BD8
 * Callers:
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18045645C (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

_QWORD *__fastcall CScreenClippingExperienceManager::ScreenClipInvocationTypeToString(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  _QWORD *v10; // rcx
  wchar_t *v11; // rdx

  v4 = a3 - 1;
  if ( !v4 )
  {
    v11 = L"PenButton";
    goto LABEL_16;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v11 = L"QuickActions";
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = L"PrintScreen";
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = L"HotKey";
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = L"ScreenSketch";
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = L"SearchBox";
LABEL_16:
    v10 = a2;
    goto LABEL_17;
  }
  v10 = a2;
  if ( v9 == 1 )
    v11 = L"ScreenRecorderHotKey";
  else
    v11 = L"ExperienceManager";
LABEL_17:
  std::wstring::wstring(v10, v11);
  return a2;
}
