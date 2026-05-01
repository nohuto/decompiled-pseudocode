/*
 * XREFs of AslHashFree @ 0x1800A2D68
 * Callers:
 *     SdbCloseDatabaseRead @ 0x18009512C (SdbCloseDatabaseRead.c)
 * Callees:
 *     <none>
 */

void __fastcall AslHashFree(int *P)
{
  char *v1; // r8
  int v3; // ebp
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  char *v6; // rax
  _QWORD *v7; // rbx

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
        v6 = v1;
        if ( v5 )
        {
          do
          {
            v7 = (_QWORD *)v5[2];
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
            v5 = v7;
          }
          while ( v7 );
          v1 = (char *)*((_QWORD *)P + 1);
          v6 = v1;
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *P );
      v1 = v6;
      if ( v6 )
LABEL_10:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
