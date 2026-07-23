/*
 * XREFs of sub_1407FC710 @ 0x1407FC710
 * Callers:
 *     sub_1406C1524 @ 0x1406C1524 (sub_1406C1524.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1409E4DAC @ 0x1409E4DAC (sub_1409E4DAC.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407FC710(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  signed __int32 v8; // ebp
  __int64 v9; // r14
  wchar_t *Pool2; // rax
  WCHAR *v11; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( v7 && v7 == wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) && wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
  {
    v8 = _InterlockedExchangeAdd(a2, 1u);
    v9 = a1[1];
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9 + 64, 1350005829LL);
    v11 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    if ( !(unsigned int)sub_1402E1280(Pool2, v9 + 64, *((const wchar_t **)a1 + 1), (unsigned int)(v8 + 1))
      && memcmp(*((const void **)a1 + 1), v11, *a1) )
    {
      RtlFreeUnicodeString(a3);
      RtlInitUnicodeString(a3, v11);
      return 0LL;
    }
    ExFreePoolWithTag(v11, 0);
    return 3221225520LL;
  }
  return 3221225523LL;
}
