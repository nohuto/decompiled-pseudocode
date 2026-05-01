/*
 * XREFs of ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x18070E384
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@?$factory_cache_entry@UBuffer@Streams@Storage@Windows@winrt@@UIBufferFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@Z @ 0x18070B460 (--$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@-$factory_cache_entry@UBuffer@Streams@St.c)
 *     ?Create@?$consume_Windows_Storage_Streams_IBufferFactory@UIBufferFactory@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18070FB8C (-Create@-$consume_Windows_Storage_Streams_IBufferFactory@UIBufferFactory@Streams@Storage@Windows.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Storage::Streams::Buffer *__fastcall winrt::Windows::Storage::Streams::Buffer::Buffer(
        winrt::Windows::Storage::Streams::Buffer *this,
        unsigned int a2)
{
  unsigned int *v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+18h]

  v5 = a2;
  v4 = &v5;
  v6 = &qword_180990B78;
  _InterlockedIncrement64(&qword_180990B78);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory> )
  {
    winrt::impl::consume_Windows_Storage_Streams_IBufferFactory<winrt::Windows::Storage::Streams::IBufferFactory>::Create(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>,
      this,
      v5);
    _InterlockedDecrement64(&qword_180990B78);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990B78);
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>::call<_lambda_e7631c1690498db2dc470481c9b63fc5_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      &v4);
  }
  return this;
}
