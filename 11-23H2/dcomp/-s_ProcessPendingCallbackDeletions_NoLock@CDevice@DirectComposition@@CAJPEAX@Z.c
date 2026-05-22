/*
 * XREFs of ?s_ProcessPendingCallbackDeletions_NoLock@CDevice@DirectComposition@@CAJPEAX@Z @ 0x1800F6F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::s_ProcessPendingCallbackDeletions_NoLock(char *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  _QWORD *v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = a1 + 96;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(a1 + 96));
  v2 = *((_QWORD *)a1 + 83);
  v3 = *((_QWORD *)a1 + 84);
  v4 = *(_QWORD *)(v2 + 32);
  v5 = *(_DWORD *)(v2 + 64);
  if ( v3 )
  {
    do
    {
      v6 = *(_QWORD *)(v3 + 16);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v4 + 48LL))(
        v4,
        v5,
        *(unsigned int *)(v3 + 8),
        0LL,
        &v9);
      operator delete(*((void **)a1 + 84));
      *((_QWORD *)a1 + 84) = v6;
      v3 = v6;
    }
    while ( v6 );
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 16LL))(a1);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v8);
  return 0LL;
}
