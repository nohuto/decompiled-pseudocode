/*
 * XREFs of sub_140A898F0 @ 0x140A898F0
 * Callers:
 *     sub_140A812D0 @ 0x140A812D0 (sub_140A812D0.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140583D08 @ 0x140583D08 (sub_140583D08.c)
 *     sub_14063B338 @ 0x14063B338 (sub_14063B338.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A81E5C @ 0x140A81E5C (sub_140A81E5C.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 *     sub_140A9AC20 @ 0x140A9AC20 (sub_140A9AC20.c)
 */

__int64 __fastcall sub_140A898F0(__int64 a1, __int64 a2, _DWORD *a3)
{
  PVOID *v3; // rbx
  int v6; // r15d
  unsigned int v7; // esi
  int v8; // edi
  __int64 *v9; // rax
  int v10; // eax
  int v11; // eax

  v3 = 0LL;
  *a3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_140A89D58();
  if ( (unsigned int)sub_140A9AC20(a1 + 24) )
    goto LABEL_27;
  if ( RtlEqualUnicodeString(&stru_140A75038, (PCUNICODE_STRING)(a1 + 24), 1u) )
  {
    dword_140C1ACA4 = 1;
    goto LABEL_4;
  }
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = (PVOID *)PsLoadedModuleList;
  v6 = 1;
  while ( v3 != &PsLoadedModuleList )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(v3 + 11), 1u) )
      goto LABEL_11;
    v3 = (PVOID *)*v3;
    ++v7;
  }
  v3 = 0LL;
LABEL_11:
  if ( !dword_140C1ACA4 )
  {
    if ( !v3 )
    {
      v8 = -1073738629;
      goto LABEL_26;
    }
    v10 = sub_140A81E5C();
    if ( v7 <= 1 || v10 )
    {
      v8 = -1073738739;
      goto LABEL_26;
    }
    v8 = sub_140583D08((__int64)v3);
    if ( v8 < 0 )
    {
LABEL_26:
      ExReleaseResourceLite(&PsLoadedModuleResource);
      goto LABEL_27;
    }
  }
LABEL_4:
  v9 = (__int64 *)qword_140C1B2C8;
  if ( *(__int64 **)qword_140C1B2C8 != &qword_140C1B2C0 )
    __fastfail(3u);
  *(_QWORD *)a1 = &qword_140C1B2C0;
  *(_QWORD *)(a1 + 8) = v9;
  *v9 = a1;
  qword_140C1B2C8 = a1;
  if ( dword_140C1ACA4 || (v8 = sub_140A9A468(v3, a1), v8 >= 0) )
  {
    v11 = dword_140C2A040 + 1;
    *a3 = 1;
    dword_140C2A040 = v11;
    if ( dword_140C1ACA4 && ((qword_140D01450 & 8) != 0 || (qword_140D01450 & 1) != 0) )
      sub_14063B338(8u);
  }
  if ( v6 )
    goto LABEL_26;
LABEL_27:
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return (unsigned int)v8;
}
