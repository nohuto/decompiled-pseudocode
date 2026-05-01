/*
 * XREFs of ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180069C30
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180069D64 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x18006A280 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CRotationManagerSync::SetLogicalForegroundProcess(__int64 a1, HWND a2, int a3, __int64 a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  DWORD v10; // esi
  int v11; // edx
  DWORD *v12; // r14
  bool v13; // zf
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 == 1 || a4 )
  {
    v8 = (_QWORD *)(a1 + 88);
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( a3 == 1 )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(a2, &dwProcessId);
      v10 = dwProcessId;
      if ( dwProcessId == HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 40) = 0;
        }
        else if ( *(_DWORD *)(a1 + 28) || !*(_BYTE *)(a1 + 32) )
        {
          *(_DWORD *)(a1 + 28) = 0;
          *(_BYTE *)(a1 + 32) = 0;
          if ( !*(_BYTE *)(a1 + 33) )
          {
            SetDisplayAutoRotationPreferences(ORIENTATION_PREFERENCE_NONE);
            *(_BYTE *)(a1 + 32) = 1;
          }
        }
      }
      if ( v10 )
      {
        v11 = *(_DWORD *)(a1 + 48);
        v12 = (DWORD *)(a1 + 36);
        if ( v10 != *(_DWORD *)((v11 != 0 ? 0xC : 0) + a1 + 24) )
        {
          v13 = v11 == 0;
          if ( !v11 )
          {
            CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)(a1 - 72), v10);
            v13 = *(_DWORD *)(a1 + 48) == 0;
          }
          if ( v13 )
            v12 = (DWORD *)(a1 + 24);
          *v12 = v10;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=(v8, a4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    }
  }
}
