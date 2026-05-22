/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180044780
 * Callers:
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180046DE0 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x180044870 (-_Calculate_growth@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@A.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x180080E88 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  __int64 v7; // r15
  char *v8; // rdi
  char *result; // rax

  if ( a2 > 0x147AE147AE147AELL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v4 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v5 = std::vector<INPUT_SPACE_REGION>::_Calculate_growth();
  if ( v5 > v6 )
    std::_Throw_bad_array_new_length();
  v7 = 200 * v5;
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(200 * v5);
  if ( a2 != v4 )
    memset_0(&v8[200 * v4], 0, 200 * (a2 - v4));
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = &v8[200 * a2];
  result = &v8[v7];
  *(_QWORD *)(a1 + 16) = &v8[v7];
  return result;
}
