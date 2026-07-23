/*
 * XREFs of sub_140296110 @ 0x140296110
 * Callers:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 * Callees:
 *     sub_140201780 @ 0x140201780 (sub_140201780.c)
 *     sub_14024ED80 @ 0x14024ED80 (sub_14024ED80.c)
 *     sub_14025CB30 @ 0x14025CB30 (sub_14025CB30.c)
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_140296DC0 @ 0x140296DC0 (sub_140296DC0.c)
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 *     sub_140298AF8 @ 0x140298AF8 (sub_140298AF8.c)
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     sub_1402DBFAC @ 0x1402DBFAC (sub_1402DBFAC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140429AE0 @ 0x140429AE0 (sub_140429AE0.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F176 @ 0x14045F176 (sub_14045F176.c)
 *     PsWow64GetProcessMachine @ 0x1407048B0 (PsWow64GetProcessMachine.c)
 *     sub_140704D58 @ 0x140704D58 (sub_140704D58.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140296110(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  char v7; // al
  int v8; // r12d
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 v12; // rsi
  int v13; // eax
  char v14; // di
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  unsigned int v19; // edi
  struct _KTHREAD *v20; // rbx
  unsigned int v21; // r15d
  __int64 v22; // r14
  unsigned __int64 *v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  ULONG64 v28; // r8
  int v29; // ecx
  struct _KTHREAD *v30; // rcx
  unsigned int v31; // r9d
  char v32; // r8
  ULONG64 v33; // rax
  char v34; // dl
  int v35; // r10d
  ULONG64 *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 i; // rcx
  __int64 v40; // r14
  unsigned __int64 v41; // rcx
  ULONG64 v43; // rdx
  char *v44; // rax
  char v45; // [rsp+60h] [rbp+0h] BYREF
  bool v46; // [rsp+61h] [rbp+1h]
  unsigned int v47; // [rsp+64h] [rbp+4h] BYREF
  char v48; // [rsp+68h] [rbp+8h] BYREF
  unsigned __int8 v49; // [rsp+69h] [rbp+9h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+10h]
  unsigned int v51; // [rsp+78h] [rbp+18h]
  int v52; // [rsp+7Ch] [rbp+1Ch]
  unsigned __int64 v53; // [rsp+80h] [rbp+20h]
  _QWORD *v54; // [rsp+88h] [rbp+28h]
  unsigned int v55; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp+38h] BYREF
  ULONG64 v57; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v58; // [rsp+A8h] [rbp+48h]
  _QWORD *v59; // [rsp+B0h] [rbp+50h]
  __int64 j; // [rsp+B8h] [rbp+58h]
  unsigned __int64 v61; // [rsp+C0h] [rbp+60h]
  int v62; // [rsp+C8h] [rbp+68h] BYREF
  unsigned int v63; // [rsp+CCh] [rbp+6Ch]
  __int64 v64; // [rsp+D0h] [rbp+70h]
  __int64 v65; // [rsp+D8h] [rbp+78h]
  _DWORD *v66; // [rsp+E0h] [rbp+80h] BYREF
  unsigned __int64 v67; // [rsp+E8h] [rbp+88h]
  unsigned __int64 v68; // [rsp+F0h] [rbp+90h]
  unsigned __int64 *v69; // [rsp+F8h] [rbp+98h]
  unsigned __int64 v70; // [rsp+100h] [rbp+A0h] BYREF
  __int64 v71; // [rsp+108h] [rbp+A8h]
  __int64 v72; // [rsp+110h] [rbp+B0h] BYREF
  ULONG64 v73; // [rsp+118h] [rbp+B8h] BYREF
  __int64 v74; // [rsp+120h] [rbp+C0h]
  __int128 v75; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v76; // [rsp+138h] [rbp+D8h]
  __int64 v77; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v78; // [rsp+148h] [rbp+E8h] BYREF
  __int64 v79; // [rsp+150h] [rbp+F0h]
  _QWORD v80[4]; // [rsp+158h] [rbp+F8h] BYREF
  _OWORD v81[3]; // [rsp+178h] [rbp+118h] BYREF
  _QWORD v82[8]; // [rsp+1B0h] [rbp+150h] BYREF

  v51 = a4;
  v58 = a2;
  v71 = a1;
  v75 = 0LL;
  v76 = 0LL;
  v66 = 0LL;
  v5 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v63 = 0;
  v57 = 0LL;
  memset(v82, 0, sizeof(v82));
  v56 = 0LL;
  j = 0LL;
  v59 = 0LL;
  v49 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)CurrentThread + 23);
  v65 = v6;
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 || *((_BYTE *)CurrentThread + 586) == 1 )
  {
    v64 = 0LL;
  }
  else
  {
    v64 = *((_QWORD *)CurrentThread + 30);
    v6 = v65;
  }
  v7 = 0;
  v53 = 0LL;
  v61 = 0LL;
  v8 = 0;
  v52 = 0;
  v9 = 0LL;
  v74 = 0LL;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(v6 + 2516) & 0x4000) != 0 )
  {
    v9 = qword_140D071F0;
    v74 = qword_140D071F0;
  }
  v45 = 0;
  if ( v9 )
  {
    v7 = 1;
    v45 = 1;
  }
  v10 = 1048587;
  v11 = 0LL;
  if ( v7 )
  {
    v10 = 1048651;
    v11 = 2048LL;
  }
  v12 = v11;
  v70 = v11;
  v62 = 0;
  LODWORD(v69) = 0;
  LODWORD(v54) = 0;
  if ( (int)sub_140297F80(v10, &v62) >= 0 )
  {
    LODWORD(v69) = 16;
    v13 = 1264;
    v14 = v62;
    if ( (v62 & 2) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v70 = v11 & (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL);
        sub_14045F176(v10, &v70);
        v12 = v70;
      }
      v13 = sub_14024ED80(v12) + 800;
    }
    if ( (v14 & 4) != 0 )
      v13 += 32;
    v5 = v13 - 1 + 16;
    LODWORD(v54) = v5;
  }
  v15 = v5 + 15LL;
  if ( v15 <= v5 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = alloca(v16);
  sub_140297D10(&v45, v10, &v66, v11);
  sub_140429AE0(&v45);
  v48 = 0;
  if ( !(unsigned __int8)sub_1402AB970(&v56, &v57) )
    return 0LL;
  v19 = 0;
  v47 = 0;
  v46 = (a3 & 2) != 0;
  if ( (a3 & 1) == 0 && (dword_140D051B4 & 1) == 0 )
    v63 = 0x80000000;
  v67 = 0LL;
  v68 = 0LL;
  v20 = CurrentThread;
  if ( (a3 & 1) != 0 )
  {
    for ( i = *((_QWORD *)CurrentThread + 5); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
      ;
    v40 = i - 400;
    v53 = i - 400;
    v61 = i - 400;
    if ( !v64 || (*(_WORD *)(v64 + 6126) & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(v65) != 332 || *(_BYTE *)(v40 + 43) == 2 )
    {
      v21 = v51;
    }
    else
    {
      v21 = v51;
      if ( *(_WORD *)(v40 + 368) == 35 )
      {
        v47 = 1;
        if ( sub_140201780(
               v71,
               (unsigned int *)(v40 + 360),
               v64,
               &v47,
               v58,
               v51,
               *(_DWORD *)(v40 + 344),
               *(_DWORD *)(v40 + 384)) )
        {
          v19 = v47;
          goto LABEL_148;
        }
        v19 = v47;
      }
    }
    v67 = *(_QWORD *)(v40 + 384);
    v41 = *(_QWORD *)(v64 + 8);
    v68 = v41;
    if ( v41 <= v67 )
      return 0LL;
    if ( v41 > 0x7FFFFFFF0000LL )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( j = *((_QWORD *)v20 + 5); (*(_BYTE *)(j + 8) & 1) != 0; j = *(_QWORD *)(j + 40) )
      ;
    v54 = *(_QWORD **)(j + 32);
    v59 = v54;
    v49 = _bittestandset((signed __int32 *)v20 + 29, 5u);
  }
  else
  {
    v54 = v59;
    v21 = v51;
  }
  memset(v82, 0, sizeof(v82));
  v75 = xmmword_140E00030;
  v76 = qword_140E00040;
  while ( 1 )
  {
    v22 = j;
    if ( v8 != 1
      && (unsigned __int64)(v80[0] - qword_140C50630) < 0x8000000000LL
      && !(unsigned int)sub_1402DBFAC(v20, v65) )
    {
      goto LABEL_148;
    }
    v23 = v69;
    v73 = 0LL;
    v72 = 0LL;
    v55 = 0;
    if ( ((unsigned __int8)v69 & 7) != 0 )
      goto LABEL_147;
    if ( (unsigned __int64)v69 < v56 || (unsigned __int64)v69 >= v57 )
      break;
LABEL_28:
    v24 = sub_140296DC0(v80[0], &v75);
    if ( v24 )
    {
      v25 = v80[0];
      v80[2] = 0LL;
      v80[0] = &v56;
      v80[1] = &v57;
      if ( (int)sub_140296FC0(
                  v63,
                  DWORD2(v75),
                  v25,
                  v24,
                  (__int64)&v45,
                  (__int64)&v48,
                  (__int64)&v78,
                  (__int64)&v77,
                  0LL,
                  (__int64)v80) < 0 )
      {
        v20 = CurrentThread;
        goto LABEL_148;
      }
      if ( v48 )
        v46 = 0;
      v26 = v80[0];
    }
    else
    {
      if ( !*((_QWORD *)&v75 + 1) )
      {
        v20 = CurrentThread;
        goto LABEL_148;
      }
      if ( v80[0] <= 0x7FFFFFFEFFFFuLL )
      {
        if ( ((unsigned __int8)v69 & 3) != 0 )
          goto LABEL_138;
        v19 = v47;
        v54 = v59;
        v53 = v61;
        v8 = v52;
      }
      v26 = *v69;
      v80[0] = *v69++;
    }
    v27 = v26;
    if ( v8 == 1 && v19 && v74 && v26 == v74 )
    {
      v27 = *(_QWORD *)(*((_QWORD *)sub_14025CB30(v66, 0xBu, 0xFFFFF780000003D8uLL, 0LL) + 1) - 8LL);
      v80[0] = v27;
    }
    if ( !v27 )
    {
      if ( (a3 & 1) != 0 && (unsigned __int16)PsWow64GetProcessMachine(v65) == 332 && *(_BYTE *)(v53 + 43) == 2 )
      {
        memset(v81, 0, sizeof(v81));
        v38 = v64;
        if ( (int)sub_140704D58(*(_QWORD *)(v64 + 5256), v37, v81) >= 0 )
        {
          if ( (v81[0] & 3) != 0 )
LABEL_138:
            ExRaiseDatatypeMisalignment();
          if ( sub_140201780(
                 v71,
                 0LL,
                 v38,
                 &v47,
                 v58,
                 v21,
                 *(_DWORD *)(*(_QWORD *)&v81[0] + 180LL),
                 *(_DWORD *)(*(_QWORD *)&v81[0] + 196LL) - 4) )
          {
            v19 = v47;
            v20 = CurrentThread;
            goto LABEL_148;
          }
          v19 = v47;
        }
      }
      v20 = CurrentThread;
      goto LABEL_148;
    }
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        if ( v27 > 0x7FFFFFFEFFFFLL )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        if ( v54 && v27 == *(_QWORD *)(v53 + 360) )
        {
          v8 = 2;
          v52 = 2;
          v80[0] = v54[39];
          v69 = v54 + 40;
          v70 = v54[31];
          v68 = v54[32];
          v72 = v54[33];
          v71 = v54[34];
          v76 = v54[35];
          v77 = v54[36];
          v78 = v54[37];
          v79 = v54[38];
          if ( v45 )
            *(_QWORD *)sub_14025CB30(v66, 0xBu, 0xFFFFF780000003D8uLL, 0LL) = 0LL;
          v54 = *(_QWORD **)(v22 + 32);
          v59 = v54;
          v36 = *(ULONG64 **)(v22 + 40);
          if ( !v36 )
          {
            v20 = CurrentThread;
            goto LABEL_148;
          }
          j = *(_QWORD *)(v22 + 40);
          v56 = (unsigned __int64)v69;
          v57 = *v36;
        }
      }
      else
      {
        if ( v8 != 2 )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        if ( v27 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v27 != *(_QWORD *)(v53 + 360) )
          {
            v20 = CurrentThread;
            goto LABEL_148;
          }
          v79 = *(_QWORD *)(v53 + 384);
          if ( (v79 & 3) != 0 )
            goto LABEL_138;
          v8 = 1;
          v52 = 1;
          v69 = *(unsigned __int64 **)(v79 + 72);
          v56 = v67;
          v57 = v68;
          v54 = v59;
          if ( v59 )
          {
            v53 = v59[26];
            v61 = v53;
            v19 = v47;
          }
          else
          {
            v19 = v47;
            v53 = v61;
          }
        }
      }
      goto LABEL_40;
    }
    if ( (a3 & 1) == 0 && v27 < 0xFFFF800000000000uLL )
    {
      v20 = CurrentThread;
      goto LABEL_148;
    }
    if ( (a3 & 1) != 0 )
    {
      if ( v27 < 0xFFFF800000000000uLL )
      {
        if ( v27 > 0x7FFFFFFEFFFFLL )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        if ( v27 != *(_QWORD *)(v53 + 360) )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        v8 = 1;
        v52 = 1;
        if ( v54 )
        {
          v53 = v54[26];
          v61 = v53;
          if ( v53 < 0xFFFF800000000000uLL )
          {
            v20 = CurrentThread;
            goto LABEL_148;
          }
        }
        if ( v45 )
        {
          v55 |= 0x100040u;
          v44 = sub_14025CB30(v66, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
          *(_QWORD *)v44 = 1LL;
          *((_QWORD *)v44 + 1) = __readmsr(0x6A7u);
        }
        v56 = v67;
        v57 = v68;
LABEL_40:
        if ( v19 >= v51 )
          *(_QWORD *)(v71 + 8LL * (v19 - v51)) = v80[0];
        v47 = ++v19;
        if ( v19 >= v58 )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        v21 = v51;
        v20 = CurrentThread;
      }
      else
      {
        if ( !v19 )
          goto LABEL_40;
        v20 = CurrentThread;
      }
    }
    else
    {
      if ( !v46 )
        goto LABEL_40;
      v20 = CurrentThread;
    }
  }
  if ( v56 < 0xFFFF800000000000uLL )
    goto LABEL_147;
  sub_140294D90((__int64)&v55, (__int64)&v72, (__int64)&v73);
  if ( v55 <= 9 )
  {
    v29 = 929;
    if ( _bittest(&v29, v55) )
      goto LABEL_147;
  }
  v30 = KeGetCurrentThread();
  v31 = v55;
  if ( v55 != 1 )
  {
    if ( (KeGetPcr()[36].Unused0[2] & 1) != 0 && v30 != *((struct _KTHREAD **)KeGetCurrentPrcb() + 3) )
    {
      v43 = KeGetPcr()[36].Unused[0] + 80;
      v28 = v43 - (unsigned int)dword_140D05050;
      if ( v28 <= (unsigned __int64)v23 && (unsigned __int64)v23 < v43 )
      {
        v57 = v43;
        v56 = v43 - (unsigned int)dword_140D05050;
        goto LABEL_60;
      }
    }
    v31 = v55;
  }
  v32 = 0;
  v33 = v82[0];
  if ( !v82[0] )
  {
    LOBYTE(v28) = 1;
    sub_140298AF8(v30, v82, v28);
    v33 = v82[0];
  }
  v34 = 1;
  if ( v31 > 0xA || (v35 = 1090, !_bittest(&v35, v31)) || !v32 )
  {
    v34 = sub_140298AF8(v30, v82, 0LL);
    v33 = v82[0];
  }
  if ( v34 )
  {
    v72 = v82[1];
    v73 = v33;
    if ( (unsigned __int64)v23 >= v82[1] && (unsigned __int64)v23 < v33 )
    {
      v56 = v82[1];
      v57 = v33;
LABEL_60:
      v54 = v59;
      v8 = v52;
      v53 = v61;
      v19 = v47;
      goto LABEL_28;
    }
  }
  v19 = v47;
LABEL_147:
  v20 = CurrentThread;
LABEL_148:
  if ( (a3 & 1) != 0 && !v49 )
    *((_DWORD *)v20 + 29) &= ~0x20u;
  return v19;
}
