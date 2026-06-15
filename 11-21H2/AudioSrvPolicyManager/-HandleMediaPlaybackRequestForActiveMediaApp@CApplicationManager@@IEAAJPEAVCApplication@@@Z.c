/*
 * XREFs of ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800204A0
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x1800205A4 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180017C80 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180017DF4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // esi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  USHORT v8; // dx

  if ( *((_DWORD *)a2 + 52) )
    goto LABEL_15;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( !*(_DWORD *)(v6 + 416) && *(_DWORD *)(v6 + 232) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( v4 || (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
LABEL_15:
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v8 = 32;
      goto LABEL_19;
    }
  }
  else
  {
    CApplication::GrantGoodFaithPLMExemption((const wchar_t **)a2);
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v8 = 33;
LABEL_19:
      WPP_SF_S(v7[2], v8, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, *((const wchar_t **)a2 + 3));
    }
  }
  return 0LL;
}
