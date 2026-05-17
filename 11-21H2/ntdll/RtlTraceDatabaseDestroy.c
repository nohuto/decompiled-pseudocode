/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x18010F2E0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     RtlpTraceDatabaseFree @ 0x18010F5AC (RtlpTraceDatabaseFree.c)
 */

bool __fastcall RtlTraceDatabaseDestroy(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rbx
  char v6; // si
  _QWORD *v7; // rdi

  RtlDeleteCriticalSection((__int64 *)(a1 + 48), a2, a3, a4);
  v5 = *(_QWORD **)(a1 + 16);
  if ( !v5 )
    return 1;
  v6 = 0;
  do
  {
    v7 = (_QWORD *)v5[2];
    if ( !v7 )
      v5 -= 24;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v5) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v5);
      v6 = 1;
    }
    v5 = v7;
  }
  while ( v7 );
  return !v6;
}
