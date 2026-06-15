/*
 * XREFs of ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001BBC4
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180019414 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x1800135B8 (WPP_SF_SSd.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001BB48 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18001DF00 (McGenEventWrite_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::SendSoundLevelNotification(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  const wchar_t *v9; // rax
  int v10; // edx
  __int64 v11; // [rsp+28h] [rbp-70h]
  int v12; // [rsp+30h] [rbp-68h] BYREF
  char v13[16]; // [rsp+38h] [rbp-60h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-50h]
  int v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+54h] [rbp-44h]
  int *v17; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+60h] [rbp-38h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v6 = (__int64)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, a2);
    v6 = (__int64)WPP_GLOBAL_Control;
  }
  v7 = *(_QWORD **)(a1 + 72);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( (*(_BYTE *)(v8 + 448) & 1) != 0 && !*(_DWORD *)(v8 + 416) )
    {
      if ( (_UNKNOWN **)v6 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v6 + 28) & 0x40000000) != 0
        && *(_BYTE *)(v6 + 25) >= 4u )
      {
        LODWORD(v11) = *(_DWORD *)(v8 + 160);
        WPP_SF_SSd(
          *(_QWORD *)(v6 + 16),
          0xEu,
          &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
          L"SoundLevelChanged",
          *(const wchar_t **)(a1 + 24),
          v11);
      }
      if ( Microsoft_Windows_AudioEnableBits < 0 )
      {
        v12 = a2;
        v9 = *(const wchar_t **)(a1 + 24);
        if ( v9 )
        {
          v6 = -1LL;
          do
            ++v6;
          while ( v9[v6] );
          v10 = 2 * v6 + 2;
        }
        else
        {
          v9 = L"NULL";
          v10 = 10;
        }
        v14 = v9;
        v15 = v10;
        v16 = 0;
        v17 = &v12;
        v18 = 4LL;
        McGenEventWrite_EventWriteTransfer(v6, &EVT_AUDIOSRV_SOUND_LEVEL_CHANGED, v5, 3LL, v13);
      }
      CProcess::SendPBMNotification(v8, 0);
      v6 = (__int64)WPP_GLOBAL_Control;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
