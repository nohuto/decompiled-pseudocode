/*
 * XREFs of ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180515C70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180176E38 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802DA774 (--0-$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18050FEF8 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback(__int64 a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  __int64 v4; // rax
  int DefautInputAppIdAndContinue; // eax
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = a1;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 248);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 248), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (Microsoft::WRL::Details *)(2 * v2 + 16),
      (volatile int *)((unsigned __int64)v2 >> 63));
  }
LABEL_8:
  if ( a1 )
  {
    v4 = std::function<long (unsigned short const *)>::function<long (unsigned short const *)>((__int64)v7, a1 + 864);
    DefautInputAppIdAndContinue = TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue(a1, v4);
    if ( DefautInputAppIdAndContinue < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x489,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)DefautInputAppIdAndContinue);
  }
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v9);
  return 0LL;
}
