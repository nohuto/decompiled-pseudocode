/*
 * XREFs of sub_140732D40 @ 0x140732D40
 * Callers:
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406880D0 @ 0x1406880D0 (sub_1406880D0.c)
 *     sub_140691898 @ 0x140691898 (sub_140691898.c)
 *     sub_1406A7BF4 @ 0x1406A7BF4 (sub_1406A7BF4.c)
 *     sub_1406AFE20 @ 0x1406AFE20 (sub_1406AFE20.c)
 *     sub_1406B48F0 @ 0x1406B48F0 (sub_1406B48F0.c)
 *     sub_1406B8B70 @ 0x1406B8B70 (sub_1406B8B70.c)
 *     sub_1406C9A70 @ 0x1406C9A70 (sub_1406C9A70.c)
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     sub_1406D7150 @ 0x1406D7150 (sub_1406D7150.c)
 *     sub_1406E1100 @ 0x1406E1100 (sub_1406E1100.c)
 *     sub_1406E2120 @ 0x1406E2120 (sub_1406E2120.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     sub_1406F8C60 @ 0x1406F8C60 (sub_1406F8C60.c)
 *     sub_1406FB240 @ 0x1406FB240 (sub_1406FB240.c)
 *     sub_140700F70 @ 0x140700F70 (sub_140700F70.c)
 *     DnsPrint_RpcZoneInfo_0 @ 0x140701B64 (DnsPrint_RpcZoneInfo_0.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 *     NtOpenProcessTokenEx @ 0x1407279B0 (NtOpenProcessTokenEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     sub_1407947BC @ 0x1407947BC (sub_1407947BC.c)
 *     sub_14079E7C0 @ 0x14079E7C0 (sub_14079E7C0.c)
 *     sub_14079F0C0 @ 0x14079F0C0 (sub_14079F0C0.c)
 *     NtDuplicateObject @ 0x1407A1DC0 (NtDuplicateObject.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407BEBF0 @ 0x1407BEBF0 (sub_1407BEBF0.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_1407D7CA0 @ 0x1407D7CA0 (sub_1407D7CA0.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     sub_1407E6C40 @ 0x1407E6C40 (sub_1407E6C40.c)
 *     sub_1407EF750 @ 0x1407EF750 (sub_1407EF750.c)
 *     sub_1407F0310 @ 0x1407F0310 (sub_1407F0310.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 *     sub_1407F5E04 @ 0x1407F5E04 (sub_1407F5E04.c)
 *     sub_1407F5F80 @ 0x1407F5F80 (sub_1407F5F80.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_140847028 @ 0x140847028 (sub_140847028.c)
 *     sub_14084ED68 @ 0x14084ED68 (sub_14084ED68.c)
 *     sub_140858E74 @ 0x140858E74 (sub_140858E74.c)
 *     sub_14090AB48 @ 0x14090AB48 (sub_14090AB48.c)
 *     sub_1409262FC @ 0x1409262FC (sub_1409262FC.c)
 *     sub_140926868 @ 0x140926868 (sub_140926868.c)
 *     sub_140928C60 @ 0x140928C60 (sub_140928C60.c)
 *     sub_140929080 @ 0x140929080 (sub_140929080.c)
 *     sub_14092BEF8 @ 0x14092BEF8 (sub_14092BEF8.c)
 *     sub_14097AD20 @ 0x14097AD20 (sub_14097AD20.c)
 *     sub_14097B220 @ 0x14097B220 (sub_14097B220.c)
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 *     sub_140986D28 @ 0x140986D28 (sub_140986D28.c)
 *     sub_140987E44 @ 0x140987E44 (sub_140987E44.c)
 *     sub_14098A13C @ 0x14098A13C (sub_14098A13C.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 *     sub_1409AE3D8 @ 0x1409AE3D8 (sub_1409AE3D8.c)
 *     sub_1409AE584 @ 0x1409AE584 (sub_1409AE584.c)
 *     sub_1409AEC10 @ 0x1409AEC10 (sub_1409AEC10.c)
 *     sub_1409AEE00 @ 0x1409AEE00 (sub_1409AEE00.c)
 *     sub_1409AEFF0 @ 0x1409AEFF0 (sub_1409AEFF0.c)
 *     sub_1409AF200 @ 0x1409AF200 (sub_1409AF200.c)
 *     sub_1409B25E0 @ 0x1409B25E0 (sub_1409B25E0.c)
 *     sub_1409B2C30 @ 0x1409B2C30 (sub_1409B2C30.c)
 *     sub_1409B2D50 @ 0x1409B2D50 (sub_1409B2D50.c)
 *     sub_1409B2DD0 @ 0x1409B2DD0 (sub_1409B2DD0.c)
 *     sub_1409B2E50 @ 0x1409B2E50 (sub_1409B2E50.c)
 *     sub_1409B30B4 @ 0x1409B30B4 (sub_1409B30B4.c)
 *     sub_1409B314C @ 0x1409B314C (sub_1409B314C.c)
 *     sub_140A062C8 @ 0x140A062C8 (sub_140A062C8.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 * Callees:
 *     sub_14025032C @ 0x14025032C (sub_14025032C.c)
 *     sub_140251008 @ 0x140251008 (sub_140251008.c)
 *     sub_1402AC270 @ 0x1402AC270 (sub_1402AC270.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F3424 @ 0x1402F3424 (sub_1402F3424.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 *     sub_140883EDC @ 0x140883EDC (sub_140883EDC.c)
 *     sub_1409851A4 @ 0x1409851A4 (sub_1409851A4.c)
 *     sub_140A9466C @ 0x140A9466C (sub_140A9466C.c)
 */

