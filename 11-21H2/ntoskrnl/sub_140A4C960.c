/*
 * XREFs of sub_140A4C960 @ 0x140A4C960
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 * Callees:
 *     sub_14038D2E0 @ 0x14038D2E0 (sub_14038D2E0.c)
 *     sub_14038D354 @ 0x14038D354 (sub_14038D354.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4BEC4 @ 0x140A4BEC4 (sub_140A4BEC4.c)
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 *     sub_140A4D4A4 @ 0x140A4D4A4 (sub_140A4D4A4.c)
 *     sub_140AADB90 @ 0x140AADB90 (sub_140AADB90.c)
 */

struct _KPRCB *__fastcall sub_140A4C960(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int v3; // edi
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // rdx
  _DWORD *v7; // rsi
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // r11
  __int64 v24; // rdi
  unsigned int v25; // ebp
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  int v33; // eax
  char v34; // cl
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int128 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+40h] [rbp-48h]
  unsigned __int64 v39; // [rsp+90h] [rbp+8h]

  v37 = 0LL;
  v38 = 0LL;
  result = KeGetCurrentPrcb();
  v3 = *((_DWORD *)result + 9);
  if ( v3 >= *(_DWORD *)(BugCheckParameter3 + 256) )
    return result;
  v4 = 0LL;
  *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 264) + ((unsigned __int64)v3 << 7) + 80) = 0LL;
  if ( v3 == *(_DWORD *)(BugCheckParameter3 + 192) )
  {
    byte_140C547E0 = 0;
    v32 = __rdtsc();
    if ( qword_140C547D8 )
    {
      v33 = sub_140AADB90(qword_140C547D8, 0xFFFFFFFFLL);
      v34 = byte_140C547E0;
      if ( v33 >= 0 )
        v34 = 1;
      byte_140C547E0 = v34;
    }
    v35 = __rdtsc();
    qword_140C22E80 += (((unsigned __int64)HIDWORD(v35) << 32) | (unsigned int)v35) - v32;
  }
  if ( !v3 )
  {
    v5 = 0LL;
    v6 = *(_QWORD **)(BugCheckParameter3 + 200);
    v39 = __rdtsc();
    if ( v6[11] == v6[69] )
      v5 = v6[72];
    *(_QWORD *)(BugCheckParameter3 + 400) = v5;
    v7 = qword_140C22C58;
    v8 = *(_DWORD *)(BugCheckParameter3 + 280);
    v9 = *(_QWORD *)(BugCheckParameter3 + 272);
    memset(qword_140C22C58, 0, 0x40uLL);
    v7[6] = 0;
    *(_QWORD *)v7 = v9;
    v7[2] = v8;
    *((_QWORD *)v7 + 2) = v5;
    *(_BYTE *)(BugCheckParameter3 + 4) = 1;
    sub_14038D2E0(2);
    if ( *(_QWORD *)(BugCheckParameter3 + 400) )
    {
      *(_DWORD *)(BugCheckParameter3 + 184) = 9;
      *(_QWORD *)(BugCheckParameter3 + 160) = &v37;
      *(_QWORD *)&v37 = qword_140C22BD8;
      *((_QWORD *)&v37 + 1) = qword_140C22BD8;
      v38 = 0LL;
      sub_14042A5E0(0LL, v10);
      v11 = sub_14038D354(*(_QWORD *)(BugCheckParameter3 + 168));
      v12 = v11;
      if ( v11 < 0 || dword_140C2227C == 4 )
      {
        sub_140A4B974(28);
        sub_1405C6658(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v12, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
      }
      v13 = __rdtsc();
      v14 = v39;
      qword_140C22E60 = (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v39;
      v15 = *(_QWORD *)(BugCheckParameter3 + 168);
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( *(_QWORD *)(v15 + 128) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      sub_140A4BEC4(BugCheckParameter3);
      v16 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_DWORD *)(BugCheckParameter3 + 184) = 10;
      *(_QWORD *)(BugCheckParameter3 + 376) = *(_QWORD *)(v16 + 112) << 12;
      while ( *(_QWORD *)(BugCheckParameter3 + 400) )
      {
        sub_140A4D4A4(BugCheckParameter3);
        if ( (unsigned int)sub_140A4CD9C(BugCheckParameter3, (__int64)sub_140A4D480) == -2147483614
          && !*(_DWORD *)(BugCheckParameter3 + 328) )
        {
          _mm_pause();
        }
      }
      sub_140A4CD9C(BugCheckParameter3, 0LL);
      if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL) )
        sub_14042A5E0(v18, v17);
    }
    else
    {
      v14 = v39;
    }
    sub_14038D2E0(3);
    sub_14042A5E0(1LL, v19);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
    while ( 1 )
    {
      v20 = *(_DWORD *)(BugCheckParameter3 + 256);
      if ( *(_DWORD *)(BugCheckParameter3 + 16) == v20 )
        break;
      _mm_pause();
    }
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0;
    if ( v20 )
    {
      v26 = *(_QWORD *)(BugCheckParameter3 + 264);
      do
      {
        v27 = v4;
        v28 = (unsigned __int64)v25 << 7;
        qword_140C22E40 += *(_QWORD *)(v28 + v26 + 64);
        qword_140C22E50 += *(_QWORD *)(v28 + *(_QWORD *)(BugCheckParameter3 + 264) + 72);
        qword_140C22E78 += *(_QWORD *)(v28 + *(_QWORD *)(BugCheckParameter3 + 264) + 80);
        v26 = *(_QWORD *)(BugCheckParameter3 + 264);
        v4 = *(_QWORD *)(v28 + v26 + 64) + *(_QWORD *)(v28 + v26 + 72);
        if ( v4 <= v27 )
          v4 = v27;
        v21 += *(_QWORD *)(v28 + v26 + 88);
        v22 += *(_QWORD *)(v28 + v26 + 96);
        ++v25;
        v23 += *(_QWORD *)(v28 + v26 + 104);
        v24 += *(_QWORD *)(v28 + v26 + 112);
        v20 = *(_DWORD *)(BugCheckParameter3 + 256);
      }
      while ( v25 < v20 );
    }
    v29 = v21 / (v23 + 1);
    v30 = v22 / (v24 + 1);
    if ( v30 > v29 )
    {
      v36 = 100 * (qword_140C22E48 * v20 / (v23 + v24 + 1) - v29) / (v30 - v29);
      if ( v36 > 99 )
      {
        dword_140C22C04 = 99;
        goto LABEL_32;
      }
      dword_140C22C04 = v36;
      if ( (int)v36 >= 1 )
        goto LABEL_32;
    }
    dword_140C22C04 = 1;
LABEL_32:
    v31 = __rdtsc();
    qword_140C22E68 = (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v14;
    result = (struct _KPRCB *)(qword_140C22E68 - qword_140C22E60 - v4);
    qword_140C22E38 = (__int64)result;
    return result;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  result = (struct _KPRCB *)sub_140A4CD9C(BugCheckParameter3, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  return result;
}
