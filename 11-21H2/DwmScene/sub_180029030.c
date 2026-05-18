/*
 * XREFs of sub_180029030 @ 0x180029030
 * Callers:
 *     sub_1800D9B40 @ 0x1800D9B40 (sub_1800D9B40.c)
 *     sub_1800D9F90 @ 0x1800D9F90 (sub_1800D9F90.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 */

void *__fastcall sub_180029030(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  float *v7; // rax
  void *v8; // rcx
  int v9; // esi
  int v10; // ebp
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v4 = *(_QWORD *)(a3 + 136);
  if ( v4 )
  {
    v7 = (float *)sub_18005E244(v4, &v12);
  }
  else
  {
    v12 = 0LL;
    v7 = (float *)&v12;
  }
  v8 = *(void **)a2;
  v9 = (int)*v7;
  v10 = (int)v7[1];
  if ( !*(_QWORD *)a2
    || a4 != *(_DWORD *)(a2 + 16)
    || v9 != *(_DWORD *)(a2 + 8)
    || v10 != *(_DWORD *)(a2 + 12)
    || *(_DWORD *)(a2 + 20) != 1 )
  {
    sub_18001D6B8(v8);
    v8 = (void *)sub_18001D684();
    *(_QWORD *)a2 = v8;
    *(_DWORD *)(a2 + 8) = v9;
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(a2 + 16) = a4;
    *(_DWORD *)(a2 + 20) = 1;
  }
  return v8;
}
