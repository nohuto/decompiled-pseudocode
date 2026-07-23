/*
 * XREFs of sub_140A4C5B4 @ 0x140A4C5B4
 * Callers:
 *     sub_140A4C0E8 @ 0x140A4C0E8 (sub_140A4C0E8.c)
 *     sub_140A4C590 @ 0x140A4C590 (sub_140A4C590.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     ntoskrnl_12 @ 0x1406AD260 (ntoskrnl_12.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4D8D8 @ 0x140A4D8D8 (sub_140A4D8D8.c)
 *     sub_140A4D96C @ 0x140A4D96C (sub_140A4D96C.c)
 *     sub_140A4DA40 @ 0x140A4DA40 (sub_140A4DA40.c)
 *     sub_140A4DB8C @ 0x140A4DB8C (sub_140A4DB8C.c)
 *     sub_140A6B37C @ 0x140A6B37C (sub_140A6B37C.c)
 *     sub_140A6B414 @ 0x140A6B414 (sub_140A6B414.c)
 */

char __fastcall sub_140A4C5B4(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  ULONG_PTR v4; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  ULONG_PTR i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  ULONG_PTR v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // r12
  unsigned int v28; // edi
  unsigned __int64 v29; // rbp
  ULONG_PTR v30; // r15
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  ULONG MaxDataSize[2]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-58h]
  ULONG_PTR v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+A8h] [rbp+10h]
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  v39 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 320);
  v4 = 0LL;
  *(_QWORD *)MaxDataSize = 0LL;
  v34 = 0LL;
  v5 = a3;
  v6 = a2;
  for ( i = BugCheckParameter3; ; *(_QWORD *)(i + 336) = v29 )
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(i + 328);
      if ( !(_DWORD)v8 )
        break;
      v18 = __rdtsc();
      v19 = v18;
      if ( (_DWORD)v8 == 1 )
      {
        BugCheckParameter4 = (int)sub_14042A5E0(2LL, i + 368);
        v21 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v21) << 32;
        qword_140C22D20 += (a2 | (unsigned int)v21) - v19;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          sub_140A4B974(21);
          sub_1405C6658(i, 0x1C8u, 0LL);
          sub_1405C6658(*(_QWORD *)(i + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return v4;
        *(_DWORD *)(i + 328) = 2;
      }
      else
      {
        qword_140C22D18 += v18 - *(_QWORD *)(i + 336);
        sub_140A4D96C(v6, v6 + 48, *(_QWORD *)(i + 384), *(unsigned int *)(i + 360));
        v22 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v22) << 32;
        qword_140C22D40 += (a2 | (unsigned int)v22) - v19;
        qword_140C22EE8 += *(_QWORD *)(i + 360);
        dword_140C22EF0 += (unsigned __int64)(*(_QWORD *)(i + 352) + 4095LL) >> 12;
        v23 = *(_QWORD *)(i + 352);
        *(_QWORD *)(i + 376) += v23;
        *(_QWORD *)(i + 344) += v23;
        *(_QWORD *)(i + 352) = 0LL;
        *(_DWORD *)(i + 328) = 0;
      }
    }
    if ( (dword_140C23720 & 0x1F) == 0 )
      sub_14042A5E0(v8, a2);
    v9 = *(_QWORD *)(i + 376);
    v10 = i + 368;
    v11 = *(_QWORD *)(i + 160);
    ++dword_140C23720;
    v37 = i + 368;
    v12 = sub_140A4D8D8(v11, v9, &v34);
    v13 = *(unsigned int *)(i + 408);
    *(_QWORD *)(i + 368) = v12;
    v14 = (v13 << 12) - *(_QWORD *)(i + 344) % (unsigned __int64)(v13 << 12);
    if ( v14 >= v34 )
      v14 = v34;
    v41 = v14;
    v15 = sub_140A4DB8C(v6, &v41, v5);
    v16 = v15;
    if ( !v15 )
      break;
    v24 = *(_QWORD *)(i + 376);
    v25 = v41;
    *(_QWORD *)(i + 384) = v15;
    *(_QWORD *)(i + 360) = v25;
    if ( v24 + v14 > qword_140C22BD0 )
    {
      sub_140A4B974(22);
      if ( (unsigned int)(*(_DWORD *)(i + 184) - 4) <= 1 )
        v4 = sub_140A6B37C(i);
      *(_QWORD *)MaxDataSize = ntoskrnl_12(0);
      sub_1403D99B4((ULONG)MaxDataSize, (PVOID)8);
      sub_140A6B414(i);
      sub_1403D99B4((ULONG)&byte_140C236A0, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140C22BD0, *(unsigned int *)(i + 184), v4);
    }
    sub_140A4DA40(i, 1, v24, v15, v25);
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 40) = v14;
    *(_QWORD *)(v3 + 24) = v16;
    v26 = ((v16 & 0xFFF) + v14 + 4095) >> 12;
    *(_DWORD *)(v3 + 44) = v16 & 0xFFF;
    v36 = v26;
    *(_WORD *)(v3 + 10) = 1;
    *(_WORD *)(v3 + 8) = 8 * (v26 + 6);
    *(_QWORD *)(v3 + 32) = v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( v26 )
    {
      v27 = 0LL;
      v28 = 0;
      do
      {
        ++v28;
        *(_QWORD *)(v3 + 8 * v27 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v16 + (v27 << 12))).QuadPart >> 12;
        v27 = v28;
      }
      while ( v28 < ((v16 & 0xFFF) + v14 + 4095) >> 12 );
      v5 = a3;
      v4 = 0LL;
      i = BugCheckParameter3;
      v10 = v37;
    }
    *(_QWORD *)(i + 352) = v14;
    if ( !*(_BYTE *)(i + 392) )
      goto LABEL_28;
    v29 = __rdtsc();
    v30 = (int)sub_14042A5E0(1LL, v10);
    v31 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v31) << 32;
    qword_140C22D20 += (a2 | (unsigned int)v31) - v29;
    if ( (_DWORD)v30 == -1073741637 )
    {
      *(_BYTE *)(i + 392) = 0;
    }
    else
    {
      if ( (v30 & 0x80000000) != 0LL || dword_140C2227C == 2 )
      {
        sub_140A4B974(21);
        sub_1405C6658(i, 0x1C8u, 0LL);
        sub_1405C6658(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v30);
      }
      *(_DWORD *)(i + 328) = ((_DWORD)v30 != 259) + 1;
    }
    if ( !*(_BYTE *)(i + 392) )
    {
LABEL_28:
      v29 = __rdtsc();
      v32 = (int)sub_14042A5E0(v10, v3);
      v33 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v33) << 32;
      qword_140C22D20 += (a2 | (unsigned int)v33) - v29;
      if ( (v32 & 0x80000000) != 0LL )
      {
        sub_140A4B974(21);
        sub_1405C6658(i, 0x1C8u, 0LL);
        sub_1405C6658(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v32);
      }
      *(_DWORD *)(i + 328) = 2;
    }
    v6 = v39;
  }
  LOBYTE(v4) = v41 == 0;
  return v4;
}
