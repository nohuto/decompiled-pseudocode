/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C023CB6C
 * Callers:
 *     SfnINCBOXSTRING @ 0x1C016E200 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x1C016E260 (SfnINLBOXSTRING.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C004DC40 (SfnDWORD.c)
 *     SfnINSTRINGNULL @ 0x1C00EC7F0 (SfnINSTRINGNULL.c)
 *     SfnINSTRING @ 0x1C0228520 (SfnINSTRING.c)
 */

unsigned __int8 *__fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        char a8)
{
  __int64 v12; // rcx
  int v13; // ecx
  int v15; // eax

  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    LODWORD(v12) = 0;
  if ( !HMValidateHandleNoSecure(v12, 1) )
    return 0LL;
  v13 = *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1412);
  if ( v13 == 1 )
    return (unsigned __int8 *)SfnDWORD((__int64 *)a2, a3, a4, (__int64)a5, a6, (__int64)a7);
  if ( v13 != 2 )
    return 0LL;
  v15 = 399;
  if ( a1 != 678 )
    v15 = 332;
  if ( a3 == v15 )
    return (unsigned __int8 *)SfnINSTRINGNULL((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
}
