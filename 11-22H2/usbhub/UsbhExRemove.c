/*
 * XREFs of UsbhExRemove @ 0x1C004A8B0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

void __fastcall UsbhExRemove(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // eax
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = FdoExt(a1);
  Log(a1, 128, 1702381138, 0LL, 0LL);
  v3 = v2[640];
  if ( (v3 & 0x2000) != 0 )
  {
    v2[640] = v3 & 0xFFFFDFFF;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2 + 609, &LockHandle);
    v4 = (_QWORD **)(v2 + 1214);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v4 = v6;
      v6[1] = v4;
      if ( v5 != (_QWORD *)48 )
        ExFreePoolWithTag(v5 - 6, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
