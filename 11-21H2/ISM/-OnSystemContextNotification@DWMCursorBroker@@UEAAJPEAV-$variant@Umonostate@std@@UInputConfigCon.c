/*
 * XREFs of ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180046DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x18002DA20 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180044780 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::OnSystemContextNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  int v6; // eax
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 ***v10; // rdi
  __int64 **i; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    goto LABEL_14;
  }
  if ( !a2 || *(_BYTE *)(a2 + 24) != 1 )
    goto LABEL_12;
  v2 = a1 + 464;
  if ( *(_DWORD *)a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v7 = *(unsigned int *)(v3 + 12);
    v8 = *(_QWORD *)(a1 + 472);
    v9 = 0x8F5C28F5C28F5C29uLL * ((v8 - *(_QWORD *)(a1 + 464)) >> 3);
    if ( v7 >= v9 )
    {
      if ( v7 > v9 )
      {
        if ( v7 <= 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 480) - *(_QWORD *)(a1 + 464)) >> 3) )
        {
          v13 = v7 - v9;
          if ( v13 )
          {
            v14 = 200 * v13;
            memset_0(*(void **)(a1 + 472), 0, 200 * v13);
            v8 += v14;
          }
          *(_QWORD *)(a1 + 472) = v8;
        }
        else
        {
          std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(a1 + 464, (unsigned int)v7);
        }
      }
      goto LABEL_9;
    }
LABEL_14:
    *(_QWORD *)(v2 + 8) = *(_QWORD *)v2 + 200 * v7;
LABEL_9:
    memmove_0(*(void **)v2, *(const void **)(v3 + 16), 200LL * *(unsigned int *)(v3 + 12));
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 472) = *(_QWORD *)(a1 + 464);
LABEL_10:
  v10 = *(__int64 ****)(a1 + 40);
  for ( i = *v10; i != (__int64 **)v10; i = (__int64 **)*i )
  {
    v15 = DWMCursor::CheckAndUpdateRasterizationScale((POINT *)i[3], 1);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v15);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)v16,
        v17);
    }
  }
LABEL_12:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
