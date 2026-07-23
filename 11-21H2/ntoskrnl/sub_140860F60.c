/*
 * XREFs of sub_140860F60 @ 0x140860F60
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140645F50 (WheaProcessWaitingETWEvents.c)
 *     sub_140860F30 @ 0x140860F30 (sub_140860F30.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     sub_140643F08 @ 0x140643F08 (sub_140643F08.c)
 *     sub_140645F80 @ 0x140645F80 (sub_140645F80.c)
 */

LONG sub_140860F60()
{
  __int64 *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  LONG result; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&stru_140C10B00, Executive, 0, 0, 0LL);
    v0 = (__int64 *)qword_140C10B20;
    if ( *(__int64 **)(qword_140C10B20 + 8) != &qword_140C10B20
      || (v1 = *(_QWORD *)qword_140C10B20, *(_QWORD *)(*(_QWORD *)qword_140C10B20 + 8LL) != qword_140C10B20) )
    {
LABEL_8:
      __fastfail(3u);
    }
    qword_140C10B20 = *(_QWORD *)qword_140C10B20;
    *(_QWORD *)(v1 + 8) = &qword_140C10B20;
    KeSetEvent(&stru_140C10B00, 0, 0);
    if ( v0 == &qword_140C10B20 )
      break;
    sub_140645F80((__int64)(v0 + 5));
    sub_140643F08((ULONG_PTR)v0);
  }
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_140C10AE0, Executive, 0, 0, 0LL);
    v2 = qword_140C0FA40;
    if ( *(__int64 **)(qword_140C0FA40 + 8) != &qword_140C0FA40 )
      goto LABEL_8;
    v3 = *(_QWORD *)qword_140C0FA40;
    if ( *(_QWORD *)(*(_QWORD *)qword_140C0FA40 + 8LL) != qword_140C0FA40 )
      goto LABEL_8;
    qword_140C0FA40 = *(_QWORD *)qword_140C0FA40;
    *(_QWORD *)(v3 + 8) = &qword_140C0FA40;
    result = KeSetEvent(&stru_140C10AE0, 0, 0);
    if ( (__int64 *)v2 == &qword_140C0FA40 )
      return result;
    WheaLogInternalEvent((_DWORD *)(v2 + 16));
  }
}
