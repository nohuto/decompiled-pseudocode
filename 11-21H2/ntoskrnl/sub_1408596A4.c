/*
 * XREFs of sub_1408596A4 @ 0x1408596A4
 * Callers:
 *     sub_14066F678 @ 0x14066F678 (sub_14066F678.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140859794 @ 0x140859794 (sub_140859794.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408596A4(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // r14
  unsigned __int64 v4; // rbp
  __int64 Pool2; // rax
  signed __int64 v6; // rsi
  const WCHAR *v7; // rbx
  wchar_t *v8; // rbx

  v2 = 0;
  sub_140859794();
  v3 = sub_140347DB0();
  v4 = *((unsigned __int16 *)v3 + 632) + 30LL;
  Pool2 = ExAllocatePool2(256LL, 2 * v4 + 48, 1668499779LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = (const WCHAR *)(Pool2 + 48);
    sub_1402E1280((wchar_t *)(Pool2 + 48), v4, L"\\??\\%ws\\System32\\", v3[159]);
    RtlInitUnicodeString((PUNICODE_STRING)v6, v7);
    v8 = (wchar_t *)&v7[v4 >> 1];
    sub_1402E1280(v8, v4, L"\\??\\%ws\\SysWOW64\\", v3[159]);
    RtlInitUnicodeString((PUNICODE_STRING)(v6 + 16), v8);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)v6;
    *(_WORD *)(v6 + 32) = 12;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v6, 0LL) )
      ExFreePoolWithTag((PVOID)v6, 0x63734943u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
