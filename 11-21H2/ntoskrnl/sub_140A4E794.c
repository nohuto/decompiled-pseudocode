/*
 * XREFs of sub_140A4E794 @ 0x140A4E794
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     sub_140AAB248 @ 0x140AAB248 (sub_140AAB248.c)
 *     sub_140AAB2D4 @ 0x140AAB2D4 (sub_140AAB2D4.c)
 *     sub_140AAB660 @ 0x140AAB660 (sub_140AAB660.c)
 *     sub_140AAB6EC @ 0x140AAB6EC (sub_140AAB6EC.c)
 */

__int64 __fastcall sub_140A4E794(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v7; // rdi
  void *v8; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    sub_140AAB660();
    v3 = sub_140AAB2D4();
    v4 = (void *)v3;
    if ( v3 )
    {
      v5 = *(void **)(v3 + 16);
      if ( v5 )
        PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(v3 + 24), 0x4B494742u);
      qword_140C547D8 = v4;
      return v1;
    }
    sub_140AAB6EC();
    return (unsigned int)-1073741670;
  }
  v7 = qword_140C547D8;
  if ( !qword_140C547D8 )
    return (unsigned int)-1073741670;
  PoSetHiberRange(0LL, 0x10000u, qword_140C547D8, *(unsigned int *)qword_140C547D8, 0);
  v8 = (void *)v7[2];
  if ( v8 )
    PoSetHiberRange(0LL, 0x10000u, v8, *((unsigned int *)v7 + 6), 0);
  return (unsigned int)sub_140AAB248();
}
