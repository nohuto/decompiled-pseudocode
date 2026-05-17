/*
 * XREFs of RtlpHpTagContextFindFreeTag @ 0x18006756C
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x180065BE4 (RtlpHpTagContextAllocateTag.c)
 * Callees:
 *     <none>
 */

__int64 RtlpHpTagContextFindFreeTag()
{
  unsigned __int16 v0; // dx
  __int16 v1; // r8
  unsigned __int16 v2; // ax

  v0 = 0;
  if ( word_180182DC2 != 1024 )
  {
    v1 = word_180182DC0;
    do
    {
      v2 = 0;
      if ( v1 != 1024 )
        v2 = v1;
      v1 = v2 + 1;
    }
    while ( *(_QWORD *)(qword_180182DB8 + 8LL * v2) );
    return (unsigned __int16)(v2 + 1);
  }
  return v0;
}
