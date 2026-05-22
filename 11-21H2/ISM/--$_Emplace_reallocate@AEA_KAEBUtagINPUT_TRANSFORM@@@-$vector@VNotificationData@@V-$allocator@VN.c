/*
 * XREFs of ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180003BF0
 * Callers:
 *     NotifyInputSinkTransformChanged @ 0x180003A70 (NotifyInputSinkTransformChanged.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180080704 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 *a3,
        _OWORD *a4)
{
  unsigned __int64 v5; // r9
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  char *v15; // r14
  __int64 v16; // r8
  char *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // r13
  _QWORD *v23; // r12
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  char *v26; // [rsp+20h] [rbp-58h]
  void *v27; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v29; // [rsp+90h] [rbp+18h]

  v29 = a3;
  v28 = a2;
  v5 = a2;
  v7 = (unsigned __int128)((__int64)(a2 - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 4);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 5);
  if ( v9 == 0x2AAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v10 = v9 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 5);
  v12 = v11 >> 1;
  if ( v11 > 0x2AAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v27 = (void *)0x2AAAAAAAAAAAAAALL;
    v14 = -64LL;
LABEL_28:
    v15 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v14);
    v26 = v15;
    v16 = 0LL;
    v5 = v28;
    goto LABEL_10;
  }
  v13 = v12 + v11;
  if ( v12 + v11 < v10 )
    v13 = v10;
  if ( v13 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v14 = 96 * v13;
  v27 = (void *)v13;
  if ( 96 * v13 >= 0x1000 )
    goto LABEL_28;
  if ( v14 )
  {
    v15 = (char *)operator new(96 * v13);
    v26 = v15;
    v16 = 0LL;
    v5 = v28;
  }
  else
  {
    v16 = 0LL;
    v15 = 0LL;
    v26 = 0LL;
  }
  v27 = (void *)v13;
LABEL_10:
  v17 = &v15[96 * v8];
  v18 = *v29;
  *(_DWORD *)v17 = 2;
  *((_QWORD *)v17 + 1) = v18;
  *((_QWORD *)v17 + 2) = 0LL;
  *((_OWORD *)v17 + 2) = *a4;
  *((_OWORD *)v17 + 3) = a4[1];
  *((_OWORD *)v17 + 4) = a4[2];
  *((_OWORD *)v17 + 5) = a4[3];
  v19 = (_QWORD *)a1[1];
  v20 = (_QWORD *)*a1;
  if ( (_QWORD *)v5 == v19 )
  {
    if ( v20 != v19 )
    {
      v5 = (unsigned __int64)(v15 + 16);
      do
      {
        *(_DWORD *)(v5 - 16) = *(_DWORD *)v20;
        *(_QWORD *)(v5 - 8) = v20[1];
        *(_QWORD *)v5 = v20[2];
        v20[2] = 0LL;
        *(_QWORD *)(v5 + 8) = v20[3];
        *(_OWORD *)(v5 + 16) = *((_OWORD *)v20 + 2);
        *(_OWORD *)(v5 + 32) = *((_OWORD *)v20 + 3);
        *(_OWORD *)(v5 + 48) = *((_OWORD *)v20 + 4);
        *(_OWORD *)(v5 + 64) = *((_OWORD *)v20 + 5);
        v5 += 96LL;
        v20 += 12;
      }
      while ( v20 != v19 );
    }
  }
  else
  {
    std::_Uninitialized_move<NotificationData *>(v20, v5, v15);
    std::_Uninitialized_move<NotificationData *>(v28, a1[1], v17 + 96);
  }
  v21 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v23 = (_QWORD *)a1[1];
    if ( v21 != v23 )
    {
      do
      {
        v24 = v21[2];
        if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          NtCloseCompositionInputSink(v24, v19, v16, v5, v26);
        v21 += 12;
      }
      while ( v21 != v23 );
      v21 = (_QWORD *)*a1;
    }
    v25 = 32 * ((__int64)(a1[2] - (_QWORD)v21) >> 5);
    v28 = v25;
    v27 = v21;
    if ( v25 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v27, &v28);
      v25 = v28;
      v21 = v27;
    }
    operator delete(v21, v25);
  }
  *a1 = v15;
  a1[1] = &v15[96 * v10];
  a1[2] = &v15[v14];
  return v17;
}
