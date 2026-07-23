/*
 * XREFs of sub_140B04E44 @ 0x140B04E44
 * Callers:
 *     sub_140B04C20 @ 0x140B04C20 (sub_140B04C20.c)
 *     sub_140B0A424 @ 0x140B0A424 (sub_140B0A424.c)
 * Callees:
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1403C2B24 @ 0x1403C2B24 (sub_1403C2B24.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140B04E44(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v8; // rbx
  _RTL_BITMAP *v9; // rax
  __int64 v10; // rdi
  int v12; // ecx

  v5 = a3;
  v6 = a2;
  v8 = 48 * a2 - 0x220000000000LL;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v9 = (_RTL_BITMAP *)sub_1402828F0(64, 0x90uLL, 0x6553694Du);
    v10 = (__int64)v9;
    if ( !v9 )
      return 3221225626LL;
    v9[2].Buffer = (PULONG)a1;
    v9[3].SizeOfBitMap = 512;
    v9[3].Buffer = &v9[4].SizeOfBitMap;
    *(_QWORD *)&v9[2].SizeOfBitMap = v6 + 511;
    v9[1].Buffer = (PULONG)v6;
    RtlSetAllBits(v9 + 3);
    if ( a4 )
      *(_DWORD *)(v10 + 140) |= 1u;
    if ( *(_DWORD *)(a1 + 48) > 3u )
      goto LABEL_6;
    v12 = 512;
    do
    {
      if ( !*(_QWORD *)(v8 + 8) )
        --qword_140C53530;
      v8 += 48LL;
      --v12;
    }
    while ( v12 );
    if ( *(_DWORD *)(a1 + 48) > 3u )
LABEL_6:
      qword_140C59408 += 512LL;
    if ( _bittest64((const signed __int64 *)qword_140C58DE0, v6 >> 9) )
      KeBugCheckEx(0x1Au, 0x3030311uLL, *(_QWORD *)(v10 + 24), *(int *)(a1 + 48), 0LL);
    _bittestandset64((signed __int64 *)qword_140C58DE0, v6 >> 9);
    sub_1402C38D0((__int64)&StartContext, v6, 0x200uLL, 1, 0);
    sub_1403C2B24((__int64)&StartContext, a1, v10);
    v6 += 512LL;
    v5 -= 512LL;
    if ( !v5 )
      return 0LL;
  }
}
