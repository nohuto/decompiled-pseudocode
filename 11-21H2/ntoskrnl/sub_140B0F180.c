/*
 * XREFs of sub_140B0F180 @ 0x140B0F180
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     sub_140B50770 @ 0x140B50770 (sub_140B50770.c)
 */

__int64 sub_140B0F180()
{
  __int64 v0; // rcx
  int v1; // ebx
  int v2; // eax
  __int64 v3; // r8
  void *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v1 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v6);
  if ( v1 >= 0 )
  {
    v2 = sub_14082EBA4(
           *(__int64 *)&qword_140D00AC0,
           v6,
           (__int64)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
           0,
           0x2001Fu,
           (__int64)&v5);
    v1 = v2;
    if ( v2 == -1073741772 || v2 == -1073741444 )
    {
      v1 = 0;
    }
    else if ( v2 >= 0 )
    {
      v1 = sub_140B50770(v5, 0LL, v3, sub_140B501D0);
    }
  }
  if ( v5 )
    sub_14082EB8C(v0, v5);
  return (unsigned int)v1;
}
