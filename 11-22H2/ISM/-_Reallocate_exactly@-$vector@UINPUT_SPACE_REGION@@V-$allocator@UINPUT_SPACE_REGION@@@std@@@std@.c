/*
 * XREFs of ?_Reallocate_exactly@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_K@Z @ 0x1801B2088
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801AFE9C (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA?A_TAEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801B0A3C (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v12; // [rsp+40h] [rbp+8h]

  v4 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( a2 > 0x147AE147AE147AELL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(200 * a2);
  v6 = (__int64)v5;
  v12 = v5;
  try
  {
    memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v7 = a2;
    v8 = v4;
    v9 = v6;
    v10 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, 200 * a2);
    throw;
  }
  return std::vector<INPUT_SPACE_REGION>::_Change_array(v10, v9, v8, v7);
}
