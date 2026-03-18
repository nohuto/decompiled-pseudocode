/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C00871C0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00315DC (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0087334 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(
        DirectComposition::CConnection *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax

  v4 = -1073741790;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3);
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v7 = CurrentProcess;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v6, 1u);
  ExAcquirePushLockExclusiveEx((char *)this + 224, 0LL);
  *((_BYTE *)this + 232) = 1;
  v8 = *((_QWORD *)this + 32);
  if ( v8 == v7 || !v8 )
  {
    ++*((_DWORD *)this + 63);
    v4 = 0;
    *((_QWORD *)this + 32) = v7;
  }
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return v4;
}
