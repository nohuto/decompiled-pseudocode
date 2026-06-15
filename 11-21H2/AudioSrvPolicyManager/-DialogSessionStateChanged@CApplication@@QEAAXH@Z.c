/*
 * XREFs of ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x18001681C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Do_call @ 0x18000DF00 (std--_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_--_Do_call.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x18001E170 (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::DialogSessionStateChanged(CApplication *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // r8
  int v6; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = a2 + *((_DWORD *)this + 170);
  *((_DWORD *)this + 170) = v5;
  v6 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, v5, a2, v5);
    v6 = *((_DWORD *)this + 170);
  }
  if ( v6 < 0 )
  {
    *((_DWORD *)this + 170) = 0;
LABEL_7:
    *((_DWORD *)this + 52) &= ~0x20u;
    goto LABEL_8;
  }
  if ( v6 <= 0 )
    goto LABEL_7;
  *((_DWORD *)this + 52) |= 0x20u;
LABEL_8:
  if ( v4 )
    LeaveCriticalSection(v4);
}
