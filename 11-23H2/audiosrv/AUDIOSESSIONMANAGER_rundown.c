/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x180052050
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x1800520CC (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct IAudioDuckingManager *__fastcall AUDIOSESSIONMANAGER_rundown(CAudioSessionManagerProxy *this, unsigned int a2)
{
  struct IAudioDuckingManager *result; // rax
  __int64 (__fastcall *v4)(struct IAudioDuckingManager *, _QWORD, _QWORD); // rbx
  unsigned int v5; // eax

  result = g_DuckingManager;
  if ( g_DuckingManager )
  {
    v4 = *(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(*(_QWORD *)g_DuckingManager + 40LL);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
    result = (struct IAudioDuckingManager *)v4(g_DuckingManager, v5, 0LL);
  }
  if ( this )
    return (struct IAudioDuckingManager *)CAudioSessionManagerProxy::`scalar deleting destructor'(this, a2);
  return result;
}
