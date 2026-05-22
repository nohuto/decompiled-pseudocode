/*
 * XREFs of ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x180013704
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x1800747CC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800A9FB8 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18017C23C (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 *     ??$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18017C70C (--$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegi.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::vector<ShellGesturesProcessor::GestureRegistration>::_Emplace_reallocate<ShellGesturesProcessor::GestureRegistration const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  char *v13; // rbx
  char *v14; // rsi
  void (__fastcall ***v15)(_QWORD); // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // r9
  char *v19; // rdx
  char *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]
  char *v23; // [rsp+78h] [rbp+10h]
  __int64 v24; // [rsp+88h] [rbp+20h]

  v6 = (__int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 > 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v22 = 0x7FFFFFFFFFFFFFFLL;
    v24 = -32LL;
LABEL_19:
    v13 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
    v23 = v13;
    goto LABEL_10;
  }
  v11 = v8;
  if ( v10 + v9 >= v8 )
    v11 = v10 + v9;
  if ( v11 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v12 = 32 * v11;
  v24 = 32 * v11;
  v22 = v11;
  if ( 32 * v11 >= 0x1000 )
    goto LABEL_19;
  if ( v12 )
  {
    v13 = (char *)operator new(v12);
    v23 = v13;
  }
  else
  {
    v13 = 0LL;
    v23 = 0LL;
  }
  v22 = v11;
LABEL_10:
  v14 = &v13[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  *(_QWORD *)v14 = *(_QWORD *)a3;
  *((_DWORD *)v14 + 2) = *(_DWORD *)(a3 + 8);
  v15 = *(void (__fastcall ****)(_QWORD))(a3 + 16);
  *((_QWORD *)v14 + 2) = v15;
  if ( v15 )
  {
    try
    {
      (**v15)(v15);
    }
    catch ( ... )
    {
      std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(v21);
      std::_Deallocate<16,0>(v23, 32 * v22);
      throw;
    }
  }
  v14[24] = *(_BYTE *)(a3 + 24);
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    if ( v17 != v16 )
    {
      v19 = (char *)(v17 + 2);
      v20 = v13 + 16;
      do
      {
        *((_QWORD *)v20 - 2) = *v17;
        *((_DWORD *)v20 - 2) = *((_DWORD *)v19 - 2);
        *(_QWORD *)v20 = 0LL;
        if ( v20 != v19 )
        {
          *(_QWORD *)v20 = *(_QWORD *)v19;
          *(_QWORD *)v19 = 0LL;
        }
        v20[8] = v19[8];
        v20 += 32;
        v17 += 4;
        v19 += 32;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(*a1, a2, v13);
    std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(a2, a1[1], v14 + 32);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(*a1);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *a1 = v13;
  a1[1] = &v13[32 * v8];
  a1[2] = &v13[v24];
  return &v13[v6 & 0xFFFFFFFFFFFFFFE0uLL];
}
