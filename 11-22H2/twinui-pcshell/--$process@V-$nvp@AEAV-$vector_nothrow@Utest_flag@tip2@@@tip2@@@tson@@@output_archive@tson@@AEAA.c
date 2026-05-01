/*
 * XREFs of ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180463C54
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18028725C (--$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archi.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046D8AC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
        tson *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  struct tson::output_archive *v8; // rdi
  __int64 v9; // rsi
  struct tip2::test_flag *v10; // r8

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v5 = *((_QWORD *)this + 16);
  v6 = *(_QWORD *)(v4 + 16);
  if ( v5 )
  {
    v7 = 4 * v5;
  }
  else
  {
    *((_BYTE *)this + 24) = 1;
    v7 = 4LL;
  }
  *(_DWORD *)((char *)this + v7 + 24) = 2;
  if ( v6 > 0xFFFF && *((int *)this + 34) >= 0 )
    *((_DWORD *)this + 34) = -2147483637;
  *((_WORD *)this + 5) = v6;
  v8 = *(struct tson::output_archive **)v4;
  v9 = *(_QWORD *)v4 + 104LL * *(_QWORD *)(v4 + 16);
  while ( v8 != (struct tson::output_archive *)v9 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v8, v10);
    tson::output_archive::finishNode(this);
    v8 = (struct tson::output_archive *)((char *)v8 + 104);
  }
  tson::output_archive::finishNode(this);
}
