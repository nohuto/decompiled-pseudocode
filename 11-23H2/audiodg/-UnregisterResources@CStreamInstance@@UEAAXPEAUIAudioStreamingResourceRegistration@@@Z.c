/*
 * XREFs of ?UnregisterResources@CStreamInstance@@UEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400258A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStreamInstance::UnregisterResources(
        CStreamInstance *this,
        struct IAudioStreamingResourceRegistration *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( *((_QWORD *)this + 21) )
  {
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)a2 + 32LL))(a2);
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
