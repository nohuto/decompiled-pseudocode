/*
 * XREFs of sub_180022830 @ 0x180022830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 */

int sub_180022830()
{
  volatile signed __int32 *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F74C4);
  if ( _InterlockedExchangeAdd(v0, 0xFFFFFFFF) == 1 )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_1801EA188 = 0;
    LODWORD(v0) = EventUnregister(v1);
  }
  return (int)v0;
}
