/*
 * XREFs of ?QueryInterface@CVirtualProtectedOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005E350
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualProtectedOutput::QueryInterface(
        CVirtualProtectedOutput *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r8
  __int64 v6; // r9
  const struct _GUID *v7; // r10

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147467262;
  if ( IsEqualGUID(a2, &GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76)
    || IsEqualGUID(v7, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    v4 = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return v4;
}
