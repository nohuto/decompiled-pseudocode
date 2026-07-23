/*
 * XREFs of sub_140683F18 @ 0x140683F18
 * Callers:
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 * Callees:
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14068565C @ 0x14068565C (sub_14068565C.c)
 *     sub_140687598 @ 0x140687598 (sub_140687598.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 */

__int64 __fastcall sub_140683F18(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v8 = 0LL;
  sub_140687598(a1, CurrentThread, &v9, &v8);
  for ( i = v9; i; i = *(_QWORD *)(i + 1264) )
  {
    sub_14068565C(i, &v8);
    if ( *(_QWORD *)(i + 552) && ((1 << a2) & *(_DWORD *)(i + 1068)) != 0 )
      sub_14025863C(i, a2, a3, 0);
    if ( i != v8 )
      ExReleaseResourceLite((PERESOURCE)(i + 56));
  }
  return sub_1406FFE90(v8, CurrentThread);
}
