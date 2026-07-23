/*
 * XREFs of sub_140B06278 @ 0x140B06278
 * Callers:
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B06278()
{
  unsigned __int16 v0; // bx
  __int64 *v1; // r8
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 Pool2; // rsi
  __int64 result; // rax
  bool v6; // cf
  unsigned __int16 v7; // r11
  _QWORD *v8; // rcx
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // r9
  unsigned int v11; // r10d
  __int16 v12; // dx
  __int64 v13; // rcx

  v0 = 0;
  if ( word_140D05000 )
  {
    v1 = qword_140D31700;
    v2 = (unsigned __int16)word_140D05000;
    do
    {
      v3 = *v1++;
      v0 += (unsigned __int16)(dword_140D0503C + *(_WORD *)(v3 + 8) - 1) / (unsigned __int16)dword_140D0503C;
      --v2;
    }
    while ( v2 );
  }
  Pool2 = ExAllocatePool2(72LL, 24LL * v0, 0x414E534Bu);
  if ( !Pool2 || (result = ExAllocatePool2(72LL, 8LL * v0, 0x414E534Bu)) == 0 )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  v6 = word_140D05000 != 0;
  v7 = 0;
  v8 = (_QWORD *)qword_140C2B0E8;
  v9 = 0;
  qword_140C2B0E8 = result;
  qword_140C2B0F8 = Pool2;
  *(_QWORD *)result = *v8;
  if ( v6 )
  {
    do
    {
      result = qword_140D31700[v9];
      v10 = *(_WORD *)(result + 8);
      if ( v10 )
      {
        v11 = dword_140D0503C;
        do
        {
          v12 = v11;
          result = v7;
          if ( v10 <= v11 )
            v12 = v10;
          v13 = 3LL * v7;
          *(_WORD *)(Pool2 + 8 * v13) = v7++;
          *(_WORD *)(Pool2 + 8 * v13 + 2) = v9;
          *(_BYTE *)(Pool2 + 8 * v13 + 4) = v12;
          v10 -= v12;
        }
        while ( v10 );
      }
      ++v9;
    }
    while ( v9 < (unsigned __int16)word_140D05000 );
  }
  word_140C2B0F0 = v0;
  return result;
}
