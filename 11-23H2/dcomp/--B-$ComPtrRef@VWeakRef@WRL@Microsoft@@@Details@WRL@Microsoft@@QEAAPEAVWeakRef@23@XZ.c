/*
 * XREFs of ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180018C44
 * Callers:
 *     ?SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z @ 0x180018930 (-SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUICoreWindow@Core@45@@Z @ 0x180018AA8 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microso.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 v3; // rcx

  v1 = *a1;
  v3 = **a1;
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return *a1;
}
