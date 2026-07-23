/*
 * XREFs of sub_140A93CE4 @ 0x140A93CE4
 * Callers:
 *     sub_140A93A60 @ 0x140A93A60 (sub_140A93A60.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_140A93F9C @ 0x140A93F9C (sub_140A93F9C.c)
 */

__int64 __fastcall sub_140A93CE4(__int64 a1, __int64 a2, unsigned int *a3)
{
  void *v3; // rcx
  _DWORD *v4; // r12
  _QWORD *v6; // r14
  unsigned int v7; // ebx
  unsigned int i; // edi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *(void **)(a1 + 48);
  v4 = qword_140C1ACB0;
  LODWORD(v14) = 0;
  v6 = RtlImageDirectoryEntryToData(v3, 1u, 0xCu, (PULONG)&v14);
  if ( !v6 || !(_DWORD)v14 )
    return 0LL;
  v7 = (unsigned int)v14 >> 3;
  for ( i = 0; i < v7; ++v6 )
  {
    v9 = *v6;
    v10 = sub_140A93F9C(*v6, &off_140D4E690);
    if ( v10
      || (v10 = sub_140A93F9C(v9, &off_140D4F470)) != 0
      || (v10 = sub_140A93F9C(v9, &off_140D4E190)) != 0
      || (v10 = sub_140A93F9C(v9, &off_140D50040)) != 0 )
    {
      v11 = *a3;
      v12 = 3 * v11;
      v4[2 * v12] = i;
      *(_QWORD *)&v4[2 * v12 + 2] = v10;
      *a3 = v11 + 1;
    }
    ++i;
  }
  return *a3;
}
