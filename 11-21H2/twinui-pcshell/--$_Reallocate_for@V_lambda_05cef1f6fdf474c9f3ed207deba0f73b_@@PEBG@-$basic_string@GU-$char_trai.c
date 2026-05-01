/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18010AB34
 * Callers:
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHWND__@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18008B7B0 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHWND__@@PEAW4ShellRequest.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008BA90 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  void *v12; // rax
  void *v13; // rsi

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v8 = a1[3];
  v9 = a2 | 7;
  if ( (a2 | 7) > 0x7FFFFFFFFFFFFFFELL || (v10 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
  {
    v11 = -2LL;
LABEL_16:
    v12 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    goto LABEL_10;
  }
  v4 = v10 + v8;
  if ( v9 >= v10 + v8 )
    v4 = v9;
  if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 2 * (v4 + 1);
  if ( v11 >= 0x1000 )
    goto LABEL_16;
  if ( v11 )
  {
    v12 = operator new(v11);
LABEL_10:
    v13 = v12;
    goto LABEL_11;
  }
  v13 = 0LL;
LABEL_11:
  a1[3] = v4;
  a1[2] = a2;
  memcpy_0(v13, a4, 2 * a2);
  *((_WORD *)v13 + a2) = 0;
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*a1, 2 * v8 + 2);
  *a1 = v13;
  return a1;
}
