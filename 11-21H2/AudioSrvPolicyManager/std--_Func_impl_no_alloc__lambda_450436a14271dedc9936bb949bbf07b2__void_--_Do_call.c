/*
 * XREFs of std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Do_call @ 0x180027D20
 * Callers:
 *     <none>
 * Callees:
 *     pow @ 0x180003494 (pow.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     WPP_SF_Sddd @ 0x1800259B4 (WPP_SF_Sddd.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18002F7A4 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Do_call(__int64 a1)
{
  int v1; // ebp
  int v2; // esi
  unsigned int *v3; // rdi
  CApplicationManager *v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  const wchar_t *v6; // r9
  int v7; // eax
  float v8; // xmm3_4
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 20);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(unsigned int **)(a1 + 8);
  v4 = g_ApplicationManager;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = L"Enabled";
    if ( !v2 )
      v6 = L"Disabled";
    WPP_SF_Sddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v3[41], (__int64)L"Disabled", v6, v3[41], v3[40], v1);
  }
  v7 = 0;
  if ( v1 <= 0 )
    v7 = v1;
  if ( v7 <= -24 )
    v7 = -24;
  *(float *)&v13 = (float)v7;
  if ( COERCE_INT((float)v7) == -8388608 )
    v8 = 0.0;
  else
    v8 = pow(10.0, (float)v7 / 20.0);
  *(float *)&v13 = 0.0;
  v9 = TsSessionIdScreenReaderStateChanged(v3[41], v3[40], v2, v8, &v13);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADB,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v9);
    if ( !v5 )
      return;
    goto LABEL_21;
  }
  v10 = v2 == 0;
  v11 = v3[123];
  v3[123] = v10;
  if ( *(float *)&v13 != 0.0 || v11 != v10 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v4, v3[41], 3u);
  if ( v5 )
LABEL_21:
    LeaveCriticalSection(v5);
}
