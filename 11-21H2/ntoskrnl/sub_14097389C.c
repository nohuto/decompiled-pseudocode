/*
 * XREFs of sub_14097389C @ 0x14097389C
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 */

__int64 __fastcall sub_14097389C(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  PVOID v4; // rax
  __int64 v6; // r15
  unsigned int v7; // ebp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v10 = 0LL;
  v11 = 0LL;
  v3 = (*(_DWORD *)(v1 + 64) >> 12) + ((*(_DWORD *)(v1 + 64) & 0xFFF) != 0);
  v4 = sub_1402828F0(
         64,
         8
       * (((((unsigned __int8)(*(_DWORD *)(v1 + 64) >> 12) + ((*(_DWORD *)(v1 + 64) & 0xFFF) != 0)) & 0x3F) != 0)
        + (v3 >> 6)),
         0x4D424450u);
  if ( !v4 )
    return 3221225626LL;
  a1[11] = (__int64)v4;
  a1[10] = v3;
  v6 = sub_140313C70(*(_QWORD *)(*a1 + 48));
  v7 = 0;
  do
  {
    v7 = sub_140760B20(*a1, v7, 2, 0LL, &v10, &v11);
    if ( v10 )
    {
      v8 = (__int64)(v10 - v6) >> 3;
      v9 = (__int64)(v11 - v6) >> 3;
      if ( v8 < v3 )
      {
        if ( v9 >= v3 )
          v9 = v3 - 1;
        RtlSetBitsEx((__int64)(a1 + 10), v8, v9 - v8 + 1);
      }
    }
  }
  while ( v7 );
  return 0LL;
}
