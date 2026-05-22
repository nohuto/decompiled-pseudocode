/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801A1EBC
 * Callers:
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA?A_TAEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801A2A5C (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003DD20 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801A2374 (--$_Uninitialized_move@PEAUInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@YAPEA.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA?A_TAEAUINPUT_SPACE_REGION@@@Z @ 0x1801A2B18 (--$emplace_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE.c)
 *     ?_Change_array@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQEAUInputSpacePayload@@_K1@Z @ 0x1801A4014 (-_Change_array@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQE.c)
 *     ?_Reallocate_exactly@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_K@Z @ 0x1801A40A8 (-_Reallocate_exactly@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<InputSpacePayload>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t size_of; // rax
  char *v11; // rax
  char *v12; // rsi
  char *v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  _QWORD *v20; // [rsp+20h] [rbp-58h]
  char *v21; // [rsp+28h] [rbp-50h]
  void *v22; // [rsp+28h] [rbp-50h]
  char *v23; // [rsp+80h] [rbp+8h]

  v4 = (a2 - *a1) / 40;
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v6 = 0x666666666666666LL;
  if ( v5 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v7 = v5 + 1;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x666666666666666LL - (v8 >> 1) )
  {
    v6 = v9 + v8;
    if ( v9 + v8 < v7 )
      v6 = v7;
  }
  size_of = std::_Get_size_of_n<40>(v6);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v21 = v11;
  v13 = &v11[40 * v4];
  try
  {
    v14 = a3;
    *(_QWORD *)v13 = *(_QWORD *)a3;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a3 + 8);
    v15 = 0;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_QWORD *)v13 + 4) = 0LL;
    if ( !*(_DWORD *)(a3 + 12) )
      goto LABEL_10;
    std::vector<INPUT_SPACE_REGION>::_Reallocate_exactly(v13 + 16);
    while ( 1 )
    {
      v14 = a3;
LABEL_10:
      if ( v15 >= *(_DWORD *)(v14 + 12) )
        break;
      std::vector<INPUT_SPACE_REGION>::emplace_back<INPUT_SPACE_REGION &>(
        v13 + 16,
        *(_QWORD *)(v14 + 16) + 200LL * v15++);
    }
    v23 = v13;
    v16 = a1[1];
    v17 = v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<InputSpacePayload *>(v18, a2, v12);
      v23 = v12;
      v17 = v13 + 40;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<InputSpacePayload *>(v18, v16, v17);
    std::vector<InputSpacePayload>::_Change_array(a1, v12, v7, v6, v13 + 40, v21, v13);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<InputSpacePayload>>(v23, v20);
    std::_Deallocate<16,0>(v22, 40 * v6);
    throw;
  }
  return result;
}
