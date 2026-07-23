/*
 * XREFs of sub_1408654C0 @ 0x1408654C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14085D380 @ 0x14085D380 (sub_14085D380.c)
 */

void __fastcall sub_1408654C0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = sub_140347C10((__int64)&qword_140CE21E0, 0LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140CE21E0, 0LL) )
    {
      if ( v4 )
        sub_140353BB0((ULONG_PTR)&qword_140CE21E0, v4);
    }
    else
    {
      if ( v4 )
        *(_BYTE *)(v4 + 18) = 1;
      for ( i = qword_140D010B8; i; i = *(_QWORD *)(i + 352) )
        sub_14085D380(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CE21E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140CE21E0);
      sub_1402AFC00((ULONG_PTR)&qword_140CE21E0);
    }
  }
}
