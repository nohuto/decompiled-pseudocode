/*
 * XREFs of ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x18014CA80
 * Callers:
 *     _lambda_c21659d5a86b392c88a6b01fab095e1d_::operator() @ 0x180068E0C (_lambda_c21659d5a86b392c88a6b01fab095e1d_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCatW(unsigned __int16 *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int16 *v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // r8
  unsigned __int16 *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  char *v12; // r11
  unsigned __int16 v13; // r8
  unsigned __int16 *v14; // rax

  v4 = a2 >> 1;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    return 2147942487LL;
  v5 = a2 >> 1;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0x80070057 : 0;
  if ( v5 )
    v8 = v4 - v5;
  else
    v8 = 0LL;
  if ( v5 )
  {
    v9 = &a1[v8];
    v10 = v4 - v8;
    if ( v4 != v8 )
    {
      v11 = 2147483646LL;
      v12 = (char *)(a3 - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(unsigned __int16 *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
    return v10 == 0 ? 0x8007007A : 0;
  }
  return result;
}
