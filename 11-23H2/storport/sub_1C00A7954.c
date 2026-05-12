/*
 * XREFs of sub_1C00A7954 @ 0x1C00A7954
 * Callers:
 *     sub_1C00A7D38 @ 0x1C00A7D38 (sub_1C00A7D38.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010124 @ 0x1C0010124 (sub_1C0010124.c)
 *     sub_1C001AA84 @ 0x1C001AA84 (sub_1C001AA84.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C00A7954(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  unsigned int v8; // ebx
  _QWORD *v9; // r13
  bool v10; // zf
  unsigned int v11; // ecx
  int v12; // edi
  unsigned int v13; // ebp
  _DWORD *v14; // rsi
  int v15; // r9d
  _QWORD *v16; // r8
  _BYTE *v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  _QWORD *v29; // rbp
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  char v33; // [rsp+88h] [rbp+10h]

  v4 = (_QWORD *)(a2 + 24);
  v5 = *(_QWORD **)(a2 + 24);
  v33 = 0;
  *a4 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( v5 == v4 )
    goto LABEL_7;
  do
  {
    v10 = v5[6] == a3;
    v11 = v8 + 1;
    v5 = (_QWORD *)*v5;
    if ( !v10 )
      v11 = v8;
    v8 = v11;
  }
  while ( v5 != v4 );
  if ( v11 <= 4 )
  {
LABEL_7:
    *(_DWORD *)(a3 + 72) = v8 << 16;
    if ( 16 * ((unsigned __int64)v8 + 1) <= 0x18 )
      v13 = 24;
    else
      v13 = 16 * (v8 + 1);
    v14 = (_DWORD *)sub_1C0007CF4(64LL, v13, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v14 )
      return (unsigned int)-1073741670;
    v14[2] = 1196246089;
    *v14 = 32;
    v15 = 0;
    v14[1] = 32;
    v14[3] = v8;
    v16 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      do
      {
        if ( v16[6] == a3 )
        {
          v17 = (_BYTE *)v16[5];
          v18 = &v14[4 * v15++ + 4];
          *(_WORD *)v18 = 1;
          v18[1] = 4;
          *((_BYTE *)v18 + 8) = v17[74];
          *((_BYTE *)v18 + 9) = v17[75];
          *((_BYTE *)v18 + 10) = v17[76];
        }
        v16 = (_QWORD *)*v16;
      }
      while ( v16 != v4 );
      v9 = 0LL;
    }
    v20 = (_QWORD *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0x2Au, *(_BYTE *)(a1 + 442), 0);
    if ( !v20 )
    {
      v12 = -1073741670;
      goto LABEL_51;
    }
    v21 = sub_1C0008424(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v19, a1);
    v32 = v21;
    v23 = v21;
    if ( v21 )
    {
      v24 = v21 + 48;
      sub_1C0004C64(v21 + 48, v22, 0, 0LL);
      *(_BYTE *)(v24 + 17) |= 8u;
      *(_QWORD *)(v24 + 176) = 0LL;
      *(_QWORD *)(v24 + 184) = v14;
      *(_QWORD *)(v24 + 168) = v20;
      if ( *(_BYTE *)(a1 + 442) == 1 )
      {
        *((_DWORD *)v20 + 15) = v13;
        v9 = v20;
        v20[12] = v24;
        *((_DWORD *)v20 + 6) = 256;
        v20[10] = 0LL;
        *((_DWORD *)v20 + 5) = 42;
        v20[8] = v14;
        *((_DWORD *)v20 + 10) = 10;
        v33 = 1;
        if ( !*(_BYTE *)(a1 + 4306) )
          *((_DWORD *)v20 + 6) = 192;
      }
      else
      {
        *((_DWORD *)v20 + 4) = v13;
        *(_WORD *)v20 = 88;
        *((_DWORD *)v20 + 3) = 256;
        v25 = 256;
        v20[6] = v24;
        *((_BYTE *)v20 + 2) = 42;
        v20[3] = v14;
        *((_DWORD *)v20 + 5) = 10;
        if ( !*(_BYTE *)(a1 + 4306) )
          v25 = 192;
        *((_DWORD *)v20 + 3) = v25;
      }
      sub_1C0008870(a1, (__int64)v20, v23 + 1104);
      KeInitializeEvent((PRKEVENT)(v24 + 664), NotificationEvent, 0);
      sub_1C0010124(v24, (__int64)sub_1C00100B0);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
        && BYTE1(off_1C0093070->Timer) )
      {
        sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x49u, (__int64)&unk_1C0083210, v24, v20);
      }
      if ( *(_BYTE *)(a1 + 4306) )
        v27 = sub_1C0008DB8(a1, v24);
      else
        v27 = sub_1C0008E14(a1, (_QWORD *)v24, v26);
      v12 = v27;
      if ( v27 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v24 + 664), Executive, 0, 0, 0LL);
        v12 = sub_1C0008570(*((_BYTE *)v20 + 3));
      }
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
        && BYTE1(off_1C0093070->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)v20 + 3);
        sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x4Au, (__int64)&unk_1C0083210, v12, Timeout);
      }
      if ( v12 >= 0 )
      {
        if ( *v14 >= 0x18u && v14[2] == 1297105993 )
        {
          *a4 = v14;
          v14 = 0LL;
        }
        else
        {
          v12 = -1073739509;
        }
      }
      v29 = v20;
      sub_1C0008C44(v24, 0, v28);
      sub_1C00084E4(a1, v32);
      if ( v33 == 1 )
      {
        if ( v9 )
          v29 = v9;
        v29[10] = 0LL;
        v29[13] = 0LL;
LABEL_50:
        sub_1C001AA84(v20);
        if ( !v14 )
          return (unsigned int)v12;
LABEL_51:
        ExFreePoolWithTag(v14, 0x44436152u);
        return (unsigned int)v12;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    v20[6] = 0LL;
    v20[7] = 0LL;
    goto LABEL_50;
  }
  return (unsigned int)-1073741637;
}
