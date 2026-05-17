/*
 * XREFs of PsspFreeLinkedHandleList @ 0x18012A258
 * Callers:
 *     PsspCaptureThreadInformation @ 0x180129CD0 (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

void __fastcall PsspFreeLinkedHandleList(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  unsigned int *v4; // rdi
  __int64 v5; // rsi

  if ( a1 )
  {
    v1 = a1;
    v2 = a1;
    v3 = a1;
    do
    {
      v1 = (_QWORD *)*v1;
      v4 = (unsigned int *)v3 + 3;
      if ( *((_WORD *)v2 + 5) )
      {
        v5 = *((unsigned __int16 *)v2 + 5);
        do
        {
          NtClose((HANDLE)*v4++);
          --v5;
        }
        while ( v5 );
      }
      ZwFreeVirtualMemory();
      v2 = v1;
      v3 = v1;
    }
    while ( v1 );
  }
}
