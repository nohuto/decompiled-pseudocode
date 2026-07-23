/*
 * XREFs of sub_140297430 @ 0x140297430
 * Callers:
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 * Callees:
 *     sub_14025CB30 @ 0x14025CB30 (sub_14025CB30.c)
 *     sub_14025DAA8 @ 0x14025DAA8 (sub_14025DAA8.c)
 *     sub_14025DAE4 @ 0x14025DAE4 (sub_14025DAE4.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1405E5074 @ 0x1405E5074 (sub_1405E5074.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140297430(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(int, int, int, int, int, int, int, __int64); // rdi
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  _BYTE *v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  char *v20; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // r9
  __int64 (__fastcall **v31)(int, int, int, int, int, int, int, __int64); // rax
  unsigned int v32; // r11d
  _QWORD *v33; // r9
  _OWORD *v34; // r9
  __int64 v35; // rax
  char *v37; // rax
  char v38; // [rsp+20h] [rbp-98h]
  int v39; // [rsp+40h] [rbp-78h]
  __int64 v40; // [rsp+48h] [rbp-70h]
  unsigned int v41; // [rsp+50h] [rbp-68h]
  __int64 v42; // [rsp+58h] [rbp-60h]

  v39 = 0;
  v42 = a5 + 416;
  v40 = a5 + 120;
  while ( 1 )
  {
    LODWORD(v9) = 0;
    v38 = 0;
    v41 = a2 - *a4 - a1;
    v10 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))(a1 + (unsigned int)a4[2]);
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v10 & 3) != 0 )
LABEL_85:
      ExRaiseDatatypeMisalignment();
    while ( 1 )
    {
      v11 = *((unsigned __int8 *)v10 + 2);
      if ( (unsigned int)v9 >= v11 )
        break;
      v12 = *((unsigned __int8 *)v10 + 2 * (unsigned int)v9 + 5) >> 4;
      v13 = (char *)v10 + 2 * (unsigned int)v9;
      if ( v41 < (unsigned __int8)v13[4] )
      {
        LODWORD(v9) = sub_14025DAA8(*((_WORD *)v13 + 2)) + v9;
      }
      else
      {
        if ( (*((_BYTE *)v10 + 2 * (unsigned int)v9 + 5) & 0xF) != 0 )
        {
          switch ( *((_BYTE *)v10 + 2 * (unsigned int)v9 + 5) & 0xF )
          {
            case 1:
              v9 = (unsigned int)(v9 + 1);
              v24 = *((unsigned __int16 *)v10 + v9 + 2);
              if ( v12 )
              {
                v9 = (unsigned int)(v9 + 1);
                v25 = (*((unsigned __int16 *)v10 + v9 + 2) << 16) + v24;
              }
              else
              {
                v25 = 8 * v24;
              }
              *(_QWORD *)(a5 + 152) += v25;
              LODWORD(v9) = v9 + 1;
              continue;
            case 2:
              *(_QWORD *)(a5 + 152) += 8 * v12 + 8;
              LODWORD(v9) = v9 + 1;
              continue;
            case 3:
              v26 = *(_QWORD *)(v40 + 8LL * (*((_BYTE *)v10 + 3) & 0xF));
              *(_QWORD *)(a5 + 152) = v26;
              *(_QWORD *)(a5 + 152) = v26 - (*((_BYTE *)v10 + 3) & 0xF0);
              LODWORD(v9) = v9 + 1;
              continue;
            case 4:
              LODWORD(v9) = v9 + 1;
              v16 = a3 + 8LL * *((unsigned __int16 *)v10 + (unsigned int)v9 + 2);
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_QWORD *)a8 && (v16 < **(_QWORD **)a8 || v16 > **(_QWORD **)(a8 + 8) - 8LL) )
                return 3221225512LL;
              *(_QWORD *)(v40 + 8LL * v12) = *(_QWORD *)v16;
              v17 = *(_QWORD *)(a8 + 16);
              if ( !v17 )
                break;
              *(_QWORD *)(v17 + 8LL * v12 + 128) = v16;
              LODWORD(v9) = v9 + 1;
              continue;
            case 5:
              v9 = (unsigned int)(v9 + 2);
              v33 = (_QWORD *)(((unsigned __int64)*((unsigned __int16 *)v10 + v9 + 2) << 16)
                             + a3
                             + *((unsigned __int16 *)v10 + (unsigned int)(v9 - 1) + 2));
              if ( a2 <= 0x7FFFFFFEFFFFLL
                && (((_BYTE)a3 + (unsigned __int8)*((_WORD *)v10 + (unsigned int)(v9 - 1) + 2)) & 3) != 0 )
              {
                ExRaiseDatatypeMisalignment();
              }
              if ( !*(_QWORD *)a8 )
                goto LABEL_95;
              if ( (unsigned __int64)v33 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v33 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_95:
              *(_QWORD *)(v40 + 8LL * v12) = *v33;
              break;
            case 6:
              LODWORD(v9) = v9 + 2;
              continue;
            case 7:
              LODWORD(v9) = v9 + 2;
              break;
            case 8:
              v9 = (unsigned int)(v9 + 1);
              v22 = a3 + 16LL * *((unsigned __int16 *)v10 + v9 + 2);
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v22 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( !*(_QWORD *)a8 )
                goto LABEL_47;
              if ( v22 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( v22 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_47:
              *(_OWORD *)(v42 + 16LL * v12) = *(_OWORD *)v22;
              v23 = *(_QWORD *)(a8 + 16);
              if ( !v23 )
                break;
              *(_QWORD *)(v23 + 8LL * v12) = v22;
              LODWORD(v9) = v9 + 1;
              continue;
            case 9:
              v9 = (unsigned int)(v9 + 2);
              v34 = (_OWORD *)(((unsigned __int64)*((unsigned __int16 *)v10 + v9 + 2) << 16)
                             + a3
                             + *((unsigned __int16 *)v10 + (unsigned int)(v9 - 1) + 2));
              if ( a2 <= 0x7FFFFFFEFFFFLL
                && (((_BYTE)a3 + (unsigned __int8)*((_WORD *)v10 + (unsigned int)(v9 - 1) + 2)) & 3) != 0 )
              {
                ExRaiseDatatypeMisalignment();
              }
              if ( !*(_QWORD *)a8 )
                goto LABEL_105;
              if ( (unsigned __int64)v34 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v34 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_105:
              *(_OWORD *)(v42 + 16LL * v12) = *v34;
              v35 = *(_QWORD *)(a8 + 16);
              if ( v35 )
                *(_QWORD *)(v35 + 8LL * v12) = v34;
              break;
            case 0xA:
              v38 = 1;
              v27 = *(_QWORD *)(a5 + 152);
              v28 = v27 + 8;
              if ( !v12 )
                v28 = *(_QWORD *)(a5 + 152);
              v29 = 32LL;
              if ( !v12 )
                v29 = 24LL;
              v30 = v27 + v29;
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v28 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( !*(_QWORD *)a8 )
                goto LABEL_68;
              if ( v28 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( v28 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_68:
              if ( a2 <= 0x7FFFFFFEFFFFLL && (v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_QWORD *)a8 )
              {
                if ( v30 < **(_QWORD **)a8 )
                  return 3221225512LL;
                if ( v30 > **(_QWORD **)(a8 + 8) - 8LL )
                  return 3221225512LL;
              }
              *(_QWORD *)(a5 + 248) = *(_QWORD *)v28;
              *(_QWORD *)(a5 + 152) = *(_QWORD *)v30;
              if ( (*(_DWORD *)(a5 + 48) & 0x100080) == 0x100080
                && !(unsigned __int8)sub_1405E5074(v10, &off_140C02EE0, 1LL) )
              {
                sub_14025DAE4((_DWORD *)a5, 0, 3);
              }
              break;
            default:
              goto LABEL_113;
          }
        }
        else
        {
          v14 = *(_QWORD *)(a5 + 152);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( *(_QWORD *)a8 )
          {
            if ( v14 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( v14 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v40 + 8LL * v12) = *(_QWORD *)v14;
          v15 = *(_QWORD *)(a8 + 16);
          if ( v15 )
            *(_QWORD *)(v15 + 8LL * v12 + 128) = v14;
          *(_QWORD *)(a5 + 152) += 8LL;
        }
        LODWORD(v9) = v9 + 1;
      }
    }
    if ( (*(_BYTE *)v10 & 0x20) == 0 )
      break;
    if ( (v11 & 1) != 0 )
      ++v11;
    a4 = (_DWORD *)((char *)v10 + 2 * v11 + 4);
    if ( a2 <= 0x7FFFFFFEFFFFLL && (((_BYTE)v10 + 2 * ((_BYTE)v11 + 2)) & 3) != 0 )
      goto LABEL_85;
    if ( (unsigned int)++v39 > 0x20 )
LABEL_113:
      RtlRaiseStatus(-1073741569);
  }
  if ( v38 )
  {
    v20 = a6;
    if ( !a6 )
    {
LABEL_38:
      *a7 = a4;
      return 0LL;
    }
    v31 = &off_140C02EC8;
    v32 = 0;
    while ( v10 != *v31 )
    {
      ++v32;
      ++v31;
      if ( v32 >= 3 )
        goto LABEL_36;
    }
    v38 = 0;
LABEL_36:
    if ( v20 )
      *v20 = v38;
    goto LABEL_38;
  }
  if ( a2 <= 0x7FFFFFFEFFFFLL && (*(_QWORD *)(a5 + 152) & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( !*(_QWORD *)a8 )
    goto LABEL_33;
  v18 = *(_QWORD *)(a5 + 152);
  if ( v18 < **(_QWORD **)a8 )
    return 3221225512LL;
  if ( v18 <= **(_QWORD **)(a8 + 8) - 8LL )
  {
LABEL_33:
    v19 = *(_QWORD **)(a5 + 152);
    *(_QWORD *)(a5 + 248) = *v19;
    *(_QWORD *)(a5 + 152) = v19 + 1;
    if ( (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040 )
    {
      v37 = sub_14025CB30((_DWORD *)(a5 + 1232), 0xBu, 0xFFFFF780000003D8uLL, 0LL);
      if ( v37 )
      {
        if ( (*v37 & 1) != 0 )
          *((_QWORD *)v37 + 1) += 8LL;
      }
    }
    v20 = a6;
    if ( (*(_DWORD *)(a5 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a5 + 1256) + a5 + 1232) += 8LL;
    goto LABEL_36;
  }
  return 3221225512LL;
}
