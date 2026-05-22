/*
 * XREFs of ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180009B50
 * Callers:
 *     ??$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA?A_TAEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180009AE4 (--$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VNotifica.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800979BC (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180097C00 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
        void **a1,
        char *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  char *v11; // rdx
  unsigned __int64 v12; // rbx
  size_t v13; // rcx
  char *v14; // r14
  __int64 v15; // r9
  char *v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // r8
  _QWORD *v19; // rcx
  void *v20; // rdi
  _QWORD *v21; // rbx
  _QWORD *i; // rdi
  __int64 v23; // rcx
  void *v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v27; // r9
  char *v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+80h] [rbp+8h] BYREF
  void *v32; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v33; // [rsp+90h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v6 = (unsigned __int128)((a2 - (_BYTE *)*a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 4);
  v8 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5);
  if ( v8 == 0x2AAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5);
  v11 = (char *)(v10 >> 1);
  if ( v10 > 0x2AAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v31 = 0x2AAAAAAAAAAAAAALL;
    v30 = -64LL;
LABEL_26:
    v14 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
    v28 = v14;
    v15 = 0LL;
    a3 = v33;
    goto LABEL_10;
  }
  v12 = v8 + 1;
  if ( (unsigned __int64)&v11[v10] >= v9 )
    v12 = (unsigned __int64)&v11[v10];
  if ( v12 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v13 = 96 * v12;
  v30 = 96 * v12;
  v31 = v12;
  if ( 96 * v12 >= 0x1000 )
    goto LABEL_26;
  if ( v13 )
  {
    v14 = (char *)operator new(v13);
    v28 = v14;
    v15 = 0LL;
    a3 = v33;
  }
  else
  {
    v15 = 0LL;
    v14 = 0LL;
    v28 = 0LL;
  }
  v31 = v12;
LABEL_10:
  v16 = &v14[96 * v7];
  v17 = *a3;
  *(_DWORD *)v16 = 2;
  *((_QWORD *)v16 + 1) = v17;
  *((_QWORD *)v16 + 2) = 0LL;
  *((_OWORD *)v16 + 2) = *a4;
  *((_OWORD *)v16 + 3) = a4[1];
  *((_OWORD *)v16 + 4) = a4[2];
  *((_OWORD *)v16 + 5) = a4[3];
  v18 = a1[1];
  v19 = *a1;
  v20 = v32;
  if ( v32 == v18 )
  {
    if ( v19 != v18 )
    {
      v11 = v14 + 16;
      do
      {
        *((_DWORD *)v11 - 4) = *(_DWORD *)v19;
        *((_QWORD *)v11 - 1) = v19[1];
        *(_QWORD *)v11 = v19[2];
        v19[2] = 0LL;
        *((_QWORD *)v11 + 1) = v19[3];
        *((_OWORD *)v11 + 1) = *((_OWORD *)v19 + 2);
        *((_OWORD *)v11 + 2) = *((_OWORD *)v19 + 3);
        *((_OWORD *)v11 + 3) = *((_OWORD *)v19 + 4);
        *((_OWORD *)v11 + 4) = *((_OWORD *)v19 + 5);
        v11 += 96;
        v19 += 12;
      }
      while ( v19 != v18 );
    }
  }
  else
  {
    std::_Uninitialized_move<NotificationData *>(v19, v32, v14, 0LL, v28);
    std::_Uninitialized_move<NotificationData *>(v20, a1[1], v16 + 96, v27, v29);
  }
  v21 = *a1;
  if ( *a1 )
  {
    for ( i = a1[1]; v21 != i; v21 += 12 )
    {
      v23 = v21[2];
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v23, v11, v18, v15);
    }
    v24 = *a1;
    v25 = 32 * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5);
    v31 = v25;
    v32 = v24;
    if ( v25 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v32, &v31);
      v24 = v32;
      v25 = v31;
    }
    operator delete(v24, v25);
  }
  *a1 = v14;
  a1[1] = &v14[96 * v9];
  a1[2] = &v14[v30];
  return v16;
}
