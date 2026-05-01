/*
 * XREFs of ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18004E064
 * Callers:
 *     _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x18004E014 (_lambda_f6f69901abcf4556c2ac2b4f02b3e468_--operator().c)
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1801664E8 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetAutoRotationConfiguration(
        CRotationManagerSync *this,
        unsigned int a2,
        HWND a3,
        __int64 a4)
{
  bool v7; // zf
  PSRWLOCK v8; // rax

  if ( a2 == HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
  {
    if ( *((_DWORD *)this + 30) )
    {
      *((_DWORD *)this + 28) = a4;
    }
    else if ( (_DWORD)a4 != *((_DWORD *)this + 25) || !*((_BYTE *)this + 104) )
    {
      *((_DWORD *)this + 25) = a4;
      v7 = *((_BYTE *)this + 105) == 0;
      *((_BYTE *)this + 104) = 0;
      if ( v7 )
      {
        SetDisplayAutoRotationPreferences((ORIENTATION_PREFERENCE)a4);
        *((_BYTE *)this + 104) = 1;
      }
    }
  }
  if ( a2 && a2 != *(_DWORD *)((char *)this + (*((_DWORD *)this + 30) != 0 ? 0xC : 0) + 96) )
  {
    if ( !*((_DWORD *)this + 30) )
      CRotationManagerSync::_SetActiveProcessForRotation(this, a2);
    *(_DWORD *)((char *)this + (*((_DWORD *)this + 30) != 0 ? 0xC : 0) + 96) = a2;
  }
  if ( a3 )
  {
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    *((_QWORD *)this + 19) = a3;
    (*(void (__fastcall **)(PVOID, HWND, HWND, __int64))(*(_QWORD *)v8[16].Ptr + 24LL))(v8[16].Ptr, a3, a3, a4);
  }
}
