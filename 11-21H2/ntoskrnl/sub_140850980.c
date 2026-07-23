/*
 * XREFs of sub_140850980 @ 0x140850980
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_1403D3464 @ 0x1403D3464 (sub_1403D3464.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_1405D02D0 @ 0x1405D02D0 (sub_1405D02D0.c)
 *     sub_1405D39FC @ 0x1405D39FC (sub_1405D39FC.c)
 *     sub_1405D3B30 @ 0x1405D3B30 (sub_1405D3B30.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 *     sub_140850D98 @ 0x140850D98 (sub_140850D98.c)
 *     sub_140850E08 @ 0x140850E08 (sub_140850E08.c)
 *     sub_140850F5C @ 0x140850F5C (sub_140850F5C.c)
 *     sub_140850FEC @ 0x140850FEC (sub_140850FEC.c)
 *     sub_140992918 @ 0x140992918 (sub_140992918.c)
 */

void __fastcall sub_140850980(__int64 a1)
{
  int v1; // esi
  ULONG_PTR v2; // rbx
  __int64 v4; // r13
  IRP *v5; // r15
  struct _DEVICE_OBJECT *BugCheckParameter4; // r12
  __int64 v7; // r8
  int Status; // eax
  char v9; // bp
  int v10; // r14d
  char v11; // al
  char v12; // dl
  int v13; // r9d
  char v14; // cl
  char v15; // al
  char v16; // cl
  __int64 v17; // rcx
  __int128 *v18; // r9
  int v19; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v21; // al
  bool v22; // r15
  __int64 v23; // rdx
  unsigned int v24; // r10d
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  char v27; // cl
  char v28; // cl
  char v29; // cl
  char v30; // al
  __int64 v31; // r8
  unsigned int v32; // ecx
  char v33; // al
  int v34; // eax
  int v35; // ecx
  int v36; // r8d
  char v37; // al
  char v38; // al
  char v39; // al
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // [rsp+30h] [rbp-58h]
  bool v45; // [rsp+31h] [rbp-57h] BYREF
  char v46; // [rsp+32h] [rbp-56h]
  int v47; // [rsp+34h] [rbp-54h] BYREF
  IRP *v48; // [rsp+38h] [rbp-50h]
  __int128 v49; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  v2 = a1 + 432;
  v44 = 0;
  v46 = 0;
  v49 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v48 = v5;
  v45 = 0;
  v47 = 0;
  sub_1402D66A8(a1 + 432);
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    goto LABEL_70;
  }
  Status = v5->IoStatus.Status;
  v9 = 1;
  v10 = 4;
  if ( Status < 0 )
  {
    if ( Status == -1073741667 || Status == -1073741536 )
      goto LABEL_8;
    if ( *(_BYTE *)(a1 + 64) == 7 )
    {
      *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_8;
    }
    *(_BYTE *)(a1 + 64) = 5;
LABEL_70:
    KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 )
  {
    v21 = *(_BYTE *)(a1 + 65);
    *(_QWORD *)(a1 + 240) = v4;
    if ( (v21 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v21 | 2;
      sub_1403D3464((char *)(a1 + 112), (unsigned __int16 *)(a1 + 1040), (__int64)BugCheckParameter4);
    }
    sub_140850E08(a1, v4, &v45, &v47);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    v22 = v45;
  }
  else
  {
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 2:
        *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
        sub_140850FEC(BugCheckParameter4);
        if ( dword_140D0152C )
          sub_1405D02D0(*(_BYTE *)(a1 + 67));
        v11 = 1;
        goto LABEL_57;
      case 3:
        *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
LABEL_7:
        v2 = a1 + 432;
LABEL_8:
        v11 = 0;
        goto LABEL_9;
      case 4:
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
        goto LABEL_7;
      case 6:
        *(_BYTE *)(a1 + 505) = *(_BYTE *)(a1 + 144);
        *(_BYTE *)(a1 + 64) = 10;
        goto LABEL_7;
      case 7:
        *(_BYTE *)(a1 + 228) = 1;
        *(_BYTE *)(a1 + 64) = 8;
        break;
      case 8:
        break;
      case 0xA:
        *(_BYTE *)(a1 + 64) = 7;
        goto LABEL_7;
      default:
        sub_1405C6658((__int64)v5, 0xD0u, (__int64)BugCheckParameter4);
        KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v5, (ULONG_PTR)BugCheckParameter4);
    }
    v32 = *(_DWORD *)(a1 + 216);
    v22 = v32 < 0x64;
    v33 = *(_BYTE *)(a1 + 65);
    v47 = 10 * (*(_DWORD *)(a1 + 80) - v32);
    if ( (v33 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v33 | 2;
      sub_1403D3464((char *)(a1 + 112), (unsigned __int16 *)(a1 + 1040), (__int64)BugCheckParameter4);
    }
  }
  v23 = *(unsigned __int8 *)(a1 + 69);
  v24 = *(_DWORD *)(a1 + 220);
  if ( v24 != (_DWORD)v23 )
  {
LABEL_35:
    *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 220);
    sub_14081CEB4(a1 + 504, v23);
    v44 = 1;
    if ( v25 < v26 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 4) == 0 )
      {
        LOBYTE(v7) = 1;
        sub_140850F5C(a1 + 112, BugCheckParameter4, v7, 0LL);
        LOBYTE(v31) = 1;
        sub_140850F5C(a1 + 112, BugCheckParameter4, v31, 1LL);
        v27 = *(_BYTE *)(a1 + 65);
        *(_QWORD *)(a1 + 248) = v4;
        goto LABEL_51;
      }
    }
    else if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
    {
      sub_140850F5C(a1 + 112, BugCheckParameter4, 0LL, 0LL);
      sub_140850F5C(a1 + 112, BugCheckParameter4, 0LL, 1LL);
      v27 = *(_BYTE *)(a1 + 65);
      goto LABEL_38;
    }
    v27 = *(_BYTE *)(a1 + 65);
    if ( v25 >= v26 )
    {
LABEL_38:
      v28 = v27 & 0xFB;
LABEL_52:
      *(_BYTE *)(a1 + 65) = v28;
      goto LABEL_53;
    }
