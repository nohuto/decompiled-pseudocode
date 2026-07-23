/*
 * XREFs of KeQueryInterruptPartitionInformation @ 0x1403B0210
 * Callers:
 *     sub_1403B0158 @ 0x1403B0158 (sub_1403B0158.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryInterruptPartitionInformation(__int16 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( byte_140C2AE98 )
  {
    if ( !qword_140C2AEA0 || a1 )
    {
      return (unsigned int)-1073741637;
    }
    else if ( *(unsigned __int8 *)(qword_140C2AEA0 + 2) <= a2 )
    {
      return (unsigned int)-1073741584;
    }
    else
    {
      *(_OWORD *)a3 = 0LL;
      *(_WORD *)(a3 + 8) = 0;
      *(_QWORD *)a3 = *(_QWORD *)(qword_140C2AEA0 + 16 * (a2 + 1LL));
    }
  }
  else
  {
    v3 = 259;
    *(_OWORD *)a3 = 0LL;
  }
  return v3;
}
