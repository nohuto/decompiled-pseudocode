/*
 * XREFs of sub_1405E4598 @ 0x1405E4598
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x1407598D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140759990 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlUnicodeToUTF8N @ 0x140759F40 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall sub_1405E4598(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  CHAR *v5; // r13
  _DWORD *v7; // r12
  unsigned int v9; // r14d
  int v10; // esi
  __int64 ThreadServerSilo; // rax
  _QWORD *v12; // rax
  unsigned int v13; // edi
  unsigned int v14; // ebx
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r11
  WCHAR *v18; // r10
  unsigned __int16 v19; // ax
  unsigned __int16 *v20; // r10
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-F8h] BYREF
  PCHAR v23; // [rsp+38h] [rbp-F0h]
  __int64 v24; // [rsp+40h] [rbp-E8h]
  _DWORD *v25; // [rsp+48h] [rbp-E0h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = UTF8StringDestination;
  v23 = UTF8StringDestination;
  v7 = a3;
  v25 = a3;
  v9 = 0;
  v10 = 0;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( ThreadServerSilo )
    v12 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v12 = &unk_140D32580;
  v13 = a5;
  v24 = v12[154];
  while ( v13 )
  {
    if ( !UTF8StringMaxByteCount )
      break;
    UTF8StringActualByteCount = 0;
    if ( v13 >= 0x40 )
    {
      v14 = 64;
      if ( v13 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
        v14 = 63;
    }
    else
    {
      v14 = v13;
      if ( !v13 )
        goto LABEL_15;
    }
    v15 = v24;
    v16 = v14;
    v17 = a4 - (_QWORD)UnicodeStringSource;
    v18 = UnicodeStringSource;
    do
    {
      v19 = sub_1403477B0(v15, *(WCHAR *)((char *)v18 + v17));
      *v20 = v19;
      v18 = v20 + 1;
      --v16;
    }
    while ( v16 );
    v7 = v25;
    v5 = v23;
LABEL_15:
    if ( RtlUnicodeToUTF8N(v5, UTF8StringMaxByteCount, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v14) < 0 )
    {
      v10 += UTF8StringActualByteCount;
      v9 = -2147483643;
      break;
    }
    v5 += UTF8StringActualByteCount;
    UTF8StringMaxByteCount -= UTF8StringActualByteCount;
    v23 = v5;
    v10 += UTF8StringActualByteCount;
    a4 += 2LL * v14;
    v13 -= v14;
  }
  if ( v7 )
    *v7 = v10;
  return v9;
}
