/*
 * XREFs of sub_140AFFF64 @ 0x140AFFF64
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_14075C588 @ 0x14075C588 (sub_14075C588.c)
 *     sub_14075C68C @ 0x14075C68C (sub_14075C68C.c)
 *     KseRegisterShim @ 0x140825A50 (KseRegisterShim.c)
 *     sub_140965160 @ 0x140965160 (sub_140965160.c)
 *     sub_140B003F8 @ 0x140B003F8 (sub_140B003F8.c)
 *     sub_140B01250 @ 0x140B01250 (sub_140B01250.c)
 *     sub_140B01388 @ 0x140B01388 (sub_140B01388.c)
 *     sub_140B01600 @ 0x140B01600 (sub_140B01600.c)
 *     sub_140B01670 @ 0x140B01670 (sub_140B01670.c)
 */

__int64 __fastcall sub_140AFFF64(__int64 a1, int a2)
{
  int v2; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v33 = 0LL;
      EtwRegister(&stru_140011BA0, 0LL, 0LL, &qword_140D00B58);
      v2 = sub_14075C68C(&v33);
      if ( v2 >= 0 && v33 )
      {
        sub_14075C588(v33);
        sub_140B003F8();
        v5 = KseRegisterShim((__int64)&unk_140C04A10, 0LL, 0LL);
        if ( v5 < 0 )
        {
          v19 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v19] = v5;
          v20 = dword_140D04880;
          dword_140C2A220[2 * v19] = 852115;
          if ( (v20 & 2) != 0 )
            sub_14057D738(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          sub_140368C88(12LL, (__int64)"Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v6 = KseRegisterShim((__int64)&unk_140C065A8, 0LL, 0LL);
        if ( v6 < 0 )
        {
          v21 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v21] = v6;
          v22 = dword_140D04880;
          dword_140C2A220[2 * v21] = 1048692;
          if ( (v22 & 2) != 0 )
            sub_14057D738(12LL, "ZeroPool shim: failed to register.\n");
          sub_140368C88(12LL, (__int64)"ZeroPool shim: failed to register.\n");
        }
        v7 = KseRegisterShim((__int64)&unk_140C06688, 0LL, 0LL);
        if ( v7 < 0 )
        {
          v23 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v23] = v7;
          v24 = dword_140D04880;
          dword_140C2A220[2 * v23] = 917629;
          if ( (v24 & 2) != 0 )
            sub_14057D738(12LL, "ClearPCIDBits shim: failed to register.\n");
          sub_140368C88(12LL, (__int64)"ClearPCIDBits shim: failed to register.\n");
        }
        v8 = KseRegisterShim((__int64)&unk_140C066F8, 0LL, 0LL);
        if ( v8 < 0 )
        {
          v25 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v25] = v8;
          v26 = dword_140D04880;
          dword_140C2A220[2 * v25] = 983165;
          if ( (v26 & 2) != 0 )
            sub_14057D738(12LL, "Kaspersky shim: failed to register.\n");
          sub_140368C88(12LL, (__int64)"Kaspersky shim: failed to register.\n");
        }
        v9 = KseRegisterShim((__int64)&unk_140C066C0, 0LL, 0LL);
        if ( v9 < 0 )
        {
          v27 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v27] = v9;
          v28 = dword_140D04880;
          dword_140C2A220[2 * v27] = 1114208;
          if ( (v28 & 2) != 0 )
            sub_14057D738(12LL, "Memcpy shim: failed to register.\n");
          sub_140368C88(12LL, (__int64)"Memcpy shim: failed to register.\n");
        }
        v10 = KseRegisterShim((__int64)&unk_140C049D8, 0LL, 0LL);
        if ( v10 < 0 )
        {
          v29 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v29] = v10;
          v30 = dword_140D04880;
          dword_140C2A220[2 * v29] = 1179753;
          if ( (v30 & 2) != 0 )
            sub_14057D738(12LL, "KernelPadSectionsOverride shim: failed to register.\n");
          sub_140368C88(12LL, (__int64)"KernelPadSectionsOverride shim: failed to register.\n");
        }
        v11 = KseRegisterShim((__int64)&unk_140C04A48, 0LL, 0LL);
        if ( v11 < 0 )
        {
          v31 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v31] = v11;
          v32 = dword_140D04880;
          dword_140C2A220[2 * v31] = 1245275;
          if ( (v32 & 2) != 0 )
            sub_14057D738(12LL, "UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
          sub_140368C88(12LL, (__int64)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
        }
      }
      else
      {
        dword_140C54EF8 |= 0x80u;
        v2 = -1073741637;
      }
    }
LABEL_12:
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v12]) = 0;
    LODWORD(qword_140C2A440[v12]) = 327934;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(1LL, "KSE: Initialized phase 0x%x\n", a2);
    sub_1403C09C8(1);
    if ( byte_140C4E508 )
      dword_140C54EF0 |= 1u;
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_35;
  }
  v15 = _InterlockedCompareExchange(&dword_140C54EF4, 1, 0);
  if ( v15 == 2 )
    return 0LL;
  if ( v15 == 1 )
    return 259LL;
  if ( (int)sub_140B01670(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
              *(void **)(*(_QWORD *)(a1 + 240) + 80LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 88LL)) >= 0 )
  {
    v16 = *(_QWORD *)(a1 + 240);
    if ( *(_QWORD *)(v16 + 64) && *(_DWORD *)(v16 + 72) )
    {
      v2 = sub_140B01250(&dword_140C54EF0);
      if ( v2 >= 0 )
      {
        v2 = sub_140B01388(a1);
        if ( v2 >= 0 )
        {
          dword_140C54EF4 = 2;
          sub_140B01600();
          goto LABEL_12;
        }
      }
    }
    else
    {
      if ( dword_140C1B2A0 )
      {
        dword_140C54EF8 |= 0x40u;
        v16 = *(_QWORD *)(a1 + 240);
      }
      if ( !*(_QWORD *)(v16 + 64) || !*(_DWORD *)(v16 + 72) )
        dword_140C54EF8 |= 0x80u;
      v2 = -1073741637;
    }
LABEL_35:
    dword_140C54EF4 = 0;
    if ( qword_140C54F38 )
    {
      sub_140965160(qword_140C54F38, v13);
      qword_140C54F38 = 0LL;
    }
    dword_140C54EF0 |= 3u;
    dword_140C54EF8 |= 0x400u;
    v17 = dword_140D04880;
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    if ( v2 == -1073741637 )
    {
      dword_140C2A224[2 * v18] = -1073741637;
      dword_140C2A220[2 * v18] = 327962;
      if ( (v17 & 2) != 0 )
        sub_14057D738(
          1LL,
          "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
      sub_140368C88(
        1LL,
        (__int64)"KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    }
    else
    {
      dword_140C2A224[2 * v18] = v2;
      dword_140C2A220[2 * v18] = 327966;
      if ( (v17 & 2) != 0 )
        sub_14057D738(1LL, "KSE: Initialization failed: 0x%x\n", v2);
      sub_140368C88(1LL, (__int64)"KSE: Initialization failed: 0x%x\n", v2);
    }
    return (unsigned int)v2;
  }
  return 3221225473LL;
}
