/*
 * XREFs of sub_140AF9508 @ 0x140AF9508
 * Callers:
 *     sub_140A5B290 @ 0x140A5B290 (sub_140A5B290.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     WheaConfigureErrorSource @ 0x140A55520 (WheaConfigureErrorSource.c)
 *     sub_140AF9C84 @ 0x140AF9C84 (sub_140AF9C84.c)
 *     KeHwPolicyLocateResource @ 0x140AFAC30 (KeHwPolicyLocateResource.c)
 */

__int64 __fastcall sub_140AF9508(int a1)
{
  void *v1; // rax
  __int64 (__fastcall *v2)(__int64, unsigned int, unsigned __int64); // rdx
  unsigned __int64 (__fastcall *v3)(__int64, __int64, __int64); // r8
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  if ( byte_140C4C450 )
  {
    v1 = sub_14050E2B0;
    v2 = sub_14050E3D0;
    v3 = sub_14050E360;
  }
  else
  {
    v1 = sub_140372940;
    v2 = (__int64 (__fastcall *)(__int64, unsigned int, unsigned __int64))qword_1403729B0;
    v3 = (unsigned __int64 (__fastcall *)(__int64, __int64, __int64))&qword_140372990;
  }
  qword_140C4BEC0 = (__int64)v1;
  qword_140C4BEC8 = (__int64)v3;
  qword_140C4BEB8 = (__int64)v2;
  if ( (int)KeHwPolicyLocateResource(a1, 102, 1, (unsigned int)&v8, (__int64)&v7) >= 0 && v7 >= 0x18 )
  {
    v4 = *(_QWORD *)(v8 + 16);
    if ( (v4 & 1) != 0 )
      qword_140C54B90 |= 1uLL;
    if ( (v4 & 2) != 0 )
      qword_140C54B90 |= 2uLL;
  }
  v6[0] = qword_140C4BEC8;
  v6[1] = qword_140C4BEB8;
  PshedSetHalEnlightenments(v6);
  qword_140C4A170 = sub_140AF9C84();
  if ( !qword_140C4A170 )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xB3uLL);
  qword_140C4A160 = sub_140AF9C84();
  if ( !qword_140C4A160 )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xBEuLL);
  qword_140C4A168 = sub_140AF9C84();
  if ( !qword_140C4A168 )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xC7uLL);
  qword_140C4A150 = 0LL;
  qword_140C4A178 = 0LL;
  qword_140C4A158 = 0LL;
  off_140C01D08[0] = (__int64 (__fastcall *)())sub_140524E30;
  WheaConfigureErrorSource(0, (__int64)&unk_140C04620);
  WheaConfigureErrorSource(1, (__int64)&unk_140C04620);
  WheaConfigureErrorSource(3, (__int64)&unk_140C04690);
  WheaConfigureErrorSource(5, (__int64)&unk_140C04658);
  WheaConfigureErrorSource(12, (__int64)&unk_140C04658);
  return 0LL;
}
