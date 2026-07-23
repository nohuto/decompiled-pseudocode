/*
 * XREFs of sub_140A4D4A4 @ 0x140A4D4A4
 * Callers:
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 *     sub_140A4D480 @ 0x140A4D480 (sub_140A4D480.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4D828 @ 0x140A4D828 (sub_140A4D828.c)
 *     sub_140A4D8D8 @ 0x140A4D8D8 (sub_140A4D8D8.c)
 *     sub_140A4D92C @ 0x140A4D92C (sub_140A4D92C.c)
 *     sub_140A4D96C @ 0x140A4D96C (sub_140A4D96C.c)
 *     sub_140A4DA40 @ 0x140A4DA40 (sub_140A4DA40.c)
 */

void __fastcall sub_140A4D4A4(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // rsi
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdi
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  int v17; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // r15
  char v22; // r15
  int v23; // ebp
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rax
  ULONG_PTR v31; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp+10h]

  v32 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 320);
  v4 = 0;
  v6 = a2;
  v7 = BugCheckParameter3;
  v31 = 0LL;
  while ( *(_QWORD *)(v7 + 400) )
  {
    if ( (dword_140C23720 & 0x1F) == 0 )
      sub_14042A5E0(BugCheckParameter3, a2);
    ++dword_140C23720;
    v8 = *(_DWORD *)(v7 + 328);
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        sub_140A4DA40(v7, 0, *(_QWORD *)(v7 + 376), *(_QWORD *)(v7 + 384), *(_QWORD *)(v7 + 360));
        v26 = __rdtsc();
        qword_140C22E48 += v26 - *(_QWORD *)(v7 + 336);
        sub_140A4D96C(v6, v6 + 32, *(_QWORD *)(v7 + 384), *(unsigned int *)(v7 + 360));
        v27 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v27) << 32;
        qword_140C22E78 += (a2 | (unsigned int)v27) - v26;
        v28 = *(_QWORD *)(v7 + 360);
        v29 = *(_QWORD *)(v7 + 400) == v28;
        *(_QWORD *)(v7 + 400) -= v28;
        if ( v29 )
          *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 40);
        v30 = *(_QWORD *)(v7 + 352);
        *(_QWORD *)(v7 + 376) += v30;
        *(_QWORD *)(v7 + 344) += v30;
        *(_QWORD *)(v7 + 352) = 0LL;
        *(_DWORD *)(v7 + 328) = 0;
        continue;
      }
      ++qword_140C22E58;
      v16 = __rdtsc();
      v17 = sub_14042A5E0(2LL, v7 + 368);
      BugCheckParameter4 = v17;
      if ( v17 < 0 )
      {
        sub_140A4B974(29);
        sub_1405C6658(v7, 0x1C8u, 0LL);
        sub_1405C6658(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, BugCheckParameter4);
      }
      v19 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v19) << 32;
      qword_140C22E70 += (a2 | (unsigned int)v19) - v16;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return;
      *(_DWORD *)(v7 + 328) = 2;
    }
    else
    {
      sub_140A4D92C();
      v9 = sub_140A4D8D8(*(_QWORD *)(v7 + 160), *(_QWORD *)(v7 + 376), &v31);
      v10 = *(unsigned int *)(v7 + 408);
      *(_QWORD *)(v7 + 368) = v9;
      v11 = *(_QWORD *)(v7 + 400);
      v12 = (v10 << 12) - *(_QWORD *)(v7 + 344) % (unsigned __int64)(v10 << 12);
      if ( v12 >= v31 )
        v12 = v31;
      v13 = (unsigned int)v12;
      if ( v12 >= v11 )
        v13 = (unsigned int)v11;
      v14 = sub_140A4D828(v6, (unsigned int)v12, v13, a3);
      v15 = v14;
      if ( !v14 )
        return;
      *(_QWORD *)(v7 + 384) = v14;
      *(_QWORD *)v3 = 0LL;
      *(_DWORD *)(v3 + 40) = v12;
      *(_QWORD *)(v3 + 24) = v14;
      *(_WORD *)(v3 + 10) = 1;
      v20 = ((v14 & 0xFFF) + v12 + 4095) >> 12;
      *(_QWORD *)(v3 + 32) = v14 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v3 + 44) = v14 & 0xFFF;
      *(_WORD *)(v3 + 8) = 8 * (v20 + 6);
      if ( v20 )
      {
        v21 = 0LL;
        do
        {
          ++v4;
          *(_QWORD *)(v3 + 8 * v21 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v15 + (v21 << 12))).QuadPart >> 12;
          v21 = v4;
        }
        while ( v4 < v20 );
      }
      v22 = *(_BYTE *)(v7 + 392);
      v4 = 0;
      *(_QWORD *)(v7 + 336) = __rdtsc();
      v23 = sub_14042A5E0(v22 != 0, v7 + 368);
      if ( v23 == -1073741637 )
      {
        if ( !v22 )
          goto LABEL_36;
        *(_BYTE *)(v7 + 392) = 0;
        *(_QWORD *)(v7 + 336) = __rdtsc();
        v23 = sub_14042A5E0(0LL, v7 + 368);
      }
      if ( v23 < 0 || dword_140C2227C == 8 )
      {
LABEL_36:
        sub_140A4B974(29);
        sub_1405C6658(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, v23);
      }
      v24 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v24) << 32;
      qword_140C22E70 += (a2 | (unsigned int)v24) - *(_QWORD *)(v7 + 336);
      v25 = v12;
      BugCheckParameter3 = *(_QWORD *)(v7 + 400);
      *(_QWORD *)(v7 + 352) = v12;
      if ( v12 >= BugCheckParameter3 )
        v25 = BugCheckParameter3;
      *(_QWORD *)(v7 + 360) = v25;
      if ( !v22 || !v23 )
      {
        v6 = v32;
        *(_DWORD *)(v7 + 328) = 2;
        continue;
      }
      *(_DWORD *)(v7 + 328) = 1;
    }
    v6 = v32;
  }
}
