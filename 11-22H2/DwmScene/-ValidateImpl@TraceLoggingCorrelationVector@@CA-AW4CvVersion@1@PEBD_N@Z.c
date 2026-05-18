/*
 * XREFs of ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x1800244C4
 * Callers:
 *     ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180022AA8 (-Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

char __fastcall TraceLoggingCorrelationVector::ValidateImpl(__int64 a1, char a2, int a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  char v7; // cl
  unsigned __int64 v8; // rdx
  __int64 v10; // r10
  char v11; // bp
  unsigned __int64 v12; // rbx
  char *v13; // rax
  char *v14; // rdi
  unsigned __int64 v15; // rdi
  char String[8]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ah] [rbp-2Eh]

  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a1 + v5) );
  if ( v5 < 0x12 )
    return 0;
  v6 = 0LL;
  v7 = 2 - (v5 < 0x18);
  v8 = 16LL;
  if ( !a2 )
  {
    do
    {
      while ( 1 )
      {
        LOBYTE(a3) = *(_BYTE *)(a1 + v6);
        if ( v6 >= v8 )
          break;
        if ( (unsigned __int8)(a3 - 43) > 0x2Fu || (v10 = 0xFFFFFFC07FF1LL, !_bittest64(&v10, (unsigned int)(a3 - 43))) )
        {
          if ( (unsigned __int8)(a3 - 97) > 0x19u )
            return 0;
        }
        ++v6;
      }
      if ( (_BYTE)a3 != 46 )
        v8 = 22LL;
      --v7;
    }
    while ( v7 );
    v11 = (v8 == 22) + 1;
    while ( *(_BYTE *)(a1 + v6) == 46 )
    {
      v12 = v6 + 1;
      if ( v12 >= v5 )
        break;
      *(_QWORD *)String = 0LL;
      v17 = 0;
      v18 = 0;
      v13 = strchr((const char *)(a1 + v12), 46);
      v14 = v13 ? &v13[-a1] : (char *)v5;
      v15 = (unsigned __int64)&v14[-v12];
      if ( v15 > 0xB )
        break;
      _o_strncpy_s(String, 11LL, a1 + v12, v15);
      _o__set_errno(0LL);
      if ( !strtol(String, 0LL, 10) && String[0] != 48 && String[1] )
        break;
      if ( *(_DWORD *)_o__errno() == 34 )
        break;
      v6 = v15 + v12;
      if ( v6 >= v5 )
        return v11;
    }
    return 0;
  }
  do
  {
    if ( *(_BYTE *)(a1 + v8) == 46 )
      break;
    v8 = 22LL;
    --v7;
  }
  while ( v7 );
  return v7;
}
