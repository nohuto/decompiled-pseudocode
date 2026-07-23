/*
 * XREFs of sub_14051E118 @ 0x14051E118
 * Callers:
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14051E118(int a1, unsigned __int16 a2)
{
  char v2; // r8
  unsigned int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // rbx
  unsigned int v8; // edx
  int v9; // r10d

  v2 = 0;
  if ( !qword_140C4AD18 )
    return 1;
  v5 = 0;
  v6 = *(_DWORD *)(qword_140C4AD18 + 60);
  v7 = a2;
  v8 = 0;
  if ( v6 )
  {
    do
    {
      v9 = *(_DWORD *)(*(_QWORD *)qword_140C4AD18 + 4LL * v5);
      if ( v9 == a1 )
        return 1;
      if ( *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 16) + 4LL * v5) == *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 24)
                                                                                  + 4 * v7)
        && v9 != -1 )
      {
        ++v8;
      }
    }
    while ( ++v5 < v6 );
  }
  if ( v8 < *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 40) + 4 * v7) )
    return 1;
  return v2;
}
