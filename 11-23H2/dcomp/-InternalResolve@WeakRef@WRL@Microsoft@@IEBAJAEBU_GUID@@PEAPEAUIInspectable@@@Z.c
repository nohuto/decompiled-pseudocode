/*
 * XREFs of ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800185D0
 * Callers:
 *     ?get_WindowContext@UIContext@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@23@@Z @ 0x1800182F0 (-get_WindowContext@UIContext@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@23@@Z.c)
 *     ??$As@UIUIContentRoot@UI@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIContentRoot@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180018514 (--$As@UIUIContentRoot@UI@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIUIConten.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::WeakRef::InternalResolve(
        Microsoft::WRL::WeakRef *this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  __int64 v3; // rcx

  *a3 = 0LL;
  v3 = *(_QWORD *)this;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v3 + 24LL))(v3, a2);
  else
    return 0LL;
}
