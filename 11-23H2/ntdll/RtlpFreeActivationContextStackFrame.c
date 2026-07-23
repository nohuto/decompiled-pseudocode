/*
 * XREFs of RtlpFreeActivationContextStackFrame @ 0x18007415C
 * Callers:
 *     RtlFreeActivationContextStack @ 0x180073F80 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180074060 (RtlDeactivateActivationContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

void __fastcall RtlpFreeActivationContextStackFrame(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *i; // rsi
  _QWORD *v5; // rbx
  int v6; // r8d
  _QWORD *v7; // rax
  unsigned __int64 *ExceptionInformation; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-69h] BYREF

  if ( a2 && (*(_BYTE *)(a2 + 16) & 4) == 0 )
  {
    v3 = a1 + 8;
    for ( i = *(_QWORD **)(a1 + 8); i != (_QWORD *)v3; i = (_QWORD *)*i )
    {
      v5 = i - 1;
      if ( *((_DWORD *)i - 2) != 1953721414 )
      {
        ExceptionRecord.ExceptionRecord = 0LL;
        *(__m128i *)ExceptionRecord.ExceptionInformation = _mm_load_si128((const __m128i *)&_xmm);
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[2] = v3;
        ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(i - 1);
        ExceptionRecord.ExceptionCode = -1072365547;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
      }
      v6 = *((_DWORD *)v5 + 1);
      if ( *((_DWORD *)v5 + 7) != ~v6 )
      {
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionInformation = ExceptionRecord.ExceptionInformation;
        v9 = 1LL;
        ExceptionRecord.NumberParameters = 4;
        v10 = 2LL;
        do
        {
          *ExceptionInformation++ = v9++;
          --v10;
        }
        while ( v10 );
        ExceptionRecord.ExceptionInformation[2] = v3;
        ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(i - 1);
        ExceptionRecord.ExceptionCode = -1072365547;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
        v6 = *((_DWORD *)v5 + 1);
      }
      if ( a2 >= (unsigned __int64)(v5 + 4) && a2 < (unsigned __int64)(v5 + 388) )
      {
        if ( (_QWORD *)a2 == &v5[12 * (unsigned int)(((int)a2 - (int)v5 - 32) / 96) + 4] )
        {
          if ( v6 )
          {
            *((_DWORD *)v5 + 1) = v6 - 1;
            *((_DWORD *)v5 + 7) = ~(v6 - 1);
            *(_DWORD *)(a2 + 16) = 4;
            if ( !*((_DWORD *)v5 + 1) )
            {
              v7 = (_QWORD *)i[1];
              if ( v7 != (_QWORD *)v3 )
              {
                do
                {
                  v11 = (_QWORD *)v7[1];
                  if ( !*((_DWORD *)v7 - 1) )
                  {
                    v12 = *v7;
                    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v11 != v7 )
                      __fastfail(3u);
                    *v11 = v12;
                    *(_QWORD *)(v12 + 8) = v11;
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7 - 1);
                  }
                  v7 = v11;
                }
                while ( v11 != (_QWORD *)v3 );
              }
            }
          }
        }
        return;
      }
    }
  }
}
