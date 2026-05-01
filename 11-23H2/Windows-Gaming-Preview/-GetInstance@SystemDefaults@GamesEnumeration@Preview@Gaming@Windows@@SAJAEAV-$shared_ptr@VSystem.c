/*
 * XREFs of ?GetInstance@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAJAEAV?$shared_ptr@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@@Z @ 0x180043F78
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002F084 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x1800102C0 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetInstance(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults **a1)
{
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  v2 = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance;
  v3 = 0;
  if ( Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance )
  {
    v4 = qword_180064FF8;
    if ( qword_180064FF8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(qword_180064FF8 + 8));
      v4 = qword_180064FF8;
      v2 = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance;
    }
    v6[0] = *a1;
    v6[1] = a1[1];
    *a1 = v2;
    a1[1] = (Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *)v4;
    std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v6);
  }
  else
  {
    v3 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)0x8000FFFFLL);
  }
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  return v3;
}
