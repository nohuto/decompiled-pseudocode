/*
 * XREFs of ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x180020780
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001FF3C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::IsInPlmSponsoredGracePeriod(CApplication *this)
{
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // ebp
  _QWORD *v5; // rcx
  __int64 v6; // rdx

  v2 = 0;
  if ( *((_DWORD *)this + 122) )
    return 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( !*(_DWORD *)(v6 + 416) && *(_QWORD *)(v6 + 360) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( v4 || *((_DWORD *)this + 108) )
    return 1;
  return v2;
}
