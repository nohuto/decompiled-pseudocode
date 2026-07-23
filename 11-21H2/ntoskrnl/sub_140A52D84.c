/*
 * XREFs of sub_140A52D84 @ 0x140A52D84
 * Callers:
 *     sub_1403B60E0 @ 0x1403B60E0 (sub_1403B60E0.c)
 *     sub_140A52CF4 @ 0x140A52CF4 (sub_140A52CF4.c)
 * Callees:
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 */

void __fastcall sub_140A52D84(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rbx
  void *v3; // rcx

  if ( qword_140C4A788 )
  {
    sub_1403B1B5C(a1, qword_140C4A788);
    qword_140C4A788 = 0LL;
  }
  v1 = qword_140C4A7C0;
  if ( qword_140C4A7C0 )
  {
    for ( i = 0LL; (unsigned int)i < dword_140C4A660; i = (unsigned int)(i + 1) )
    {
      v3 = *(void **)(v1 + 24 * i + 16);
      if ( v3 )
      {
        MmUnmapVideoDisplay(v3, *(unsigned int *)(v1 + 24 * i + 8));
        v1 = qword_140C4A7C0;
        *(_QWORD *)(qword_140C4A7C0 + 24 * i + 16) = 0LL;
      }
    }
  }
}
