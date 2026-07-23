/*
 * XREFs of sub_1403A8ACC @ 0x1403A8ACC
 * Callers:
 *     sub_1403A8390 @ 0x1403A8390 (sub_1403A8390.c)
 *     sub_1403CA20C @ 0x1403CA20C (sub_1403CA20C.c)
 * Callees:
 *     sub_1403A8C98 @ 0x1403A8C98 (sub_1403A8C98.c)
 *     sub_1403A8D68 @ 0x1403A8D68 (sub_1403A8D68.c)
 *     sub_1403A8E50 @ 0x1403A8E50 (sub_1403A8E50.c)
 *     sub_1403A97A4 @ 0x1403A97A4 (sub_1403A97A4.c)
 *     sub_1403AA678 @ 0x1403AA678 (sub_1403AA678.c)
 */

__int64 __fastcall sub_1403A8ACC(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r14
  int v17; // edx
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  int v22; // [rsp+88h] [rbp+38h] BYREF

  v9 = a9;
  v22 = 0;
  v19 = 0LL;
  v11 = *(_QWORD *)(a1 + 8);
  v20 = 0LL;
  v21 = 0LL;
  v12 = sub_1403A8D68(v11, a2, (unsigned int)&v21, (unsigned int)&v22, a9);
  if ( v12 >= 0 )
  {
    v12 = sub_1403AA678(a1, v21);
    if ( v12 >= 0 )
    {
      v13 = sub_1403A97A4(v21, &v20, v9);
      v16 = v20;
      v12 = v13;
      if ( v13 >= 0 )
      {
        v12 = sub_1403A8E50(v21, v20, v14, v15, a5, (__int64)&v19, a8, v9);
        if ( v12 < 0 )
        {
          if ( v19 )
            sub_1403A8C98(v19, v9);
        }
        else
        {
          v17 = *(_DWORD *)(v19 + 4) >> 2;
          *a6 = v19;
          *a7 = v17;
        }
      }
      if ( v16 )
        sub_1403A8C98(v16, v9);
    }
  }
  if ( v21 )
    sub_1403A8C98(v21, v9);
  return (unsigned int)v12;
}
