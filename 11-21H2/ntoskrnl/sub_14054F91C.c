/*
 * XREFs of sub_14054F91C @ 0x14054F91C
 * Callers:
 *     sub_14039D79C @ 0x14039D79C (sub_14039D79C.c)
 *     sub_14054CFC4 @ 0x14054CFC4 (sub_14054CFC4.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054F91C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  _QWORD v12[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v12, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255LL;
  v9 = (_QWORD *)(v6 + a2);
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  v11 = 0;
  if ( !(_DWORD)v5 )
    return 0LL;
  while ( *v9 > 0x7FFFFFFEFFFFuLL )
  {
    ++v11;
    ++v9;
    if ( v11 >= (unsigned int)v5 )
      return 0LL;
  }
  v12[1] = *(_QWORD *)(v10 + 992);
  v12[2] = a1;
  v12[3] = v5;
  v12[4] = v6;
  return sub_140358A20(2u, 242, 0, (__int64)v12);
}
