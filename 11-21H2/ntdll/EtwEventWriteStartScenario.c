/*
 * XREFs of EtwEventWriteStartScenario @ 0x180002EC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpGetKmRegHandle @ 0x18000498C (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180004AF0 (EtwEventEnabled.c)
 *     EtwEventWrite @ 0x1800061F0 (EtwEventWrite.c)
 *     EtwEventActivityIdControl @ 0x18005E5A0 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(__int64 a1, _OWORD *a2, unsigned int a3, __int64 a4)
{
  unsigned int KmRegHandle; // ebx
  _OWORD v10[3]; // [rsp+38h] [rbp-38h] BYREF

  if ( a2 )
  {
    if ( (unsigned __int8)EtwEventEnabled() )
    {
      memset(v10, 0, sizeof(v10));
      KmRegHandle = EtwpGetKmRegHandle(a1, v10);
      if ( !KmRegHandle )
      {
        *(_OWORD *)((char *)v10 + 8) = *a2;
        *(_GUID *)((char *)&v10[1] + 8) = NtCurrentTeb()->ActivityId;
        if ( _mm_cvtsi128_si32(*(__m128i *)((char *)&v10[1] + 8))
          || HIDWORD(v10[1])
          || LOBYTE(v10[2])
          || __PAIR16__(BYTE1(v10[2]), 0) != BYTE2(v10[2])
          || *(_WORD *)((char *)&v10[2] + 3)
          || __PAIR16__(BYTE5(v10[2]), 0) != BYTE6(v10[2])
          || BYTE7(v10[2])
          || (KmRegHandle = EtwEventActivityIdControl(3LL, (char *)&v10[1] + 8)) == 0
          && (KmRegHandle = EtwEventActivityIdControl(2LL, (char *)&v10[1] + 8)) == 0 )
        {
          DWORD2(v10[2]) = 10;
          KmRegHandle = EtwEventWrite(a1, a2, a3, a4);
          NtTraceControl(13LL, v10, 48LL);
        }
      }
    }
    else
    {
      return 6;
    }
  }
  else
  {
    return 87;
  }
  return KmRegHandle;
}
