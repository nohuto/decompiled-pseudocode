/*
 * XREFs of sub_14024B0B4 @ 0x14024B0B4
 * Callers:
 *     sub_14022C984 @ 0x14022C984 (sub_14022C984.c)
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_14027D8DC @ 0x14027D8DC (sub_14027D8DC.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 *     sub_14036DAE4 @ 0x14036DAE4 (sub_14036DAE4.c)
 *     sub_1403C6B00 @ 0x1403C6B00 (sub_1403C6B00.c)
 *     sub_1403C6CDC @ 0x1403C6CDC (sub_1403C6CDC.c)
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D3D2C @ 0x1403D3D2C (sub_1403D3D2C.c)
 *     sub_14057AFDC @ 0x14057AFDC (sub_14057AFDC.c)
 *     sub_1405A0FD8 @ 0x1405A0FD8 (sub_1405A0FD8.c)
 *     sub_1405A1C08 @ 0x1405A1C08 (sub_1405A1C08.c)
 *     sub_1405AB148 @ 0x1405AB148 (sub_1405AB148.c)
 *     sub_1405B05A0 @ 0x1405B05A0 (sub_1405B05A0.c)
 *     sub_1405E0600 @ 0x1405E0600 (sub_1405E0600.c)
 *     sub_140983B10 @ 0x140983B10 (sub_140983B10.c)
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

__int64 __fastcall sub_14024B0B4(_DWORD *SystemArgument1, int a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int16 *v5; // r12
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int16 *v9; // rbx
  void **v10; // rcx
  char v11; // al
  bool v12; // zf
  __int64 v13; // rsi
  _QWORD *v14; // r14
  unsigned __int8 v15; // cl
  __int64 v16; // r9
  struct _KPRCB *v17; // r15
  __int64 v18; // rbp
  __int64 v19; // r8
  int v20; // ecx
  unsigned __int16 **v21; // rdx
  struct _KPRCB *v22; // [rsp+70h] [rbp+8h]
  char v24; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = CurrentPrcb;
  sub_1402F3290(SystemArgument1);
  if ( !SystemArgument1[1] )
  {
    SystemArgument1[1] = 1;
    v5 = (unsigned __int16 *)*((_QWORD *)SystemArgument1 + 1);
    while ( v5 != (unsigned __int16 *)(SystemArgument1 + 2) )
    {
      v8 = *(_QWORD *)v5;
      v9 = v5;
      v5 = (unsigned __int16 *)v8;
      v10 = (void **)*((_QWORD *)v9 + 1);
      if ( *(unsigned __int16 **)(v8 + 8) != v9 || *v10 != v9 )
LABEL_10:
        __fastfail(3u);
      *v10 = (void *)v8;
      *(_QWORD *)(v8 + 8) = v10;
      v11 = *((_BYTE *)v9 + 16);
      switch ( v11 )
      {
        case 1:
          if ( (unsigned __int8)sub_1402F6BC0(CurrentPrcb, v9, v9[9], 0LL) )
          {
            v12 = SystemArgument1[1]-- == 1;
            if ( v12 )
              goto LABEL_5;
          }
          break;
        case 2:
          *((_BYTE *)v9 + 17) = 5;
          v13 = *((_QWORD *)v9 + 3);
          *(_QWORD *)v9 = 0LL;
          v14 = (_QWORD *)(v13 + 8);
          v15 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
          {
            v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v16 + 20) |= (-1 << (v15 + 1)) & 4;
          }
          v17 = KeGetCurrentPrcb();
          v18 = *((_QWORD *)v17 + 1);
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
          {
            LOBYTE(v19) = sub_14056B1E4(*((_QWORD *)v17 + 1));
            sub_14062DA60(v18, v9, v19);
          }
          sub_1402F3290(v13);
          if ( (_QWORD *)*v14 == v14
            || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
            || *(_QWORD *)(v18 + 232) == v13 && *(_BYTE *)(v18 + 643) == 15
            || !(unsigned __int8)sub_1402F6A70(v17, v13, v9) )
          {
            v20 = *(_DWORD *)(v13 + 4);
            *(_DWORD *)(v13 + 4) = v20 + 1;
            v21 = *(unsigned __int16 ***)(v13 + 32);
            if ( *v21 != (unsigned __int16 *)(v13 + 24) )
              goto LABEL_10;
            *(_QWORD *)v9 = v13 + 24;
            *((_QWORD *)v9 + 1) = v21;
            *v21 = v9;
            *(_QWORD *)(v13 + 32) = v9;
            if ( !v20 && (_QWORD *)*v14 != v14 )
              sub_14035B550(v17, v13);
          }
          else
          {
            *(_QWORD *)v9 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
          v12 = SystemArgument1[1]-- == 1;
          if ( v12 )
            goto LABEL_5;
          CurrentPrcb = v22;
          break;
        case 4:
          *((_BYTE *)v9 + 17) = 5;
          SystemArgument1[1] = 0;
          KeInsertQueueDpc(*((PRKDPC *)v9 + 3), SystemArgument1, v9);
          break;
        default:
          sub_1402F6BC0(CurrentPrcb, v9, 256LL, 0LL);
          break;
      }
    }
  }
LABEL_5:
  _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  return sub_1402B0820((_DWORD)v22, 0, 1, a2, v24);
}
