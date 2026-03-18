/*
 * XREFs of ClientLoadLocalT1Fonts @ 0x1C0089D50
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C0088F60 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0089E68 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 ClientLoadLocalT1Fonts()
{
  unsigned int Count; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  EtwTraceBeginCallback(77LL);
  KeUserModeCallback(77LL, 0LL, 0LL, &v7, &v6);
  EtwTraceEndCallback(77LL);
  return EnterCrit(1LL, 0LL);
}
