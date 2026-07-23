/*
 * XREFs of sub_140A63680 @ 0x140A63680
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_1403BECF8 @ 0x1403BECF8 (sub_1403BECF8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052BA4C @ 0x14052BA4C (sub_14052BA4C.c)
 *     sub_14052BC28 @ 0x14052BC28 (sub_14052BC28.c)
 */

__int64 sub_140A63680()
{
  __int64 v0; // r13
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // r9
  unsigned int v30; // esi
  unsigned int v31; // ebx
  void *v32; // rax
  unsigned int v33; // ebx
  void *v34; // rax
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // r9d
  unsigned int v38; // r8d
  unsigned int v39; // ebp
  __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // r15
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 *v45; // r11
  unsigned int v46; // r9d
  __int64 v47; // rbx
  char v48; // r10
  __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 **v51; // rax
  unsigned __int16 *v52; // rbx
  __int64 result; // rax
  unsigned int i; // edi
  int LockArray_high; // [rsp+30h] [rbp-48h]

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v0 = 18LL;
  if ( !LockArray_high )
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    v6 = 4;
    v7 = _RCX;
    if ( (_RCX & 0x800000) != 0 )
    {
      dword_140C49F08 |= 1u;
      v8 = -1073675776;
      dword_140C49EA4 = 6;
      v9 = 0LL;
      v10 = 6LL;
      do
      {
        *(_DWORD *)((char *)&xmmword_140C49FA0 + v9) = v8;
        *(_DWORD *)((char *)&xmmword_140C49EC0 + v9) = v8 + 1;
        v8 += 2;
        v9 += 4LL;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      xmmword_140C49EC0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140047E20);
      dword_140C49EA4 = 4;
      xmmword_140C49FA0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140047E10);
    }
    v11 = dword_140C49EA4;
    dword_140C49FE0 = dword_140C49EA4;
    if ( (v7 & 0x1000000) != 0 && (v7 & 0x400000) != 0 )
    {
      dword_140C49F08 |= 2u;
      v12 = -1073675712;
      dword_140C49FE4 = 4;
      v13 = 4LL;
      do
      {
        v14 = v11;
        v15 = v12 + 1;
        ++v11;
        *((_DWORD *)&xmmword_140C49FA0 + v14) = v12;
        v12 += 2;
        *((_DWORD *)&xmmword_140C49EC0 + v14) = v15;
        --v13;
      }
      while ( v13 );
      dword_140C49FE0 += 4;
      qword_140C49E98 = (__int64)&qword_140C49E90;
      qword_140C49E90 = (__int64)&qword_140C49E90;
    }
    if ( (v7 & 0x10000000) != 0 && (v7 & 0x400000) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      dword_140C49F08 |= 4u;
      if ( *((_BYTE *)CurrentPrcb + 64) != 22 )
        v6 = 6;
      v17 = (unsigned int)(dword_140C49EA4 + dword_140C49FE4);
      dword_140C49EA0 = v6;
      v18 = -1073675728;
      v19 = v6;
      do
      {
        *((_DWORD *)&xmmword_140C49FA0 + v17) = v18;
        *((_DWORD *)&xmmword_140C49EC0 + v17) = v18 + 1;
        v18 += 2;
        v17 = (unsigned int)(v17 + 1);
        --v19;
      }
      while ( v19 );
      dword_140C49FE0 += dword_140C49EA0;
      qword_140C49F48 = (__int64)&qword_140C49F40;
      qword_140C49F40 = (__int64)&qword_140C49F40;
    }
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0
        && (*((_BYTE *)KeGetCurrentPrcb() + 64) != 23 || *((_BYTE *)KeGetCurrentPrcb() + 67) >= 0x1Fu) )
      {
        dword_140C49F08 |= 8u;
      }
    }
    v30 = sub_1403B3BA0();
    v31 = 24 * v30 * dword_140C49FE0;
    v32 = (void *)sub_1403BECF8(v31);
    qword_140C49F38 = (__int64)v32;
    if ( !v32 )
      KeBugCheckEx(0xACu, v31, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x83FuLL);
    memset(v32, 0, v31);
    v33 = 8 * v30 * dword_140C49FE0;
    v34 = (void *)sub_1403BECF8(v33);
    qword_140C4D0A8 = (__int64)v34;
    if ( !v34 )
      KeBugCheckEx(0xACu, v33, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x84FuLL);
    memset(v34, 0, v33);
    v35 = 40 * v30 * dword_140C49EA4;
    qword_140C49F00 = sub_1403BECF8(v35);
    if ( !qword_140C49F00 )
      KeBugCheckEx(0xACu, v35, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x85FuLL);
    v36 = 0;
    v37 = dword_140C49FE0;
    dword_140C4D058 = dword_140C49EA4;
    qword_140C4D050 = (__int64)qword_14003AB58;
    qword_140C49F70 = (__int64)&unk_140C49F20;
    LODWORD(qword_140C4D044) = dword_140C49FE0;
    for ( dword_140C4D0D0 = 0; v36 < v30; ++v36 )
    {
      v38 = 0;
      if ( v37 )
      {
        v39 = dword_140C49EA4;
        v40 = 0LL;
        v41 = 0LL;
        v42 = qword_140C49F00 + 40LL * v36 * dword_140C49EA4;
        v43 = qword_140C49F38 + 24LL * v36 * v37;
        do
        {
          v44 = qword_140C4D0A8;
          if ( off_140C02520 != &off_1400032A0 )
            v44 = qword_140C4D0A8 + 8LL * v36 * v37;
          if ( v38 >= v39 )
          {
            *(_QWORD *)(v40 + v44) = &unk_140C49F60;
          }
          else
          {
            *(_QWORD *)(v40 + v44) = v41 + v42;
            *(_QWORD *)(v41 + v42 + 16) = v43 + 24LL * v38;
          }
          ++v38;
          v41 += 40LL;
          v40 += 8LL;
        }
        while ( v38 < v37 );
      }
    }
    v45 = &qword_140C4D0C0;
    *(__int64 *)((char *)&qword_140C4D044 + 4) = 0LL;
    qword_140C4D0C8 = (__int64)&qword_140C4D0C0;
    v46 = 0;
    qword_140C4D0C0 = (__int64)&qword_140C4D0C0;
    do
    {
      v47 = 320LL * v46;
      v48 = byte_140C0033D[v47];
      if ( v48 && *(_DWORD *)((char *)&unk_140C00320 + v47) == 32 && (dword_140C49F08 & 8) != 0 )
      {
        v48 = 0;
        byte_140C0033D[v47] = 0;
      }
      if ( !*(_QWORD *)((char *)&unk_140C00450 + v47) )
      {
        v49 = sub_14052BC28(*(_DWORD *)((char *)&unk_140C00320 + v47));
        if ( v49 )
          *(_QWORD *)((char *)&unk_140C00450 + v47) = v49;
      }
      if ( !v48 )
      {
        v50 = (__int64 *)qword_140C4D0C8;
        v51 = (__int64 **)((char *)&unk_140C00328 + v47);
        if ( *(__int64 **)qword_140C4D0C8 != v45 )
          __fastfail(3u);
        ++dword_140C4D0A0;
        *v51 = v45;
        v51[1] = v50;
        *v50 = (__int64)v51;
        qword_140C4D0C8 = (__int64)&unk_140C00328 + v47;
      }
      ++v46;
    }
    while ( v46 < 0x12 );
  }
  if ( (dword_140C49F08 & 8) != 0 )
    __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x40000000);
  v52 = (unsigned __int16 *)&unk_140C00340;
  do
  {
    result = KeAddProcessorAffinityEx(v52, LockArray_high);
    v52 += 160;
    --v0;
  }
  while ( v0 );
  for ( i = 0; i < dword_140C49EA4; ++i )
  {
    __writemsr(*((_DWORD *)&xmmword_140C49FA0 + i), 0LL);
    result = sub_14052BA4C(i);
  }
  return result;
}
