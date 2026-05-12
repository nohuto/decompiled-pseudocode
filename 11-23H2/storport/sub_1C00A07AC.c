/*
 * XREFs of sub_1C00A07AC @ 0x1C00A07AC
 * Callers:
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00A07AC(__int64 a1)
{
  PVOID *v2; // rcx
  __int64 i; // rdi

  *(_BYTE *)(a1 + 111) &= ~0x80u;
  v2 = *(PVOID **)(a1 + 6080);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < dword_1C0093AE0; i = (unsigned int)(i + 1) )
    {
      if ( v2[i] )
      {
        ExFreePoolWithTag(v2[i], 0x4D546152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 6080) + 8 * i) = 0LL;
        v2 = *(PVOID **)(a1 + 6080);
      }
    }
    ExFreePoolWithTag(v2, 0x4D546152u);
    *(_QWORD *)(a1 + 6080) = 0LL;
  }
}
