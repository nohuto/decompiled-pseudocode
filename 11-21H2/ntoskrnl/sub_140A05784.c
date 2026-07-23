/*
 * XREFs of sub_140A05784 @ 0x140A05784
 * Callers:
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A05784(__int16 a1)
{
  PVOID *v2; // rdi
  PVOID *v3; // rbx
  __int64 v4; // rbp
  PVOID v5; // rcx
  PVOID v6; // rcx

  if ( (a1 & 0x20) != 0 )
  {
    v2 = (PVOID *)qword_140D04C38;
    _InterlockedExchange64((volatile __int64 *)&qword_140D04C38, 0LL);
    if ( v2 )
    {
      v3 = v2;
      v4 = 30LL;
      do
      {
        if ( *v3 )
        {
          ObfDereferenceObject(*v3);
          *v3 = 0LL;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      ExFreePoolWithTag(v2, 0);
    }
  }
  if ( (a1 & 0x10) != 0 )
  {
    v5 = qword_140D04C48;
    if ( qword_140D04C48 )
    {
      if ( v5 == (PVOID)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&qword_140D04C48,
                          0LL,
                          (signed __int64)qword_140D04C48) )
        ObfDereferenceObject(v5);
    }
  }
  if ( (a1 & 0x100) != 0 )
  {
    v6 = qword_140D04C50;
    if ( qword_140D04C50 )
    {
      if ( v6 == (PVOID)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&qword_140D04C50,
                          0LL,
                          (signed __int64)qword_140D04C50) )
        ObfDereferenceObject(v6);
    }
  }
  return 0LL;
}
