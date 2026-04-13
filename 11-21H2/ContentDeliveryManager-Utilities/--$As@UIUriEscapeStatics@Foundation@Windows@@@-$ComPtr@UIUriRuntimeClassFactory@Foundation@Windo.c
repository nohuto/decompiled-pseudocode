/*
 * XREFs of ??$As@UIUriEscapeStatics@Foundation@Windows@@@?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUriEscapeStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006CB28
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800838B4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>::As<Windows::Foundation::IUriEscapeStatics>(
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
  return v4(v3, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, a2);
}
