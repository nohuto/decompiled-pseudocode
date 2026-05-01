/*
 * XREFs of ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x1800C7C84
 * Callers:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800C7900 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1805D0770 (-Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall TraceLoggingCorrelationVector::ValidateImpl(const char *a1, char a2)
{
  int v4; // ecx
  char *v5; // r8
  char v6; // bp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char String[8]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ah] [rbp-2Eh]

  v5 = (char *)(strchr(a1, 46) - a1);
  if ( v5 == (char *)22 )
  {
    v6 = 2;
  }
  else
  {
    if ( v5 != (char *)16 )
      return 0;
    v6 = 1;
  }
  if ( a2 )
    return v6;
  v8 = -1LL;
  do
    ++v8;
  while ( a1[v8] );
  v9 = 0LL;
  if ( v6 == 1 )
  {
    if ( v8 <= 0x41 )
      goto LABEL_13;
  }
  else if ( v8 <= 0x81 )
  {
LABEL_13:
    while ( 1 )
    {
      LOBYTE(v4) = a1[v9];
      if ( (unsigned __int8)(v4 - 43) > 0x2Fu || (v10 = 0xFFFFFFC07FF1LL, !_bittest64(&v10, (unsigned int)(v4 - 43))) )
      {
        if ( (unsigned __int8)(v4 - 97) > 0x19u )
          break;
      }
      if ( ++v9 >= (unsigned __int64)v5 )
      {
        while ( a1[v9] == 46 )
        {
          v11 = v9 + 1;
          if ( v11 >= v8 )
            break;
          *(_QWORD *)String = 0LL;
          v16 = 0;
          v17 = 0;
          v12 = strchr(&a1[v11], 46);
          v13 = v12 ? v12 - a1 : v8;
          v14 = v13 - v11;
          if ( v14 > 0xB )
            break;
          _o_strncpy_s(String, 11LL, &a1[v11], v14);
          _o__set_errno(0LL);
          if ( !strtol(String, 0LL, 10) && String[0] != 48 && String[1] )
            break;
          if ( *(_DWORD *)_o__errno() == 34 )
            break;
          v9 = v14 + v11;
          if ( v9 >= v8 )
            return v6;
        }
        return 0;
      }
    }
  }
  return 0;
}
