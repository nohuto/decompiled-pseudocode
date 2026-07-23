/*
 * XREFs of sub_14099D480 @ 0x14099D480
 * Callers:
 *     sub_14099DB50 @ 0x14099DB50 (sub_14099DB50.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099D480(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  wchar_t **v5; // r9
  __int64 v6; // rdx
  wchar_t *v7; // rcx

  result = ExAllocatePool2(256LL, 1256LL, 1884115027LL);
  if ( result )
  {
    v3 = result + 1176;
    v4 = 20LL;
    v5 = &off_140D05940;
    v6 = result + 24;
    do
    {
      v7 = *v5;
      v5 += 2;
      *(_QWORD *)v6 = v3;
      v3 += 4LL;
      *(_QWORD *)(v6 - 8) = v7;
      *(_QWORD *)(v6 + 16) = a1;
      *(_DWORD *)(v6 + 24) = 4;
      *(_DWORD *)(v6 + 8) = 67108868;
      *(_DWORD *)(v6 - 16) = 288;
      v6 += 56LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
