/*
 * XREFs of ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800696D4
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180069760 (--$process@V-$nvp@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@tson@@V-$nvp@AEAV-$vector.c)
 *     ??$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180069C10 (--$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archi.c)
 * Callees:
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x180068624 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x18006BB90 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18006C660 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x18006D118 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  struct tson::output_archive *v5; // rsi
  __int64 v6; // rbx
  struct tip2::test_flag *v7; // r8
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v8 = *(_QWORD *)(v4 + 16);
  tson::output_archive::operator()<tson::size_tag>((__int64)this, &v8);
  v5 = *(struct tson::output_archive **)v4;
  v6 = *(_QWORD *)v4 + 104LL * *(_QWORD *)(v4 + 16);
  while ( v5 != (struct tson::output_archive *)v6 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v5, v7);
    tson::output_archive::finishNode(this);
    v5 = (struct tson::output_archive *)((char *)v5 + 104);
  }
  tson::output_archive::finishNode(this);
}
