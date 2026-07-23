/*
 * XREFs of sub_14074F950 @ 0x14074F950
 * Callers:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     sub_1405DF34C @ 0x1405DF34C (sub_1405DF34C.c)
 *     sub_1405DF54C @ 0x1405DF54C (sub_1405DF54C.c)
 *     sub_1405DF828 @ 0x1405DF828 (sub_1405DF828.c)
 *     sub_14074D3C8 @ 0x14074D3C8 (sub_14074D3C8.c)
 *     sub_14074F8BC @ 0x14074F8BC (sub_14074F8BC.c)
 *     sub_140765A28 @ 0x140765A28 (sub_140765A28.c)
 *     sub_14095E318 @ 0x14095E318 (sub_14095E318.c)
 *     sub_1409A233C @ 0x1409A233C (sub_1409A233C.c)
 *     sub_1409A23E0 @ 0x1409A23E0 (sub_1409A23E0.c)
 *     sub_1409A2440 @ 0x1409A2440 (sub_1409A2440.c)
 *     sub_1409A24C0 @ 0x1409A24C0 (sub_1409A24C0.c)
 *     sub_140B31688 @ 0x140B31688 (sub_140B31688.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_140259728 @ 0x140259728 (sub_140259728.c)
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_140369ECC @ 0x140369ECC (sub_140369ECC.c)
 *     sub_140369FDC @ 0x140369FDC (sub_140369FDC.c)
 *     sub_14036A2C8 @ 0x14036A2C8 (sub_14036A2C8.c)
 *     sub_14038B628 @ 0x14038B628 (sub_14038B628.c)
 *     sub_14039A0B4 @ 0x14039A0B4 (sub_14039A0B4.c)
 *     sub_1403DC9D4 @ 0x1403DC9D4 (sub_1403DC9D4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C70B4 @ 0x1405C70B4 (sub_1405C70B4.c)
 *     sub_1405C70FC @ 0x1405C70FC (sub_1405C70FC.c)
 *     sub_1405C8AFC @ 0x1405C8AFC (sub_1405C8AFC.c)
 *     sub_1405C8BDC @ 0x1405C8BDC (sub_1405C8BDC.c)
 *     sub_1405C9FA8 @ 0x1405C9FA8 (sub_1405C9FA8.c)
 *     sub_1405CC6C4 @ 0x1405CC6C4 (sub_1405CC6C4.c)
 *     sub_1405D8DC8 @ 0x1405D8DC8 (sub_1405D8DC8.c)
 *     sub_1405DD354 @ 0x1405DD354 (sub_1405DD354.c)
 *     sub_14063DABC @ 0x14063DABC (sub_14063DABC.c)
 *     sub_1406950FC @ 0x1406950FC (sub_1406950FC.c)
 *     sub_1406A7BF4 @ 0x1406A7BF4 (sub_1406A7BF4.c)
 *     sub_1406C0510 @ 0x1406C0510 (sub_1406C0510.c)
 *     sub_1406C800C @ 0x1406C800C (sub_1406C800C.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     sub_1406E66AC @ 0x1406E66AC (sub_1406E66AC.c)
 *     sub_1406EBAD8 @ 0x1406EBAD8 (sub_1406EBAD8.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 *     sub_140750F1C @ 0x140750F1C (sub_140750F1C.c)
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_1407EC100 @ 0x1407EC100 (sub_1407EC100.c)
 *     sub_1407ED774 @ 0x1407ED774 (sub_1407ED774.c)
 *     sub_1407ED930 @ 0x1407ED930 (sub_1407ED930.c)
 *     sub_1407EF750 @ 0x1407EF750 (sub_1407EF750.c)
 *     sub_1407EF848 @ 0x1407EF848 (sub_1407EF848.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1407F2028 @ 0x1407F2028 (sub_1407F2028.c)
 *     sub_1407F2930 @ 0x1407F2930 (sub_1407F2930.c)
 *     sub_1407FCAFC @ 0x1407FCAFC (sub_1407FCAFC.c)
 *     sub_1407FE938 @ 0x1407FE938 (sub_1407FE938.c)
 *     sub_140804C08 @ 0x140804C08 (sub_140804C08.c)
 *     sub_140805E9C @ 0x140805E9C (sub_140805E9C.c)
 *     sub_140806788 @ 0x140806788 (sub_140806788.c)
 *     sub_140806904 @ 0x140806904 (sub_140806904.c)
 *     sub_140807124 @ 0x140807124 (sub_140807124.c)
 *     sub_140807718 @ 0x140807718 (sub_140807718.c)
 *     sub_1408082AC @ 0x1408082AC (sub_1408082AC.c)
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 *     sub_140808A40 @ 0x140808A40 (sub_140808A40.c)
 *     sub_140809408 @ 0x140809408 (sub_140809408.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 *     sub_140810E2C @ 0x140810E2C (sub_140810E2C.c)
 *     sub_140818DF4 @ 0x140818DF4 (sub_140818DF4.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_1408197A0 @ 0x1408197A0 (sub_1408197A0.c)
 *     sub_14081CE58 @ 0x14081CE58 (sub_14081CE58.c)
 *     sub_14081CF98 @ 0x14081CF98 (sub_14081CF98.c)
 *     sub_140857300 @ 0x140857300 (sub_140857300.c)
 *     sub_1409898D8 @ 0x1409898D8 (sub_1409898D8.c)
 *     sub_140989F5C @ 0x140989F5C (sub_140989F5C.c)
 *     sub_14098C71C @ 0x14098C71C (sub_14098C71C.c)
 *     sub_14098C7F4 @ 0x14098C7F4 (sub_14098C7F4.c)
 *     sub_14098E9D8 @ 0x14098E9D8 (sub_14098E9D8.c)
 *     sub_14098ED44 @ 0x14098ED44 (sub_14098ED44.c)
 *     sub_14098F9D0 @ 0x14098F9D0 (sub_14098F9D0.c)
 *     sub_14098FA74 @ 0x14098FA74 (sub_14098FA74.c)
 *     sub_14098FEF4 @ 0x14098FEF4 (sub_14098FEF4.c)
 *     sub_1409949AC @ 0x1409949AC (sub_1409949AC.c)
 *     sub_140996FDC @ 0x140996FDC (sub_140996FDC.c)
 *     sub_140997374 @ 0x140997374 (sub_140997374.c)
 *     sub_14099E10C @ 0x14099E10C (sub_14099E10C.c)
 *     sub_14099E20C @ 0x14099E20C (sub_14099E20C.c)
 *     sub_1409A40F8 @ 0x1409A40F8 (sub_1409A40F8.c)
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B2D708 @ 0x140B2D708 (sub_140B2D708.c)
 */

