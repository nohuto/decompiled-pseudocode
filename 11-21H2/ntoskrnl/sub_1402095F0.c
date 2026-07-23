/*
 * XREFs of sub_1402095F0 @ 0x1402095F0
 * Callers:
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

__int64 __fastcall sub_1402095F0(_QWORD *SystemArgument1)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 *v4; // r14
  unsigned __int16 *v5; // r15
  unsigned __int16 *v7; // rbx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _QWORD *v12; // r12
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // r13
  __int64 v15; // rbp
  int v16; // ecx
  _QWORD *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v21; // [rsp+78h] [rbp+10h]
  char v22; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = CurrentPrcb;
  sub_1402F3290(SystemArgument1);
  v4 = (unsigned __int16 *)(SystemArgument1 + 1);
  v5 = (unsigned __int16 *)SystemArgument1[1];
  v20 = *((_DWORD *)SystemArgument1 + 1);
  *((_DWORD *)SystemArgument1 + 1) = 1;
  while ( v5 != v4 )
  {
    v7 = v5;
    v5 = *(unsigned __int16 **)v5;
    v8 = *((_BYTE *)v7 + 16);
    switch ( v8 )
    {
      case 1:
        v9 = v7[9];
        goto LABEL_7;
      case 2:
        *((_BYTE *)v7 + 17) = 5;
        v11 = *((_QWORD *)v7 + 3);
        *(_QWORD *)v7 = 0LL;
        v12 = (_QWORD *)(v11 + 8);
        v13 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v13 <= 0xFu )
        {
          v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v18 + 20) |= (-1 << (v13 + 1)) & 4;
        }
        v14 = KeGetCurrentPrcb();
        v15 = *((_QWORD *)v14 + 1);
        if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
        {
          LOBYTE(v19) = sub_14056B1E4(*((_QWORD *)v14 + 1));
          sub_14062DA60(v15, v7, v19);
        }
        sub_1402F3290(v11);
        if ( (_QWORD *)*v12 == v12
          || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
          || *(_QWORD *)(v15 + 232) == v11 && *(_BYTE *)(v15 + 643) == 15
          || !(unsigned __int8)sub_1402F6A70(v14, v11, v7) )
        {
          v16 = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 4) = v16 + 1;
          v17 = *(_QWORD **)(v11 + 32);
          if ( *v17 != v11 + 24 )
            __fastfail(3u);
          *(_QWORD *)v7 = v11 + 24;
          *((_QWORD *)v7 + 1) = v17;
          *v17 = v7;
          *(_QWORD *)(v11 + 32) = v7;
          if ( !v16 && (_QWORD *)*v12 != v12 )
            sub_14035B550(v14, v11);
        }
        else
        {
          *(_QWORD *)v7 = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
        CurrentPrcb = v21;
        break;
      case 4:
        *((_BYTE *)v7 + 17) = 5;
        *((_DWORD *)SystemArgument1 + 1) = 0;
        KeInsertQueueDpc(*((PRKDPC *)v7 + 3), SystemArgument1, v7);
        break;
      default:
        v9 = 256LL;
LABEL_7:
        sub_1402F6BC0(CurrentPrcb, v7, v9, 0LL);
        break;
    }
  }
  SystemArgument1[2] = SystemArgument1 + 1;
  *(_QWORD *)v4 = v4;
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  sub_1402B0820((_DWORD)CurrentPrcb, 0, 1, 0, v22);
  return v20;
}
