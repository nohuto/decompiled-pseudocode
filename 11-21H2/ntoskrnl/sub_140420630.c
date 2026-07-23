/*
 * XREFs of sub_140420630 @ 0x140420630
 * Callers:
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     <none>
 */

void sub_140420630()
{
  unsigned __int64 v0; // [rsp+18h] [rbp+10h]
  char v1; // [rsp+28h] [rbp+20h]

  if ( (v1 & 4) == 0 )
  {
    __writemsr(0x17Au, 0LL);
    JUMPOUT(0x140420647LL);
  }
  __writeeflags(v0);
  __writemsr(0x17Au, 0LL);
  JUMPOUT(0x14042068ELL);
}
