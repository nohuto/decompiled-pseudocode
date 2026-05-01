/*
 * XREFs of ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801663B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800482C4 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1801664E8 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CRotationManagerSync::SetLogicalForegroundProcess(__int64 a1, HWND a2, int a3, __int64 a4)
{
  __int64 *v8; // rbx
  __int64 v9; // rcx
  DWORD v10; // ebp
  DWORD *v11; // rsi
  _BYTE *v12; // rsi
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 == 1 || a4 )
  {
    v8 = (__int64 *)(a1 + 88);
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
        else
        {
          v12 = (_BYTE *)(a1 + 32);
          if ( *(_DWORD *)(a1 + 28) || !*v12 )
          {
            *(_DWORD *)(a1 + 28) = 0;
            *v12 = 0;
            if ( !*(_BYTE *)(a1 + 33) )
            {
              SetDisplayAutoRotationPreferences(ORIENTATION_PREFERENCE_NONE);
              *v12 = 1;
            }
          }
        }
      }
      if ( v10 )
      {
        v11 = (DWORD *)(a1 + 36);
        if ( v10 != *(_DWORD *)((*(_DWORD *)(a1 + 48) != 0 ? 0xC : 0) + a1 + 24) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)(a1 - 72), v10);
          if ( !*(_DWORD *)(a1 + 48) )
            v11 = (DWORD *)(a1 + 24);
          *v11 = v10;
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
