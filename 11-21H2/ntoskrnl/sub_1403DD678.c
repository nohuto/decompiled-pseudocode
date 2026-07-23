/*
 * XREFs of sub_1403DD678 @ 0x1403DD678
 * Callers:
 *     sub_1403DD65C @ 0x1403DD65C (sub_1403DD65C.c)
 * Callees:
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 */

__int64 sub_1403DD678()
{
  unsigned int *v0; // rbx
  _OWORD *v1; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v0 = (unsigned int *)qword_140C4BED0;
  if ( !qword_140C4BED0 || *(_DWORD *)(qword_140C4BED0 + 220) )
    return 0LL;
  v1 = (_OWORD *)sub_1403BF104(32, 1u);
  v2 = v1;
  if ( v1 )
  {
    *v1 = 0LL;
    v1[1] = 0LL;
    *((_DWORD *)v1 + 4) = *((unsigned __int16 *)v0 + 4);
    v3 = (unsigned __int64)*v0 << 8;
    v2[3] = v3;
    v4 = v3 | (8LL * (v0[1] & 0x1F));
    v2[3] = v4;
    v2[3] = v4 | (v0[1] >> 5) & 7;
    v5 = (_QWORD *)qword_140C4BCC8;
    if ( *(__int64 **)qword_140C4BCC8 != &qword_140C4BCC0 )
      __fastfail(3u);
    *v2 = &qword_140C4BCC0;
    v2[1] = v5;
    *v5 = v2;
    qword_140C4BCC8 = (__int64)v2;
    return 0LL;
  }
  return 3221225626LL;
}
