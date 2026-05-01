/*
 * XREFs of ?HideCharm@CCharmsWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x1803AAC20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18004DFE8 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCharmsWindowManager::HideCharm(CCharmsWindowManager *this, HWND a2)
{
  int v4; // ebx
  HWND v5; // rax
  HWND v6; // rsi
  DWORD WindowThreadProcessId; // ebx
  __int64 v8; // rcx
  bool v9; // si
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    if ( (*((_BYTE *)this + 64) & 8) != 0 )
    {
      return (unsigned int)-2147467260;
    }
    else
    {
      v5 = (HWND)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
      v6 = v5;
      if ( v5
        && (!a2
         || a2 == v5
         && (WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL), WindowThreadProcessId == GetCurrentThreadId())) )
      {
        v8 = *((_QWORD *)this + 9);
        v11[1] = 0LL;
        v11[0] = v6;
        v9 = (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 56LL))(v8, v11) >= 0;
        v4 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 4) + 112LL))(**((_QWORD **)this + 4));
        if ( v4 >= 0 )
          *((_DWORD *)this + 16) &= 0xFFFFFFFA;
        if ( v9 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9));
      }
      else
      {
        return (unsigned int)-2147024809;
      }
    }
  }
  else
  {
    return (unsigned int)-2147417842;
  }
  return (unsigned int)v4;
}
