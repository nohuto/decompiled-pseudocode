/*
 * XREFs of sub_140B1C22C @ 0x140B1C22C
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A6C4B0 @ 0x140A6C4B0 (sub_140A6C4B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 */

void __fastcall sub_140B1C22C(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  __int64 v3; // rcx
  ULONG *PoolWithTag; // rbx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h] BYREF
  int v7; // [rsp+3Ch] [rbp-14h]
  int v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+44h] [rbp-Ch]

  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 != 1 )
      return;
    v6 = -1200452434;
    v1 = 2;
    v7 = 1170082397;
    v8 = 24237205;
    v9 = 623825306;
  }
  else
  {
    v6 = -1237722659;
    v1 = 0;
    v7 = 1193042546;
    v8 = 878293681;
    v9 = 803227664;
  }
  LODWORD(NumberOfBytes) = 0;
  v2 = sub_140B1C6B0(a1, &v6, 0LL, 0LL, &NumberOfBytes);
  if ( v2 == -1073741789 )
  {
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
  }
  else
  {
    PoolWithTag = 0LL;
    if ( v2 < 0 )
      return;
  }
  if ( (int)sub_140B1C6B0(v3, &v6, 0LL, PoolWithTag, &NumberOfBytes) >= 0 )
    sub_140A6C4B0(PoolWithTag, NumberOfBytes, v1);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
