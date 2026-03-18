/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C00C2DA4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C005870C (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(
        struct _ERESOURCE **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // esi
  __int64 CurrentProcess; // rax
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rbp
  struct _ERESOURCE *v9; // rax

  v5 = -1073741790;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v7 = this[31];
  v8 = CurrentProcess;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v7, 1u);
  v9 = this[30];
  if ( v9 == (struct _ERESOURCE *)v8 || !v9 )
  {
    ++*((_DWORD *)this + 58);
    v5 = 0;
    this[30] = (struct _ERESOURCE *)v8;
  }
  ExReleaseResourceLite(this[31]);
  KeLeaveCriticalRegion();
  return v5;
}
