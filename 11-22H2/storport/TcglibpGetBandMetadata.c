/*
 * XREFs of TcglibpGetBandMetadata @ 0x1C007B534
 * Callers:
 *     TcglibGetBandMetadata @ 0x1C0079954 (TcglibGetBandMetadata.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpGetBandMetadata(int **a1, int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v8; // esi
  int *v12; // rcx
  _QWORD v13[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  result = 0LL;
  v13[1] = 0LL;
  v8 = 0;
  v15 = 0;
  while ( a5 )
  {
    v13[0] = v8;
    v12 = *a1;
    v13[2] = a6;
    v14 = a5;
    TcglibEalLogCommand(v12, "GetBandMetadata", 0, 22, v8, a5);
    result = TcglibpCallMethod(
               (_DWORD)a1,
               a2,
               0,
               22,
               (__int64)GenGetBandMetadataParams,
               (__int64)v13,
               0LL,
               0LL,
               (__int64)ParseBandMetadata,
               (__int64)v13);
    if ( (int)result < 0 )
      break;
    a6 += v14;
    v8 += v14;
    a5 -= v14;
  }
  return result;
}
