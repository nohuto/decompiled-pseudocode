/*
 * XREFs of sub_140855238 @ 0x140855238
 * Callers:
 *     sub_140855120 @ 0x140855120 (sub_140855120.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwRegisterClassicProvider @ 0x1406D2300 (EtwRegisterClassicProvider.c)
 */

LONG __fastcall sub_140855238(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  REGHANDLE v5; // rbx
  LONG result; // eax
  int v7; // ebx
  LARGE_INTEGER v8; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 == a2 )
    *(_QWORD *)(a1 + 112) = -1LL;
  v5 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  v8.QuadPart = v5;
  result = KeReleaseMutex(&Object, 0);
  if ( v5 )
    result = EtwUnregister(v5);
  if ( v4 == a2 )
  {
    v7 = EtwRegisterClassicProvider((int)a1 + 72, 0LL, (__int64)sub_1409DE220, a1, (__int64)&v8);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    if ( v7 < 0 )
      *(_QWORD *)(a1 + 112) = 0LL;
    else
      *(LARGE_INTEGER *)(a1 + 104) = v8;
    return KeReleaseMutex(&Object, 0);
  }
  return result;
}
