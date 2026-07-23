/*
 * XREFs of sub_14062DAE4 @ 0x14062DAE4
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_14035CE74 @ 0x14035CE74 (sub_14035CE74.c)
 *     sub_1403D30D0 @ 0x1403D30D0 (sub_1403D30D0.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_140572094 @ 0x140572094 (sub_140572094.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062DAE4(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v4[0] = *(_DWORD *)(a1 + 1232);
    v5 = v4;
    v7 = 0;
    v4[2] = a4;
    v4[1] = a3;
    v6 = 12;
    sub_14035EDE4((__int64)&v5, 1u, 0x88000000, a2, 0x1501903u);
  }
}
