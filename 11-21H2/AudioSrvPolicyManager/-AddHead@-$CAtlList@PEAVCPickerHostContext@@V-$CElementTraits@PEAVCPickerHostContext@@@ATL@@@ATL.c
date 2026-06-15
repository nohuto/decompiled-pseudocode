/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x180025E80
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180026620 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(
        __int64 a1,
        __int64 *a2)
{
  __int64 *i; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // r8d
  int v8; // ecx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *result; // rax

  i = (__int64 *)qword_18005BBF8;
  v4 = PickerHostContextManager::s_PickerHostContextList;
  if ( qword_18005BBF8 )
    goto LABEL_8;
  v5 = (unsigned int)dword_18005BC00;
  if ( dword_18005BC00 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_18005BC00 < 0x18 )
      goto LABEL_12;
    v5 = 24LL * (unsigned int)dword_18005BC00;
  }
  v6 = malloc(v5 + 8);
  if ( !v6 )
LABEL_12:
    ATL::AtlThrowImpl(-2147024882);
  v7 = dword_18005BC00;
  *v6 = qword_18005BBF0;
  qword_18005BBF0 = (__int64)v6;
  v8 = v7 - 1;
  v9 = &v6[3 * (unsigned int)(v7 - 1) + 1];
  for ( i = (__int64 *)qword_18005BBF8; v8 >= 0; --v8 )
  {
    *v9 = (__int64)i;
    i = v9;
    qword_18005BBF8 = (__int64)v9;
    v9 -= 3;
  }
LABEL_8:
  v10 = *i;
  i[2] = *a2;
  qword_18005BBF8 = v10;
  i[1] = 0LL;
  *i = v4;
  ++qword_18005BBE8;
  if ( PickerHostContextManager::s_PickerHostContextList )
    *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = i;
  else
    qword_18005BBE0 = (__int64)i;
  result = i;
  PickerHostContextManager::s_PickerHostContextList = (__int64)i;
  return result;
}
