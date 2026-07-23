/*
 * XREFs of sub_14039E230 @ 0x14039E230
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_14039E270 @ 0x14039E270 (sub_14039E270.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14039E230(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 MaximumProcessorCount; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax

  LODWORD(v1) = HIDWORD(KeGetPcr()[1].LockArray);
  v3 = 3 * v1;
  if ( a1[3 * v1 + 1] )
  {
    sub_14039E270();
    return 0LL;
  }
  if ( byte_140C4C678 )
  {
    v5 = __readmsr(0x40000083u) & 0xFFFFFFFFFFFFF000uLL;
    a1[v3 + 2] = v5;
    v6 = sub_1403BE7F0(v5, 4096LL, 1LL);
    a1[v3 + 1] = v6;
    if ( v6 )
      return 0LL;
    return 3221225626LL;
  }
  result = sub_1403B38C8((int)a1, 0, 4, 8, &qword_140D01798);
  if ( (int)result >= 0 )
  {
    MaximumProcessorCount = (unsigned int)HalQueryMaximumProcessorCount();
    v8 = sub_14042A5E0(-1LL, MaximumProcessorCount);
    if ( v8 )
    {
      a1[2] = v8;
      v9 = sub_1403BE7F0(v8, (unsigned __int64)(unsigned int)MaximumProcessorCount << 12, 1LL);
      v10 = a1 + 1;
      a1[1] = v9;
      if ( v9 )
      {
        if ( (unsigned int)MaximumProcessorCount > 1 )
        {
          v11 = a1 + 4;
          v12 = (unsigned int)(MaximumProcessorCount - 1);
          do
          {
            v11[1] = v10[1] + 4096;
            v13 = *v10;
            v10 += 3;
            *v11 = v13 + 4096;
            v11 += 3;
            --v12;
          }
          while ( v12 );
        }
        return 0LL;
      }
    }
    return 3221225626LL;
  }
  return result;
}