LABEL_51:
    v28 = v27 | 4;
    goto LABEL_52;
  }
  v28 = *(_BYTE *)(a1 + 65);
  v30 = v28 & 4;
  if ( v24 >= *(unsigned __int8 *)(a1 + 144) )
  {
    if ( v30 )
      goto LABEL_35;
  }
  else if ( !v30 )
  {
    goto LABEL_35;
  }
LABEL_53:
  if ( *(_DWORD *)(a1 + 216) != *(_DWORD *)(a1 + 80) )
  {
    sub_1407FD7A8(a1 + 504, *(_BYTE *)(a1 + 80));
    v34 = *(_DWORD *)(a1 + 216);
    v35 = *(_DWORD *)(a1 + 128);
    v46 = 1;
    *(_DWORD *)(a1 + 84) = v34;
    sub_1405D3B30(v35, 100 - v34, (__int64)BugCheckParameter4);
    goto LABEL_80;
  }
  v29 = v28 & 1;
  if ( v22 )
  {
    if ( v29 )
      goto LABEL_56;
LABEL_80:
    LOBYTE(v7) = v22;
    sub_140992918(a1 + 112, (_DWORD)BugCheckParameter4, v7, v47, 0);
    v37 = *(_BYTE *)(a1 + 65);
    if ( v22 )
    {
      if ( (v37 & 1) == 0 )
      {
        LOBYTE(v36) = 1;
        sub_140992918(a1 + 112, (_DWORD)BugCheckParameter4, v36, v47, 1);
        *(_QWORD *)(a1 + 256) = v4;
      }
    }
    else if ( (v37 & 1) != 0 )
    {
      sub_140992918(a1 + 112, (_DWORD)BugCheckParameter4, 0, v47, 1);
      sub_1405D39FC((v4 - *(_QWORD *)(a1 + 256)) / 0x2710uLL, (__int64)BugCheckParameter4);
    }
    v38 = *(_BYTE *)(a1 + 65);
    if ( v22 )
      v39 = v38 | 1;
    else
      v39 = v38 & 0xFE;
    *(_BYTE *)(a1 + 65) = v39;
    goto LABEL_56;
  }
  if ( v29 )
    goto LABEL_80;
