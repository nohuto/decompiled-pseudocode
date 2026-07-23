/*
 * XREFs of sub_1406DE8A0 @ 0x1406DE8A0
 * Callers:
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_1406DE800 @ 0x1406DE800 (sub_1406DE800.c)
 * Callees:
 *     sub_140255C70 @ 0x140255C70 (sub_140255C70.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1406DE8A0(char a1)
{
  char v1; // si
  char v2; // bl
  _QWORD *v3; // rdi

  v1 = 0;
  v2 = a1;
  if ( !a1 && !byte_140C4E910 )
    return 0;
  while ( 1 )
  {
    v3 = sub_140255C70((_QWORD **)&qword_140C46F80);
    if ( v3 )
    {
      v1 = 1;
      do
      {
        ++*(_DWORD *)(*(_QWORD *)(v3[2] + 48LL) + 16LL);
        *(_DWORD *)(v3[2] + 16LL) &= ~8u;
        sub_14042A5E0(v3[2], v3[4]);
        ObfDereferenceObject((PVOID)v3[2]);
        ExFreePoolWithTag(v3, 0);
        v3 = sub_140255C70((_QWORD **)&qword_140C46F80);
      }
      while ( v3 );
    }
    if ( v2 != 1 )
      break;
    byte_140C4E910 = 1;
    v2 = 0;
  }
  return v1;
}
