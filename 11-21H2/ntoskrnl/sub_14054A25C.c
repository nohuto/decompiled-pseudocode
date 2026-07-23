/*
 * XREFs of sub_14054A25C @ 0x14054A25C
 * Callers:
 *     sub_1403992E8 @ 0x1403992E8 (sub_1403992E8.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     sub_14054D1E8 @ 0x14054D1E8 (sub_14054D1E8.c)
 *     sub_14054D2AC @ 0x14054D2AC (sub_14054D2AC.c)
 *     sub_14054D374 @ 0x14054D374 (sub_14054D374.c)
 *     sub_14054D424 @ 0x14054D424 (sub_14054D424.c)
 */

__int64 sub_14054A25C()
{
  __int64 v0; // rax
  int v1; // ebx
  ULONG_PTR Length; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Address = 0LL;
  LODWORD(Length) = 0;
  v0 = sub_14054D424(0LL, 0LL);
  if ( v0 )
    sub_14054D374(v0, 0LL);
  do
  {
    v1 = sub_14054D2AC(0LL, &Address, &Length);
    if ( (_DWORD)Length )
      PoSetHiberRange(0LL, 0x14000u, Address, (unsigned int)Length, 0x686C7648u);
  }
  while ( v1 == 261 );
  return sub_14054D1E8(0LL);
}
