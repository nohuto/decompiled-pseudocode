/*
 * XREFs of ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180015DD8
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call @ 0x180028060 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Do_call.c)
 * Callees:
 *     WPP_SF_ @ 0x18000E8E8 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x18001E170 (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::CastingStateChanged(CApplication *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // r8
  int v6; // eax
  _UNKNOWN **v7; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = a2 + *((_DWORD *)this + 168);
  *((_DWORD *)this + 168) = v5;
  v6 = v5;
  v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, v5, a2, v5);
    v6 = *((_DWORD *)this + 168);
    v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v6 < 0 )
  {
    if ( v7 != &WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x40000000) != 0 && *((_BYTE *)v7 + 25) >= 2u )
      WPP_SF_((TRACEHANDLE)v7[2], 0x20u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
    *((_DWORD *)this + 168) = 0;
    goto LABEL_11;
  }
  if ( v6 <= 0 )
  {
LABEL_11:
    *((_DWORD *)this + 52) &= ~8u;
    goto LABEL_12;
  }
  *((_DWORD *)this + 52) |= 8u;
LABEL_12:
  if ( v4 )
    LeaveCriticalSection(v4);
}
