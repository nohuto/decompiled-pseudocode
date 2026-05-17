/*
 * XREFs of PsspFreeLinkedHandleList @ 0x18006147C
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18006117C (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PsspFreeLinkedHandleList(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rsi
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    v6 = a1;
    v1 = a1;
    do
    {
      v2 = (__int64 *)*a1;
      v3 = (unsigned int *)v1 + 3;
      if ( *((_WORD *)a1 + 5) )
      {
        v4 = *((unsigned __int16 *)a1 + 5);
        do
        {
          NtClose((HANDLE)*v3++);
          --v4;
        }
        while ( v4 );
      }
      v7 = 1LL;
      result = ZwFreeVirtualMemory(-1LL, &v6, &v7, 0x8000LL);
      a1 = v2;
      v1 = v2;
      v6 = v2;
    }
    while ( v2 );
  }
  return result;
}
