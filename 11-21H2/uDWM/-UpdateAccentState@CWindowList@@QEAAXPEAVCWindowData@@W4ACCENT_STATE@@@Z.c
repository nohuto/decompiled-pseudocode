/*
 * XREFs of ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18003609C
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     wistd::__function::__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl(int_const_&)_::operator() @ 0x18005EF20 (wistd--__function--__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl(in_ea_18005EF20.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097BAC (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

char __fastcall CWindowList::UpdateAccentState(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **v3; // rax
  unsigned int i; // edi
  __int64 v8; // rdx
  struct CWindowData *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  CAccentBlurBehind *v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  for ( i = 0; i < *(_DWORD *)(a1 + 616); ++i )
  {
    v8 = *(_QWORD *)(a1 + 592);
    LOBYTE(v3) = 2 * i;
    if ( *(_DWORD *)(v8 + 16LL * i + 8) == a3 )
    {
      v9 = *(struct CWindowData **)(v8 + 16LL * i);
      v10 = *((_QWORD *)v9 + 55);
      if ( v10 )
      {
        if ( !a2 || (v3 = *(_UNKNOWN ***)(a2 + 136), *((_UNKNOWN ***)v9 + 17) == v3) )
        {
          v11 = *(_QWORD *)(v10 + 280);
          if ( v11 )
          {
            if ( a3 == 3 )
            {
              v12 = *(CAccentBlurBehind **)(v11 + 344);
              if ( v12 )
              {
                if ( *((_QWORD *)v9 + 5) == *(_QWORD *)(v11 + 408)
                  || (LOBYTE(v3) = CAccentBlurBehind::IsBlurBehindDirty(
                                     v12,
                                     v9,
                                     (const struct tagRECT *)(v11 + 624),
                                     *(_QWORD *)(v11 + 416),
                                     *(HWND *)(v11 + 408)),
                      (_BYTE)v3) )
                {
                  LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 0x10000LL);
                }
              }
            }
            else
            {
              LOBYTE(v3) = a3 - 4;
              if ( (unsigned int)(a3 - 4) <= 1 )
                LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 4096LL);
            }
          }
        }
      }
    }
  }
  return (char)v3;
}
