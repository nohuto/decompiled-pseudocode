/*
 * XREFs of sub_140459C44 @ 0x140459C44
 * Callers:
 *     sub_14039DC8C @ 0x14039DC8C (sub_14039DC8C.c)
 *     sub_14054CBD0 @ 0x14054CBD0 (sub_14054CBD0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140459C44(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  char v5; // bl
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  __int64 v8; // r8
  bool v9; // cc
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF

  v2 = a2;
  if ( KeGetCurrentIrql() > 2u )
    return 255LL;
  v5 = 0;
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  memset(v10, 0, 0x68uLL);
  if ( !(_DWORD)v2 )
    return 0LL;
  v7 = &v10[2];
  v8 = v2;
  do
  {
    v9 = *a1 <= 0x7FFFFFFEFFFFuLL;
    *v7 = *a1++;
    if ( v9 )
      v5 = 1;
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v5 )
    return 0LL;
  v10[1] = *(_QWORD *)(v6 + 992);
  return sub_140358A20(2u, 241, 0, (__int64)v10);
}
