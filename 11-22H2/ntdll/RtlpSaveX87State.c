/*
 * XREFs of RtlpSaveX87State @ 0x1800AEC4C
 * Callers:
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

void *__fastcall RtlpSaveX87State(__int64 a1)
{
  __int64 v1; // xmm1_8
  __int128 v3; // [rsp+20h] [rbp-218h] BYREF
  __int64 v4; // [rsp+30h] [rbp-208h]
  _BYTE Src[480]; // [rsp+40h] [rbp-1F8h] BYREF

  _fxsave(&v3);
  v1 = v4;
  *(_OWORD *)(a1 + 256) = v3;
  *(_QWORD *)(a1 + 272) = v1;
  return memmove((void *)(a1 + 288), Src, 0x80uLL);
}
