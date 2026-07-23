/*
 * XREFs of sub_1409C664C @ 0x1409C664C
 * Callers:
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 *     sub_1409C61B0 @ 0x1409C61B0 (sub_1409C61B0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402D6A98 @ 0x1402D6A98 (sub_1402D6A98.c)
 *     sub_14066B900 @ 0x14066B900 (sub_14066B900.c)
 *     sub_1409CD320 @ 0x1409CD320 (sub_1409CD320.c)
 *     sub_1409CD6CC @ 0x1409CD6CC (sub_1409CD6CC.c)
 */

__int64 __fastcall sub_1409C664C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = sub_14066B900((_DWORD *)(a1 + 24), a2, &v8);
    if ( v5 >= 0 )
    {
      if ( HIDWORD(NlsMbOemCodePageTag) )
        sub_1409CD6CC(a1);
      sub_1402D6A98(*(_QWORD **)(a1 + 216));
      *(_QWORD *)(a1 + 216) = v8;
      if ( HIDWORD(NlsMbOemCodePageTag) )
        sub_1409CD320(a1);
      *(_QWORD *)(a1 + 56) = _InterlockedIncrement64(&qword_140C0DA70);
    }
  }
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
