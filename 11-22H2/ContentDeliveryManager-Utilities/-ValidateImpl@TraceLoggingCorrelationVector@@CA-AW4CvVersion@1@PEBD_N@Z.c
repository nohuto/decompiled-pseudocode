/*
 * XREFs of ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x1800963C0
 * Callers:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800946C8 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 */

char __fastcall TraceLoggingCorrelationVector::ValidateImpl(const char *a1, char a2)
{
  int v4; // ecx
  char *v5; // r8
  char v6; // bp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  bool v10; // cc
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  char *v13; // rax
  unsigned __int64 v14; // rdi
  rsize_t v15; // rdi
  char Destination[8]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ah] [rbp-2Eh]

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
    v10 = v8 <= 0x41;
  else
    v10 = v8 <= 0x81;
  if ( v10 )
  {
    while ( v9 < (unsigned __int64)v5 )
    {
      LOBYTE(v4) = a1[v9];
      if ( (unsigned __int8)(v4 - 43) > 0x2Fu || (v11 = 0xFFFFFFC07FF1LL, !_bittest64(&v11, (unsigned int)(v4 - 43))) )
      {
        if ( (unsigned __int8)(v4 - 97) > 0x19u )
          return 0;
      }
      ++v9;
    }
    while ( a1[v9] == 46 )
    {
      v12 = v9 + 1;
      if ( v12 >= v8 )
        break;
      *(_QWORD *)Destination = 0LL;
      v17 = 0;
      v18 = 0;
      v13 = strchr(&a1[v12], 46);
      v14 = v13 ? v13 - a1 : v8;
      v15 = v14 - v12;
      if ( v15 > 0xB )
        break;
      strncpy_s(Destination, 0xBuLL, &a1[v12], v15);
      _set_errno(0);
      if ( !strtol(Destination, 0LL, 10) && Destination[0] != 48 && Destination[1] )
        break;
      if ( *_errno() == 34 )
        break;
      v9 = v15 + v12;
      if ( v9 >= v8 )
        return v6;
    }
  }
  return 0;
}
