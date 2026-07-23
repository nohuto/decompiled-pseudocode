/*
 * XREFs of sub_14062D430 @ 0x14062D430
 * Callers:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14062D430(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1232);
  v4 = *(_QWORD *)(a1 + 544);
  v6 = a2;
  v7 = v3;
  v9 = &v6;
  v11 = 0;
  v8 = a3;
  v10 = 16;
  return sub_140281380(*(_QWORD *)(v4 + 2160), (int)&v9, 1, 0x20000200u, 1347, 5249538);
}
