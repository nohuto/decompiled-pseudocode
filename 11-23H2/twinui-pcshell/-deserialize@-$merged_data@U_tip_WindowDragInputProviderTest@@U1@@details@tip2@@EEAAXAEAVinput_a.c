/*
 * XREFs of ?deserialize@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18022BD70
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1804636B8 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v10 = 14;
  v9 = "payloadMessage";
  v7 = 13;
  v4 = a1 + 268;
  if ( !a1 )
    v4 = 20LL;
  v11 = v4;
  v6 = "windowMessage";
  v5 = a1 + 264;
  if ( !a1 )
    v5 = 16LL;
  v8 = v5;
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, &v6);
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, &v9);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
