/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004ED74
 * Callers:
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180051150 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180060C50 (-OnSystemContextNotification@GestureServices@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x18004EE44 (-_Calculate_growth@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@A.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@PEAU1@_KAEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18004EE8C (--$_Uninitialized_value_construct_n@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SP.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18005D7EC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r10
  char *v8; // r14

  if ( a2 > 0x147AE147AE147AELL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v4 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v5 = std::vector<INPUT_SPACE_REGION>::_Calculate_growth();
  v6 = v5;
  if ( v5 > v7 )
    std::_Throw_bad_array_new_length();
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(200 * v5);
  std::_Uninitialized_value_construct_n<std::allocator<INPUT_SPACE_REGION>>(&v8[200 * v4], a2 - v4);
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<INPUT_SPACE_REGION>::_Change_array(a1, v8, a2, v6);
}
