/*
 * XREFs of ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18009D0A0
 * Callers:
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18009C7DC (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 * Callees:
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x18009C388 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x18009E47C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18009F074 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x18009F7E4 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // r9
  __int64 v6; // rbx
  struct tson::output_archive *v7; // rsi
  __int64 v8; // rbx
  struct wil::StoredFailureInfo *v9; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v3;
  v6 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v10 = *(_QWORD *)(v6 + 16);
  tson::output_archive::operator()<tson::size_tag>((__int64)this, &v10);
  v7 = *(struct tson::output_archive **)v6;
  v8 = *(_QWORD *)v6 + 168LL * *(_QWORD *)(v6 + 16);
  while ( v7 != (struct tson::output_archive *)v8 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v7, v9);
    tson::output_archive::finishNode(this);
    v7 = (struct tson::output_archive *)((char *)v7 + 168);
  }
  tson::output_archive::finishNode(this);
  tson::output_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(this, a3);
}
