/*
 * XREFs of sub_140A4CD9C @ 0x140A4CD9C
 * Callers:
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14038C498 @ 0x14038C498 (sub_14038C498.c)
 *     sub_14038C720 @ 0x14038C720 (sub_14038C720.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4D208 @ 0x140A4D208 (sub_140A4D208.c)
 *     sub_140A4D27C @ 0x140A4D27C (sub_140A4D27C.c)
 *     sub_140A4D310 @ 0x140A4D310 (sub_140A4D310.c)
 *     sub_140A4D92C @ 0x140A4D92C (sub_140A4D92C.c)
 *     sub_140A4D96C @ 0x140A4D96C (sub_140A4D96C.c)
 *     sub_140AAD188 @ 0x140AAD188 (sub_140AAD188.c)
 */

__int64 __fastcall sub_140A4CD9C(_DWORD *BugCheckParameter3, _QWORD *a2, int a3, char a4, __int64 a5)
{
  char *v8; // r12
  unsigned int v9; // esi
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  _DWORD *v14; // r12
  unsigned int v15; // edi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r9
  _QWORD *v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rdi
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  _DWORD *v30; // r13
  unsigned __int64 v31; // r12
  int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned int v34; // ecx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  char *v46; // [rsp+78h] [rbp-88h]
  unsigned __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  _DWORD *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  _QWORD v51[22]; // [rsp+A0h] [rbp-60h] BYREF
  char v52; // [rsp+150h] [rbp+50h] BYREF

  v45 = a5;
  memset(v51, 0, sizeof(v51));
  LODWORD(v8) = (_DWORD)qword_140C22C58;
  v9 = 0;
  v44 = 0;
  v48 = 0LL;
  v42 = 0;
  v46 = (char *)qword_140C22C58;
  while ( 1 )
  {
    sub_140A4D92C();
    if ( !qword_140C22E98 && BugCheckParameter3[48] == *((_DWORD *)KeGetCurrentPrcb() + 9) && byte_140C22C00 )
      qword_140C22E98 = KeQueryPerformanceCounter(0LL).QuadPart;
    v11 = *((unsigned int *)KeGetCurrentPrcb() + 9);
    if ( BugCheckParameter3[48] == (_DWORD)v11
      && !byte_140C22C01
      && ((unsigned int)dword_140C22BE4 > 0x640 || !byte_140C22C00) )
    {
      v36 = __rdtsc();
      if ( byte_140C547E0 )
      {
        LOBYTE(v11) = 1;
        sub_140AAD188(v11);
        byte_140C54905 = 1;
      }
      v37 = __rdtsc();
      qword_140C22E80 += (((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v37) - v36;
    }
    v41 = 4;
    v12 = sub_140A4D310((_DWORD)v8, (unsigned int)&v41, a3, v10, (__int64)a2);
    v13 = v12;
    if ( !v12 )
      break;
    v14 = (_DWORD *)sub_140A4D208(v12, 4, (unsigned int)&v44, (_DWORD)v8, (__int64)a2, 1);
    v49 = v14;
    v15 = 8 * (unsigned __int8)*v14;
    v16 = sub_140A4D208((int)v13 + 4, v15, (unsigned int)&v52, (_DWORD)v46, (__int64)a2, 1);
    v18 = &v51[6];
    v19 = (_QWORD *)v16;
    v20 = *v14;
    v43 = v13 + v15 + 4LL;
    v21 = 0LL;
    if ( (_BYTE)v20 )
    {
      v22 = (unsigned __int8)v20;
      do
      {
        v23 = *v19 >> 4;
        v17 = v23 + (*v19 & 0xFLL) + 1;
        v21 += (*v19 & 0xFLL) + 1;
        while ( v23 < v17 )
          *v18++ = v23++;
        ++v19;
        --v22;
      }
      while ( v22 );
    }
    if ( v21 > (unsigned int)BugCheckParameter3[71] )
    {
      sub_140A4B974(31);
      sub_1405C6658((__int64)BugCheckParameter3, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v24 = a2[1];
    v25 = (_DWORD)v21 << 12;
    v50 = v25;
    v51[0] = 0LL;
    LODWORD(v51[1]) = (unsigned __int16)(8 * (((unsigned __int64)v25 >> 12) + 6));
    v51[4] = 0LL;
    v51[5] = v25;
    sub_14038C498(v24, v17, (__int64)v51, 1);
    v26 = (*v14 >> 8) & 0x3FFFFF;
    v8 = v46;
    v47 = __rdtsc();
    if ( v26 == v25 )
    {
      sub_140A4D27C(v51[3], v25, v46, v43);
      a2[9] += __rdtsc() - v47;
      v38 = __rdtsc();
      sub_140A4D96C(v8, v8 + 48, v13, v41);
      v39 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v39) << 32) | (unsigned int)v39) - v38;
    }
    else
    {
      sub_140A4D27C(a2[3], v26, v46, v43);
      v27 = v41;
      v43 = __rdtsc();
      a2[9] += v43 - v47;
      sub_140A4D96C(v8, v8 + 48, v13, v27);
      v28 = __rdtsc();
      v29 = (unsigned __int64)HIDWORD(v28) << 32;
      a2[10] += (v29 | (unsigned int)v28) - v43;
      if ( v45 )
      {
        sub_14042A5E0(BugCheckParameter3, v29);
        v48 = qword_140C22E70;
      }
      v30 = v49;
      v31 = __rdtsc();
      v32 = sub_14038C720(
              *((_WORD *)&qword_1400243A0 + ((unsigned __int64)(unsigned int)*v49 >> 30)),
              v51[3],
              v25,
              a2[3],
              (*v49 >> 8) & 0x3FFFFF,
              (__int64)&v42,
              a2[2],
              v45,
              (__int64)BugCheckParameter3);
      v33 = __rdtsc();
      if ( v32 < 0 || v42 != v25 )
      {
        BugCheckParameter3[47] = -1073741246;
        sub_140A4B974(31);
        sub_1405C6658((__int64)BugCheckParameter3, 0x1C8u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      a2[8] += v33 - v31;
      if ( v45 )
        a2[8] = v48 + a2[8] - qword_140C22E70;
      LODWORD(v8) = (_DWORD)v46;
      v34 = *v30 >> 30;
      *(_QWORD *)((char *)a2 + (-(__int64)(v34 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 112) += v50;
      *(_QWORD *)((char *)a2 + (-(__int64)(v34 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 96) += v33 - v43;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
