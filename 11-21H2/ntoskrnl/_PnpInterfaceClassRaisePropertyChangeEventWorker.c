/*
 * XREFs of _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x140A278FC
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407720B8 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpInterfaceClassRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 result; // rax
  __int64 v9; // rcx

  a6(a1, a2, 4LL);
  result = off_140C093B0->pid;
  if ( *(_DWORD *)(a5 + 16) == (_DWORD)result )
  {
    v9 = *(_QWORD *)a5 - *(_QWORD *)&off_140C093B0->fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&off_140C093B0->fmtid.Data1 )
      v9 = *(_QWORD *)(a5 + 8) - *(_QWORD *)off_140C093B0->fmtid.Data4;
    if ( !v9 )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64))a6)(a1, a2, 4LL);
  }
  return result;
}
