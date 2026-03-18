/*
 * XREFs of ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x18002DE00
 * Callers:
 *     ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z @ 0x18002C440 (-DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z.c)
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x18002DAD0 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x1801CEAF0 (-CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180026704 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@U.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAPEAUHandleTableEntry@CChannel@@PEAU12@_KAEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1800267F8 (--$_Uninitialized_value_construct_n@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAPEAUH.c)
 *     ?IsValidHandle@CChannel@@AEAA_NI@Z @ 0x18002DEC0 (-IsValidHandle@CChannel@@AEAA_NI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CChannel::CreateNewHandleTableEntry(__int64 *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  _QWORD *v8; // rax
  const char *v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2;
  LOBYTE(v8) = CChannel::IsValidHandle((CChannel *)a1, a2);
  if ( (_BYTE)v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD50,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v9);
  v10 = (a1[3] - a1[2]) >> 4;
  if ( v5 > v10 )
  {
    if ( (unsigned int)v5 > (unsigned __int64)((a1[4] - a1[2]) >> 4) )
    {
      LOBYTE(v8) = std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(
                     a1 + 2,
                     (unsigned int)v5);
    }
    else
    {
      v8 = std::_Uninitialized_value_construct_n<std::allocator<CChannel::HandleTableEntry>>(
             (_QWORD *)a1[3],
             (unsigned int)v5 - v10);
      a1[3] = (__int64)v8;
    }
  }
  v11 = a1[2] + 16LL * (unsigned int)(v5 - 1);
  *(_DWORD *)v11 = 1;
  *(_DWORD *)(v11 + 4) = a3;
  v12 = *(_QWORD *)(v11 + 8);
  *(_QWORD *)(v11 + 8) = a4;
  if ( v12 )
    LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  ++a1[5];
  return (char)v8;
}
