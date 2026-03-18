/*
 * XREFs of ?BoostFrameRate@CLegacySwapChain@@UEAA_N_N@Z @ 0x18028A9FC
 * Callers:
 *     ?BoostFrameRate@CLegacySwapChain@@$4PPPPPPPM@A@EAA_N_N@Z @ 0x180108CB0 (-BoostFrameRate@CLegacySwapChain@@$4PPPPPPPM@A@EAA_N_N@Z.c)
 *     ?BoostFrameRate@CLegacySwapChain@@$4PPPPPPPM@BI@EAA_N_N@Z @ 0x180109CB0 (-BoostFrameRate@CLegacySwapChain@@$4PPPPPPPM@BI@EAA_N_N@Z.c)
 *     ?BoostFrameRate@CLegacySwapChain@@$4PPPPPPPM@BKI@EAA_N_N@Z @ 0x18010A330 (-BoostFrameRate@CLegacySwapChain@@$4PPPPPPPM@BKI@EAA_N_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidVariableRefreshDuration@CLegacySwapChain@@IEBA_N_K@Z @ 0x18028B678 (-IsValidVariableRefreshDuration@CLegacySwapChain@@IEBA_N_K@Z.c)
 */

char __fastcall CLegacySwapChain::BoostFrameRate(CLegacySwapChain *this, char a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r9
  volatile signed __int32 *v6; // rcx
  __int64 v8; // rcx
  __int128 v9; // rax

  if ( !*((_BYTE *)this - 84) )
  {
    if ( !a2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this - 41) + 200LL))(
        *((_QWORD *)this - 41),
        0LL,
        1LL);
      v8 = *((unsigned int *)this - 56);
      v9 = g_qpcFrequency.QuadPart * *((unsigned int *)this - 55);
      *((_DWORD *)this - 42) = 1;
      *((_QWORD *)this - 22) = v9 / v8;
      return 1;
    }
    v3 = *((unsigned int *)this - 50);
    if ( (unsigned int)v3 > 1 )
    {
      v4 = g_qpcFrequency.QuadPart
         * (unsigned __int64)*((unsigned int *)this - 55)
         / (v3
          * (unsigned __int64)*((unsigned int *)this - 56));
      if ( CLegacySwapChain::IsValidVariableRefreshDuration((CLegacySwapChain *)((char *)this - 400), v4)
        && (*(int (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this - 41) + 200LL))(
             *((_QWORD *)this - 41),
             10000000 * v4 / v5) >= 0 )
      {
        *((_DWORD *)this - 42) = *((_DWORD *)this - 50);
        *((_QWORD *)this - 22) = v4;
        v6 = (volatile signed __int32 *)*((_QWORD *)this - 10);
        *((_QWORD *)this - 10) = 0LL;
        if ( v6 )
          CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
        return 1;
      }
    }
  }
  return 0;
}
