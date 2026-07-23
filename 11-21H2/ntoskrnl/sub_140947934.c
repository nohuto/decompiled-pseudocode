/*
 * XREFs of sub_140947934 @ 0x140947934
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 */

__int64 __fastcall sub_140947934(__int64 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (_QWORD *)a1[2];
  if ( v2 )
    v3 = *(_QWORD *)(v2[39] + 40LL);
  else
    v3 = 0LL;
  ObfReferenceObjectWithTag(v2, 0x65706E50u);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 789) <= 1 )
  {
    v5 = -1073741738;
  }
  else
  {
    sub_1402D2848(a1[2]);
    *(_DWORD *)(v3 + 704) |= 0x40u;
    sub_14076FBEC(v3, 256);
    sub_14076FB70(v3, 1024);
    sub_140764FE4(v3);
    if ( *(_DWORD *)(v3 + 300) == 778 )
    {
      if ( a1[4] )
        sub_14076FBEC(v3, 2048);
      else
        sub_14076FB70(v3, 2048);
      sub_140958D9C(v3);
      v4 = a1[5];
      LODWORD(v7) = 3;
      BYTE4(v7) = byte_140C4629A;
      ObfReferenceObject(*((PVOID *)qword_140C46278 + 4));
      v5 = sub_140777578((__int64)qword_140C46278, (__int64)a1, (__int64)&v7, 0, 0, v4 != 0, 0);
      if ( v5 < 0 )
        v5 = 0;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  if ( (*(_DWORD *)(v3 + 704) & 0x40) != 0 )
  {
    sub_1402D25CC(*(_QWORD *)(v3 + 32));
    *(_DWORD *)(v3 + 704) &= ~0x40u;
  }
  ObfDereferenceObjectWithTag((PVOID)a1[2], 0x65706E50u);
  return (unsigned int)v5;
}
