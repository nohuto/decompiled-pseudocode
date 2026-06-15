/*
 * XREFs of ?ReacquirePhoneCallResource@TelephonyControllerCallInstance@@UEAAJH@Z @ 0x1801624C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::ReacquirePhoneCallResource(
        TelephonyControllerCallInstance *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v5; // eax

  v2 = 0;
  v3 = a2;
  if ( *((_QWORD *)this + 3) && (_DWORD)a2 != *((_DWORD *)this + 13) )
  {
    LOBYTE(a2) = (_DWORD)a2 != 0;
    v5 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager + 56LL))(
           g_AudioResourceManager,
           a2);
    if ( v5 >= 0 )
      *((_DWORD *)this + 13) = v3;
    else
      return (unsigned int)v5;
  }
  return v2;
}
