/*
 * XREFs of sub_14028AED4 @ 0x14028AED4
 * Callers:
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 * Callees:
 *     sub_140286884 @ 0x140286884 (sub_140286884.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C4C6C @ 0x1405C4C6C (sub_1405C4C6C.c)
 */

__int64 __fastcall sub_14028AED4(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  __int16 v3; // cx
  int v5; // r8d
  unsigned __int64 v6; // rdx

  v1 = 0LL;
  v2 = a1 + 128;
  do
  {
    v3 = *(_WORD *)(v2 + 34);
    if ( (v3 & 8) == 0 )
    {
      if ( (v3 & 1) != 0 )
      {
        if ( (*(_DWORD *)(v2 + 48) & 0x3FFFFFFF) != 0 )
        {
          sub_1405C4C6C(v2, 0x3FFFFFFFLL);
          v3 = *(_WORD *)(v2 + 34);
          v5 = 24;
        }
        else
        {
          v5 = 4;
        }
        v6 = *(unsigned int *)(v2 + 44);
        *(_QWORD *)(v2 + 96) = 1LL;
        *(_WORD *)(v2 + 34) = v3 & 0xFFFE;
        v1 += sub_140286884(v2, v6, v5);
      }
      else if ( *(_QWORD *)(v2 + 8) && !*(_QWORD *)(v2 + 96) )
      {
        KeBugCheckEx(0x1Au, 0x42003uLL, v2, 0LL, 0LL);
      }
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  return v1;
}
