/*
 * XREFs of sub_1C0021E44 @ 0x1C0021E44
 * Callers:
 *     sub_1C00454F4 @ 0x1C00454F4 (sub_1C00454F4.c)
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 *     sub_1C00A4268 @ 0x1C00A4268 (sub_1C00A4268.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0021E44(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 16) = a1;
  ExInitializeResourceLite((PERESOURCE)(a2 + 24));
  *(_QWORD *)(a2 + 128) = 0LL;
  *(_QWORD *)(a2 + 144) = sub_1C001AAE0;
  *(_QWORD *)(a2 + 152) = a2;
  KeInitializeEvent((PRKEVENT)(a2 + 160), NotificationEvent, 0);
  result = 1LL;
  *(_WORD *)(a2 + 184) = 1;
  return result;
}
