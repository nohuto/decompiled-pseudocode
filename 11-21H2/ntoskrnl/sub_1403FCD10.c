/*
 * XREFs of sub_1403FCD10 @ 0x1403FCD10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FCE08 @ 0x1403FCE08 (sub_1403FCE08.c)
 *     sub_1403FD778 @ 0x1403FD778 (sub_1403FD778.c)
 *     sub_1403FE454 @ 0x1403FE454 (sub_1403FE454.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403FCD10(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD v13[8]; // [rsp+20h] [rbp-61h] BYREF
  _QWORD v14[8]; // [rsp+60h] [rbp-21h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  v8 = ((_DWORD)a2 + 3) & 0xFFFFFFFC;
  if ( a2 < 2 )
    return sub_1403FD778(a1, a2, a3, v8);
  v10 = 0LL;
  do
  {
    v11 = *(_QWORD **)(a1 + 8 * v10);
    v14[v10] = *v11 + 96LL;
    v13[v10] = v11[4];
    v11[4] += a3;
    v12 = *(_QWORD *)(a1 + 8 * v10++);
    *(_QWORD *)(v12 + 40) -= a3;
  }
  while ( v10 < a2 );
  while ( v10 < (unsigned int)v8 )
  {
    v14[v10] = v14[0];
    v13[v10++] = v13[0];
  }
  if ( (_DWORD)v8 == 8 )
    return sub_1403FE454(v14, v13, a3, a4);
  else
    return sub_1403FCE08(v14, v13, a3, a4);
}
