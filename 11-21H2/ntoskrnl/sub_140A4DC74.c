/*
 * XREFs of sub_140A4DC74 @ 0x140A4DC74
 * Callers:
 *     sub_1405D0014 @ 0x1405D0014 (sub_1405D0014.c)
 *     sub_1405D00BC @ 0x1405D00BC (sub_1405D00BC.c)
 *     sub_140A4DEAC @ 0x140A4DEAC (sub_140A4DEAC.c)
 *     sub_140A6B504 @ 0x140A6B504 (sub_140A6B504.c)
 *     sub_140A6B59C @ 0x140A6B59C (sub_140A6B59C.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C6A8C @ 0x1405C6A8C (sub_1405C6A8C.c)
 *     ntoskrnl_12 @ 0x1406AD260 (ntoskrnl_12.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4D8D8 @ 0x140A4D8D8 (sub_140A4D8D8.c)
 *     sub_140A6B37C @ 0x140A6B37C (sub_140A6B37C.c)
 *     sub_140A6B414 @ 0x140A6B414 (sub_140A6B414.c)
 */

__int64 __fastcall sub_140A4DC74(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  unsigned int i; // esi
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  ULONG MaxDataSize[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  _QWORD v29[40]; // [rsp+70h] [rbp-90h] BYREF

  v26 = a1;
  v6 = a1;
  memset(v29, 0, 0x138uLL);
  result = (unsigned int)dword_140C23720;
  BugCheckParameter4 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( (dword_140C23720 & 0x1F) == 0 )
    result = sub_14042A5E0(v9, v8);
  ++dword_140C23720;
  if ( *(int *)(v6 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_140C22BD0 )
    {
      sub_140A4B974(22);
      if ( (unsigned int)(*(_DWORD *)(v6 + 184) - 4) <= 1 )
        BugCheckParameter4 = sub_140A6B37C(v6);
      *(_QWORD *)MaxDataSize = ntoskrnl_12(0);
      sub_1403D99B4((ULONG)MaxDataSize, (PVOID)8);
      sub_140A6B414(v6);
      sub_1403D99B4((ULONG)&byte_140C236A0, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140C22BD0, *(unsigned int *)(v6 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      sub_1405C6A8C(0xA2336uLL);
    result = *(_QWORD *)(v6 + 160);
    v12 = a4 << 12;
    v28 = result;
    v13 = a3 << 12;
    while ( v13 )
    {
      v24 = sub_140A4D8D8(result, v12, &v23);
      v14 = v13;
      if ( v13 > v23 )
        v14 = v23;
      v15 = a2 & 0xFFF;
      v16 = ((unsigned __int64)v14 + v15 + 4095) >> 12;
      if ( v16 > 0x10 )
      {
        v22 = v16 - 16;
        v16 = 16LL;
        v14 -= v22 << 12;
      }
      v27 = v14;
      v29[0] = 0LL;
      HIDWORD(v29[5]) = a2 & 0xFFF;
      LOWORD(v29[1]) = 8 * (((v15 + (unsigned __int64)v14 + 4095) >> 12) + 6);
      LODWORD(v29[5]) = v14;
      v29[4] = a2 & 0xFFFFFFFFFFFFF000uLL;
      v29[3] = a2;
      WORD1(v29[1]) = 1;
      if ( v16 )
      {
        v17 = 0LL;
        for ( i = 0; i < v16; v17 = i )
        {
          ++i;
          v29[v17 + 6] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v17 << 12))).QuadPart >> 12;
        }
        v6 = v26;
      }
      v19 = __rdtsc();
      v20 = sub_14042A5E0(&v24, v29);
      v21 = __rdtsc();
      dword_140C22EF0 += v16;
      qword_140C22D18 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v19;
      result = v27;
      v13 -= v27;
      v12 += v27;
      a2 += v27;
      if ( v20 < 0 )
      {
        *(_DWORD *)(v6 + 188) = v20;
        return result;
      }
      result = v28;
    }
  }
  return result;
}
