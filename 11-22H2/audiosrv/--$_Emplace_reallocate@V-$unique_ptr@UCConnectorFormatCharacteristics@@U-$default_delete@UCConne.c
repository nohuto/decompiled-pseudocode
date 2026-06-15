/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180031730
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800347A0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800D0814 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800D32C8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x1801688E0 (--$_Uninitialized_move@PEAV-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCCo.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CConnectorFormatCharacteristics>>::_Emplace_reallocate<std::unique_ptr<CConnectorFormatCharacteristics>>(
        void ****a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // r12
  __int64 v14; // rax
  void ***v15; // r8
  void ***v16; // rcx
  void ***v17; // rdx
  void **v18; // rax
  void ***v19; // rsi
  void ***v20; // r15
  void **v21; // r14
  void *v22; // rcx
  unsigned __int64 v23; // rdx
  void *v25; // rcx
  __int64 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  void *v28; // [rsp+88h] [rbp+10h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h]

  v6 = (void ***)a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v26 = v7 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v27 = 0x1FFFFFFFFFFFFFFFLL;
    v11 = -8LL;
    v29 = -8LL;
LABEL_26:
    v11 = std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    v28 = (void *)v11;
    goto LABEL_10;
  }
  v10 = v7 + 1;
  if ( v9 + v8 >= v7 + 1 )
    v10 = v9 + v8;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 8 * v10;
  v29 = 8 * v10;
  v27 = v10;
  if ( 8 * v10 >= 0x1000 )
    goto LABEL_26;
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    v11 = (__int64)HeapAlloc(ProcessHeap, 0, 8 * v10);
    v28 = (void *)v11;
  }
  else
  {
    v28 = 0LL;
  }
  v27 = v10;
LABEL_10:
  v13 = (_QWORD *)(v11 + 8 * v6);
  v14 = *a3;
  *a3 = 0LL;
  *v13 = v14;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = (void ***)v11;
    while ( v16 != v15 )
    {
      v18 = *v16;
      *v16 = 0LL;
      *v17++ = v18;
      ++v16;
    }
  }
  else
  {
    std::_Uninitialized_move<std::unique_ptr<CConnectorFormatCharacteristics> *,std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
      v16,
      a2,
      v11);
    std::_Uninitialized_move<std::unique_ptr<CConnectorFormatCharacteristics> *,std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
      a2,
      a1[1],
      v13 + 1);
  }
  v19 = *a1;
  if ( *a1 )
  {
    v20 = a1[1];
    while ( v19 != v20 )
    {
      v21 = *v19;
      if ( *v19 )
      {
        v25 = *v21;
        *v21 = 0LL;
        if ( v25 )
          CoTaskMemFree(v25);
        operator delete(v21, 0x20uLL);
      }
      ++v19;
    }
    v22 = *a1;
    v23 = ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL;
    v27 = v23;
    v28 = v22;
    if ( v23 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v28, &v27);
      v23 = v27;
      v22 = v28;
    }
    operator delete(v22, v23);
  }
  *a1 = (void ***)v11;
  a1[1] = (void ***)(v11 + 8 * v26);
  a1[2] = (void ***)(v11 + v29);
  return v13;
}
