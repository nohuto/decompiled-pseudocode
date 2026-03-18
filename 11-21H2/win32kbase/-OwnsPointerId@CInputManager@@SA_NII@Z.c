/*
 * XREFs of ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C023C4E8
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C02146D4 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C01416DC (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

bool __fastcall CInputManager::OwnsPointerId(int a1, int a2)
{
  bool v3; // bl
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  _DWORD *v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( g_pInputManager )
  {
    CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)&v9, (CInputManager *)((char *)g_pInputManager + 120));
    v5 = 0;
    v6 = *((_DWORD *)g_pInputManager + 28);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD **)(*((_QWORD *)g_pInputManager + 13) + 8LL * v5);
        if ( *v7 == a2 )
          break;
        if ( ++v5 >= v6 )
          goto LABEL_7;
      }
      v3 = a1 == v7[1];
    }
LABEL_7:
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
