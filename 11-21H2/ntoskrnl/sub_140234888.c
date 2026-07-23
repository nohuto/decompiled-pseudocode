/*
 * XREFs of sub_140234888 @ 0x140234888
 * Callers:
 *     sub_140234764 @ 0x140234764 (sub_140234764.c)
 *     sub_14057B42C @ 0x14057B42C (sub_14057B42C.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

void __fastcall sub_140234888(
        volatile signed __int32 *SystemArgument1,
        _QWORD **a2,
        _DWORD *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rbx
  char v20; // al
  __int64 v21; // rsi
  _QWORD *v22; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v24; // r13
  __int64 v25; // rbp
  int v26; // ecx
  volatile signed __int32 **v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  __int64 v33; // r8
  struct _KPRCB *v34; // [rsp+50h] [rbp+8h]

  _interlockedbittestandset(SystemArgument1, 8u);
  v6 = a4;
  if ( (_BYTE)a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == a2 )
        break;
      v14 = *v9;
      v15 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v15 != v9 )
LABEL_35:
        __fastfail(3u);
      *v15 = v14;
      v16 = (__int64)(v9 - 65);
      *(_QWORD *)(v14 + 8) = v15;
      CurrentPrcb = KeGetCurrentPrcb();
      a5 = 0;
      while ( 1 )
      {
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v18 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v31 = *(_DWORD *)(v18 + 24);
            *(_DWORD *)(v18 + 24) = v31 + 1;
            if ( v31 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
          break;
        v30 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v30 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v32 = *(_DWORD *)(v30 + 24) - 1;
            *(_DWORD *)(v30 + 24) = v32;
            if ( !v32 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&a5);
        while ( *(_QWORD *)(v16 + 64) );
      }
      *(_QWORD *)(v16 + 232) = 0LL;
      sub_140224100(v16);
    }
    if ( (_DWORD)v6 )
    {
      v10 = v6;
      do
      {
        *a3++ = 0;
        --v10;
      }
      while ( v10 );
    }
  }
  v11 = KeGetCurrentPrcb();
  v12 = SystemArgument1 + 2;
  v13 = (volatile signed __int32 *)*((_QWORD *)SystemArgument1 + 1);
  v34 = v11;
  if ( v13 != SystemArgument1 + 2 )
  {
    while ( 1 )
    {
      v19 = v13;
      v13 = *(volatile signed __int32 **)v13;
      v20 = *((_BYTE *)v19 + 16);
      if ( v20 == 1 )
        break;
      if ( v20 != 2 )
      {
        if ( v20 == 4 )
        {
          *((_BYTE *)v19 + 17) = 5;
          *((_DWORD *)SystemArgument1 + 1) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v19 + 3), (PVOID)SystemArgument1, (PVOID)v19);
          goto LABEL_31;
        }
        v33 = 256LL;
        goto LABEL_49;
      }
      *((_BYTE *)v19 + 17) = 5;
      v21 = *((_QWORD *)v19 + 3);
      *(_QWORD *)v19 = 0LL;
      v22 = (_QWORD *)(v21 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v28 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v24 = KeGetCurrentPrcb();
      v25 = *((_QWORD *)v24 + 1);
      if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
      {
        LOBYTE(v29) = sub_14056B1E4(*((_QWORD *)v24 + 1));
        sub_14062DA60(v25, v19, v29);
      }
      sub_1402F3290(v21);
      if ( (_QWORD *)*v22 == v22
        || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
        || *(_QWORD *)(v25 + 232) == v21 && *(_BYTE *)(v25 + 643) == 15
        || !(unsigned __int8)sub_1402F6A70(v24, v21, v19) )
      {
        v26 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)(v21 + 4) = v26 + 1;
        v27 = *(volatile signed __int32 ***)(v21 + 32);
        if ( *v27 != (volatile signed __int32 *)(v21 + 24) )
          goto LABEL_35;
        *(_QWORD *)v19 = v21 + 24;
        *((_QWORD *)v19 + 1) = v27;
        *v27 = v19;
        *(_QWORD *)(v21 + 32) = v19;
        if ( !v26 && (_QWORD *)*v22 != v22 )
          sub_14035B550(v24, v21);
      }
      else
      {
        *(_QWORD *)v19 = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
LABEL_31:
      if ( v13 == v12 )
        goto LABEL_7;
      v11 = v34;
    }
    v33 = *((unsigned __int16 *)v19 + 9);
LABEL_49:
    sub_1402F6BC0(v11, v19, v33, 0LL);
    goto LABEL_31;
  }
LABEL_7:
  *((_QWORD *)SystemArgument1 + 2) = SystemArgument1 + 2;
  *(_QWORD *)v12 = v12;
}
