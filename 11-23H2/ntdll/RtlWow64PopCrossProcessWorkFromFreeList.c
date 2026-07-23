/*
 * XREFs of RtlWow64PopCrossProcessWorkFromFreeList @ 0x180111590
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

char *__fastcall RtlWow64PopCrossProcessWorkFromFreeList(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  unsigned int v3; // edx
  char *result; // rax
  _DWORD *v5; // rcx
  unsigned __int64 v6; // r10
  _DWORD *v7; // r9
  signed __int64 v8; // rtt
  signed __int64 v9; // [rsp+50h] [rbp+18h]
  signed __int64 i; // [rsp+58h] [rbp+20h]

  v2 = *a1;
  for ( i = *a1; ; HIDWORD(i) = HIDWORD(v2) )
  {
    if ( (v2 & 0x7FFFFFFF) == 0 )
      return 0LL;
    v3 = v2 & 0x7FFFFFFF;
    v5 = (_DWORD *)((char *)a1 + (v2 & 0x7FFFFFFF));
    v6 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
    v7 = v5 + 10;
    if ( v6 <= ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
      || v7 <= v5
      || (unsigned __int64)v5 < ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
      || (unsigned __int64)v7 > v6 )
    {
      RtlRaiseStatus(-1073741811);
    }
    HIDWORD(v9) = HIDWORD(i) + 1;
    LODWORD(v9) = (v2 ^ *v5) & 0x7FFFFFFF ^ v2;
    v8 = v2;
    v2 = _InterlockedCompareExchange64(a1, v9, v2);
    if ( v8 == v2 )
      break;
  }
  result = (char *)a1 + v3;
  *v5 = 0;
  return result;
}
