/*
 * XREFs of sub_14083C870 @ 0x14083C870
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1404172B8 @ 0x1404172B8 (sub_1404172B8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_140689D3C @ 0x140689D3C (sub_140689D3C.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 *     RtlAppendStringToString @ 0x1406E24E0 (RtlAppendStringToString.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14083D1A4 @ 0x14083D1A4 (sub_14083D1A4.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 *     sub_14083D474 @ 0x14083D474 (sub_14083D474.c)
 *     sub_14083D56C @ 0x14083D56C (sub_14083D56C.c)
 *     sub_140917E18 @ 0x140917E18 (sub_140917E18.c)
 *     sub_140919A88 @ 0x140919A88 (sub_140919A88.c)
 *     sub_14091D320 @ 0x14091D320 (sub_14091D320.c)
 *     sub_14091D63C @ 0x14091D63C (sub_14091D63C.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB419C @ 0x140AB419C (sub_140AB419C.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14083C870(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // edi
  unsigned int v2; // r15d
  __int64 v3; // r14
  ULONG_PTR v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  wchar_t *v8; // rsi
  struct _KEVENT *v9; // r15
  __int64 v10; // r12
  _DWORD *v11; // r15
  int v12; // eax
  STRING *v13; // r13
  unsigned int v14; // r12d
  void *v15; // r13
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *v19; // r12
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // xmm0
  __int64 v27; // rax
  int v28; // r13d
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  ULONG v37; // ebx
  ULONG i; // r12d
  ULONG v39; // eax
  wchar_t *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // r13d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  signed __int64 *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  wchar_t *v70; // rcx
  int v72; // [rsp+38h] [rbp-D0h]
  int v73; // [rsp+40h] [rbp-C8h]
  char v74; // [rsp+58h] [rbp-B0h] BYREF
  int v75; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG_PTR v76; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR v77; // [rsp+68h] [rbp-A0h]
  int v78; // [rsp+70h] [rbp-98h] BYREF
  int v79; // [rsp+74h] [rbp-94h] BYREF
  int v80; // [rsp+78h] [rbp-90h]
  int v81; // [rsp+7Ch] [rbp-8Ch]
  void *v82; // [rsp+80h] [rbp-88h] BYREF
  ULONG Length[2]; // [rsp+88h] [rbp-80h] BYREF
  STRING *Source; // [rsp+90h] [rbp-78h]
  void *v85; // [rsp+98h] [rbp-70h] BYREF
  void *v86; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+B0h] [rbp-58h]
  __int128 v89; // [rsp+B8h] [rbp-50h] BYREF
  STRING *v90; // [rsp+C8h] [rbp-40h]
  __int64 v91[3]; // [rsp+D0h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[54]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = 0;
  v77 = BugCheckParameter3;
  v2 = BugCheckParameter3;
  v76 = 0LL;
  v81 = 0;
  v87 = 0LL;
  v78 = 0;
  v85 = 0LL;
  *(_OWORD *)v91 = 0LL;
  v79 = 0;
  v86 = 0LL;
  v74 = 0;
  v75 = 0;
  v82 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  *(_QWORD *)Length = 0LL;
  sub_140347770((__int64)v91);
  v3 = 23LL * v2;
  BugCheckParameter3a = v2;
  LODWORD(v4) = 0;
  KeWaitForSingleObject(&off_140C02530[v3 + 8], Executive, 0, 0, 0LL);
  if ( v2 == dword_140D3B1D8 )
  {
    KeWaitForSingleObject(&stru_140C49840, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v8 = off_140C02530[v3 + 3];
  BYTE2(off_140C02530[v3 + 7]) = 1;
  if ( v8 )
  {
    v11 = v8 + 80;
    v76 = (ULONG_PTR)v8;
    v12 = *((_DWORD *)v8 + 40);
    if ( (v12 & 0x8001) != 0 )
    {
      if ( byte_140D3B01B || dword_140D014E8 )
      {
        if ( (v12 & 2) != 0 )
        {
          sub_140AB4370(v6, v5, v7);
          sub_140AB41FC(v8);
          *v11 &= ~2u;
          sub_140AB41E0(v8);
          sub_140AB4260(v59, v58, v60, v61);
        }
        *(_DWORD *)&Destination.Length = 0x800000;
        Destination.Buffer = (char *)&unk_140D3D820;
        RtlAppendStringToString(&Destination, (const STRING *)&off_140C02530[v3 + 21]);
      }
      v46 = v77;
    }
    else
    {
      v13 = (STRING *)&off_140C02530[v3 + 21];
      Source = v13;
      LODWORD(v4) = sub_140713F8C(
                      (PCUNICODE_STRING)v13,
                      0,
                      &v82,
                      &v75,
                      7u,
                      0LL,
                      (int *)Length,
                      0LL,
                      0LL,
                      (__int64)BugCheckParameter2);
      if ( (v4 & 0x80000000) != 0LL )
        goto LABEL_94;
      v14 = (16 * (v75 == 2)) | 2;
      LODWORD(v4) = sub_140713F8C(
                      (PCUNICODE_STRING)v13,
                      4u,
                      &v85,
                      &v78,
                      v14,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      (__int64)BugCheckParameter2);
      if ( (v4 & 0x80000000) != 0LL )
      {
        v1 = 16;
        goto LABEL_94;
      }
      LODWORD(v4) = sub_140713F8C(
                      (PCUNICODE_STRING)v13,
                      5u,
                      &v86,
                      &v79,
                      v14,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      (__int64)BugCheckParameter2);
      if ( (v4 & 0x80000000) != 0LL )
      {
        v1 = 32;
        goto LABEL_94;
      }
      LODWORD(v4) = sub_140689D3C(v82, &v87);
      if ( (v4 & 0x80000000) != 0LL )
      {
        v1 = 40;
        goto LABEL_94;
      }
      v15 = v85;
      v16 = sub_140689D3C(v85, &v89);
      v18 = v16;
      if ( v16 < 0 )
      {
        sub_14091D320(v17, 4LL, (unsigned int)v16);
        *((_QWORD *)v8 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v8;
        sub_14020A890((__int64)BugCheckParameter2, 1, 22, v18, 0x2Bu);
        *(_QWORD *)&v89 = 0LL;
      }
      v19 = v86;
      v20 = sub_140689D3C(v86, (_QWORD *)&v89 + 1);
      v22 = v20;
      if ( v20 < 0 )
      {
        sub_14091D320(v21, 5LL, (unsigned int)v20);
        *((_QWORD *)v8 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v8;
        sub_14020A890((__int64)BugCheckParameter2, 1, 22, v22, 0x2Du);
        *((_QWORD *)&v89 + 1) = 0LL;
      }
      sub_14083D56C(v8);
      sub_140AB4370(v24, v23, v25);
      sub_140AB41FC(v8);
      v26 = v89;
      *((_QWORD *)v8 + 193) = v82;
      v27 = v87;
      *((_QWORD *)v8 + 197) = v15;
      *((_QWORD *)v8 + 198) = v19;
      *((_QWORD *)v8 + 225) = v27;
      *((_OWORD *)v8 + 113) = v26;
      *v11 &= ~2u;
      v28 = *((_DWORD *)v8 + 1028) & 0x8000;
      *((_DWORD *)v8 + 1028) = HIDWORD(off_140C02530[v3 + 4]);
      *((_DWORD *)v8 + 47) = Length[1];
      v29 = (unsigned int)(*((_DWORD *)v8 + 70) + 4096);
      v80 = v28;
      if ( (int)sub_14068EC28((__int64)v8, 0, v29, 1) < 0 )
        byte_140D3CA03 = 1;
      sub_140AB41E0(v8);
      sub_140AB4260(v31, v30, v32, v33);
      if ( v28 )
      {
        LODWORD(v4) = sub_140919A88((ULONG_PTR)v8);
        if ( (v4 & 0x80000000) != 0LL )
        {
          v1 = 72;
LABEL_93:
          v13 = Source;
LABEL_94:
          *((_QWORD *)v8 + 7) = BugCheckParameter2;
          BugCheckParameter2[0] = (ULONG_PTR)v8;
          sub_14020A890((__int64)BugCheckParameter2, 0, 22, v4, v1);
          v90 = v13;
          byte_140D3B01A = 1;
          ExRaiseHardError(3221226008LL, 1LL);
          KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)v4);
        }
      }
      sub_140AB4370(v35, v34, v36);
      sub_140AB41FC(v8);
      v37 = Length[0];
      if ( *((_DWORD *)v8 + 34) != Length[0] )
      {
        for ( i = 0; i < *((_DWORD *)v8 + 22); i += v37 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v8 + 44), i, v37) )
            RtlSetBits((PRTL_BITMAP)(v8 + 44), i, v37);
        }
        v39 = RtlNumberOfSetBits((PRTL_BITMAP)(v8 + 44));
        v28 = v80;
        *((_DWORD *)v8 + 26) = v39;
        *((_DWORD *)v8 + 34) = v37;
      }
      v40 = v8 + 32;
      v41 = *((_QWORD *)v8 + 8);
      if ( *(_DWORD *)(v41 + 4092) || (*(_DWORD *)(v41 + 4088) & 4) != 0 || v28 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v8 + 44));
        *((_DWORD *)v8 + 26) = *((_DWORD *)v8 + 22);
      }
      sub_140AB41E0(v8);
      sub_140AB4260(v43, v42, v44, v45);
      sub_14071B6EC();
      v46 = v77;
      if ( (_DWORD)v77 == 3 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 36), 0LL);
        sub_14083D474((ULONG_PTR)v8);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8 + 9);
        sub_1402AFC00((ULONG_PTR)(v8 + 36));
        v8 = (wchar_t *)v76;
      }
      off_140C02530[v3 + 6] = v8;
      LODWORD(v4) = sub_14083D244((ULONG_PTR)v8);
      if ( (v4 & 0x80000000) != 0LL )
      {
        v1 = 80;
        goto LABEL_93;
      }
      sub_140AB4260(v48, v47, v49, v50);
      sub_14083D1A4(v8);
      if ( *(_DWORD *)(*(_QWORD *)v40 + 4092LL) || (*(_DWORD *)(*(_QWORD *)v40 + 4088LL) & 4) != 0 )
      {
        if ( !ExIsSoftBoot() )
          sub_1406885A4((ULONG_PTR)v8, 0xCu);
        sub_140AB4370(v52, v51, v53);
        sub_140AB41FC(v8);
        *(_DWORD *)(*(_QWORD *)v40 + 4092LL) = 0;
        *(_DWORD *)(*(_QWORD *)v40 + 4088LL) &= ~4u;
        sub_140AB41E0(v8);
        sub_140AB4260(v55, v54, v56, v57);
      }
      if ( byte_140D3CA03 )
        sub_14091D63C();
      Destination.Buffer = (char *)&unk_140D3D820;
      *(_DWORD *)&Destination.Length = 0x800000;
      RtlAppendStringToString(&Destination, Source);
      if ( dword_140C54900 && (int)sub_140917E18(v8, off_140C02530[v3]) < 0 )
        dword_140C54900 = 0;
    }
    *((_DWORD *)v8 + 1028) |= 4u;
    if ( v46 == 3 )
    {
      sub_140AB4370(v6, v5, v7);
      v62 = (signed __int64 *)(v8 + 36);
      ExAcquirePushLockSharedEx((ULONG_PTR)v62, 0LL);
      *v11 |= 0x200u;
      if ( _InterlockedCompareExchange64(v62, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v62);
      sub_1402AFC00((ULONG_PTR)v62);
      sub_140AB4260(v64, v63, v65, v66);
      v8 = (wchar_t *)v76;
    }
    goto LABEL_79;
  }
  v4 = (int)sub_1407122B0(
              (const UNICODE_STRING *)&off_140C02530[v3 + 21],
              (int)off_140C02530[v3 + 4],
              &v76,
              (char *)&off_140C02530[v3 + 7] + 3,
              0x1490001u,
              0LL,
              v72,
              v73,
              (__int64)&v74,
              BugCheckParameter2);
  v5 = 3221225524LL;
  if ( v2 == 6 && !BYTE4(off_140C02530[v3 + 7]) && ((_DWORD)v4 == -1073741772 || (_DWORD)v4 == -1073741765)
    || _bittest((const signed __int32 *)&off_140C02530[v3 + 4], 0xFu)
    && !BYTE4(off_140C02530[v3 + 7])
    && (_DWORD)v4 == -1073741772 )
  {
    LODWORD(v4) = 0;
    goto LABEL_85;
  }
  if ( (_DWORD)v4 != -1073741431 || !(unsigned __int8)sub_140AB419C(v6) )
  {
    if ( (v4 & 0x80000000) != 0LL
      || (v8 = (wchar_t *)v76, !_bittest((const signed __int32 *)&off_140C02530[v3 + 4], 0xFu))
      && (!*(_QWORD *)(v76 + 1576) || !*(_QWORD *)(v76 + 1584)) )
    {
      byte_140D3B01A = 1;
      KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v2, v4);
    }
    *(_DWORD *)(v76 + 4112) = HIDWORD(off_140C02530[v3 + 4]) | 4;
    off_140C02530[v3 + 6] = v8;
    if ( v74 )
    {
      v9 = &stru_140C02570;
      byte_140C54CA4 = 1;
      v10 = 7LL;
      do
      {
        KeSetEvent(v9, 0, 0);
        v9 = (struct _KEVENT *)((char *)v9 + 184);
        --v10;
      }
      while ( v10 );
    }
    v11 = v8 + 80;
    if ( (*((_DWORD *)v8 + 40) & 0x8001) == 0 && dword_140C54900 && (int)sub_140917E18(v8, off_140C02530[v3]) < 0 )
      dword_140C54900 = 0;
LABEL_79:
    if ( (unsigned __int8)sub_140AB46D0(v6, v5, v7) )
    {
      if ( (*v11 & 0x8001) == 0 )
      {
        if ( *((_QWORD *)v8 + 193) )
        {
          v69 = sub_1404172B8((ULONG_PTR)v8, (ULONG_PTR)off_140C02530[v3]);
          LODWORD(v4) = v69;
          if ( v69 < 0 )
            KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v8, (ULONG_PTR)off_140C02530[v3], v69);
        }
      }
      sub_140AB42A0(v68, v67);
    }
    else
    {
      LODWORD(v4) = -1073741431;
    }
  }
LABEL_85:
  BYTE1(off_140C02530[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&off_140C02530[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&dword_140D009F8) == 6 && (unsigned int)dword_140D3B1D8 < 7 )
    KeSetEvent(&stru_140C49840, 0, 0);
  v70 = off_140C02530[v3 + 22];
  if ( v70 )
  {
    ExFreePoolWithTag(v70, 0);
    *(_OWORD *)&off_140C02530[v3 + 21] = 0LL;
  }
  PsTerminateSystemThread(v4);
  return sub_14022EA30(v91);
}
