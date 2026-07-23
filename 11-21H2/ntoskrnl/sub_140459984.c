/*
 * XREFs of sub_140459984 @ 0x140459984
 * Callers:
 *     sub_1402885A0 @ 0x1402885A0 (sub_1402885A0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140459984(__int64 a1, char a2)
{
  _QWORD *v4; // rdi
  __int16 *v5; // rbp
  __int64 Pool2; // rsi
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 32LL * *(unsigned __int16 *)(a1 + 72), 1735217990LL);
  if ( Pool2 )
    goto LABEL_13;
  if ( a2 )
    return 3221225626LL;
  switch ( *(unsigned __int8 *)(a1 + 4) )
  {
    case 0xFAu:
      goto LABEL_11;
    case 0xFBu:
      goto LABEL_10;
    case 0xFCu:
LABEL_11:
      v4 = (_QWORD *)qword_140C48B38;
      v5 = &word_140C48B00;
      break;
    case 0xFDu:
LABEL_10:
      v4 = qword_140C48AF8;
      v5 = &word_140C48B20;
      break;
    case 0xFEu:
      goto LABEL_11;
    case 0xFFu:
      goto LABEL_10;
  }
  KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
  Pool2 = (__int64)(v4 + 1);
  *v4 = KeGetCurrentThread();
  memset(v4 + 1, 0, 0x3C8uLL);
  *(_DWORD *)(a1 + 64) |= 2u;
LABEL_13:
  *(_DWORD *)(a1 + 64) |= 1u;
  result = 0LL;
  *(_QWORD *)(a1 + 80) = Pool2;
  return result;
}
