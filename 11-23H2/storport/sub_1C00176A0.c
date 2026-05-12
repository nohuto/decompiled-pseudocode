/*
 * XREFs of sub_1C00176A0 @ 0x1C00176A0
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C0017A54 @ 0x1C0017A54 (sub_1C0017A54.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C0060EDC @ 0x1C0060EDC (sub_1C0060EDC.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 *     sub_1C0064320 @ 0x1C0064320 (sub_1C0064320.c)
 */

char __fastcall sub_1C00176A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  IRP *v3; // rbp
  char v6; // r11
  char v7; // r15
  char *v8; // rsi
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  LARGE_INTEGER ByteOffset; // r14
  unsigned int v20; // eax
  __int64 v21; // rdx
  char v22; // r8
  ULONG_PTR v24; // rcx
  int v25; // [rsp+78h] [rbp+10h]
  unsigned int v26; // [rsp+80h] [rbp+18h]
  __int64 v27; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 168);
  v3 = *(IRP **)(a2 + 160);
  v27 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    v25 = *(_DWORD *)(v2 + 24);
    v26 = *(_DWORD *)(v2 + 60);
    v27 = *(_QWORD *)(a2 + 168);
    if ( !*(_DWORD *)(v2 + 20) )
    {
      v9 = *(_DWORD *)(v2 + 56);
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(v2 + 4LL * v10 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v12 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v11 <= (unsigned int)v12 )
              break;
          }
LABEL_11:
          if ( ++v10 >= v9 )
            goto LABEL_18;
        }
        v13 = (unsigned int)v11;
        v14 = *(_DWORD *)(v11 + v2) - 64;
        if ( !v14 )
          goto LABEL_9;
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
LABEL_9:
            if ( v13 + 40 <= v12 )
            {
              v8 = (char *)(v13 + v2 + 8);
              goto LABEL_17;
            }
          }
        }
        else if ( v13 + 56 <= v12 )
        {
          v6 = 1;
          v8 = (char *)(v13 + v2 + 8);
          v7 = *v8;
        }
        if ( v6 )
          goto LABEL_18;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v8 = (char *)(v2 + 4);
    v25 = *(_DWORD *)(v2 + 12);
    v26 = *(_DWORD *)(v2 + 16);
LABEL_17:
    v7 = *v8;
  }
LABEL_18:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 8) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 54LL, &unk_1C0083530, a1, v2, *(_BYTE *)(v2 + 3) & 0x3F);
  }
  v16 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v16 != 5 && ((v7 - 8) & 0xDF) != 0 && v16 != 37 || sub_1C0010160(a1, 0LL, a2, 0LL) )
    goto LABEL_40;
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
    ++*(_DWORD *)(a1 + 2200);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( *(_BYTE *)(a1 + 3280) && (dword_1C0093878 & 1) == 0
    || (v20 = *(_DWORD *)(a1 + 1848), ByteOffset.LowPart >= v20) && v20 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      sub_1C0064320(off_1C0093070->AttachedDevice, 56LL, v17, a1, ByteOffset.LowPart, v2);
    }
    *(_BYTE *)(v2 + 3) = 4;
    if ( v7 == 8 )
      *v8 = 40;
LABEL_40:
    if ( (unsigned int)sub_1C00230AC() && v27 && (unsigned __int8)sub_1C0023100(*(_QWORD *)(a1 + 24)) )
      *(_DWORD *)(v21 + 44) = 0;
    if ( (v25 & 0x100) == 0 && !*(_BYTE *)(a1 + 692) )
    {
      *(_BYTE *)(a1 + 692) = 1;
      sub_1C001A2F4();
      *(_BYTE *)(v2 + 3) |= 0x40u;
    }
    sub_1C0017A54(a1, a2);
    v22 = 63;
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
      v3->IoStatus.Status = -1073741661;
    else
      v3->IoStatus.Status = sub_1C0008570(*(_BYTE *)(v2 + 3));
    v24 = v26;
    if ( ((unsigned __int8)v22 & *(_BYTE *)(v2 + 3)) != 18 )
      v24 = 0LL;
    v3->IoStatus.Information = v24;
    sub_1C0017AF4(v3);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F0C4(off_1C0093070->AttachedDevice, 57LL, &unk_1C0083530, a1, v3, v3->IoStatus.Status);
    }
    if ( (qword_1C0093468 & 0x10) != 0 )
      sub_1C0060EDC(*(_QWORD *)(a1 + 24), v3, v2);
    sub_1C0003440(v3, 0, v3->IoStatus.Status);
    return 1;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 8) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C0064320(off_1C0093070->AttachedDevice, 55LL, v17, a1, ByteOffset.LowPart, v2);
  }
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  sub_1C0062414(a1, a2, v8);
  return 0;
}
