/*
 * XREFs of sub_140766914 @ 0x140766914
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140766914(_QWORD *a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned int v4; // esi
  wchar_t *Pool2; // rdi
  __int64 v6; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[5] == 0LL;
  v2 = a1[6];
  DestinationString = 0LL;
  if ( v1 || a1[1] )
    return 0LL;
  v4 = stru_140D3CC80.Length + 6 + *(unsigned __int16 *)(v2 + 24);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v4, 1701081168LL);
  if ( Pool2 )
  {
    sub_1402E1280(Pool2, v4, L"%s\\%s", stru_140D3CC80.Buffer, *(_QWORD *)(v2 + 32));
    RtlInitUnicodeString(&DestinationString, Pool2);
    LOBYTE(v6) = 1;
    sub_140856DC0(&DestinationString, v6);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return 0LL;
  }
  return 3221225626LL;
}
