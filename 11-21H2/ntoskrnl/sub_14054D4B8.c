/*
 * XREFs of sub_14054D4B8 @ 0x14054D4B8
 * Callers:
 *     sub_14054991C @ 0x14054991C (sub_14054991C.c)
 *     sub_140549A48 @ 0x140549A48 (sub_140549A48.c)
 *     sub_14054A610 @ 0x14054A610 (sub_14054A610.c)
 *     sub_14054B018 @ 0x14054B018 (sub_14054B018.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14054D1E8 @ 0x14054D1E8 (sub_14054D1E8.c)
 *     sub_14054D424 @ 0x14054D424 (sub_14054D424.c)
 *     sub_14054FA08 @ 0x14054FA08 (sub_14054FA08.c)
 */

__int64 __fastcall sub_14054D4B8(int a1, int a2, char *a3, void *a4, unsigned int a5, LONGLONG **a6)
{
  LONGLONG v9; // rax
  int v10; // ecx
  LONGLONG **v12; // r12
  LONGLONG *v13; // r14
  unsigned int v14; // ebx
  __int128 v15; // rtt
  __int64 v16; // rbp
  unsigned int v17; // ebx
  char *v18; // r15
  __int64 v19; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v21; // rax
  int v22; // r8d
  int v23; // [rsp+30h] [rbp-38h]

  v9 = (LONGLONG)sub_14054D424(a1, 1);
  v10 = v9;
  if ( !v9 )
    return 3221225473LL;
  v12 = a6;
  v13 = *(LONGLONG **)(v9 + 8);
  v14 = 0;
  v15 = *(__int64 *)(v9 + 16);
  *a6 = v13;
  v16 = v15 / 4096;
  v23 = v16;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    v17 = 0x200000;
    v18 = a3;
    if ( a5 <= 0x200000 )
      v17 = a5;
    v14 = v17 >> 12;
    if ( v14 )
    {
      v19 = v14;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v18);
        v18 += 4096;
        *v13++ = PhysicalAddress.QuadPart / 4096;
        --v19;
      }
      while ( v19 );
      v12 = a6;
      LODWORD(v16) = v23;
    }
    v21 = MmGetPhysicalAddress(a4);
    *v12 = (LONGLONG *)a3;
    v10 = 4096;
    v9 = v21.QuadPart / 4096;
  }
  LOBYTE(v10) = a1 == 0;
  v22 = sub_14054FA08(v10, v16, v9, v14, a2);
  if ( v22 < 0 )
    sub_14054D1E8(a1);
  return (unsigned int)v22;
}
