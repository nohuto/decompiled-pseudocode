/*
 * XREFs of ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1800734B0
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180038C00 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004F614 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@PEAU1@_KAEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18004F72C (--$_Uninitialized_value_construct_n@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SP.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 */

__int64 __fastcall GestureServices::OnSystemContextNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  char *v6; // rax

  if ( a2 && *(_BYTE *)(a2 + 24) == 1 )
  {
    v2 = a1 + 56;
    if ( !*(_DWORD *)a2 )
    {
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 56);
      return 0LL;
    }
    v3 = *(_QWORD *)(a2 + 8);
    v4 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 3);
    v5 = *(unsigned int *)(v3 + 12);
    if ( v5 < v4 )
    {
      v6 = (char *)(*(_QWORD *)v2 + 200 * v5);
LABEL_10:
      *(_QWORD *)(v2 + 8) = v6;
      goto LABEL_11;
    }
    if ( v5 > v4 )
    {
      if ( v5 <= 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(v2 + 16) - *(_QWORD *)v2) >> 3) )
      {
        v6 = std::_Uninitialized_value_construct_n<std::allocator<INPUT_SPACE_REGION>>(*(char **)(v2 + 8), v5 - v4);
        goto LABEL_10;
      }
      std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(v2, v5);
    }
LABEL_11:
    memmove_0(*(void **)v2, *(const void **)(v3 + 16), 200LL * *(unsigned int *)(v3 + 12));
  }
  return 0LL;
}
