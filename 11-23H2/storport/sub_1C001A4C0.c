/*
 * XREFs of sub_1C001A4C0 @ 0x1C001A4C0
 * Callers:
 *     sub_1C001A3D0 @ 0x1C001A3D0 (sub_1C001A3D0.c)
 *     sub_1C00A1C44 @ 0x1C00A1C44 (sub_1C00A1C44.c)
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C001AEA8 @ 0x1C001AEA8 (sub_1C001AEA8.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C003EFA4 @ 0x1C003EFA4 (sub_1C003EFA4.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 */

__int64 __fastcall sub_1C001A4C0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  unsigned int *v6; // r15
  _BYTE *v7; // rbp
  char *v8; // r13
  __int64 v9; // rdi
  unsigned int *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  char v18; // r10
  char v19; // cl
  char v20; // al
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // ebp
  _QWORD *v24; // r14
  __int64 v26; // [rsp+30h] [rbp-58h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp-50h] BYREF
  char v30; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v5 = *(_QWORD *)(a1 + 64);
  v30 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_DWORD *)v5 == 1431193940 )
    v9 = *(_QWORD *)(v5 + 24);
  else
    v9 = v5;
  if ( *(_DWORD *)v5 != 1431193940 )
    v5 = 0LL;
  if ( !*(_QWORD *)(v9 + 568) || !*(_QWORD *)(v9 + 576) )
    return 0LL;
  Interval.QuadPart = -1000LL;
  v10 = 0LL;
  v11 = 0LL;
  v26 = 0LL;
  v12 = (*(_DWORD *)(v9 + 484) + 7) & 0xFFFFFFF8;
  v13 = 0;
  while ( 1 )
  {
    if ( !v10 )
    {
      v10 = (unsigned int *)sub_1C0007BA4(*(_QWORD *)(v9 + 8), 0x25u, *(_BYTE *)(v9 + 442), 0);
      v11 = v26;
    }
    if ( !v11 )
    {
      v11 = sub_1C0008424(v12 + 1104, 0LL, v9);
      v26 = v11;
    }
    if ( v10 && v11 )
    {
      v15 = v11 + 48;
      sub_1C0004C64(v11 + 48, 0LL, 0, 0LL);
      *(_QWORD *)(v15 + 168) = v10;
      *(_QWORD *)(v15 + 176) = *((_QWORD *)v10 + 6);
      if ( *(_BYTE *)(v9 + 442) == 1 )
      {
        v16 = v10[13];
        v6 = v10;
        *((_QWORD *)v10 + 8) = v31;
        v7 = (char *)v10 + v16;
        v10[15] = a5;
        v10[5] = 37;
        v8 = (char *)v10 + v10[30];
        *((_QWORD *)v10 + 12) = v15;
        v10[6] = 256;
        v10[10] = 10;
        *(_DWORD *)v8 = 98;
        *((_DWORD *)v8 + 1) = 16;
        *((_DWORD *)v8 + 3) = a2;
        v8[8] = 0;
        v17 = *((_QWORD *)v10 + 8);
      }
      else
      {
        *((_QWORD *)v10 + 3) = v31;
        v10[4] = a5;
        *(_WORD *)v10 = 88;
        v10[2] = a2;
        v17 = v31;
        *((_QWORD *)v10 + 6) = v15;
        *((_BYTE *)v10 + 2) = 37;
        *((_BYTE *)v10 + 4) = 0;
        v10[3] = 256;
        v10[5] = 10;
      }
      *(_QWORD *)(v15 + 184) = v17;
      sub_1C0008870(v9, (__int64)v10, v26 + 1104);
      v19 = *(_BYTE *)(v9 + 442);
      if ( **(_DWORD **)(a1 + 64) == 1431193940 )
      {
        v20 = *(_BYTE *)(v5 + 96);
        if ( v19 == 1 )
        {
          v7[8] = v20;
          v7[9] = *(_BYTE *)(v5 + 97);
          v7[10] = *(_BYTE *)(v5 + 98);
        }
        else
        {
          *((_BYTE *)v10 + 5) = v20;
          *((_BYTE *)v10 + 6) = *(_BYTE *)(v5 + 97);
          *((_BYTE *)v10 + 7) = *(_BYTE *)(v5 + 98);
        }
      }
      else if ( v19 == 1 )
      {
        *((_DWORD *)v8 + 4) = 1;
        *((_WORD *)v7 + 4) = 0;
        v7[10] = v18;
      }
      else
      {
        *(_WORD *)((char *)v10 + 5) = 0;
        v10[16] = 1;
        *((_BYTE *)v10 + 7) = v18;
      }
      KeInitializeEvent((PRKEVENT)(v15 + 664), NotificationEvent, 0);
      *(_QWORD *)(v15 + 656) = sub_1C00100B0;
      if ( *(_BYTE *)(v9 + 442) == 1 )
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
        {
          if ( (HIDWORD(off_1C0093070->Timer) & 2) != 0 && BYTE1(off_1C0093070->Timer) >= 4u )
            sub_1C003F194(off_1C0093070->AttachedDevice, 58LL, &unk_1C0083210, v15, v6, *((_QWORD *)v6 + 13));
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 2) != 0
            && BYTE1(off_1C0093070->Timer) >= 4u )
          {
            sub_1C003EEB0(
              off_1C0093070->AttachedDevice,
              59LL,
              &unk_1C0083210,
              (unsigned __int8)v7[8],
              (unsigned __int8)v7[9],
              (unsigned __int8)v7[10]);
          }
        }
      }
      else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
      {
        if ( (HIDWORD(off_1C0093070->Timer) & 2) != 0 && BYTE1(off_1C0093070->Timer) >= 4u )
          sub_1C003F194(off_1C0093070->AttachedDevice, 60LL, &unk_1C0083210, v15, v10, *((_QWORD *)v10 + 7));
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 2) != 0
          && BYTE1(off_1C0093070->Timer) >= 4u )
        {
          sub_1C003EEB0(
            off_1C0093070->AttachedDevice,
            61LL,
            &unk_1C0083210,
            *((unsigned __int8 *)v10 + 5),
            *((unsigned __int8 *)v10 + 6),
            *((unsigned __int8 *)v10 + 7));
        }
      }
      if ( v5 )
      {
        sub_1C0008A7C(v5, 0, 1LL, &v30);
      }
      else if ( *(_QWORD *)(v9 + 4896) )
      {
        sub_1C0008BF0(v9, 0LL, 1LL);
      }
      if ( *(_BYTE *)(v9 + 4306) )
        v22 = sub_1C0008DB8(v9, v15);
      else
        v22 = sub_1C0008E14(v9, (_QWORD *)v15, v21);
      v23 = v22;
      if ( v22 < 0 )
        v23 = 0;
      else
        KeWaitForSingleObject((PVOID)(v15 + 664), Executive, 0, 0, 0LL);
      if ( (*(_BYTE *)(v15 + 17) & 1) != 0 )
      {
        sub_1C0037008(v9, *(unsigned int *)(v15 + 748));
        *(_BYTE *)(v15 + 17) &= ~1u;
      }
      if ( v5 )
      {
        sub_1C0008990(v5, 0, 0, &v30);
        if ( (*(_BYTE *)(v15 + 17) & 2) != 0 )
        {
          sub_1C001AEA8(v5, *(unsigned int *)(v15 + 748));
          *(_BYTE *)(v15 + 17) &= ~2u;
        }
      }
      else if ( *(_QWORD *)(v9 + 4896) )
      {
        sub_1C0008BB4(v9, 0LL, 0LL);
      }
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 2) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        sub_1C003EFA4(off_1C0093070->AttachedDevice, 62LL, a3, v9, 0, a2);
      }
      v24 = v10 + 12;
      goto LABEL_67;
    }
    v14 = v13++;
    if ( v14 >= 3 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
    v11 = v26;
  }
  v24 = v10 + 12;
  v23 = -1073741801;
  v15 = 0LL;
  v6 = 0LL;
  if ( !v11 )
    goto LABEL_68;
LABEL_67:
  sub_1C0008C44(v15, 0, a3);
  sub_1C00084E4(v9, v26);
LABEL_68:
  if ( v10 )
  {
    if ( *(_BYTE *)(v9 + 442) == 1 )
    {
      if ( !v6 )
        v6 = v10;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
    }
    else
    {
      *v24 = 0LL;
      *((_QWORD *)v10 + 7) = 0LL;
    }
    ExFreePoolWithTag(v10, 0x72536152u);
  }
  return v23;
}
