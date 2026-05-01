/*
 * XREFs of ??$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIActivityIndexer@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180498AB8
 * Callers:
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F8CC (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$query@UIActivityIndexer@Activities@Data@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActivityIndexer@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F26F8 (--$query@UIActivityIndexer@Activities@Data@Internal@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_ex.c)
 */

_QWORD *__fastcall wil::ActivateInstance<Windows::Internal::Data::Activities::IActivityIndexer>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  __int64 (__fastcall ***v7[2])(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = L"Windows.Internal.Data.Activities.ActivityIndexer";
  v7[0] = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, &v8, a3);
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x69F,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5,
      (int)v7[0]);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Data::Activities::IActivityIndexer>(
    v7,
    a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v7);
  return a1;
}
