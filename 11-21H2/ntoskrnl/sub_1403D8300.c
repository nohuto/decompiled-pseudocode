/*
 * XREFs of sub_1403D8300 @ 0x1403D8300
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x1403D8370 (InbvIsBootDriverInstalled.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1403D8300()
{
  unsigned __int64 v0; // rbx
  _DWORD *v1; // rsi
  PVOID *v2; // rdi

  v0 = 1LL;
  v1 = &unk_140C485A0;
  v2 = (PVOID *)&qword_140C485C0;
  do
  {
    if ( *v2 && (!(unsigned __int8)InbvIsBootDriverInstalled() || v0 != 3 && v0 != 5) )
    {
      ExFreePoolWithTag(*v2, 0);
      *v2 = 0LL;
      *v1 = 0;
    }
    ++v0;
    ++v2;
    ++v1;
  }
  while ( v0 < 7 );
}
