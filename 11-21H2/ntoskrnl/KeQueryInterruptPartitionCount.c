/*
 * XREFs of KeQueryInterruptPartitionCount @ 0x1403B0280
 * Callers:
 *     sub_1403B0158 @ 0x1403B0158 (sub_1403B0158.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryInterruptPartitionCount(__int16 a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( byte_140C2AE98 )
  {
    if ( !qword_140C2AEA0 || a1 )
      return (unsigned int)-1073741637;
    else
      *a2 = *(unsigned __int8 *)(qword_140C2AEA0 + 2);
  }
  else
  {
    *a2 = 0;
    return 259;
  }
  return v2;
}
