/*
 * XREFs of ??$As@UIMarshal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801543DC
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800B76AC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IMarshal>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v5; // rcx

  v3 = *a1;
  v4 = ***a1;
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4(v3, &GUID_00000003_0000_0000_c000_000000000046, a2);
}
