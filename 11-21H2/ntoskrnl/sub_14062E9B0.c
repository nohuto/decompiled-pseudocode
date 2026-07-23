/*
 * XREFs of sub_14062E9B0 @ 0x14062E9B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140280D70 @ 0x140280D70 (sub_140280D70.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     FsRtlGetFileNameInformation @ 0x1406E4910 (FsRtlGetFileNameInformation.c)
 *     FsRtlReleaseFileNameInformation @ 0x1406E5900 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14062E9B0(PVOID P)
{
  __int64 v2; // rcx
  unsigned __int16 *v3; // rcx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *((_QWORD *)P + 11);
  v4 = 0LL;
  if ( (int)FsRtlGetFileNameInformation(v2, 512LL, &v4, &v5) < 0 )
    v3 = (unsigned __int16 *)(*((_QWORD *)P + 11) + 88LL);
  else
    v3 = (unsigned __int16 *)&v4;
  sub_140280D70(
    v3,
    *((_QWORD *)P + 12),
    *((_QWORD *)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    *((_DWORD *)P + 33),
    *((_QWORD *)P + 17),
    0);
  if ( v5 )
    FsRtlReleaseFileNameInformation();
  ObfDereferenceObject(*((PVOID *)P + 11));
  ExFreePoolWithTag(P, 0);
}
