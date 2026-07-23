/*
 * XREFs of NtRaiseHardError @ 0x140A01300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x140A00C30 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x140A00F68 (ExpRaiseHardError.c)
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  __int64 v7; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int i; // eax
  __int64 v13; // r8
  _OWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  NTSTATUS v18; // edx
  ULONG v19; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-F4h]
  NTSTATUS v21; // [rsp+48h] [rbp-F0h]
  _QWORD Src[5]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v23[15]; // [rsp+78h] [rbp-C0h] BYREF

  v7 = NumberOfParameters;
  v19 = 0;
  if ( NumberOfParameters > 5 )
    return -1073741584;
  if ( Parameters )
  {
    if ( NumberOfParameters )
      goto LABEL_6;
    return -1073741584;
  }
  if ( NumberOfParameters )
    return -1073741584;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ValidResponseOptions > 6 && ValidResponseOptions - 7 >= 2 )
      return -1073741582;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Response < 0x7FFFFFFF0000LL )
      v10 = (__int64)Response;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( Parameters )
    {
      v11 = NumberOfParameters;
      if ( v11 * 8 )
      {
        if ( ((unsigned __int8)Parameters & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Parameters[v11] > 0x7FFFFFFF0000LL || &Parameters[v11] < Parameters )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(Src, Parameters, 8LL * NumberOfParameters);
      memmove(v23, Src, 8 * v7);
      if ( UnicodeStringParameterMask )
      {
        for ( i = 0; ; ++i )
        {
          v20 = i;
          if ( i >= (unsigned int)v7 )
            break;
          if ( _bittest((const int *)&UnicodeStringParameterMask, i) )
          {
            v13 = i;
            v14 = (_OWORD *)Src[v13];
            if ( ((unsigned __int8)v14 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v15 = 2LL * i;
            *(_OWORD *)&v23[v15 + 5] = *v14;
            v16 = WORD1(v23[v15 + 5]);
            if ( (_WORD)v16 )
            {
              v17 = v23[v15 + 6];
              if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v23[v13] = &v23[v15 + 5];
            i = v20;
          }
        }
      }
    }
    v18 = ExpRaiseHardError(
            ErrorStatus,
            v7,
            UnicodeStringParameterMask,
            (unsigned __int64)Src,
            (__int64)v23,
            ValidResponseOptions,
            &v19);
    v21 = v18;
    *Response = v19;
  }
  else
  {
    v18 = ExRaiseHardError(
            ErrorStatus,
            NumberOfParameters,
            UnicodeStringParameterMask,
            (char *)Parameters,
            ValidResponseOptions,
            (int *)&v19);
    *Response = v19;
  }
  return v18;
}
