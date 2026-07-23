/*
 * XREFs of sub_140A89AB0 @ 0x140A89AB0
 * Callers:
 *     sub_140A812D0 @ 0x140A812D0 (sub_140A812D0.c)
 *     sub_140A89C30 @ 0x140A89C30 (sub_140A89C30.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140583D08 @ 0x140583D08 (sub_140583D08.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A81E5C @ 0x140A81E5C (sub_140A81E5C.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 *     sub_140A9AC20 @ 0x140A9AC20 (sub_140A9AC20.c)
 */

__int64 __fastcall sub_140A89AB0(__int64 a1, PVOID *a2, _DWORD *a3)
{
  int v6; // r15d
  int v7; // ebp
  unsigned int v8; // esi
  int v9; // edi
  int v10; // eax
  __int64 *v11; // rax

  *a3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  sub_140A89D58();
  if ( (unsigned int)sub_140A9AC20(a1 + 24) )
    goto LABEL_24;
  if ( a2 )
    goto LABEL_9;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  a2 = (PVOID *)PsLoadedModuleList;
  v7 = 1;
  while ( 1 )
  {
    if ( a2 == &PsLoadedModuleList )
    {
      a2 = 0LL;
      goto LABEL_17;
    }
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(a2 + 11), 1u) )
      break;
    a2 = (PVOID *)*a2;
    ++v8;
  }
  if ( a2 )
  {
LABEL_9:
    if ( (~dword_140C1AD38 & dword_140C29FC0) != 0 )
    {
      v9 = -1073738740;
      goto LABEL_22;
    }
    v10 = sub_140A81E5C();
    if ( v7 && (v8 <= 1 || v10) )
    {
      v9 = -1073738739;
LABEL_23:
      ExReleaseResourceLite(&PsLoadedModuleResource);
      goto LABEL_24;
    }
    v9 = sub_140583D08((__int64)a2);
    if ( v9 < 0 )
      goto LABEL_22;
    v6 = 1;
  }
LABEL_17:
  v11 = (__int64 *)qword_140C1B2C8;
  if ( *(__int64 **)qword_140C1B2C8 != &qword_140C1B2C0 )
    __fastfail(3u);
  *(_QWORD *)a1 = &qword_140C1B2C0;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = a1;
  qword_140C1B2C8 = a1;
  *a3 = 1;
  if ( v6 )
    sub_140A9A468(a2, a1);
  ++dword_140C2A040;
LABEL_22:
  if ( v7 )
    goto LABEL_23;
LABEL_24:
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return (unsigned int)v9;
}
