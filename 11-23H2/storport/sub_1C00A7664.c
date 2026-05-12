/*
 * XREFs of sub_1C00A7664 @ 0x1C00A7664
 * Callers:
 *     sub_1C0060100 @ 0x1C0060100 (sub_1C0060100.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010124 @ 0x1C0010124 (sub_1C0010124.c)
 *     sub_1C001AA84 @ 0x1C001AA84 (sub_1C001AA84.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C00A7664(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v4; // r12
  unsigned __int8 *v5; // r15
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int8 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v20; // r9d
  unsigned __int8 *v21; // rsi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v2 && v2 != -64 && *(_QWORD *)(v2 + 56) )
  {
    v7 = sub_1C0007CF4(64LL, 24LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v8 = v7;
    if ( !v7 )
      return (unsigned int)-1073741670;
    *(_DWORD *)v7 = 24;
    *(_DWORD *)(v7 + 4) = 24;
    *(_DWORD *)(v7 + 8) = 1179468873;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v2 + 56);
    v10 = (unsigned __int8 *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0x2Bu, *(_BYTE *)(v2 + 162), 0);
    if ( !v10 )
      return (unsigned int)-1073741670;
    v11 = sub_1C0008424(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v9, a1);
    v23 = v11;
    if ( v11 )
    {
      v14 = v11 + 48;
      sub_1C0004C64(v11 + 48, v12, 0, 0LL);
      v15 = v23 + 1104;
      *(_QWORD *)(v14 + 176) = 0LL;
      *(_QWORD *)(v14 + 184) = v8;
      *(_QWORD *)(v14 + 168) = v10;
      if ( *(_BYTE *)(v2 + 162) == 1 )
      {
        *((_QWORD *)v10 + 8) = v8;
        v4 = 1;
        *((_DWORD *)v10 + 5) = 43;
        *((_DWORD *)v10 + 6) = 256;
        v5 = v10;
        *((_DWORD *)v10 + 15) = 24;
        *((_QWORD *)v10 + 10) = 0LL;
        *((_QWORD *)v10 + 12) = v14;
        *((_QWORD *)v10 + 13) = v15;
        *((_DWORD *)v10 + 10) = 10;
        if ( !*(_BYTE *)(a1 + 4306) )
          *((_DWORD *)v10 + 6) = 128;
      }
      else
      {
        *((_QWORD *)v10 + 7) = v15;
        *((_QWORD *)v10 + 3) = v8;
        *(_WORD *)v10 = 88;
        v16 = 256;
        *((_DWORD *)v10 + 3) = 256;
        v10[2] = 43;
        *((_DWORD *)v10 + 4) = 24;
        *((_QWORD *)v10 + 6) = v14;
        *((_DWORD *)v10 + 5) = 10;
        if ( !*(_BYTE *)(a1 + 4306) )
          v16 = 128;
        *((_DWORD *)v10 + 3) = v16;
      }
      KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
      sub_1C0010124(v14, (__int64)sub_1C00100B0);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
        && BYTE1(off_1C0093070->Timer) )
      {
        sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x4Bu, (__int64)&unk_1C0083210, v14, v10);
      }
      if ( *(_BYTE *)(a1 + 4306) )
        v18 = sub_1C0008DB8(a1, v14);
      else
        v18 = sub_1C0008E14(a1, (_QWORD *)v14, v17);
      v20 = v18;
      if ( v18 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v14 + 664), Executive, 0, 0, 0LL);
        v20 = sub_1C0008570(v10[3]);
      }
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
        && BYTE1(off_1C0093070->Timer) )
      {
        LODWORD(Timeout) = v10[3];
        sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x4Cu, (__int64)&unk_1C0083210, v20, Timeout);
      }
      *(_QWORD *)(v2 + 56) = 0LL;
      v21 = v10;
      sub_1C0008C44(v14, 0, v19);
      sub_1C00084E4(a1, v23);
      v6 = 0;
      if ( v4 == 1 )
      {
        if ( v5 )
          v21 = v5;
        *((_QWORD *)v21 + 10) = 0LL;
        *((_QWORD *)v21 + 13) = 0LL;
        goto LABEL_10;
      }
    }
    else
    {
      v6 = -1073741670;
    }
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
LABEL_10:
    sub_1C001AA84(v10);
  }
  return v6;
}
