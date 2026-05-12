/*
 * XREFs of sub_1C00207F8 @ 0x1C00207F8
 * Callers:
 *     sub_1C00A353C @ 0x1C00A353C (sub_1C00A353C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001A3AC @ 0x1C001A3AC (sub_1C001A3AC.c)
 *     sub_1C001E074 @ 0x1C001E074 (sub_1C001E074.c)
 *     sub_1C0020C68 @ 0x1C0020C68 (sub_1C0020C68.c)
 *     sub_1C005D360 @ 0x1C005D360 (sub_1C005D360.c)
 *     sub_1C00A25D0 @ 0x1C00A25D0 (sub_1C00A25D0.c)
 *     sub_1C00A3774 @ 0x1C00A3774 (sub_1C00A3774.c)
 */

__int64 __fastcall sub_1C00207F8(__int64 a1, __int64 *a2)
{
  int *v2; // rdi
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // edi
  int v12; // ecx
  int v13; // edx
  int v14; // r15d
  _WORD *v15; // r14
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // r9
  int v19; // r14d
  unsigned int v20; // eax
  const int *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r10
  const int *v24; // rdi
  int v25; // eax
  int v26; // ecx
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+50h] BYREF

  v2 = (int *)(a1 + 1872);
  v3 = 0LL;
  if ( !(unsigned int)sub_1C001A3AC(a1) || (*v2 & 1) != 0 )
  {
    v7 = sub_1C0007CF4(256LL, 76LL, 1229218130LL, *(_QWORD *)(v6 + 8));
    v3 = v7;
    if ( !v7 )
    {
      v11 = -1073741801;
      goto LABEL_9;
    }
    v27 = v7;
    v8 = *v2;
    v28 = 38LL;
    if ( (v8 & 1) != 0 )
    {
      v25 = sub_1C0020C68(v3, 38, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"SCSI\\VMLUN");
    }
    else if ( (v8 & 0x20) != 0 )
    {
      v11 = sub_1C0020C68(v3, 38, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"NVME\\%hs", "ZNSDisk");
      v26 = v27 + 2;
      v27 += 2LL;
      if ( v11 < 0 )
        goto LABEL_9;
      v25 = sub_1C0020C68(v26, (int)v28 - 1, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"NVME\\RAW");
    }
    else
    {
      v9 = (_QWORD *)sub_1C00A25D0(**(_BYTE **)(a1 + 104) & 0x1F);
      v11 = sub_1C0020C68(v3, v10, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"SCSI\\%hs", *v9);
      v12 = v27 + 2;
      v13 = v28 - 1;
      v27 += 2LL;
      --v28;
      if ( v11 < 0 )
        goto LABEL_9;
      v11 = sub_1C0020C68(v12, v13, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"SCSI\\RAW");
      v14 = v28;
      v15 = (_WORD *)(v27 + 2);
      v27 += 2LL;
      if ( v11 < 0 )
        goto LABEL_9;
      sub_1C001E074(a1);
      if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
      {
LABEL_8:
        *v15 = 0;
        LOBYTE(v16) = 1;
        sub_1C00A3774(v3, v16, 38LL);
        goto LABEL_9;
      }
      v25 = sub_1C0020C68((_DWORD)v15, v14 - 1, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"%hs", "Disk1667");
    }
    v11 = v25;
    v15 = (_WORD *)(v27 + 2);
    if ( v25 < 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v18 = *(_QWORD *)(v6 + 24);
  v19 = *(_DWORD *)(v18 + 4600);
  if ( v19 > 1 )
  {
    v20 = *(_DWORD *)(v6 + 96);
    v21 = 0LL;
    v22 = *(_QWORD *)(v6 + 152);
    if ( v22 )
    {
      v21 = (const int *)(v22 + 90);
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 144);
      if ( v23 && (*(_DWORD *)(*(_QWORD *)(v18 + 568) + 184LL) & 0x40) != 0 )
        v21 = (const int *)(v23 + 41);
    }
    if ( (byte_1C0093A04 & 4) != 0 )
    {
      v24 = &dword_1C0082784;
      if ( v21 )
        v24 = v21;
      sub_1C005D360(
        v20 >> 8,
        v18 + 5000,
        a1 + 186,
        *(_QWORD *)(v18 + 4656),
        *(_DWORD *)(v18 + 56),
        v18 + 5000,
        v20,
        SBYTE1(v20),
        SBYTE2(v20),
        a1 + 160,
        a1 + 169,
        a1 + 186,
        (__int64)v24,
        v19);
    }
  }
  v11 = -1073741637;
LABEL_9:
  result = (unsigned int)v11;
  *a2 = v3;
  return result;
}
