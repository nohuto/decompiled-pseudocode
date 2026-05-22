/*
 * XREFs of ??$As@UIInspectable@@@?$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180110EC8
 * Callers:
 *     ?GetAutomationHostProvider@CompositionIsland@Composition@UI@Windows@@AEAAJPEAPEAUIInspectable@@@Z @ 0x1800B6042 (-GetAutomationHostProvider@CompositionIsland@Composition@UI@Windows@@AEAAJPEAPEAUIInspectable@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<IInspectable>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rsi

  v2 = *a1;
  v4 = *a2;
  v5 = **v2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v5(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
}
