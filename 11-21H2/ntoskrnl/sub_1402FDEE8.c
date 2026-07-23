/*
 * XREFs of sub_1402FDEE8 @ 0x1402FDEE8
 * Callers:
 *     sub_1402FDE54 @ 0x1402FDE54 (sub_1402FDE54.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

bool __fastcall sub_1402FDEE8(__int64 a1)
{
  char v2; // si
  bool v3; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int128 v6; // [rsp+20h] [rbp-78h]
  _OWORD v7[5]; // [rsp+30h] [rbp-68h] BYREF

  memset(v7, 0, 0x48uLL);
  *(_QWORD *)&v6 = 2359330LL;
  *((_QWORD *)&v6 + 1) = L"WIN://NOALLAPPPKG";
  v2 = 0;
  v3 = 1;
  *((_QWORD *)&v7[0] + 1) = *(_QWORD *)(a1 + 776);
  v7[1] = v6;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v2 = 1;
  }
  if ( (int)sub_140300374(v7) >= 0 )
    v3 = **(_QWORD **)&v7[3] == 0LL;
  if ( v2 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v3;
}
