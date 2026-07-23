/*
 * XREFs of sub_140699C30 @ 0x140699C30
 * Callers:
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140699CF0 @ 0x140699CF0 (sub_140699CF0.c)
 */

__int64 __fastcall sub_140699C30(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // [rsp+20h] [rbp-78h]
  _DWORD *v15; // [rsp+28h] [rbp-70h]
  _DWORD v16[20]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)&qword_140D00AC0;
  memset(v16, 0, sizeof(v16));
  v6 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 488LL);
  if ( v6 )
  {
    v15 = v16;
    v14 = 1;
    v7 = sub_14042A5E0(*(_QWORD *)&qword_140D00AC0, a2);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v16[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = sub_140699CF0(v3, a2, a3, v16[4], v14, v15);
  v9 = v8;
  if ( !v6 )
    return v9;
  v16[0] = v8;
  v11 = sub_14042A5E0(v3, a2);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v9;
  if ( v11 == -1073741536 )
    return v16[0];
  v13 = v9;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
