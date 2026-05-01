/*
 * XREFs of AslEnvExpandStrings @ 0x18009FC90
 * Callers:
 *     AslEnvExpandStrings2 @ 0x18009FE60 (AslEnvExpandStrings2.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x1800A040C (AslEnvVarQuery.c)
 */

__int64 __fastcall AslEnvExpandStrings(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4, unsigned __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v10; // r10
  unsigned int v11; // ebp
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  _WORD *v15; // rbx
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v6 = a5;
  v7 = a3;
  v10 = a1;
  v11 = 0;
  v12 = 0LL;
  if ( !a3 )
  {
LABEL_25:
    if ( v6 )
      *a4 = 0;
    else
      v11 = -1073741789;
    goto LABEL_28;
  }
  do
  {
    if ( *a2 == 37 )
    {
      v13 = v7 - 1;
      v14 = 0LL;
      v15 = a2 + 1;
      if ( v7 != 1 )
      {
        do
        {
          if ( *v15 == 37 )
            break;
          ++v15;
          ++v14;
        }
        while ( v14 < v13 );
        if ( v14 && v14 < v13 )
        {
          v16 = AslEnvVarQuery(v10, a2 + 1, v14, a4, v6, &v20);
          if ( v16 == -1073741789 )
          {
            v12 += v20 - 1;
            v7 += -2LL - v14;
          }
          else
          {
            if ( v16 < 0 )
            {
              if ( v16 != -1073741568 )
              {
                LODWORD(v18) = v16;
                AslLogCallPrintf(
                  1LL,
                  (unsigned int)"AslEnvExpandStrings",
                  639,
                  (unsigned int)"AslEnvVarQuery failed [%x]",
                  v18);
              }
              --v7;
              ++v12;
              v15 = a2;
              goto LABEL_11;
            }
            v12 += v20;
            v7 += -2LL - v14;
            if ( v6 > v20 )
            {
              v6 -= v20;
              a4 += v20;
              goto LABEL_11;
            }
          }
          v11 = -1073741789;
LABEL_11:
          v10 = a1;
          goto LABEL_23;
        }
      }
    }
    if ( v11 != -1073741789 )
    {
      if ( v6 <= 1 )
      {
        v11 = -1073741789;
      }
      else
      {
        --v6;
        *a4++ = *a2;
      }
    }
    ++v12;
    v15 = a2;
    --v7;
LABEL_23:
    a2 = v15 + 1;
  }
  while ( v7 );
  if ( v11 != -1073741789 )
    goto LABEL_25;
LABEL_28:
  if ( a6 )
    *a6 = v12 + 1;
  return v11;
}
