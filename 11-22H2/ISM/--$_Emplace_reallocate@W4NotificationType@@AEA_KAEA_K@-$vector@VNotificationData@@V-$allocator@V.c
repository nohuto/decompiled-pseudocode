/*
 * XREFs of ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18000A2D0
 * Callers:
 *     NotifyInputSinkParented @ 0x180009A90 (NotifyInputSinkParented.c)
 *     ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA?A_T$$QEAW4NotificationType@@AEA_K1@Z @ 0x1800AA290 (--$emplace_back@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@VNotific.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800A9FB8 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800AA1FC (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
        void **a1,
        _BYTE *a2,
        _DWORD *a3,
        __int64 *a4,
        char **a5)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  size_t v14; // rcx
  char *v15; // r14
  __int64 v16; // r9
  char *v17; // r15
  char *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  _QWORD *i; // rdi
  __int64 v24; // rcx
  void *v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v28; // r9
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+20h] [rbp-58h]
  void *v31; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v33; // [rsp+90h] [rbp+18h]
  __int64 *v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v7 = (unsigned __int128)((a2 - (_BYTE *)*a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 4);
  v9 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5);
  if ( v9 == 0x2AAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v10 = v9 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5);
  v12 = v11 >> 1;
  if ( v11 > 0x2AAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v31 = (void *)0x2AAAAAAAAAAAAAALL;
    v29 = -64LL;
LABEL_26:
    v15 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
    v32 = (unsigned __int64)v15;
    v16 = 0LL;
    a3 = v33;
    goto LABEL_10;
  }
  v13 = v9 + 1;
  if ( v12 + v11 >= v10 )
    v13 = v12 + v11;
  if ( v13 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v14 = 96 * v13;
  v29 = 96 * v13;
  v31 = (void *)v13;
  if ( 96 * v13 >= 0x1000 )
    goto LABEL_26;
  if ( v14 )
  {
    v15 = (char *)operator new(v14);
    v32 = (unsigned __int64)v15;
    v16 = 0LL;
    a3 = v33;
  }
  else
  {
    v16 = 0LL;
    v15 = 0LL;
    v32 = 0LL;
  }
  v31 = (void *)v13;
LABEL_10:
  v17 = &v15[96 * v8];
  v18 = *a5;
  v19 = *v34;
  *(_DWORD *)v17 = *a3;
  *((_QWORD *)v17 + 1) = v19;
  *((_QWORD *)v17 + 2) = 0LL;
  *((_QWORD *)v17 + 3) = v18;
  v20 = a1[1];
  v21 = *a1;
  if ( a2 == (_BYTE *)v20 )
  {
    if ( v21 != v20 )
    {
      v18 = v15 + 16;
      do
      {
        *((_DWORD *)v18 - 4) = *(_DWORD *)v21;
        *((_QWORD *)v18 - 1) = v21[1];
        *(_QWORD *)v18 = v21[2];
        v21[2] = 0LL;
        *((_QWORD *)v18 + 1) = v21[3];
        *((_OWORD *)v18 + 1) = *((_OWORD *)v21 + 2);
        *((_OWORD *)v18 + 2) = *((_OWORD *)v21 + 3);
        *((_OWORD *)v18 + 3) = *((_OWORD *)v21 + 4);
        *((_OWORD *)v18 + 4) = *((_OWORD *)v21 + 5);
        v18 += 96;
        v21 += 12;
      }
      while ( v21 != v20 );
    }
  }
  else
  {
    std::_Uninitialized_move<NotificationData *>(v21, a2, v15, 0LL, v29);
    std::_Uninitialized_move<NotificationData *>(a2, a1[1], v17 + 96, v28, v30);
  }
  v22 = *a1;
  if ( *a1 )
  {
    for ( i = a1[1]; v22 != i; v22 += 12 )
    {
      v24 = v22[2];
      if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v24, v18, v20, v16);
    }
    v25 = *a1;
    v26 = 32 * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5);
    v32 = v26;
    v31 = v25;
    if ( v26 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v31, &v32);
      v25 = v31;
      v26 = v32;
    }
    operator delete(v25, v26);
  }
  *a1 = v15;
  a1[1] = &v15[96 * v10];
  a1[2] = &v15[v29];
  return v17;
}
