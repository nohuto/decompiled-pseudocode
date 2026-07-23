/*
 * XREFs of sub_140AF819C @ 0x140AF819C
 * Callers:
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 */

__int64 __fastcall sub_140AF819C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  qword_140C4BEE8 = 0LL;
  qword_140D681A0 = qword_140D68688;
  qword_140D68688 = (ULONG_PTR)&qword_140D681A0;
  v6 = 0LL;
  if ( byte_140C4C678 )
  {
    HviGetHardwareFeatures((__int64)&v6, a2, a3, a4);
    if ( (v6 & 0x4000) != 0 )
      byte_140D011A0 = 1;
  }
  result = sub_140AF82A8(a1);
  if ( (int)result >= 0 )
  {
    off_140C01DC0[0] = (__int64 (__fastcall *)())sub_140397D10;
    off_140C01DC8[0] = (__int64 (__fastcall *)())sub_1403B6180;
    off_140C01E60[0] = (__int64 (__fastcall *)())sub_1405091D0;
    off_140C01E68[0] = (__int64 (__fastcall *)())sub_140507CF0;
    off_140C02148[0] = (__int64 (__fastcall *)())sub_1408640C0;
    off_140C01DB8[0] = (__int64 (__fastcall *)())sub_140909800;
    off_140C01DD0[0] = (__int64 (__fastcall *)())sub_1403B4C50;
    off_140C01DD8[0] = (__int64 (__fastcall *)())sub_14051CF20;
    off_140C01F30[0] = (__int64 (__fastcall *)())sub_1403DF5A0;
    off_140C01F38[0] = (__int64 (__fastcall *)())sub_140236500;
    return 0LL;
  }
  return result;
}
