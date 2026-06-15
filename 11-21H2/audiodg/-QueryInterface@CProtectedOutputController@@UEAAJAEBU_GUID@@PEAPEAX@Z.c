/*
 * XREFs of ?QueryInterface@CProtectedOutputController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005AD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProtectedOutputController::QueryInterface(
        CProtectedOutputController *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147467262;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data4;
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
LABEL_9:
    *a3 = this;
    v4 = 0;
    (*(void (__fastcall **)(CProtectedOutputController *))(*(_QWORD *)this + 8LL))(this);
  }
  return v4;
}
