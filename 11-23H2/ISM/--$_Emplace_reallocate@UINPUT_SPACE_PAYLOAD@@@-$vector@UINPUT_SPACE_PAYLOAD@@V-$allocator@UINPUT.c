/*
 * XREFs of ??$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@$$QEAU2@@Z @ 0x18003CB40
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18003143C (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1801161B4 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x18003CAF8 (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18003E074 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXQEAUINPUT_SPACE_PAYLOAD@@_K1@Z @ 0x180054760 (-_Change_array@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEA.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18005D7EC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 */

char *__fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  size_t size_of; // rax
  char *v11; // rbx
  char *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  void *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<24>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[24 * v6];
  *(_OWORD *)v12 = *(_OWORD *)a3;
  *((_QWORD *)v12 + 2) = *(_QWORD *)(a3 + 16);
  v13 = a1[1];
  v14 = *a1;
  v15 = v11;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove_0(v11, v14, a2 - (_BYTE *)*a1);
    v15 = v12 + 24;
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove_0(v15, v14, v16);
  std::vector<INPUT_SPACE_PAYLOAD>::_Change_array(a1, v11, v8, v9);
  return v12;
}
