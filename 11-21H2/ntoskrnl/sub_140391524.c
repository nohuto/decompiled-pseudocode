/*
 * XREFs of sub_140391524 @ 0x140391524
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 * Callees:
 *     <none>
 */

int sub_140391524()
{
  unsigned __int64 v0; // rax

  LODWORD(v0) = HIDWORD(KeGetPcr()[1].LockArray);
  if ( !(_DWORD)v0 )
  {
    v0 = __rdtsc();
    qword_140C4E358 = v0;
  }
  return v0;
}
