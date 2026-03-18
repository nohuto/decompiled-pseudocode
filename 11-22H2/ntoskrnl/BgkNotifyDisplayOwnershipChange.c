/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0
 * Callers:
 *     BgkSetDisplayOwnership @ 0x1403AD4D0 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14054EF00 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x14054F400 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 *     InbvSetFunction @ 0x140387188 (InbvSetFunction.c)
 *     BgkpTryEnableConsole @ 0x140387468 (BgkpTryEnableConsole.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     BgLibraryEnable @ 0x140671AE8 (BgLibraryEnable.c)
 *     BgkResumeFinished @ 0x140A99AF8 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x140AED008 (BgSetFrameBufferAccess.c)
 *     BgConsoleGetInterface @ 0x140AEF5AC (BgConsoleGetInterface.c)
 *     BgkDestroy @ 0x140AEFA28 (BgkDestroy.c)
 *     BgLibraryDisable @ 0x140AF01D0 (BgLibraryDisable.c)
 *     BgDisplayFade @ 0x140AF020C (BgDisplayFade.c)
 *     BgConsoleDestroyInterface @ 0x140AF0254 (BgConsoleDestroyInterface.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AF02E0 (BgkpUnlockBgfxCodeSection.c)
 *     BgkpLockBgfxCodeSection @ 0x140AF0550 (BgkpLockBgfxCodeSection.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // eax
  char v5; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v7)(void); // [rsp+30h] [rbp-48h] BYREF
  _OWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( byte_140D17FB8 && !a1 )
  {
    BgkResumeFinished();
    qword_140D17FB0 = 0LL;
    result = 0LL;
    byte_140C6AC8A = 0;
    return result;
  }
  if ( a1 != byte_140C6AC8A )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140C6AC78 = a2;
      }
      else if ( !qword_140C6AC78 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140C6AC89 = 0;
      byte_140C6AC70 = 0;
      ExWaitForRundownProtectionRelease(&stru_140C0BD38);
      ExRundownCompleted(&stru_140C0BD38);
      v3 = BgLibraryDisable();
      if ( v3 < 0 )
      {
        BgkDestroy();
        InbvSetFunction(3);
        v3 = 0;
      }
      else
      {
        byte_140C6AC8A = 0;
        byte_140C6AC80 = 0;
        if ( qword_140C6AC68 )
        {
          BgConsoleDestroyInterface();
          qword_140C6AC68 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140D17FB0 )
      {
        qword_140D17FB0();
        qword_140D17FB0 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140C6AC78 )
      return 3221225473LL;
    v7 = 0LL;
    result = qword_140C6AC78(0LL, v8, &v7);
    if ( (int)result >= 0 )
    {
      qword_140D17FB0 = v7;
      BgkpLockBgfxCodeSection();
      v4 = BgLibraryEnable(v8, 0LL);
      v5 = byte_140C6AC8A;
      v3 = v4;
      if ( v4 >= 0 )
        v5 = 1;
      byte_140C6AC8A = v5;
      Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
      qword_140C6AC68 = (__int64)Interface;
      if ( Interface )
        (*Interface)(0LL, 4291217094LL, (unsigned int)dword_140D18498, 0LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
