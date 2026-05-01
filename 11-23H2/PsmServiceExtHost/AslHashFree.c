/*
 * XREFs of AslHashFree @ 0x18009FBC0
 * Callers:
 *     SdbCloseDatabaseRead @ 0x18008FD34 (SdbCloseDatabaseRead.c)
 * Callees:
 *     <none>
 */

void __fastcall AslHashFree(int *P)
{
  char *v1; // r8
  int v3; // esi
  __int64 v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  if ( P )
  {
    v1 = (char *)*((_QWORD *)P + 1);
    if ( v1 )
    {
      v3 = 0;
      if ( *P <= 0 )
        goto LABEL_10;
      v4 = 0LL;
      do
      {
        v5 = *(_QWORD **)&v1[v4];
        if ( v5 )
        {
          do
          {
            v6 = (_QWORD *)v5[2];
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
            v5 = v6;
          }
          while ( v6 );
          v1 = (char *)*((_QWORD *)P + 1);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *P );
      if ( v1 )
LABEL_10:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
