/*
 * XREFs of sub_1C004C82C @ 0x1C004C82C
 * Callers:
 *     sub_1C0011820 @ 0x1C0011820 (sub_1C0011820.c)
 *     sub_1C0011880 @ 0x1C0011880 (sub_1C0011880.c)
 * Callees:
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0034684 @ 0x1C0034684 (sub_1C0034684.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 *     sub_1C0043564 @ 0x1C0043564 (sub_1C0043564.c)
 *     sub_1C004BA94 @ 0x1C004BA94 (sub_1C004BA94.c)
 *     sub_1C004FFE8 @ 0x1C004FFE8 (sub_1C004FFE8.c)
 */

__int64 __fastcall sub_1C004C82C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v8; // rcx
  _WORD *v9; // rbx
  __int64 v11; // r8
  bool v12; // cf
  int v13; // ecx
  char *v14; // rcx
  _QWORD *v15; // r10
  struct _DEVICE_OBJECT *v16; // r11
  _QWORD *v17; // r8
  unsigned int v18; // ebp
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v19[0] = 0LL;
  if ( *(_DWORD *)v3 == 1431193940 )
    v3 = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 4488);
  v9 = (_WORD *)(v3 + 4320);
  if ( v8 )
    goto LABEL_14;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 3u )
  {
    sub_1C003F194((__int64)off_1C0093070->AttachedDevice, 0x3Bu, (__int64)&unk_1C008A080, a2, v3 + 4320, v3);
  }
  sub_1C0034684(v3, a2);
  v8 = *(_QWORD *)(v3 + 4488);
  if ( v8 )
  {
LABEL_14:
    v11 = v8 + 1104;
    v19[2] = v8 + 48;
    *(_BYTE *)(v3 + 4496) = 1;
    v19[3] = v8 + 848;
    v12 = *(_BYTE *)(v3 + 4497) != 0;
    v19[1] = v8 + 1104;
    v13 = v12 ? 2304 : 256;
    if ( *(_BYTE *)(v3 + 442) == 1 )
    {
      *(_DWORD *)(v3 + 4344) = v13;
      *v9 = 8;
      *(_WORD *)(v3 + 4356) = 2;
      *(_QWORD *)(v3 + 4416) = 0LL;
      *(_QWORD *)(v3 + 4400) = a2;
      *(_BYTE *)(v3 + 4322) = 40;
      *(_DWORD *)(v3 + 4328) = 1397899864;
      *(_DWORD *)(v3 + 4332) = 1;
      *(_DWORD *)(v3 + 4336) = 168;
      *(_DWORD *)(v3 + 4340) = 36;
      *(_DWORD *)(v3 + 4360) = *(_DWORD *)(v3 + 5536);
      *(_DWORD *)(v3 + 4440) = 144;
      *(_DWORD *)(v3 + 4372) = 128;
      *(_QWORD *)(v3 + 4384) = 0LL;
      *(_DWORD *)(v3 + 4380) = 0;
      *(_DWORD *)(v3 + 4376) = 1;
      *(_WORD *)(v3 + 4448) = 1;
      *(_DWORD *)(v3 + 4452) = 4;
      *(_WORD *)(v3 + 4450) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v3 + 4456) = 0;
      *(_BYTE *)(v3 + 4458) = 0;
      v14 = (char *)v9 + *(unsigned int *)(v3 + 4440);
      *(_DWORD *)v14 = 97;
      *((_DWORD *)v14 + 1) = 12;
      *((_DWORD *)v14 + 4) = *(_DWORD *)(v4 + 32);
      *((_DWORD *)v14 + 3) = *(_DWORD *)(v4 + 24);
      v14[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4368) = 0LL;
      *v9 = 88;
      *(_BYTE *)(v3 + 4322) = 36;
      *(_QWORD *)(v3 + 4344) = 0LL;
      *(_DWORD *)(v3 + 4336) = 0;
      *(_DWORD *)(v3 + 4384) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v3 + 4328) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v3 + 4332) = v13;
      *(_DWORD *)(v3 + 4340) = *(_DWORD *)(v3 + 5536);
      *(_DWORD *)(v3 + 4324) = 1;
    }
    sub_1C0008870(v3, v3 + 4320, v11);
    if ( off_1C0093070 != v16 && (HIDWORD(off_1C0093070->Timer) & 4) != 0 && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      v17 = (_QWORD *)(v3 + 4424);
      if ( *(_BYTE *)(v3 + 4322) != 40 )
        v17 = v15;
      sub_1C0043564((__int64)off_1C0093070->AttachedDevice, 0x3Du, (__int64)&unk_1C008A080, a2, v3 + 4320, *v17, v3);
    }
    v18 = sub_1C004BA94(a1, a2, v3 + 4320, (__int64)v19, a3);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C004FFE8(off_1C0093070->AttachedDevice, 62LL, &unk_1C008A080, a2, v3 + 4320, v3, v18);
    }
    return v18;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      sub_1C003F194((__int64)off_1C0093070->AttachedDevice, 0x3Cu, (__int64)&unk_1C008A080, a2, v3 + 4320, v3);
    }
    return 3221225495LL;
  }
}
