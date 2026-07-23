/*
 * XREFs of sub_1405716A4 @ 0x1405716A4
 * Callers:
 *     sub_1406D56D0 @ 0x1406D56D0 (sub_1406D56D0.c)
 *     sub_1408644E0 @ 0x1408644E0 (sub_1408644E0.c)
 *     sub_1409F39DC @ 0x1409F39DC (sub_1409F39DC.c)
 *     sub_140A06830 @ 0x140A06830 (sub_140A06830.c)
 *     sub_140A06DF0 @ 0x140A06DF0 (sub_140A06DF0.c)
 * Callees:
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140571D50 @ 0x140571D50 (sub_140571D50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1405716A4(ULONG_PTR a1)
{
  ULONG_PTR Context; // [rsp+20h] [rbp-148h] BYREF
  int v3; // [rsp+28h] [rbp-140h]
  int v4; // [rsp+2Ch] [rbp-13Ch]
  int v5; // [rsp+30h] [rbp-138h]
  _DWORD v6[69]; // [rsp+34h] [rbp-134h] BYREF

  v4 = dword_140D06884;
  Context = a1;
  v3 = dword_140D06884;
  v5 = 2097153;
  memset(v6, 0, sizeof(v6));
  if ( (unsigned int)dword_140D06884 <= 1 )
    sub_140571D50((ULONG_PTR)&Context);
  else
    KeIpiGenericCall(sub_140571D50, (ULONG_PTR)&Context);
  if ( *(_QWORD *)&v6[65] )
    ExFreePoolWithTag(*(PVOID *)&v6[65], 0);
  return v6[67];
}
