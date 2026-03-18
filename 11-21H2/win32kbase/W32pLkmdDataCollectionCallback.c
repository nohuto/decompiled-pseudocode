/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C0168690
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C016833C (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  *(_QWORD *)&v14 = PsGetProcessWin32Process(a5);
  if ( (_QWORD)v14 )
  {
    *((_QWORD *)&v14 + 1) = 0LL;
    LODWORD(v15) = 0;
    *((_QWORD *)&v15 + 1) = a1;
    *(_QWORD *)&v16 = a2;
    *((_QWORD *)&v16 + 1) = a3;
    v12 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v14);
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 >= 0 )
    v12 = 0;
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return (unsigned int)v12;
}
