/*
 * XREFs of MultiUserGreCleanupInit @ 0x1C02DDFC8
 * Callers:
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     GreCreateSemaphoreNonTracked @ 0x1C00BF354 (GreCreateSemaphoreNonTracked.c)
 */

_BOOL8 __fastcall MultiUserGreCleanupInit(__int64 a1)
{
  _QWORD *v1; // rbx
  struct _ERESOURCE *SemaphoreNonTracked; // rax

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v1[401] = v1 + 400;
  v1[400] = v1 + 400;
  SemaphoreNonTracked = GreCreateSemaphoreNonTracked();
  v1[402] = SemaphoreNonTracked;
  return SemaphoreNonTracked != 0LL;
}
