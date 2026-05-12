/*
 * XREFs of sub_1C002095C @ 0x1C002095C
 * Callers:
 *     sub_1C00A353C @ 0x1C00A353C (sub_1C00A353C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001A3AC @ 0x1C001A3AC (sub_1C001A3AC.c)
 *     sub_1C0020C68 @ 0x1C0020C68 (sub_1C0020C68.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0060D8C @ 0x1C0060D8C (sub_1C0060D8C.c)
 *     sub_1C0063CE0 @ 0x1C0063CE0 (sub_1C0063CE0.c)
 *     sub_1C00A25D0 @ 0x1C00A25D0 (sub_1C00A25D0.c)
 *     sub_1C00A3774 @ 0x1C00A3774 (sub_1C00A3774.c)
 */

__int64 __fastcall sub_1C002095C(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // eax
  _BYTE *v7; // r15
  __int64 v8; // rdx
  _WORD *v9; // r10
  int v10; // r11d
  _QWORD *v11; // r14
  _BYTE *v12; // r13
  _BYTE *v13; // r12
  _BYTE *v14; // r15
  int v15; // eax
  __int16 v16; // r8
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int16 *v23; // rbx
  __int64 v24; // rax
  _BYTE *v25; // [rsp+40h] [rbp-99h]
  _BYTE *v26; // [rsp+48h] [rbp-91h]
  _WORD *v27; // [rsp+50h] [rbp-89h] BYREF
  __int64 v28; // [rsp+58h] [rbp-81h] BYREF
  __int64 *v29; // [rsp+60h] [rbp-79h]
  __int128 v30; // [rsp+68h] [rbp-71h] BYREF
  char v31; // [rsp+78h] [rbp-61h]
  __int128 v32; // [rsp+80h] [rbp-59h] BYREF
  char v33; // [rsp+90h] [rbp-49h]
  _OWORD Dst[4]; // [rsp+A0h] [rbp-39h] BYREF
  char v35; // [rsp+E0h] [rbp+7h]

  v2 = *(_QWORD *)(a1 + 8);
  v29 = a2;
  v4 = sub_1C0007CF4(256LL, 718LL, 1229218130LL, v2);
  v5 = v4;
  v28 = 359LL;
  if ( !v4 )
  {
    v17 = -1073741801;
    goto LABEL_15;
  }
  v27 = (_WORD *)v4;
  v6 = *(_DWORD *)(a1 + 1872);
  if ( (v6 & 1) != 0 )
  {
    v17 = sub_1C0020C68(
            v5,
            359,
            (unsigned int)&v27,
            (unsigned int)&v28,
            0,
            (__int64)L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
            *(_QWORD *)(a1 + 104) + 8LL,
            *(_QWORD *)(a1 + 104) + 16LL,
            *(_QWORD *)(a1 + 104) + 32LL);
    v9 = v27 + 1;
    v8 = v28 - 1;
    ++v27;
    if ( v17 < 0 )
      goto LABEL_13;
    v21 = sub_1C0020C68((_DWORD)v9, v8, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"SCSI\\VMLUN");
  }
  else
  {
    if ( (v6 & 0x20) == 0 )
    {
      v7 = *(_BYTE **)(a1 + 104);
      v11 = (_QWORD *)sub_1C00A25D0(*v7 & 0x1F);
      if ( *(_DWORD *)(a1 + 3344) == 17 )
      {
        v24 = *(_QWORD *)(a1 + 152);
        if ( v24 )
        {
          v17 = sub_1C0020C68(
                  v5,
                  v10,
                  (unsigned int)&v27,
                  (unsigned int)&v28,
                  0,
                  (__int64)L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
                  *v11,
                  v7 + 8,
                  v24 + 25,
                  v24 + 90);
          v9 = v27 + 1;
          v8 = v28 - 1;
          ++v27;
          --v28;
          if ( v17 < 0 )
            goto LABEL_13;
          v17 = sub_1C0020C68(
                  (_DWORD)v9,
                  v8,
                  (unsigned int)&v27,
                  (unsigned int)&v28,
                  0,
                  (__int64)L"SCSI\\%hs%8.8hs%40.40hs",
                  *v11,
                  v7 + 8,
                  *(_QWORD *)(a1 + 152) + 25LL);
          v9 = v27 + 1;
          v8 = v28 - 1;
          ++v27;
          --v28;
          if ( v17 < 0 )
            goto LABEL_13;
        }
      }
      v12 = v7 + 32;
      v26 = v7 + 32;
      v13 = v7 + 16;
      v25 = v7 + 16;
      v14 = v7 + 8;
      v15 = sub_1C0020C68(
              (_DWORD)v9,
              v8,
              (unsigned int)&v27,
              (unsigned int)&v28,
              0,
              (__int64)L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
              *v11,
              v14,
              v25,
              v26);
      v16 = 0;
      v9 = v27 + 1;
      v8 = v28 - 1;
      ++v27;
      --v28;
      v17 = v15;
      if ( v15 < 0 )
        goto LABEL_14;
      v18 = sub_1C0020C68(
              (_DWORD)v9,
              v8,
              (unsigned int)&v27,
              (unsigned int)&v28,
              0,
              (__int64)L"SCSI\\%hs%8.8hs%16.16hs",
              *v11,
              v14,
              v13);
      v16 = 0;
      v9 = v27 + 1;
      v8 = v28 - 1;
      ++v27;
      --v28;
      v17 = v18;
      if ( v18 < 0 )
        goto LABEL_14;
      v17 = sub_1C0020C68(
              (_DWORD)v9,
              v8,
              (unsigned int)&v27,
              (unsigned int)&v28,
              0,
              (__int64)L"SCSI\\%hs%8.8hs",
              *v11,
              v14);
      if ( v17 >= 0 )
      {
        ++v27;
        --v28;
        v19 = sub_1C0020C68(
                (_DWORD)v27,
                v28,
                (unsigned int)&v27,
                (unsigned int)&v28,
                0,
                (__int64)L"SCSI\\%8.8hs%16.16hs%1.1hs",
                v14,
                v13,
                v12);
        v16 = 0;
        v9 = v27 + 1;
        v8 = v28 - 1;
        ++v27;
        --v28;
        v17 = v19;
        if ( v19 < 0 )
          goto LABEL_14;
        v20 = sub_1C0020C68(
                (_DWORD)v9,
                v8,
                (unsigned int)&v27,
                (unsigned int)&v28,
                0,
                (__int64)L"%8.8hs%16.16hs%1.1hs",
                v14,
                v13,
                v12);
        v16 = 0;
        v9 = v27 + 1;
        v8 = v28 - 1;
        ++v27;
        v17 = v20;
        if ( v20 < 0 || (unsigned int)sub_1C001A3AC(a1) )
          goto LABEL_14;
        v21 = sub_1C0020C68((_DWORD)v9, v8, (unsigned int)&v27, (unsigned int)&v28, 0, (__int64)L"%hs", v11[1]);
        goto LABEL_12;
      }
LABEL_26:
      v9 = v27;
      goto LABEL_13;
    }
    v23 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 24) + 5912LL);
    v30 = 0LL;
    v31 = 0;
    memset_0(Dst, 0, 0x41uLL);
    v33 = 0;
    v32 = 0LL;
    sub_1C0060D8C(*v23, &v30, 17LL);
    Dst[0] = *(_OWORD *)(v23 + 12);
    Dst[1] = *(_OWORD *)(v23 + 20);
    Dst[2] = *(_OWORD *)(v23 + 28);
    Dst[3] = *(_OWORD *)(v23 + 36);
    v35 = *((_BYTE *)v23 + 88);
    sub_1C0063CE0(v23, &v32, 17LL);
    v17 = sub_1C0020C68(
            v5,
            359,
            (unsigned int)&v27,
            (unsigned int)&v28,
            0,
            (__int64)L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
            "ZNSDisk",
            &v30,
            Dst,
            &v32);
    v9 = v27 + 1;
    v8 = v28 - 1;
    ++v27;
    --v28;
    if ( v17 < 0 )
      goto LABEL_13;
    v17 = sub_1C0020C68(
            (_DWORD)v9,
            v8,
            (unsigned int)&v27,
            (unsigned int)&v28,
            0,
            (__int64)L"NVME\\%hs_%8.8hs%40.40hs",
            "ZNSDisk",
            &v30,
            Dst);
    v9 = v27 + 1;
    v8 = v28 - 1;
    ++v27;
    --v28;
    if ( v17 < 0 )
      goto LABEL_13;
    v17 = sub_1C0020C68(
            (_DWORD)v9,
            v8,
            (unsigned int)&v27,
            (unsigned int)&v28,
            0,
            (__int64)L"NVME\\%hs_%8.8hs",
            "ZNSDisk",
            &v30);
    if ( v17 < 0 )
      goto LABEL_26;
    ++v27;
    v21 = sub_1C0020C68(
            (_DWORD)v27,
            (int)v28 - 1,
            (unsigned int)&v27,
            (unsigned int)&v28,
            0,
            (__int64)L"%hs",
            "GenNvmeDisk");
  }
LABEL_12:
  v17 = v21;
  v9 = v27 + 1;
LABEL_13:
  v16 = 0;
LABEL_14:
  *v9 = v16;
  LOBYTE(v8) = 1;
  sub_1C00A3774(v5, v8, 359LL);
LABEL_15:
  *v29 = v5;
  return (unsigned int)v17;
}
