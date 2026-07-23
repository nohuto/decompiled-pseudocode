/*
 * XREFs of sub_1406EF170 @ 0x1406EF170
 * Callers:
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406EF020 @ 0x1406EF020 (sub_1406EF020.c)
 *     sub_1409ED7D4 @ 0x1409ED7D4 (sub_1409ED7D4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406EF170(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // esi
  char v5; // bl
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  WCHAR *Pool2; // rax
  WCHAR *v9; // rbx

  v4 = 0;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  RtlInitUnicodeString(a2, 0LL);
  if ( v5 )
  {
    v6 = *a1;
    if ( (_WORD)v6 )
    {
      v7 = *((_QWORD *)a1 + 1);
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, *a1 + 2LL, 1350005829LL);
  v9 = Pool2;
  if ( !Pool2
    || (memmove(Pool2, *((const void **)a1 + 1), *a1),
        v9[(unsigned __int64)*a1 >> 1] = 0,
        !RtlCreateUnicodeString(a2, v9)) )
  {
    v4 = -1073741801;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
