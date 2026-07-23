/*
 * XREFs of sub_1409E39EC @ 0x1409E39EC
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1409620D4 @ 0x1409620D4 (sub_1409620D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E39EC(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdi

  v2 = 0;
  v3 = a2;
  if ( !a2 || a2 > dword_140D3B100 )
    return 3221225485LL;
  KeWaitForSingleObject(&stru_140C160E0, Executive, 0, 0, 0LL);
  if ( (WORD2(xmmword_140D06900[0]) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_140C16468 )
    {
      ExFreePoolWithTag(qword_140C16468, 0);
      qword_140C16468 = 0LL;
      dword_140C16460 = 0;
    }
    v5 = v3;
    qword_140C16468 = (PVOID)ExAllocatePool2(64LL, 352 * v3, 1484223557LL);
    if ( qword_140C16468 )
    {
      dword_140C16460 = v3;
      if ( (_DWORD)v3 )
      {
        v6 = 0LL;
        do
        {
          sub_1409620D4(
            (unsigned __int16 *)((char *)qword_140C16468 + v6),
            (__int64)sub_14062F2D0,
            (unsigned int)*a1,
            *a1);
          v6 += 352LL;
          ++a1;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  KeReleaseMutex(&stru_140C160E0, 0);
  return v2;
}
