/*
 * XREFs of sub_140A4B9E0 @ 0x140A4B9E0
 * Callers:
 *     sub_140429620 @ 0x140429620 (sub_140429620.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x140209CA0 (RtlCopyBitMap.c)
 *     sub_14025E8D8 @ 0x14025E8D8 (sub_14025E8D8.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     sub_14038D2E0 @ 0x14038D2E0 (sub_14038D2E0.c)
 *     sub_14038D354 @ 0x14038D354 (sub_14038D354.c)
 *     sub_14038D38C @ 0x14038D38C (sub_14038D38C.c)
 *     sub_14038D3A0 @ 0x14038D3A0 (sub_14038D3A0.c)
 *     sub_14038DA90 @ 0x14038DA90 (sub_14038DA90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405430DC @ 0x1405430DC (sub_1405430DC.c)
 *     sub_14054310C @ 0x14054310C (sub_14054310C.c)
 *     sub_1405498B4 @ 0x1405498B4 (sub_1405498B4.c)
 *     sub_14054991C @ 0x14054991C (sub_14054991C.c)
 *     sub_140549C24 @ 0x140549C24 (sub_140549C24.c)
 *     sub_140549D4C @ 0x140549D4C (sub_140549D4C.c)
 *     sub_14054ED18 @ 0x14054ED18 (sub_14054ED18.c)
 *     KdPowerTransition @ 0x1405657E0 (KdPowerTransition.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_1405C6A8C @ 0x1405C6A8C (sub_1405C6A8C.c)
 *     sub_1405D0014 @ 0x1405D0014 (sub_1405D0014.c)
 *     sub_1405E4210 @ 0x1405E4210 (sub_1405E4210.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4BE04 @ 0x140A4BE04 (sub_140A4BE04.c)
 *     sub_140A4C0E8 @ 0x140A4C0E8 (sub_140A4C0E8.c)
 *     sub_140A4C204 @ 0x140A4C204 (sub_140A4C204.c)
 *     sub_140A4DEAC @ 0x140A4DEAC (sub_140A4DEAC.c)
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 *     sub_140A6AE00 @ 0x140A6AE00 (sub_140A6AE00.c)
 *     sub_140A6B504 @ 0x140A6B504 (sub_140A6B504.c)
 *     sub_140A6B59C @ 0x140A6B59C (sub_140A6B59C.c)
 *     sub_140A6BDA0 @ 0x140A6BDA0 (sub_140A6BDA0.c)
 */

