/*
 * XREFs of sub_140B29EB4 @ 0x140B29EB4
 * Callers:
 *     sub_140B29DA0 @ 0x140B29DA0 (sub_140B29DA0.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140B29EB4()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r12
  __int64 v3; // rcx
  _QWORD *v4; // r15
  __int64 v5; // r13
  ULONG v6; // ebx
  int v7; // esi
  unsigned __int64 v8; // rdi
  ULONG ClearBitsAndSet; // eax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v12[10]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v13[64]; // [rsp+88h] [rbp-19h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v12, 0, 0x48uLL);
  memset(v13, 0, sizeof(v13));
  v0 = 0LL;
  BitMapHeader.Buffer = (PULONG)v13;
  do
  {
    v1 = 3 * v0;
    LODWORD(v12[v1]) = v0;
    v0 = (unsigned int)(v0 + 1);
    v12[v1 + 2] = 0x2000000000LL;
  }
  while ( (int)v0 < 2 );
  v2 = qword_140C540F0;
  v3 = 3 * v0;
  LODWORD(v12[v3]) = v0;
  v12[v3 + 2] = 0x1000000000LL;
  v4 = &v12[1];
  v5 = 3LL;
  v6 = sub_140363220(1) & 0x1FF;
  do
  {
    v7 = 16;
    v8 = (unsigned __int64)(v4[1] + 0x3FFFFFFFLL) >> 30;
    if ( (unsigned int)v8 < 0x20 )
    {
      v6 = sub_140363220(1) & 0x1FF;
      v7 = 0;
    }
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v8, v6);
      if ( ClearBitsAndSet == v6 || !v7 )
        break;
      --v7;
      RtlClearBits(&BitMapHeader, ClearBitsAndSet, v8);
      v6 = sub_140363220(1) & 0x1FF;
    }
    *v4 = v2 + ((unsigned __int64)ClearBitsAndSet << 30);
    v4 += 3;
    v6 = ((_WORD)ClearBitsAndSet + (_WORD)v8 + (unsigned __int8)sub_140363220(1)) & 0x1FF;
    --v5;
  }
  while ( v5 );
  qword_140C4F608 = v12[1];
  qword_140C4F610 = v12[4];
  result = v12[7];
  qword_140C51BB0 = v12[7];
  qword_140C50630 = v2;
  return result;
}