LABEL_56:
  sub_1403D33C4(a1);
  v11 = v44;
  v5 = v48;
LABEL_57:
  v2 = a1 + 432;
LABEL_9:
  v12 = v46;
  v13 = a1 + 70;
  v14 = v11;
  if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
    v14 = 1;
  v15 = *(_BYTE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
    v12 = 1;
  switch ( v15 )
  {
    case 6:
      goto LABEL_24;
    case 10:
      v10 = 16;
      v13 = a1 + 1040;
      v9 = 0;
      v19 = 2703512;
      v1 = 16;
      goto LABEL_26;
    case 7:
LABEL_62:
      v13 = a1 + 204;
      v19 = 2703508;
      *(_DWORD *)(a1 + 204) = 1;
      v9 = 0;
      v1 = 24;
      goto LABEL_25;
  }
  if ( v14 )
  {
    *(_BYTE *)(a1 + 64) = 3;
    v19 = 2719880;
    goto LABEL_26;
  }
  if ( v12 )
  {
    *(_BYTE *)(a1 + 64) = 4;
    v13 = a1 + 84;
    v19 = 2719884;
    goto LABEL_26;
  }
  v16 = dword_140C5AE10;
  if ( *(unsigned __int8 *)(a1 + 67) != dword_140C5AE10 )
  {
    v13 = a1 + 68;
    *(_BYTE *)(a1 + 64) = 2;
    *(_BYTE *)(a1 + 68) = v16;
    v19 = 2719876;
    v10 = 1;
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 64) = 8;
    *(_BYTE *)(a1 + 208) = 1;
    goto LABEL_62;
  }
  v17 = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v40 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v40 )
    {
      v41 = *(_QWORD *)(a1 + 96) + v40;
      if ( v41 <= v4 )
        *(_DWORD *)(a1 + 112) = 0;
      else
        v17 = v41;
    }
  }
  v18 = 0LL;
  if ( dword_140C22268 )
  {
    v42 = *(unsigned int *)(a1 + 232);
    if ( (_DWORD)v42 )
    {
      v43 = *(_QWORD *)(a1 + 240) + v42;
      if ( v43 <= v4 )
      {
        *(_DWORD *)(a1 + 112) = 0;
        v17 = 0LL;
      }
      else if ( !v17 || v17 >= v43 )
      {
        v17 = v43;
      }
    }
    if ( !byte_140C22328 )
    {
      *((_QWORD *)&v49 + 1) = -1LL;
      v18 = &v49;
      *(_QWORD *)&v49 = 0LL;
    }
  }
  if ( v17 )
    KeSetTimer2(a1 + 296, v4 - v17, 0LL, (__int64)v18);
LABEL_24:
  v1 = 92;
  v13 = a1 + 112;
  v19 = 2703488;
LABEL_25:
  v10 = v1;
LABEL_26:
  LOBYTE(v7) = v9;
  sub_140850D98(*(_QWORD *)(a1 + 56), v19, v7, v13, v10, v1);
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1403DD0E0;
  CurrentStackLocation[-1].Context = (PVOID)a1;
  CurrentStackLocation[-1].Control = -32;
  IofCallDriver(BugCheckParameter4, v5);
LABEL_27:
  sub_1402935D0(v2);
}
