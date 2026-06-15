/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800466D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SetAudioHandle(
        struct _RTL_CRITICAL_SECTION *this,
        struct SystemAudioStream *a2,
        int a3,
        struct IStreamInstanceProxy *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  void *v9; // rax
  HANDLE OwningThread; // rcx
  HANDLE v11; // rbx

  *(_QWORD *)&this[1].LockCount = *((_QWORD *)a2 + 4);
  v8 = this + 16;
  EnterCriticalSection(this + 16);
  v9 = (void *)*((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 5) = 0LL;
  OwningThread = this[1].OwningThread;
  this[1].OwningThread = v9;
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  HIDWORD(this[6].OwningThread) = a3;
  v11 = this[14].OwningThread;
  this[14].OwningThread = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IStreamInstanceProxy *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v11 )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
