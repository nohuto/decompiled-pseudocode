/*
 * XREFs of sub_14094C9C4 @ 0x14094C9C4
 * Callers:
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 * Callees:
 *     sub_1402088DC @ 0x1402088DC (sub_1402088DC.c)
 *     sub_14025D12C @ 0x14025D12C (sub_14025D12C.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_14094CAB8 @ 0x14094CAB8 (sub_14094CAB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14094C9C4(int a1, __int64 a2, _DWORD *a3)
{
  const WCHAR *v5; // rcx
  int v7; // edi
  int v8; // ebx
  unsigned int *v9; // rcx
  UNICODE_STRING v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0LL;
  v5 = *(const WCHAR **)(a2 + 8);
  v11 = 0LL;
  LOBYTE(v7) = 0;
  v8 = sub_14094CAB8(v5);
  if ( v8 >= 0 )
  {
    if ( sub_14067B838(0LL, L"ConfigFlags", 0, &v12) < 0 )
      return (unsigned int)-1073741823;
    if ( sub_1402088DC(v12) )
      v7 = *(unsigned int *)((char *)v9 + v9[2]);
    ExFreePoolWithTag(v9, 0);
    if ( (v7 & 1) == 0 )
      return (unsigned int)-1073741823;
    v11.Buffer = L"DriverInfName";
    *(_DWORD *)&v11.Length = 1835034;
    if ( sub_14025D12C(0LL, &v11) )
      return (unsigned int)-1073741823;
    else
      return (unsigned int)sub_1406E2EEC(a1, a2, 0LL, 0LL, a3, 0LL);
  }
  return (unsigned int)v8;
}
