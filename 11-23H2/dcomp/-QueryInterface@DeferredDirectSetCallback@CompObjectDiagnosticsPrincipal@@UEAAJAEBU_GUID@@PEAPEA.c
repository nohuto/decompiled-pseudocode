/*
 * XREFs of ?QueryInterface@DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019E0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::QueryInterface(
        CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
      *a3 = this;
      (*(void (__fastcall **)(CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