__int64 __fastcall sub_140732D40(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // ecx
  __int64 v13; // rdi
  __int64 v14; // r9
  signed __int64 *v15; // rax
  signed __int64 *v16; // rdi
  __int64 v17; // rcx
  signed __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rax
  __int128 v21; // rt0
  unsigned __int8 v22; // tt
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  int v25; // ecx
  int v26; // ebp
  __int64 v27; // r14
  char v28; // r10
  int v29; // r11d
  unsigned __int64 v31; // rcx
  signed __int64 v32; // rbx
  int v33; // r14d
  PVOID v34; // r8
  unsigned int v35; // edi
  signed __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rax
  ULONG_PTR v40; // rdi
  signed __int64 BugCheckParameter4; // rbx
  volatile signed __int64 *v42; // r14
  int v43; // ecx
  _QWORD *v44; // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v46[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+90h] [rbp+8h]
  char v51; // [rsp+B8h] [rbp+30h]
  __int64 v52; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v51 = 0;
  v13 = *((_QWORD *)CurrentThread + 23);
  v47 = (struct _EX_RUNDOWN_REF *)v13;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
        return 3221225508LL;
      v40 = *((_QWORD *)CurrentThread + 23);
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( dword_140D05010 )
        {
          sub_1405C5EC8(v40 - 48, 1, 1u, Tag);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v40 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v40, 0x10uLL, BugCheckParameter4);
        *a6 = v40;
      }
      return v11;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
        if ( (a2 & 0xFFE00000) != 0 && a4 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          if ( dword_140D05010 )
          {
            sub_1405C5EC8((__int64)CurrentThread - 48, 1, 1u, Tag);
            v11 = 0;
          }
          v32 = _InterlockedIncrement64((volatile signed __int64 *)CurrentThread - 6);
          if ( v32 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v32);
          *a6 = CurrentThread;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v11;
    }
    if ( a4 )
      return 3221225480LL;
    v14 = qword_140C24F88;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --*((_WORD *)CurrentThread + 242);
    v52 = v14;
    goto LABEL_10;
  }
  if ( (dword_140C29FC0 & 0x100) != 0 && !a4 )
    sub_140A9466C(BugCheckParameter1);
  --*((_WORD *)CurrentThread + 242);
  if ( v13 == *((_QWORD *)CurrentThread + 68) )
  {
    if ( (*(_DWORD *)(v13 + 1124) & 0x4000000) == 0 )
    {
LABEL_110:
      v35 = -1073741816;
      goto LABEL_81;
    }
    v14 = *(_QWORD *)(v13 + 1392);
  }
  else
  {
    v14 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)v13);
    v51 = 1;
  }
  v52 = v14;
  if ( !v14 )
    goto LABEL_110;
  if ( v14 == qword_140C24F88 )
  {
LABEL_85:
    v35 = -1073741816;
    goto LABEL_79;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (signed __int64 *)sub_140733340(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_83:
    if ( BugCheckParameter1 )
      sub_14025032C(v14, BugCheckParameter1, *((_BYTE *)KeGetCurrentThread() + 562));
    goto LABEL_85;
  }
  _m_prefetchw(v15);
  v17 = *v15;
  v18 = v15[1];
  v46[1] = v18;
  v46[0] = v17;
  v19 = v17;
  if ( (v17 & 0x1FFFE) == 0 )
    goto LABEL_53;
  while ( 1 )
  {
    if ( (v19 & 1) == 0 )
    {
      sub_1407ED9FC(v14, v16, v19);
      _m_prefetchw(v16);
      v18 = v16[1];
      v14 = v52;
      v46[0] = *v16;
      v19 = v46[0];
      v46[1] = v18;
      goto LABEL_73;
    }
    *(_QWORD *)&v21 = v19;
    *((_QWORD *)&v21 + 1) = v18;
    v22 = _InterlockedCompareExchange128(v16, v18, v19 - 2, (signed __int64 *)&v21);
    v20 = v21;
    v19 = v21;
    *(_OWORD *)v46 = v21;
    v18 = *((_QWORD *)&v21 + 1);
    if ( v22 )
      break;
LABEL_73:
    if ( (v19 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_53:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v36 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v36 )
            goto LABEL_83;
          sub_1407ED9FC(v14, v16, v36);
          v14 = v52;
        }
      }
      while ( v36 != _InterlockedCompareExchange64(v16, v36 - 1, v36) );
      v23 = (*v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v46 = *(_OWORD *)v16;
      v37 = (int)(sub_1402AC270((unsigned __int64 *)v16) + 1);
      v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23, v37);
      if ( v39 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v23 + 48, 0x10uLL, v37 + v39);
      _InterlockedExchangeAdd64(v16, 1uLL);
      _InterlockedOr(v45, 0);
      if ( *(_QWORD *)(v38 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v38 + 48), 0LL);
      goto LABEL_58;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v20 >> 1) != 16 )
  {
    v23 = (v20 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v46[0] = ((unsigned int)v19 ^ (2 * (unsigned int)((unsigned __int64)v20 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v19;
  v42 = (volatile signed __int64 *)((v46[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v23 = (unsigned __int64)v42;
  sub_1402F3424(v42, 32752);
  v43 = sub_140251008(v16, v46, 32752);
  if ( v43 )
    _InterlockedExchangeAdd64(v42, -v43);
LABEL_58:
  LODWORD(v18) = v46[1];
  v19 = v46[0];
LABEL_17:
  if ( dword_140D05010 )
    sub_1405C5EC8(v23, 1, 1u, Tag);
  v24 = dword_140D06C0C ^ *(_BYTE *)(v23 + 24) ^ BYTE1(v23);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v24 )
  {
    v34 = (PVOID)qword_140D07490[v24];
    if ( !v34 || v34 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v34, 0LL, 0LL);
    if ( a3 )
    {
      v35 = -1073741788;
      goto LABEL_78;
    }
  }
  v25 = a2;
  v26 = v18 & 0x1FFFFFF;
  if ( !a4 )
  {
LABEL_24:
    v27 = v19 >> 17;
    if ( a7 )
    {
      v33 = v27 & 7;
      a7[1] = v26;
      *a7 = v33;
      if ( (v33 & 4) == 0 )
        goto LABEL_26;
    }
    else if ( (v27 & 4) == 0 )
    {
LABEL_26:
      v28 = 0;
      goto LABEL_27;
    }
    v28 = 1;
LABEL_27:
    v29 = v52;
    if ( a8 )
    {
      if ( *(_DWORD *)(v52 + 4) )
      {
        v44 = (_QWORD *)sub_140883EDC(v52);
        v25 = a2;
        if ( v44 )
          *a8 = *v44;
      }
    }
    if ( v28 && v25 && !(unsigned __int8)sub_1409851A4(v29, BugCheckParameter1, (_DWORD)v16, v23, v25) )
    {
      v35 = -1073741816;
      goto LABEL_78;
    }
    *a6 = v23 + 48;
    if ( v51 )
      sub_1402AD030(v47 + 139);
    sub_1402AC800((__int64)CurrentThread);
    return 0LL;
  }
  if ( (~v26 & a2) != 0 )
  {
    v35 = -1073741790;
    goto LABEL_78;
  }
  if ( (*(_BYTE *)(v23 + 26) & 0x40) == 0 )
    goto LABEL_24;
  v31 = v23 - byte_140C25440[*(_BYTE *)(v23 + 26) & 0x7F];
  if ( !*(_BYTE *)(*(_QWORD *)v31 + 24LL) )
  {
LABEL_35:
    v25 = a2;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) != 1LL )
  {
    v19 = v46[0];
    goto LABEL_35;
  }
  v35 = -1073700858;
LABEL_78:
  ObfDereferenceObjectWithTag((PVOID)(v23 + 48), Tag);
LABEL_79:
  if ( v51 )
    sub_1402AD030(v47 + 139);
LABEL_81:
  sub_1402AC800((__int64)CurrentThread);
  return v35;
}
