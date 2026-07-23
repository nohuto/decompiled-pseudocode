/*
 * XREFs of HandleInformation @ 0x140A91580
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140A91260 @ 0x140A91260 (sub_140A91260.c)
 */

void __fastcall __noreturn HandleInformation(_QWORD *StartContext)
{
  char *v2; // rcx

  while ( 1 )
  {
    KeWaitForSingleObject(StartContext + 2, Executive, 0, 0, 0LL);
    v2 = (char *)StartContext[1];
    ++*((_DWORD *)StartContext + 10);
    sub_140A91260(v2);
    StartContext[1] = 0LL;
  }
}