__int64 __fastcall sub_140A4B9E0(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // r15d
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // r13
  _RTL_BITMAP *v10; // rsi
  ULONG v11; // r8d
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  _RTL_BITMAP *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // rbp
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbp
  char *v23; // rsi
  _QWORD *v24; // rcx
  PVOID v25; // rax
  int v26; // edi
  unsigned int v27; // r12d
  ULONG v28; // eax
  _DWORD *v29; // rsi
  int v30; // ebp
  __int64 v31; // rdi
  __int64 v32; // r14
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // ecx
  unsigned int v41; // r8d
  __int64 v42; // rdx
  ULONG v43; // eax
  _DWORD *v44; // rsi
  int v45; // ebp
  __int64 v46; // rdi
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  char v52; // [rsp+30h] [rbp-2A8h]
  _DWORD v53[23]; // [rsp+34h] [rbp-2A4h] BYREF
  unsigned __int64 v54; // [rsp+90h] [rbp-248h]
  __int128 v55; // [rsp+98h] [rbp-240h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-230h]
  _OWORD v57[5]; // [rsp+B0h] [rbp-228h] BYREF
  __int128 v58[5]; // [rsp+100h] [rbp-1D8h] BYREF
  void *v59[40]; // [rsp+150h] [rbp-188h] BYREF
  int v60; // [rsp+2D0h] [rbp-8h]

  v56 = 0LL;
  v55 = 0LL;
  memset(v59, 0, 0x138uLL);
  v2 = 0;
  v53[0] = 0;
  memset(&v53[3], 0, 0x50uLL);
  v4 = *((unsigned int *)KeGetCurrentPrcb() + 9);
  if ( (_DWORD)v4 )
  {
    if ( (dword_140D0688C & 2) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
      while ( *(_DWORD *)(BugCheckParameter3 + 20) )
        _mm_pause();
      if ( byte_140C223A8 )
        return 1073742484;
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
      while ( *(_DWORD *)(BugCheckParameter3 + 24) )
        _mm_pause();
    }
  }
  else
  {
    sub_140A4B974(19);
  }
  if ( (unsigned int)v4 < *(_DWORD *)(BugCheckParameter3 + 256) )
  {
    if ( (_DWORD)v4 )
    {
      while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
        _mm_pause();
      LOBYTE(v3) = 1;
      v5 = v4 << 7;
      sub_140A4C204(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 264), v3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      while ( *(_DWORD *)(BugCheckParameter3 + 12) )
        _mm_pause();
      return (unsigned int)sub_140A4C204(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 264), 0LL);
    }
    dword_140C23720 = 0;
    _disable();
    if ( (v60 & 0x200) != 0 )
      sub_1405C6A8C(0xA1BC8uLL);
    if ( (dword_140C2227C & 0x80u) != 0 )
    {
      v52 = 0;
    }
    else
    {
      v52 = sub_14038D3A0((__int64)v53);
      if ( v52 )
        goto LABEL_11;
    }
    dword_140C22C88 |= 4u;
    byte_140C22C01 = 1;
LABEL_11:
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_140C22C88 |= 8u;
      byte_140C22C01 = 1;
    }
    if ( !(unsigned __int8)sub_14042A5E0(v7, v6) )
    {
      dword_140C22C88 |= 1u;
      byte_140C22C01 = 1;
    }
    if ( sub_14038D38C() )
    {
      dword_140C22C88 |= 0x40u;
      byte_140C22C01 = 1;
    }
    v8 = byte_140D0688B == 0;
    v9 = *(_QWORD *)(BugCheckParameter3 + 200);
    *(_QWORD *)(BugCheckParameter3 + 160) = &v55;
    *(_QWORD *)(BugCheckParameter3 + 176) = &unk_140CF6A70;
    *(_BYTE *)(BugCheckParameter3 + 2) = 1;
    if ( !v8 )
    {
      sub_14054310C(0);
      sub_14042A5E0(v35, v34);
      if ( (dword_140D0688C & 2) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
        while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)dword_140D06884 )
          _mm_pause();
        *(_QWORD *)&v53[3] = qword_140CF6C58;
        *(_QWORD *)&v53[5] = qword_140CF6BF8;
        *(_QWORD *)&v53[7] = qword_140CF6C00;
        *(_QWORD *)&v53[9] = qword_140CF6BF0;
        *(_QWORD *)&v53[11] = qword_140CF6C10;
        *(_QWORD *)&v53[13] = qword_140CF6C08;
        *(_OWORD *)&v53[15] = xmmword_140CF6C38;
        *(_OWORD *)&v53[19] = xmmword_140CF6C48;
        if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        {
          v57[0] = *(_OWORD *)&v53[3];
          v57[2] = *(_OWORD *)&v53[11];
          v57[1] = *(_OWORD *)&v53[7];
          v57[4] = *(_OWORD *)&v53[19];
          v57[3] = *(_OWORD *)&v53[15];
          v36 = sub_140549D4C(v57);
        }
        else
        {
          v58[0] = *(_OWORD *)&v53[3];
          v58[2] = *(_OWORD *)&v53[11];
          v58[1] = *(_OWORD *)&v53[7];
          v58[4] = *(_OWORD *)&v53[19];
          v58[3] = *(_OWORD *)&v53[15];
          v36 = sub_140549C24(
                  v58,
                  (_QWORD *)(v9 + 976),
                  (_QWORD *)(v9 + 984),
                  (_QWORD *)(v9 + 992),
                  (_QWORD *)(v9 + 1000));
        }
        v37 = v36;
        if ( v36 < 0 )
        {
          sub_1405C6658(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v37, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        *(_DWORD *)(BugCheckParameter3 + 20) = 0;
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
        while ( *(_DWORD *)(BugCheckParameter3 + 24) != (_DWORD)dword_140D06884 )
          _mm_pause();
        *(_DWORD *)(BugCheckParameter3 + 20) = dword_140D06884;
        *(_DWORD *)(BugCheckParameter3 + 24) = 0;
      }
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        sub_14054991C((PVOID)BugCheckParameter3);
      else
        sub_1405498B4((PVOID)BugCheckParameter3);
    }
    ++*(_DWORD *)v9;
    v10 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    v11 = 0;
    v12 = *(_DWORD **)(BugCheckParameter3 + 56);
    v13 = *(_DWORD **)(BugCheckParameter3 + 40);
    if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v11;
        *v12++ |= *v13++;
      }
      while ( v11 < v10->SizeOfBitMap >> 5 );
    }
    if ( byte_140C22C01 )
    {
      v14 = (_RTL_BITMAP *)(BugCheckParameter3 + 32);
    }
    else
    {
      RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter3 + 48), (PRTL_BITMAP)(BugCheckParameter3 + 32), 0);
      v14 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    RtlSetAllBits(v14);
    v15 = *(_QWORD *)(BugCheckParameter3 + 168);
    *(_DWORD *)(BugCheckParameter3 + 184) = 8;
    sub_14038DA90(v16, v15);
    if ( !byte_140C22C01 )
      sub_14038D2E0(1);
    v17 = __rdtsc();
    v18 = (int)sub_14038D354(*(_QWORD *)(BugCheckParameter3 + 168));
    v19 = __rdtsc();
    qword_140C22D28 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v17;
    if ( (v18 & 0x80000000) != 0LL || dword_140C2227C == 1 )
    {
      sub_140A4B974(20);
      sub_1405C6658(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v18, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
    }
    sub_140A4F19C((PVOID)BugCheckParameter3);
    v20 = *(_QWORD **)(BugCheckParameter3 + 64);
    byte_140C22280 = 1;
    if ( v20 != (_QWORD *)(BugCheckParameter3 + 64) )
    {
      do
      {
        v21 = v20[4];
        v22 = v20[3];
        v23 = (char *)v20[5];
        v20 = (_QWORD *)*v20;
        for ( *(_QWORD *)(BugCheckParameter3 + 88) += v21 - v22; v22 < v21; v22 += (unsigned __int64)LODWORD(v59[5]) >> 12 )
        {
          sub_140A4BE04(BugCheckParameter3, v59, v22, v21);
          memmove(v23, v59[3], LODWORD(v59[5]));
          v23 += LODWORD(v59[5]);
        }
      }
      while ( v20 != (_QWORD *)(BugCheckParameter3 + 64) );
      v10 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    sub_14025E8D8((_QWORD *)BugCheckParameter3);
    v24 = *(_QWORD **)(BugCheckParameter3 + 160);
    v25 = qword_140C22BD8;
    *v24 = qword_140C22BD8;
    v24[1] = v25;
    v24[2] = 0LL;
    v54 = __rdtsc();
    v26 = sub_140A4DEAC(BugCheckParameter3, v9);
    if ( v26 >= 0 )
    {
      v27 = *(_DWORD *)(v9 + 80);
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
      {
        v38 = (unsigned int)dword_140C23724;
        v39 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
        *(_DWORD *)(BugCheckParameter3 + 184) = 3;
        *(_QWORD *)(v9 + 96) = v39 + ((unsigned __int64)(4 * v38 + 4095) >> 12);
        sub_1405D0014(BugCheckParameter3);
        qword_140C22EB0 = *(unsigned int *)(BugCheckParameter3 + 252);
      }
      *(_DWORD *)(BugCheckParameter3 + 184) = 4;
      *(_QWORD *)(BugCheckParameter3 + 96) = v10;
      v28 = RtlNumberOfClearBits(v10);
      v29 = qword_140C22C58;
      v30 = *(_DWORD *)(BugCheckParameter3 + 280);
      v31 = *(_QWORD *)(BugCheckParameter3 + 272);
      v32 = (v28 + *(_QWORD *)(BugCheckParameter3 + 88)) << 12;
      memset(qword_140C22C58, 0, 0x40uLL);
      v29[6] = 0;
      *(_QWORD *)v29 = v31;
      v29[2] = v30;
      *((_QWORD *)v29 + 2) = v32;
      qword_140C22EB8 = 0LL;
      qword_140C22EC0 = 0LL;
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( v52 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 128LL) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      v33 = *(unsigned int *)(BugCheckParameter3 + 252)
          + ((4 * (unsigned __int64)(unsigned int)dword_140C23724 + 4095) >> 12)
          + (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
      *(_QWORD *)(v9 + 104) = v33;
      *(_QWORD *)(BugCheckParameter3 + 376) = v33 << 12;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      sub_140A4C0E8(BugCheckParameter3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      while ( 1 )
      {
        v40 = *(_DWORD *)(BugCheckParameter3 + 256);
        if ( *(_DWORD *)(BugCheckParameter3 + 12) == v40 )
          break;
        _mm_pause();
      }
      v41 = 0;
      if ( v40 )
      {
        do
        {
          v42 = v41++;
          v42 <<= 7;
          qword_140C22EB8 += *(_QWORD *)(v42 + *(_QWORD *)(BugCheckParameter3 + 264) + 56);
          *(_QWORD *)(v42 + *(_QWORD *)(BugCheckParameter3 + 264) + 56) = 0LL;
        }
        while ( v41 < *(_DWORD *)(BugCheckParameter3 + 256) );
      }
      qword_140C22EC8 = qword_140C22EE8;
      qword_140C22ED8 = (unsigned int)dword_140C22EF0;
      qword_140C22EE8 = 0LL;
      dword_140C22EF0 = 0;
      *(_DWORD *)(BugCheckParameter3 + 184) = 5;
      *(_QWORD *)(BugCheckParameter3 + 96) = BugCheckParameter3 + 32;
      *(_QWORD *)(BugCheckParameter3 + 112) = 0LL;
      v43 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 32));
      v44 = qword_140C22C58;
      v45 = *(_DWORD *)(BugCheckParameter3 + 280);
      v46 = *(_QWORD *)(BugCheckParameter3 + 272);
      v47 = (unsigned __int64)v43 << 12;
      memset(qword_140C22C58, 0, 0x40uLL);
      v44[6] = 0;
      *(_QWORD *)v44 = v46;
      v44[2] = v45;
      *((_QWORD *)v44 + 2) = v47;
      *(_QWORD *)(v9 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 376) + 4095LL) >> 12;
      *(_DWORD *)(BugCheckParameter3 + 12) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      sub_140A4C0E8(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 7;
      sub_140A6B504(BugCheckParameter3);
      v48 = v54;
      *(_DWORD *)(BugCheckParameter3 + 184) = 6;
      sub_140A6B59C(BugCheckParameter3, v9, v27, v48);
      v26 = *(_DWORD *)(BugCheckParameter3 + 188);
      if ( v26 >= 0 )
      {
        if ( dword_140C227E0 == dword_140C227E8 )
        {
          if ( (dword_140C22278 & 0x8000) == 0 )
            sub_1405E4210(0LL, -2LL, 0LL);
          sub_14054ED18(1u);
        }
        if ( (dword_140C22278 & 0x1000) != 0 )
        {
          v26 = -1073741632;
        }
        else
        {
          v26 = 0;
          if ( (dword_140C2227C & 0x10) != 0 )
          {
            v2 = 1073742484;
LABEL_86:
            sub_140A4B974(24);
            sub_14042A5E0(v50, v49);
            return v2;
          }
        }
      }
    }
    KdPowerTransition(4);
    v2 = v26;
    if ( v26 >= 0 && dword_140C227E0 == 5 )
    {
      sub_140A6BDA0();
      if ( byte_140D0688B )
        sub_1405430DC(0);
      sub_140A6AE00();
    }
    goto LABEL_86;
  }
  return v2;
}
