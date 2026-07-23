/*
 * XREFs of sub_14050BAC8 @ 0x14050BAC8
 * Callers:
 *     sub_140303240 @ 0x140303240 (sub_140303240.c)
 *     sub_140305670 @ 0x140305670 (sub_140305670.c)
 *     sub_140521AC0 @ 0x140521AC0 (sub_140521AC0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 (__fastcall **__fastcall sub_14050BAC8(int a1))()
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rsi
  __int64 i; // rdi
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  result = &off_1400032A0;
  if ( off_140C02520 == &off_1400032A0 )
  {
    v4 = qword_140C4D0A8;
  }
  else
  {
    result = (__int64 (__fastcall **)())qword_140C4D0A8;
    v4 = qword_140C4D0A8 + 8LL * (unsigned int)(a1 * dword_140C4D044);
  }
  for ( i = 0LL; (unsigned int)i < dword_140C4D044; i = (unsigned int)(i + 1) )
  {
    result = *(__int64 (__fastcall ***)())(v4 + 8 * i);
    if ( !*((_BYTE *)result + 36) && *((_DWORD *)result + 6) <= 1u )
    {
      result = (__int64 (__fastcall **)())sub_14042A5E0((unsigned int)i, &v6);
      if ( (int)result >= 0 )
      {
        result = *(__int64 (__fastcall ***)())(v4 + 8 * i);
        if ( v6 )
          *((_BYTE *)result + 36) = 1;
        else
          result[1] = (__int64 (__fastcall *)())PerformanceCounter.QuadPart;
      }
    }
  }
  return result;
}
