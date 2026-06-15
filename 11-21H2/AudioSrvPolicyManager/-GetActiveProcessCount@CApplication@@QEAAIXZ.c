/*
 * XREFs of ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001709C
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800189CC (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::GetActiveProcessCount(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // edi
  _QWORD *v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ecx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    v6 = v3 + 1;
    if ( *(_DWORD *)(v5 + 416) )
      v6 = v3;
    v3 = v6;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
