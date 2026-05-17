/*
 * XREFs of RtlpInitializeLowFragHeap @ 0x18004A6D8
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x1800494C4 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpInitializeLowFragHeap(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // rax
  unsigned int v5; // r9d
  __int16 *v6; // r10
  _BYTE *v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx

  *a3 = 0LL;
  a3[3] = a1;
  v3 = 12LL;
  a3[2] = a3 + 1;
  a3[1] = a3 + 1;
  v4 = a3 + 15;
  do
  {
    *(v4 - 1) = 0;
    *v4 = 6;
    v4 += 12;
    --v3;
  }
  while ( v3 );
  v5 = 0;
  v6 = RtlpBucketBlockSizes;
  v7 = (char *)a3 + 679;
  do
  {
    LOWORD(v8) = *v6++;
    *(v7 - 1) = v5;
    *(_WORD *)(v7 - 3) = ((unsigned __int16)v8 >> 4) + 1;
    ++v5;
    LOBYTE(v8) = (*v7 ^ (2 * dword_1801830AC)) & 6;
    *v7 ^= (unsigned __int8)v8;
    v7 += 4;
  }
  while ( v5 < 0x81 );
  if ( (a2 & 1) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = RtlpAffinityState[0];
    if ( !LODWORD(RtlpAffinityState[0]) )
      return (char)v8;
  }
  v8 = a3 + 411;
  v10 = v9;
  do
  {
    *v8 = a3;
    v8 += 6;
    --v10;
  }
  while ( v10 );
  return (char)v8;
}
