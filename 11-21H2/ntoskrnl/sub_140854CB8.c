/*
 * XREFs of sub_140854CB8 @ 0x140854CB8
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_140261C40 @ 0x140261C40 (sub_140261C40.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 *     sub_1406EF8B8 @ 0x1406EF8B8 (sub_1406EF8B8.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_140797BD4 @ 0x140797BD4 (sub_140797BD4.c)
 *     sub_14079805C @ 0x14079805C (sub_14079805C.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 sub_140854CB8()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+30h] [rbp-40h] BYREF
  void *v12; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-28h] BYREF

  v0 = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v1 = qword_140D05008;
  v2 = 4;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v3 = 2LL;
  if ( *(_DWORD *)(qword_140D05008 + 16) > 4u )
  {
    do
    {
      v4 = sub_140797594(v1, v2, 0);
      v5 = v4;
      if ( v4 )
      {
        if ( *(int *)(v4 + 816) < 0 )
        {
          sub_140797BD4((unsigned int *)(v4 + 276), &v12);
          sub_1406EF8B8(v5, v12);
          sub_14079805C(&v12);
          ClientSecurityQos.Length = 12;
          ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
          *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
          SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v5 + 704));
          sub_140261C40(**(_QWORD **)(v5 + 1096), v5);
        }
        sub_1407981E8((unsigned int *)v5, 0);
      }
      v1 = qword_140D05008;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(qword_140D05008 + 16) );
  }
  v6 = 0LL;
  v7 = 2LL;
  do
  {
    v8 = _mm_loadu_si128((const __m128i *)&dword_140D07140[v6 / 4]);
    v9 = _mm_loadu_si128((const __m128i *)&xmmword_140D06900[v6 / 0x10]);
    v6 += 16LL;
    *(__m128i *)(&ClientSecurityQos.ContextTrackingMode + v6) = _mm_and_si128(v8, v9);
    --v7;
  }
  while ( v7 );
  if ( (int)sub_1406D5424((char *)xmmword_140D06900, v13, qword_140D05008, 0) < 0 )
  {
    KeWaitForSingleObject(&stru_140C160E0, Executive, 0, 0, 0LL);
    do
    {
      xmmword_140D06900[v0] = (__int128)_mm_and_si128(
                                          _mm_andnot_si128(
                                            _mm_loadu_si128((const __m128i *)&v13[v0]),
                                            (__m128i)xmmword_14001C760),
                                          _mm_loadu_si128((const __m128i *)&xmmword_140D06900[v0]));
      ++v0;
      --v3;
    }
    while ( v3 );
    KeReleaseMutex(&stru_140C160E0, 0);
  }
  return 0LL;
}
