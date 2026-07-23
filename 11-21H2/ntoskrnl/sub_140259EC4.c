/*
 * XREFs of sub_140259EC4 @ 0x140259EC4
 * Callers:
 *     sub_140259E60 @ 0x140259E60 (sub_140259E60.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_1402A012C @ 0x1402A012C (sub_1402A012C.c)
 */

__int64 __fastcall sub_140259EC4(__int64 a1, char a2)
{
  __int64 v3; // rbx
  ULONG MaximumProcessorCount; // eax
  __int64 *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = sub_1402A012C(16LL, (a2 & 1) == 0);
  if ( v3 != -1 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      v5 = (__int64 *)qword_140C10DB0;
      v6 = ((unsigned int)v3 >> 13) & 0x3FFFF;
      v7 = ((unsigned int)v3 >> 4) & 0x1FF;
      v8 = MaximumProcessorCount;
      do
      {
        _BitScanReverse(&v9, v6);
        v10 = *v5++;
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8LL * (v9 - 2)) + 8 * (v6 ^ (unsigned __int64)(unsigned int)(1 << v9)) + 8);
        *(_QWORD *)(v11 + 8 * v7) = 0LL;
        *(_QWORD *)(v11 + 8 * v7 + 8) = a1;
        --v8;
      }
      while ( v8 );
    }
  }
  return v3;
}
