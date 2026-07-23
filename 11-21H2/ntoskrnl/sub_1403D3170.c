/*
 * XREFs of sub_1403D3170 @ 0x1403D3170
 * Callers:
 *     sub_1403D30D0 @ 0x1403D30D0 (sub_1403D30D0.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 */

__int64 __fastcall sub_1403D3170(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // r8
  char v8; // bl
  volatile signed __int64 *v9; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-10h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int64 *v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a1 + 116);
  v5 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( (v4 & 8) == 0 )
  {
    v8 = sub_140344DD0(a1, (__int64)&v14, (volatile signed __int32 **)&v15, a4);
    sub_140292884(a1);
    v13 = a2;
    v9 = v15;
    v10 = sub_14020EE7C(a1, *(_QWORD *)(a1 + 576), v8, v14, (__int64)v15, v13);
    sub_14035D0F8(v11, v14, v9);
    return v14 & -(__int64)(v10 != 0);
  }
  return v5;
}
