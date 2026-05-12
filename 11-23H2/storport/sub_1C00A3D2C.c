/*
 * XREFs of sub_1C00A3D2C @ 0x1C00A3D2C
 * Callers:
 *     sub_1C00A3BF8 @ 0x1C00A3BF8 (sub_1C00A3BF8.c)
 *     sub_1C00ABD20 @ 0x1C00ABD20 (sub_1C00ABD20.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010124 @ 0x1C0010124 (sub_1C0010124.c)
 *     sub_1C001AA84 @ 0x1C001AA84 (sub_1C001AA84.c)
 *     sub_1C001AEA8 @ 0x1C001AEA8 (sub_1C001AEA8.c)
 *     sub_1C0020E68 @ 0x1C0020E68 (sub_1C0020E68.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 */

__int64 __fastcall sub_1C00A3D2C(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  char *v4; // r14
  char *v5; // r13
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  ULONG v9; // ebp
  __int64 v10; // rdx
  char *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ebp
  char *v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rcx
  char v19; // r10
  __int64 v20; // rcx
  char v21; // al
  char v22; // al
  __int64 v23; // r8
  PDEVICE_OBJECT v24; // rcx
  _QWORD *v25; // r14
  int v26; // eax
  int v27; // eax
  char v29; // al
  _BYTE *v30; // rcx
  char v31; // al
  char v32; // dl
  int v33; // eax
  unsigned __int16 v34; // dx
  int v35; // r8d
  int v36; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  char *v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  char v44; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v40 = 0LL;
  v39 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)v3 == 1431193940 )
    v6 = *(_QWORD *)(v3 + 24);
  else
    v6 = v3;
  v7 = *(_DWORD *)(a3 + 16);
  if ( *(_DWORD *)v3 != 1431193940 )
    v3 = 0LL;
  v8 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  if ( a2 == 9 && v7 <= **(_DWORD **)(a3 + 24) )
    v9 = **(_DWORD **)(a3 + 24);
  v11 = (char *)sub_1C0007BA4(*(_QWORD *)(v6 + 8), 0x17u, *(_BYTE *)(v6 + 442), 0);
  if ( !v11 || (v13 = sub_1C0008424(((*(_DWORD *)(v6 + 484) + 7) & 0xFFFFFFF8) + 1104, v10, v6), (v40 = v13) == 0) )
  {
    v15 = -1073741801;
    goto LABEL_33;
  }
  v8 = v13 + 48;
  sub_1C0004C64(v13 + 48, v14, 0, 0LL);
  *(_QWORD *)(v8 + 176) = *((_QWORD *)v11 + 6);
  *(_QWORD *)(v8 + 168) = v11;
  v15 = sub_1C0020E68(v8, *(void **)(a3 + 24), v9);
  if ( v15 >= 0 )
  {
    if ( *(_BYTE *)(v6 + 442) == 1 )
    {
      v16 = v11;
      v4 = &v11[*((unsigned int *)v11 + 13)];
      *((_DWORD *)v11 + 5) = 23;
      v17 = *((unsigned int *)v11 + 30);
      *((_QWORD *)v11 + 12) = v8;
      v5 = &v11[v17];
      *((_QWORD *)v11 + 8) = *(_QWORD *)(a3 + 24);
      *((_DWORD *)v11 + 15) = v7;
      *((_DWORD *)v11 + 6) = 320;
      *((_DWORD *)v11 + 10) = 10;
      v5[8] = a2;
      *(_DWORD *)v5 = 96;
      *((_DWORD *)v5 + 1) = 16;
      *((_QWORD *)v5 + 2) = *(_QWORD *)(a3 + 8);
      v18 = *((_QWORD *)v11 + 8);
      v39 = v11;
    }
    else
    {
      *((_QWORD *)v11 + 6) = v8;
      v16 = 0LL;
      v11[2] = 23;
      v18 = *(_QWORD *)(a3 + 24);
      *(_WORD *)v11 = 88;
      v11[4] = a2;
      *((_QWORD *)v11 + 3) = v18;
      *((_DWORD *)v11 + 4) = v7;
      *((_QWORD *)v11 + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)v11 + 3) = 320;
      *((_DWORD *)v11 + 5) = 10;
    }
    *(_QWORD *)(v8 + 184) = v18;
    sub_1C0008870(v6, (__int64)v11, v40 + 1104);
    v20 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v20 == 1431193940 )
    {
      v21 = *(_BYTE *)(v20 + 96);
      if ( *(_BYTE *)(v6 + 442) == 1 )
      {
        v4[8] = v21;
        v4[9] = *(_BYTE *)(v20 + 97);
        v22 = *(_BYTE *)(v20 + 98);
LABEL_14:
        v4[10] = v22;
        goto LABEL_15;
      }
      v11[5] = v21;
      v11[6] = *(_BYTE *)(v20 + 97);
      v29 = *(_BYTE *)(v20 + 98);
    }
    else
    {
      v30 = *(_BYTE **)(v6 + 144);
      if ( *(_BYTE *)(v6 + 442) == 1 )
        v5[9] = 1;
      else
        v11[9] = 1;
      v31 = *(_BYTE *)(v6 + 442);
      if ( v30 == (_BYTE *)(v6 + 144) )
      {
        if ( v31 == 1 )
        {
          *((_WORD *)v4 + 4) = 0;
          v4[10] = v19;
        }
        else
        {
          *(_WORD *)(v11 + 5) = 0;
          v11[7] = v19;
        }
LABEL_15:
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        sub_1C0010124(v8, (__int64)sub_1C00100B0);
        if ( v11[2] == 40 )
        {
          if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 )
            goto LABEL_20;
          if ( (HIDWORD(off_1C0093070->Timer) & 0x40) != 0 && BYTE1(off_1C0093070->Timer) >= 4u )
            sub_1C003F194(
              (__int64)off_1C0093070->AttachedDevice,
              0xBu,
              (__int64)&unk_1C008AB38,
              v8,
              v16,
              *((_QWORD *)v16 + 13));
          v24 = off_1C0093070;
          if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
            || (HIDWORD(off_1C0093070->Timer) & 0x40) == 0
            || BYTE1(off_1C0093070->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v33 = (unsigned __int8)v4[10];
          v34 = 12;
          v35 = (unsigned __int8)v4[9];
          v36 = (unsigned __int8)v4[8];
        }
        else
        {
          if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 )
            goto LABEL_20;
          if ( (HIDWORD(off_1C0093070->Timer) & 0x40) != 0 && BYTE1(off_1C0093070->Timer) >= 4u )
            sub_1C003F194(
              (__int64)off_1C0093070->AttachedDevice,
              0xDu,
              (__int64)&unk_1C008AB38,
              v8,
              v11,
              *((_QWORD *)v11 + 7));
          v24 = off_1C0093070;
          if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
            || (HIDWORD(off_1C0093070->Timer) & 0x40) == 0
            || BYTE1(off_1C0093070->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v33 = (unsigned __int8)v11[7];
          v34 = 14;
          v35 = (unsigned __int8)v11[6];
          v36 = (unsigned __int8)v11[5];
        }
        LODWORD(v38) = v33;
        LODWORD(Timeout) = v35;
        sub_1C003EEB0((__int64)v24->AttachedDevice, v34, (__int64)&unk_1C008AB38, v36, Timeout, v38);
LABEL_20:
        if ( v3 )
        {
          sub_1C0008A7C(v3, 0, 1LL, &v44);
          v25 = (_QWORD *)(v6 + 4896);
        }
        else
        {
          v25 = (_QWORD *)(v6 + 4896);
          if ( *(_QWORD *)(v6 + 4896) )
            sub_1C0008BF0(v6, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v6 + 4306) )
          v26 = sub_1C0008DB8(v6, v8);
        else
          v26 = sub_1C0008E14(v6, (_QWORD *)v8, v23);
        v15 = v26;
        if ( v26 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
          v15 = sub_1C0008570(v11[3]);
        }
        if ( v3 )
        {
          if ( (*(_BYTE *)(v8 + 17) & 2) != 0 )
          {
            sub_1C001AEA8(v3, *(_DWORD *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~2u;
          }
          sub_1C0008990(v3, 0, 0, &v44);
        }
        else if ( *v25 )
        {
          if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
          {
            sub_1C0037008(v6, *(unsigned int *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~1u;
          }
          sub_1C0008BB4(v6, 0LL, 0LL);
        }
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x40) != 0
          && BYTE1(off_1C0093070->Timer) >= 4u )
        {
          LODWORD(Timeout) = v15;
          sub_1C003EF50((__int64)off_1C0093070->AttachedDevice, 0xFu, (__int64)&unk_1C008AB38, v8, Timeout);
        }
        goto LABEL_32;
      }
      v32 = v30[40];
      if ( v31 == 1 )
      {
        v4[8] = v32;
        v4[9] = v30[41];
        v22 = v30[42];
        goto LABEL_14;
      }
      v11[5] = v32;
      v11[6] = v30[41];
      v29 = v30[42];
    }
    v11[7] = v29;
    goto LABEL_15;
  }
LABEL_32:
  if ( v15 < 0 )
  {
LABEL_33:
    v27 = 0;
    goto LABEL_34;
  }
  if ( v11[2] == 40 )
    v27 = *((_DWORD *)v39 + 15);
  else
    v27 = *((_DWORD *)v11 + 4);
LABEL_34:
  *(_DWORD *)(a3 + 16) = v27;
  if ( v40 )
  {
    sub_1C0008C44(v8, 0, v12);
    sub_1C00084E4(v6, v40);
  }
  if ( v11 )
  {
    if ( *(_BYTE *)(v6 + 442) == 1 )
    {
      *((_QWORD *)v11 + 10) = 0LL;
      *((_QWORD *)v11 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v11 + 6) = 0LL;
      *((_QWORD *)v11 + 7) = 0LL;
    }
    sub_1C001AA84(v11);
  }
  return (unsigned int)v15;
}
