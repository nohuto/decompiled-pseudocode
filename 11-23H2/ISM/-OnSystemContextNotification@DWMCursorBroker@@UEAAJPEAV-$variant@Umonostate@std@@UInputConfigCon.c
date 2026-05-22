/*
 * XREFs of ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180051150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x1800490D0 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004ED74 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@PEAU1@_KAEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18004EE8C (--$_Uninitialized_value_construct_n@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SP.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::OnSystemContextNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 ***v8; // rdi
  __int64 **i; // rbx
  char *v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_14;
  }
  if ( !a2 || *(_BYTE *)(a2 + 24) != 1 )
    goto LABEL_12;
  v2 = a1 + 464;
  if ( *(_DWORD *)a2 )
  {
    a2 = *(_QWORD *)(a2 + 8);
    v6 = *(unsigned int *)(a2 + 12);
    v7 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 472) - *(_QWORD *)(a1 + 464)) >> 3);
    if ( v6 >= v7 )
    {
      if ( v6 <= v7 )
      {
LABEL_9:
        memmove_0(*(void **)v2, *(const void **)(a2 + 16), 200LL * *(unsigned int *)(a2 + 12));
        goto LABEL_10;
      }
      if ( v6 > 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 480) - *(_QWORD *)(a1 + 464)) >> 3) )
      {
        std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(a1 + 464, v6);
        goto LABEL_9;
      }
      v11 = std::_Uninitialized_value_construct_n<std::allocator<INPUT_SPACE_REGION>>(*(char **)(a1 + 472), v6 - v7);
LABEL_16:
      *(_QWORD *)(v2 + 8) = v11;
      goto LABEL_9;
    }
LABEL_14:
    v11 = (char *)(*(_QWORD *)v2 + 200 * v6);
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 472) = *(_QWORD *)(a1 + 464);
LABEL_10:
  v8 = *(__int64 ****)(a1 + 40);
  for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
  {
    v12 = DWMCursor::CheckAndUpdateRasterizationScale((POINT *)i[3], 1);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v12);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)v13,
        v14);
    }
  }
LABEL_12:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
