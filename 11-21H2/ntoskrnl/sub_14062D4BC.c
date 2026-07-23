/*
 * XREFs of sub_14062D4BC @ 0x14062D4BC
 * Callers:
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14062D4BC(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1232);
  v7 = 0;
  v3 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v6 = v2;
  v8 = &v5;
  v10 = 0;
  v9 = 16;
  return sub_140281380(*(_QWORD *)(v3 + 2160), (int)&v8, 1, 0x20000200u, 1348, 5249538);
}
