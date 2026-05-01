/*
 * XREFs of ??$as@UIBufferByteAccess@Streams@Storage@Windows@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18070B358
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$as@UIBufferByteAccess@Streams@Storage@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIBufferByteAccess@Streams@Storage@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18070B37C (--$as@UIBufferByteAccess@Streams@Storage@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<Windows::Storage::Streams::IBufferByteAccess>(
        _QWORD *a1,
        __int64 a2)
{
  winrt::impl::as<Windows::Storage::Streams::IBufferByteAccess,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a2,
    *a1);
  return a2;
}