__int64 __fastcall sub_14074F950(unsigned int a1, __int128 *a2, int a3, LUID a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int128 *Pool2; // r14
  __int64 v11; // rcx
  KPROCESSOR_MODE v12; // r14
  unsigned int v13; // r13d
  void *v14; // r15
  volatile void *v15; // r12
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  signed int v27; // ebx
  LUID v28; // rcx
  int v29; // eax
  PVOID v30; // rcx
  unsigned __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // r8
  _BYTE *v35; // rcx
  int v36; // r13d
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  __int64 *v41; // rax
  bool v42; // zf
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned int Length; // [rsp+50h] [rbp-6E8h]
  unsigned int Length_4; // [rsp+54h] [rbp-6E4h] BYREF
  char v55; // [rsp+58h] [rbp-6E0h]
  KPROCESSOR_MODE PreviousMode; // [rsp+59h] [rbp-6DFh]
  char v57; // [rsp+5Ah] [rbp-6DEh]
  void *Src; // [rsp+60h] [rbp-6D8h]
  char v59; // [rsp+68h] [rbp-6D0h]
  PVOID P; // [rsp+70h] [rbp-6C8h]
  int v61; // [rsp+78h] [rbp-6C0h]
  unsigned int v62; // [rsp+80h] [rbp-6B8h]
  _QWORD v63[2]; // [rsp+88h] [rbp-6B0h] BYREF
  LUID v64; // [rsp+98h] [rbp-6A0h]
  PVOID v65[2]; // [rsp+A0h] [rbp-698h] BYREF
  _QWORD v66[192]; // [rsp+B0h] [rbp-688h] BYREF
  _BYTE v67[64]; // [rsp+6B0h] [rbp-88h] BYREF

  v64 = a4;
  v8 = a1;
  v62 = a1;
  v59 = 0;
  memset(v66, 0, sizeof(v66));
  LODWORD(v63[0]) = 0;
  v63[1] = 0LL;
  Src = 0LL;
  Length_4 = 0;
  Pool2 = 0LL;
  P = 0LL;
  v65[0] = 0LL;
  LOBYTE(v11) = 0;
  v57 = 0;
  v55 = 0;
  if ( v8 > 0x60 )
    goto LABEL_217;
  v12 = *((_BYTE *)KeGetCurrentThread() + 562);
  PreviousMode = v12;
  v13 = a2 != 0LL ? a3 : 0;
  v14 = (void *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
  v65[1] = v14;
  Length = a4 != 0LL ? a5 : 0;
  v15 = (volatile void *)(*(_QWORD *)&v64 & -(__int64)(Length != 0));
  if ( v12 )
  {
    if ( v8 <= 0x19 && (v16 = 50462912, _bittest(&v16, v8))
      || (v17 = v8 - 30, (unsigned int)v17 <= 0x3D) && (v11 = 0x209E00E385CA1E1FLL, _bittest64(&v11, v17)) )
    {
      v27 = -1073741790;
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      Pool2 = (__int128 *)P;
      goto LABEL_66;
    }
    v18 = v8 - 37;
    if ( (unsigned int)v18 <= 0x3A && (v11 = 0x608801808940903LL, _bittest64(&v11, v18)) || v8 - 2 <= 1 )
    {
      v27 = sub_1407EF848(0LL);
      v61 = v27;
      if ( v27 < 0 )
      {
        a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
        Pool2 = (__int128 *)P;
        goto LABEL_66;
      }
      v8 = v62;
    }
    if ( v8 - 92 <= 1 )
    {
      v27 = sub_1406D75F4(v12);
      v61 = v27;
      if ( v27 < 0 )
      {
        a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
        Pool2 = (__int128 *)P;
        goto LABEL_66;
      }
      v8 = v62;
    }
    v19 = v8 - 28;
    if ( (unsigned int)v19 <= 0x32 )
    {
      v11 = 0x4000000420001LL;
      if ( _bittest64(&v11, v19) )
      {
        if ( !sub_1406950FC() )
        {
          v27 = -1073741790;
          v61 = -1073741790;
          a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
          Pool2 = (__int128 *)P;
          goto LABEL_66;
        }
      }
    }
    if ( v8 == 71 && !sub_1406EBAD8() )
    {
      v27 = -1073741790;
      v61 = -1073741790;
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      Pool2 = (__int128 *)P;
      goto LABEL_66;
    }
    if ( v14 )
    {
      v20 = v8 - 11;
      if ( (unsigned int)v20 > 0x3D || (v21 = 0x2001800900000001LL, !_bittest64(&v21, v20)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          v27 = -1073741637;
          v61 = -1073741637;
          a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
          Pool2 = (__int128 *)P;
          goto LABEL_66;
        }
      }
      v22 = v8 - 38;
      if ( (unsigned int)v22 <= 0x39 && (v23 = 0x218000004422401LL, _bittest64(&v23, v22)) || v8 == 9 )
      {
        if ( !sub_1406950FC() )
        {
          v27 = -1073741790;
          v61 = -1073741790;
          a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
          Pool2 = (__int128 *)P;
          goto LABEL_66;
        }
      }
      v24 = v8 - 37;
      if ( (unsigned int)v24 > 0x3B || (v25 = 0xFAE005C28F40BC3LL, !_bittest64(&v25, v24)) )
      {
        if ( v8 - 2 > 1 && v8 != 11 )
        {
          v28 = stru_140D3CAB8;
          if ( v8 == 10 )
            v28 = stru_140D3CCF0;
          v64 = v28;
          if ( !SeSinglePrivilegeCheck(v28, v12) )
          {
            v27 = -1073741727;
            v61 = -1073741727;
            a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
            Pool2 = (__int128 *)P;
            goto LABEL_66;
          }
        }
      }
      if ( v13 )
      {
        v26 = (unsigned __int64)v14 + v13;
        if ( v26 > 0x7FFFFFFF0000LL || v26 < (unsigned __int64)v14 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( v13 > 0x40 )
      {
        Pool2 = (__int128 *)ExAllocatePool2(256LL, v13, 544040269LL);
        P = Pool2;
        if ( !Pool2 )
        {
          v27 = -1073741670;
          v61 = -1073741670;
          a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
          goto LABEL_66;
        }
      }
      else
      {
        Pool2 = (__int128 *)v67;
        P = v67;
      }
      memmove(Pool2, v14, v13);
    }
    else
    {
      Pool2 = (__int128 *)P;
    }
    if ( v15 )
      ProbeForWrite(v15, Length, 1u);
    LOBYTE(v11) = v57;
  }
  else
  {
    Pool2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
    P = Pool2;
  }
  if ( v8 > 0x1F || (v29 = -234812256, !_bittest(&v29, v8)) )
  {
LABEL_76:
    v32 = v8 - 38;
    if ( (unsigned int)v32 > 0x3A || (v9 = 0x7FFE3BE75BE26EDLL, !_bittest64(&v9, v32)) )
    {
      sub_140A48330(v11);
      LOBYTE(v11) = 1;
      v57 = 1;
    }
  }
  switch ( v8 )
  {
    case 0u:
    case 1u:
      if ( !Pool2 )
      {
        if ( !v15 )
          goto LABEL_140;
LABEL_172:
        v48 = &unk_140C231E4;
LABEL_174:
        Src = v48;
        Length_4 = 232;
        goto LABEL_60;
      }
      if ( v13 < 0xE8 )
        goto LABEL_173;
      v27 = sub_1408194D8(0LL, 0LL, Pool2, v13);
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      if ( v27 >= 0 )
        goto LABEL_172;
      goto LABEL_66;
    case 2u:
    case 3u:
      if ( !Pool2 || !v15 )
        goto LABEL_140;
      if ( v13 < 0xE8 )
        goto LABEL_173;
      v27 = sub_1408197A0(Pool2, v66);
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      if ( v27 < 0 )
        goto LABEL_66;
      v48 = v66;
      goto LABEL_174;
    case 4u:
      if ( !Pool2 )
      {
        if ( !v15 )
          goto LABEL_140;
        goto LABEL_94;
      }
      if ( (dword_140C22278 & 1) == 0 )
      {
LABEL_140:
        a2 = (__int128 *)v14;
LABEL_217:
        v27 = -1073741811;
        goto LABEL_66;
      }
      if ( v13 < 0x4C )
        goto LABEL_173;
      xmmword_140C23400 = *Pool2;
      unk_140C23410 = Pool2[1];
      xmmword_140C23420 = Pool2[2];
      xmmword_140C23430 = Pool2[3];
      qword_140C23440 = *((_QWORD *)Pool2 + 8);
      dword_140C23448 = *((_DWORD *)Pool2 + 18);
      v27 = sub_1408193F4(v11);
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      if ( v27 >= 0 )
      {
LABEL_94:
        BYTE9(xmmword_140C23400) = dword_140C231B0 & 1;
        byte_140C23415 = sub_140259728();
        sub_1407628C0(&xmmword_140C23400, v66);
        Src = v66;
        Length_4 = 76;
        Pool2 = (__int128 *)P;
        goto LABEL_60;
      }
LABEL_66:
      v30 = v65[0];
      if ( v65[0] )
        ExFreePoolWithTag(v65[0], 0);
      if ( v55 )
        ExFreePoolWithTag(Src, 0x206D654Du);
      if ( v57 )
        sub_140A47CF8(v30, v9);
      if ( Pool2 && Pool2 != a2 && Pool2 != (__int128 *)v67 )
        ExFreePoolWithTag(Pool2, 0x206D654Du);
      return (unsigned int)v27;
    case 5u:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      sub_140750EC4(v66);
      Src = v66;
      Length_4 = 32;
      goto LABEL_60;
    case 6u:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 0x18 )
        goto LABEL_173;
      v9 = *(unsigned int *)Pool2;
      if ( (unsigned int)v9 >= 7 )
        goto LABEL_140;
      v34 = 3 * v9;
      if ( qword_140C23348[3 * v9] )
      {
        if ( (_DWORD)v9 != 5 && ((_DWORD)v9 != 4 || (void (__fastcall __noreturn *)())qword_140C233A8 != sub_140A6BDD0) )
          goto LABEL_140;
      }
      *(_OWORD *)((char *)&unk_140C23340 + 24 * v9) = *Pool2;
      qword_140C23350[3 * v9] = *((_QWORD *)Pool2 + 2);
      word_140C23345[12 * v9] = 0;
      byte_140C23347[24 * v9] = 0;
      v35 = 0LL;
      v36 = 0;
      if ( (_DWORD)v9 )
      {
        v37 = v9 - 1;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( !v40 )
              {
                v35 = (char *)&xmmword_140C23400 + 7;
                goto LABEL_132;
              }
              if ( v40 != 2 )
              {
LABEL_132:
                v9 = v36 & (unsigned int)-(byte_140C23344[8 * v34] != 0);
                if ( (int)v9 > (int)qword_140C23440 )
                  LODWORD(qword_140C23440) = byte_140C23344[8 * v34] != 0 ? v36 : 0;
                if ( v35 && *v35 != 1 )
                {
                  *v35 = 1;
                  sub_1408193F4(v35);
                }
LABEL_60:
                if ( Src && v15 )
                {
                  if ( Length < Length_4 )
                  {
LABEL_173:
                    v27 = -1073741789;
                    goto LABEL_65;
                  }
                  memmove((void *)v15, Src, Length_4);
                }
                v27 = 0;
LABEL_65:
                a2 = (__int128 *)v14;
                goto LABEL_66;
              }
              v36 = 4;
              v42 = (dword_140C22278 & 0x2000) == 0;
              v35 = &unk_140C23411;
            }
            else
            {
              v36 = 5;
              v42 = (dword_140C22278 & 0x2000) == 0;
              v35 = (char *)&xmmword_140C23400 + 6;
            }
          }
          else
          {
            v36 = 4;
            v42 = (dword_140C22278 & 0x20) == 0;
            v35 = (char *)&xmmword_140C23400 + 5;
          }
        }
        else
        {
          v36 = 3;
          v42 = (dword_140C22278 & 0x40) == 0;
          v35 = (char *)&xmmword_140C23400 + 4;
        }
      }
      else
      {
        v36 = 2;
        v42 = (dword_140C22278 & 8) == 0;
        v35 = (char *)&xmmword_140C23400 + 3;
      }
      if ( !v42 )
        v35 = 0LL;
      goto LABEL_132;
    case 7u:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      sub_1403DC9D4();
      Src = &qword_140A3D660;
      Length_4 = 272;
      goto LABEL_60;
    case 8u:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v48 = qword_140C231B8;
      goto LABEL_174;
    case 9u:
      if ( Pool2 )
      {
        if ( v13 < 0x18 )
          goto LABEL_173;
        v27 = sub_14098C71C(v11, Pool2);
        a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
        if ( v27 < 0 )
          goto LABEL_66;
        v27 = sub_1408193F4(v49);
        if ( v27 < 0 )
          goto LABEL_66;
      }
      else if ( !v15 )
      {
        goto LABEL_140;
      }
      Src = &xmmword_140C231C0;
      Length_4 = 24;
      goto LABEL_60;
    case 0xAu:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( !v13 )
        goto LABEL_173;
      sub_14081CE58(3LL);
      sub_140A48330(v43);
      dword_140D050E8 = *(_BYTE *)Pool2 != 0;
      sub_1408082AC(0LL);
      v27 = sub_140818DF4(0LL, 0LL, 0LL);
      sub_140A47CF8(v45, v44);
      sub_14081CF98(3LL);
      if ( v27 < 0 )
        goto LABEL_65;
      goto LABEL_60;
    case 0xBu:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v46 = sub_1406C800C((__int64)v66, v9, *((unsigned __int8 *)KeGetCurrentPrcb() + 208), &Length_4);
      Pool2 = (__int128 *)P;
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      v27 = v46;
      if ( v46 < 0 )
        goto LABEL_66;
      Src = v66;
      goto LABEL_60;
    case 0xCu:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      HIDWORD(v66[0]) = dword_140C226E4;
      LODWORD(v66[1]) = dword_140C226EC - dword_140C226E8;
      BYTE4(v66[1]) = dword_140C5AE10;
      Src = v66;
      Length_4 = 16;
      goto LABEL_60;
    case 0xDu:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
      v27 = -1073741822;
      goto LABEL_65;
    case 0xEu:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v41 = &qword_140C22808;
      goto LABEL_124;
    case 0xFu:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v41 = &qword_140C22810;
LABEL_124:
      Src = v41;
      Length_4 = 8;
      goto LABEL_60;
    case 0x10u:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      if ( dword_140C036B8 )
        LODWORD(v66[0]) |= 1u;
      if ( dword_140C03688 )
        LODWORD(v66[0]) |= 2u;
      Src = v66;
      Length_4 = 4;
      goto LABEL_60;
    case 0x11u:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 0x10 )
        goto LABEL_173;
      if ( (_QWORD)xmmword_140C22440 && *(_QWORD *)Pool2 )
        goto LABEL_140;
      xmmword_140C22440 = *Pool2;
      goto LABEL_60;
    case 0x17u:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v27 = sub_1409898D8(v65, v63);
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      if ( v27 < 0 )
        goto LABEL_66;
      Src = v65[0];
      Length_4 = v63[0];
      goto LABEL_60;
    case 0x18u:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 8 )
        goto LABEL_173;
      v47 = sub_140810E2C(*(unsigned int *)Pool2, *((unsigned int *)Pool2 + 1), 0LL, 0LL);
      goto LABEL_83;
    case 0x19u:
      if ( !Pool2 )
        goto LABEL_140;
      if ( v15 )
        goto LABEL_140;
      if ( Length )
        goto LABEL_140;
      if ( v13 < 0x1C )
        goto LABEL_140;
      v64 = (LUID)((char *)Pool2 + 24);
      v50 = *((_DWORD *)Pool2 + 6);
      if ( !v50 )
        goto LABEL_140;
      v63[0] = (char *)Pool2 + 20;
      if ( *((_DWORD *)Pool2 + 5) > 2u )
        goto LABEL_140;
      a2 = (__int128 *)((unsigned __int64)a2 & -(__int64)(v13 != 0));
      if ( *(_DWORD *)Pool2 != 1 )
      {
        v27 = -1073741736;
        goto LABEL_66;
      }
      v51 = v50 + 28;
      v52 = -1;
      if ( v51 >= 0x1C )
        v52 = v51;
      Length_4 = v52;
      v27 = v51 < 0x1C ? 0xC0000095 : 0;
      if ( v51 < 0x1C )
        goto LABEL_66;
      if ( v13 < v52 )
        goto LABEL_140;
      PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
      Pool2 = (__int128 *)P;
      v47 = sub_14075140C((LPCGUID)((char *)P + 4), (char *)P + 28);
LABEL_83:
      v27 = v47;
      a2 = (__int128 *)v14;
      if ( v47 < 0 )
        goto LABEL_66;
      goto LABEL_60;
    case 0x1Au:
    case 0x1Bu:
      goto LABEL_140;
    case 0x1Cu:
      if ( qword_140C5AD70 )
        sub_14042A5E0(1LL, v9);
      byte_140C547B8 = 1;
      v27 = sub_14038B628();
      goto LABEL_65;
    case 0x1Du:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      Length_4 = 4;
      v33 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
      Src = v33;
      if ( v33 )
      {
        v55 = 1;
        *v33 = dword_140C548DC;
        goto LABEL_60;
      }
      v27 = -1073741670;
      goto LABEL_65;
    case 0x1Eu:
    case 0x1Fu:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 8 )
        goto LABEL_173;
      if ( v8 == 30 )
        sub_140806904(Pool2);
      else
        sub_140807124(Pool2);
      goto LABEL_60;
    default:
      goto LABEL_76;
  }
}
