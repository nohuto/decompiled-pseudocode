/*
 * XREFs of sub_1403C0774 @ 0x1403C0774
 * Callers:
 *     WheaAddErrorSource @ 0x14084E510 (WheaAddErrorSource.c)
 *     sub_140AFF7C8 @ 0x140AFF7C8 (sub_140AFF7C8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1403C0774(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CE1AB8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CE1AA0;
  v3 = (__int64 *)qword_140CE1AB0;
  if ( *(__int64 **)qword_140CE1AB0 != &qword_140CE1AA8 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CE1AA8;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CE1AB0 = a2;
  _InterlockedIncrement(&dword_140CE1A9C);
  _InterlockedIncrement(&dword_140CE1AA0);
  return KeSetEvent(&stru_140CE1AB8, 0, 0);
}
