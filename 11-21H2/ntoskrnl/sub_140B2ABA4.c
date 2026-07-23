/*
 * XREFs of sub_140B2ABA4 @ 0x140B2ABA4
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_140255C70 @ 0x140255C70 (sub_140255C70.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char sub_140B2ABA4()
{
  char v0; // di
  PVOID *v1; // rax
  PVOID *v2; // rbx

  v0 = 0;
  sub_1402D21B8(&stru_140013198, 0, 0LL);
  while ( 1 )
  {
    v1 = (PVOID *)sub_140255C70((_QWORD **)&qword_140C46F70);
    v2 = v1;
    if ( !v1 )
      break;
    v0 = 1;
    ++*(_DWORD *)(*((_QWORD *)v1[2] + 6) + 16LL);
    *((_DWORD *)v1[2] + 4) &= ~0x20u;
    sub_14042A5E0(v1[2], v1[4]);
    ObfDereferenceObjectWithTag(v2[2], 0x746C6644u);
    ExFreePoolWithTag(v2, 0);
  }
  byte_140C54E7C = 1;
  sub_1402D21B8(&stru_140013188, 0, 0LL);
  return v0;
}
