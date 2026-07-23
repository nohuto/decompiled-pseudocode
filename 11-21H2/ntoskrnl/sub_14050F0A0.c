/*
 * XREFs of sub_14050F0A0 @ 0x14050F0A0
 * Callers:
 *     sub_14051E90C @ 0x14051E90C (sub_14051E90C.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403B3A6C @ 0x1403B3A6C (sub_1403B3A6C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050F0A0(unsigned int a1, __int64 a2)
{
  _DWORD *v2; // rbp
  unsigned __int8 v3; // bl
  unsigned int v4; // r10d
  _OWORD *v5; // r11
  _OWORD *v6; // r11
  _DWORD v8[1024]; // [rsp+1020h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL);
  v3 = a1;
  if ( qword_140C4C538 )
    return sub_14042A5E0(a1, a2);
  *v2 = -1073741823;
  if ( sub_1403B3A6C() )
  {
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1000) = *v5;
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1010) = v5[1];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1020) = v5[2];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1030) = v5[3];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1040) = v5[4];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1050) = v5[5];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1060) = v5[6];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) - 16 + 0x1080) = v5[7];
    v6 = v5 + 8;
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1080) = *v6;
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1090) = v6[1];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10A0) = v6[2];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10B0) = v6[3];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10C0) = v6[4];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10D0) = v6[5];
    *(_QWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10B8) |= 0x400uLL;
    __writemsr(0x40000074u, MmGetPhysicalAddress(v2 + 1024).QuadPart & 0xFFFFFFFFFFFFF000uLL | v3);
    v4 = 0;
    *v2 = 0;
  }
  return v4;
}
