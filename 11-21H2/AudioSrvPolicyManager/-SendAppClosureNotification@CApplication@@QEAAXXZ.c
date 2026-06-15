/*
 * XREFs of ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x18001B9FC
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     WPP_SF_Sd @ 0x18001E018 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::SendAppClosureNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rsi
  int v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+34h] [rbp-34h]
  __int64 v7; // [rsp+44h] [rbp-24h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  char v9; // [rsp+50h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v3 )
  {
    v4 = (_DWORD *)v3[2];
    v3 = (_QWORD *)*v3;
    if ( v4[114] && !v4[104] )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          27,
          (unsigned int)&WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
          *((_QWORD *)this + 3),
          v4[40]);
      }
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      v9 = 0;
      v5 = 33;
      LODWORD(v6) = 0x10000;
      *(_QWORD *)((char *)&v6 + 4) = GetCurrentProcessId();
      HIDWORD(v7) = 1;
      GenerateMediaEvent(&v5, (unsigned int)v4[40]);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
