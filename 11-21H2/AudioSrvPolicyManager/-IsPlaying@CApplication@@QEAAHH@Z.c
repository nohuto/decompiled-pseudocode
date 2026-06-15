/*
 * XREFs of ?IsPlaying@CApplication@@QEAAHH@Z @ 0x1800185BC
 * Callers:
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180020820 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 * Callees:
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180017114 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 */

__int64 __fastcall CApplication::IsPlaying(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // ebp
  _QWORD *v4; // rbx
  CProcess *v5; // rdi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = (CProcess *)v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*((_DWORD *)v5 + 104)
      && ((unsigned int)CProcess::GetActiveRenderStreamCount(v5, 2u)
       || (unsigned int)CProcess::GetActiveRenderStreamCount(v5, 0xAu)
       || (unsigned int)CProcess::GetActiveRenderStreamCount(v5, 1u)
       || (unsigned int)CProcess::GetActiveRenderStreamCount(v5, 0xBu)) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
