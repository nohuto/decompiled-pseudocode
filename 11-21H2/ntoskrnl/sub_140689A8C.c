/*
 * XREFs of sub_140689A8C @ 0x140689A8C
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_14091D3F0 @ 0x14091D3F0 (sub_14091D3F0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140689A8C(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 1696);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 1688) = 0;
    v3 = 0LL;
    for ( *(_QWORD *)(a1 + 1696) = 0LL; (unsigned int)v3 < *(_DWORD *)(a1 + 1720); v3 = (unsigned int)(v3 + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 1712) + 24 * v3 + 8);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 1712) + 24 * v3 + 8) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1712), 0);
    *(_QWORD *)(a1 + 1712) = 0LL;
    *(_DWORD *)(a1 + 1720) = 0;
    *(_DWORD *)(a1 + 1724) = 0;
  }
}
