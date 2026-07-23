/*
 * XREFs of sub_1406E5950 @ 0x1406E5950
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

__int64 sub_1406E5950()
{
  PERESOURCE *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v7 = 0LL;
  sub_140347770((__int64)v7);
  ExAcquireFastMutex(&dword_140C48F60);
  while ( 1 )
  {
    v0 = (PERESOURCE *)qword_140C48F10;
    if ( qword_140C48F10 == &qword_140C48F10 )
      break;
    if ( *((PVOID **)qword_140C48F10 + 1) != &qword_140C48F10
      || (v1 = *(_QWORD *)qword_140C48F10, *(PVOID *)(*(_QWORD *)qword_140C48F10 + 8LL) != qword_140C48F10) )
    {
      __fastfail(3u);
    }
    qword_140C48F10 = *(PVOID *)qword_140C48F10;
    *(_QWORD *)(v1 + 8) = &qword_140C48F10;
    KeReleaseGuardedMutex(&dword_140C48F60);
    sub_14071B6EC();
    ExDeleteResourceLite(v0[16]);
    ExFreePoolWithTag(v0[16], 0);
    ExFreePoolWithTag(v0, 0x6D524D43u);
    sub_140AB4260(v3, v2, v4, v5);
    ExAcquireFastMutex(&dword_140C48F60);
  }
  byte_140C4E8C0 = 0;
  KeReleaseGuardedMutex(&dword_140C48F60);
  return sub_14022EA30(v7);
}
