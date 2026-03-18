/*
 * XREFs of ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1C003F694
 * Callers:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___ @ 0x1C0026478 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___ @ 0x1C0026628 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK(DXGAUTOSPINLOCK *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 40) )
  {
    v1 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 40) = 0;
    *(_QWORD *)(v1 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((char *)this + 16));
  }
}
