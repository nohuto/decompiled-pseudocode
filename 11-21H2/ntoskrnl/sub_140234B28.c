/*
 * XREFs of sub_140234B28 @ 0x140234B28
 * Callers:
 *     sub_140234B10 @ 0x140234B10 (sub_140234B10.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140234D1C @ 0x140234D1C (sub_140234D1C.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_1405757C0 @ 0x1405757C0 (sub_1405757C0.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

LONG_PTR __fastcall sub_140234B28(_DWORD *SystemArgument1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // edi
  volatile signed __int32 *v4; // rbp
  char v5; // r13
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  int v9; // eax
  LONG_PTR result; // rax
  __int64 v11; // r9
  int v12; // eax
  struct _KPRCB *v13; // rdi
  __int64 v14; // rcx
  _DWORD **v15; // rdx
  PVOID *v16; // rcx
  unsigned __int16 *v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  unsigned __int16 *v22; // rdi
  void **v23; // rcx
  char v24; // al
  bool v25; // zf
  __int64 v26; // rsi
  _QWORD *v27; // r15
  unsigned __int8 v28; // cl
  __int64 v29; // r9
  struct _KPRCB *v30; // r13
  __int64 v31; // r14
  __int64 v32; // r8
  int v33; // r8d
  unsigned __int16 **v34; // rdx
  struct _KPRCB *v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v37; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *v38; // [rsp+48h] [rbp-70h]
  __int128 v39; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+60h] [rbp-58h]
  int v41; // [rsp+C0h] [rbp+8h] BYREF
  int v42; // [rsp+C8h] [rbp+10h]
  int v43; // [rsp+D0h] [rbp+18h]
  __int64 v44; // [rsp+D8h] [rbp+20h]

  v42 = a2;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  LOBYTE(v42) = 0;
  v4 = 0LL;
  v38 = CurrentThread;
  v5 = 0;
  v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v35 = CurrentPrcb;
  sub_1402F3290(SystemArgument1);
  v9 = SystemArgument1[1];
  *((_BYTE *)SystemArgument1 + 48) |= 1u;
  SystemArgument1[1] = 1;
  if ( v9 <= 0 )
  {
    v40 = 0LL;
    v12 = *SystemArgument1;
    v39 = 0LL;
    LODWORD(v39) = v12;
    BYTE2(v39) = 0;
    *SystemArgument1 = v39;
    v13 = KeGetCurrentPrcb();
    v4 = (volatile signed __int32 *)*((_QWORD *)SystemArgument1 + 5);
    v43 = *((unsigned __int8 *)SystemArgument1 + 49);
    v41 = 0;
    while ( 1 )
    {
      v14 = *((_QWORD *)v13 + 4375);
      if ( v14 )
      {
        if ( *((_BYTE *)v13 + 32) <= 1u )
        {
          v18 = *(_DWORD *)(v14 + 24);
          *(_DWORD *)(v14 + 24) = v18 + 1;
          if ( v18 == -1 )
            sub_140418E4C(v13);
        }
      }
      if ( !_interlockedbittestandset64(v4 + 16, 0LL) )
        break;
      v19 = *((_QWORD *)v13 + 4375);
      if ( v19 )
      {
        if ( *((_BYTE *)v13 + 32) <= 1u )
        {
          v20 = *(_DWORD *)(v19 + 24) - 1;
          *(_DWORD *)(v19 + 24) = v20;
          if ( !v20 )
            sub_140418E4C(v13);
        }
      }
      do
        sub_1402F32E0(&v41);
      while ( *((_QWORD *)v4 + 8) );
    }
    v15 = (_DWORD **)*((_QWORD *)SystemArgument1 + 3);
    v16 = (PVOID *)*((_QWORD *)SystemArgument1 + 4);
    if ( v15[1] != SystemArgument1 + 6 || *v16 != SystemArgument1 + 6 )
LABEL_61:
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    if ( (SystemArgument1[12] & 2) != 0 )
    {
      LOBYTE(v42) = 1;
      if ( v4 != (volatile signed __int32 *)CurrentThread )
        ObfReferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    sub_140224100((__int64)v4);
    *((_QWORD *)SystemArgument1 + 5) = 0LL;
    v17 = (unsigned __int16 *)*((_QWORD *)SystemArgument1 + 1);
    if ( v17 != (unsigned __int16 *)(SystemArgument1 + 2) )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)v17;
        v22 = v17;
        v17 = (unsigned __int16 *)v21;
        v37 = (unsigned __int16 *)v21;
        v23 = (void **)*((_QWORD *)v22 + 1);
        if ( *(unsigned __int16 **)(v21 + 8) != v22 || *v23 != v22 )
          goto LABEL_61;
        *v23 = (void *)v21;
        *(_QWORD *)(v21 + 8) = v23;
        v24 = *((_BYTE *)v22 + 16);
        switch ( v24 )
        {
          case 1:
            if ( (unsigned __int8)sub_1402F6BC0(CurrentPrcb, v22, v22[9], &v36) )
            {
              v25 = SystemArgument1[1]-- == 1;
              if ( v25 )
                goto LABEL_60;
            }
            break;
          case 2:
            *((_BYTE *)v22 + 17) = 5;
            v26 = *((_QWORD *)v22 + 3);
            *(_QWORD *)v22 = 0LL;
            v27 = (_QWORD *)(v26 + 8);
            v28 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v28 <= 0xFu )
            {
              v29 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v29 + 20) |= (-1 << (v28 + 1)) & 4;
            }
            v30 = KeGetCurrentPrcb();
            v31 = *((_QWORD *)v30 + 1);
            if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
            {
              LOBYTE(v32) = sub_14056B1E4(*((_QWORD *)v30 + 1));
              sub_14062DA60(v31, v22, v32);
            }
            sub_1402F3290(v26);
            if ( (_QWORD *)*v27 == v27
              || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
              || *(_QWORD *)(v31 + 232) == v26 && *(_BYTE *)(v31 + 643) == 15
              || !(unsigned __int8)sub_1402F6A70(v30, v26, v22) )
            {
              v33 = *(_DWORD *)(v26 + 4);
              *(_DWORD *)(v26 + 4) = v33 + 1;
              v34 = *(unsigned __int16 ***)(v26 + 32);
              if ( *v34 != (unsigned __int16 *)(v26 + 24) )
                goto LABEL_61;
              *(_QWORD *)v22 = v26 + 24;
              *((_QWORD *)v22 + 1) = v34;
              *v34 = v22;
              *(_QWORD *)(v26 + 32) = v22;
              if ( !v33 && (_QWORD *)*v27 != v27 )
                sub_14035B550(v30, v26);
            }
            else
            {
              *(_QWORD *)v22 = 0LL;
            }
            _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
            v25 = SystemArgument1[1]-- == 1;
            if ( v25 )
            {
LABEL_60:
              LOBYTE(CurrentIrql) = v44;
              goto LABEL_17;
            }
            v17 = v37;
            CurrentPrcb = v35;
            break;
          case 4:
            *((_BYTE *)v22 + 17) = 5;
            SystemArgument1[1] = 0;
            KeInsertQueueDpc(*((PRKDPC *)v22 + 3), SystemArgument1, v22);
            break;
          default:
            sub_1402F6BC0(CurrentPrcb, v22, 256LL, 0LL);
            break;
        }
        if ( v17 == (unsigned __int16 *)(SystemArgument1 + 2) )
          goto LABEL_60;
      }
    }
LABEL_17:
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
    sub_140234D1C(SystemArgument1);
    CurrentThread = v38;
    LODWORD(CurrentPrcb) = (_DWORD)v35;
    v5 = v42;
    v3 = v43;
  }
  else
  {
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  }
  result = sub_1402B0820((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v5 )
  {
    if ( v4 != (volatile signed __int32 *)CurrentThread )
    {
      sub_1405757C0(SystemArgument1, v4);
      return ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    result = sub_1402AFC00((ULONG_PTR)SystemArgument1);
  }
  else if ( v4 != (volatile signed __int32 *)CurrentThread )
  {
    return result;
  }
  if ( v3 )
    return sub_1402F9540(CurrentThread);
  return result;
}
