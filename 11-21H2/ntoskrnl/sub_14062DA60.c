/*
 * XREFs of sub_14062DA60 @ 0x14062DA60
 * Callers:
 *     sub_1402095F0 @ 0x1402095F0 (sub_1402095F0.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     sub_140234888 @ 0x140234888 (sub_140234888.c)
 *     sub_140234B28 @ 0x140234B28 (sub_140234B28.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_1402F0604 @ 0x1402F0604 (sub_1402F0604.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_140311A50 @ 0x140311A50 (sub_140311A50.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 *     sub_14035A850 @ 0x14035A850 (sub_14035A850.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14035B608 @ 0x14035B608 (sub_14035B608.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062DA60(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1232);
  v6 = 0;
  v4 = a2;
  v5 = v3;
  v7 = &v4;
  v9 = 0;
  v8 = 12;
  sub_14035EDE4((__int64)&v7, 1u, 0x21000000u, 0x53Eu, a3 != 0 ? 5250562 : 5244418);
}
