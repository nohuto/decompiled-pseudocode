/*
 * XREFs of sub_14035AD70 @ 0x14035AD70
 * Callers:
 *     sub_140220944 @ 0x140220944 (sub_140220944.c)
 *     sub_14024F140 @ 0x14024F140 (sub_14024F140.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402DE734 @ 0x1402DE734 (sub_1402DE734.c)
 *     sub_1402F63D0 @ 0x1402F63D0 (sub_1402F63D0.c)
 *     sub_140358140 @ 0x140358140 (sub_140358140.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_14035AA74 @ 0x14035AA74 (sub_14035AA74.c)
 *     sub_1403945DC @ 0x1403945DC (sub_1403945DC.c)
 *     sub_1403A3B18 @ 0x1403A3B18 (sub_1403A3B18.c)
 *     sub_1403B1270 @ 0x1403B1270 (sub_1403B1270.c)
 *     sub_1403B19D4 @ 0x1403B19D4 (sub_1403B19D4.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     sub_140564C24 @ 0x140564C24 (sub_140564C24.c)
 *     sub_14059CE7C @ 0x14059CE7C (sub_14059CE7C.c)
 *     sub_1405D6DC4 @ 0x1405D6DC4 (sub_1405D6DC4.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_14074B82C @ 0x14074B82C (sub_14074B82C.c)
 *     sub_14074DB0C @ 0x14074DB0C (sub_14074DB0C.c)
 *     sub_14074E474 @ 0x14074E474 (sub_14074E474.c)
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B090 @ 0x14035B090 (sub_14035B090.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

__int64 __fastcall sub_14035AD70(volatile signed __int32 *SystemArgument1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v5; // edi
  int v6; // r13d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // esi
  int v13; // eax
  volatile signed __int32 *v14; // r14
  __int64 v15; // rax
  volatile signed __int32 *v16; // rdi
  void **v17; // rcx
  char v18; // al
  bool v19; // zf
  char v20; // bl
  unsigned __int8 v22; // cl
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rcx
  char v26; // al
  int v27; // r9d
  __int64 v28; // r9
  unsigned __int8 v29; // al
  __int64 v30; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  __int64 v33; // r8
  int v34; // eax
  struct _KPRCB *v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+98h] [rbp+20h]

  v5 = a3;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  sub_1402F3290(SystemArgument1, a2, a3, a4);
  v12 = *((_DWORD *)SystemArgument1 + 1);
  v13 = v12 + v5;
  if ( (signed int)(v12 + v5) > *((_DWORD *)SystemArgument1 + 6) || v13 < (int)v12 )
  {
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = *((_QWORD *)v32 + 4375);
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
          *(_DWORD *)(v33 + 20) &= v34;
          if ( v19 )
            sub_140418E4C(v32);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *((_DWORD *)SystemArgument1 + 1) = v13;
  if ( !v12 )
  {
    v14 = (volatile signed __int32 *)*((_QWORD *)SystemArgument1 + 1);
    while ( v14 != SystemArgument1 + 2 )
    {
      v15 = *(_QWORD *)v14;
      v16 = v14;
      v14 = (volatile signed __int32 *)v15;
      v17 = (void **)*((_QWORD *)v16 + 1);
      if ( *(volatile signed __int32 **)(v15 + 8) != v16 || *v17 != v16 )
LABEL_7:
        __fastfail(3u);
      *v17 = (void *)v15;
      *(_QWORD *)(v15 + 8) = v17;
      v18 = *((_BYTE *)v16 + 16);
      switch ( v18 )
      {
        case 1:
          if ( (unsigned __int8)sub_1402F6BC0((__int64)CurrentPrcb, (__int64)v16, *((unsigned __int16 *)v16 + 9), 0LL) )
          {
            v19 = (*((_DWORD *)SystemArgument1 + 1))-- == 1;
            if ( v19 )
              goto LABEL_15;
          }
          break;
        case 2:
          *((_BYTE *)v16 + 17) = 5;
          v37 = *((_QWORD *)v16 + 3);
          *(_QWORD *)v16 = 0LL;
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v22 <= 0xFu )
          {
            v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            v10 = (_QWORD *)((-1LL << (v22 + 1)) & 4);
            v11 = (unsigned int)v10 | *(_DWORD *)(v28 + 20);
            *(_DWORD *)(v28 + 20) = v11;
          }
          v35 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v35 + 1);
          v36 = v23;
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
          {
            v29 = sub_14056B1E4(v23);
            sub_14062DA60(v30, v16, v29);
          }
          sub_1402F3290((volatile signed __int32 *)v37, (__int64)v10, v11, v23);
          v11 = v37 + 8;
          v25 = v37;
          if ( *(_QWORD *)v11 == v11
            || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
            || *(_QWORD *)(v36 + 232) == v37 && *(_BYTE *)(v36 + 643) == 15 )
          {
LABEL_35:
            v27 = *(_DWORD *)(v25 + 4);
            *(_DWORD *)(v25 + 4) = v27 + 1;
            v10 = *(_QWORD **)(v25 + 32);
            if ( *v10 != v25 + 24 )
              goto LABEL_7;
            *(_QWORD *)v16 = v25 + 24;
            *((_QWORD *)v16 + 1) = v10;
            *v10 = v16;
            *(_QWORD *)(v25 + 32) = v16;
            if ( !v27 && *(_QWORD *)v11 != v11 )
            {
              sub_14035B550(v35, v25);
              v25 = v37;
            }
          }
          else
          {
            v26 = sub_1402F6A70((__int64)v35, v37, (__int64)v16, v24);
            v25 = v37;
            if ( !v26 )
            {
              v11 = v37 + 8;
              goto LABEL_35;
            }
            *(_QWORD *)v16 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v19 = (*((_DWORD *)SystemArgument1 + 1))-- == 1;
          if ( v19 )
            goto LABEL_15;
          break;
        case 4:
          *((_BYTE *)v16 + 17) = 5;
          *((_DWORD *)SystemArgument1 + 1) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v16 + 3), (PVOID)SystemArgument1, (PVOID)v16);
          break;
        default:
          sub_1402F6BC0((__int64)CurrentPrcb, (__int64)v16, 256LL, 0LL);
          break;
      }
    }
  }
LABEL_15:
  _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v20 = 1;
    if ( (a5 & 4) == 0 )
      v20 = 3;
  }
  else
  {
    v20 = 0;
    if ( (a5 & 2) != 0 )
      sub_14035B090(CurrentPrcb, *((_QWORD *)CurrentPrcb + 1));
  }
  sub_1402B0820((__int64)CurrentPrcb, v20, 1, v6, CurrentIrql);
  return v12;
}
