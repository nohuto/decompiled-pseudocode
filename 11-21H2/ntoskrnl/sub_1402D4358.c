/*
 * XREFs of sub_1402D4358 @ 0x1402D4358
 * Callers:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_14057AC2C @ 0x14057AC2C (sub_14057AC2C.c)
 * Callees:
 *     sub_1402D43F4 @ 0x1402D43F4 (sub_1402D43F4.c)
 */

char __fastcall sub_1402D4358(volatile signed __int32 *a1, int a2, char a3)
{
  char v4; // r11
  volatile signed __int32 v6; // edx
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // ebx
  signed __int32 v11; // r8d
  signed __int32 v12; // eax
  signed __int32 v14; // ecx

  v4 = 0;
  v6 = *a1;
  v8 = ((((a3 & 1) == 0) + 30) << 7) & 0xFFFFF0FF;
  if ( (a3 & 2) == 0 )
    v8 = (((a3 & 1) == 0) + 30) << 7;
  v9 = a2 << 8;
  v10 = ~v8;
  v11 = v9 | v6 & v10;
  v12 = _InterlockedCompareExchange(a1, v11, *a1);
  if ( v6 != v12 )
  {
    do
    {
      v14 = v12;
      v11 = v9 | v12 & v10;
      v12 = _InterlockedCompareExchange(a1, v11, v12);
    }
    while ( v14 != v12 );
  }
  if ( (a3 & 4) != 0 && (v11 & 0x3F00) == 0x2000 )
  {
    sub_1402D43F4(a1);
    return 1;
  }
  return v4;
}
