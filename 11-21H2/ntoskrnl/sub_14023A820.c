/*
 * XREFs of sub_14023A820 @ 0x14023A820
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140345110 @ 0x140345110 (sub_140345110.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

char sub_14023A820()
{
  __int64 v1; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !dword_140C1CF20
    || !(unsigned int)sub_1402FEDA0(&unk_140C0D440, &dword_140C0D000, &dword_140C0D110, HIWORD(dword_140C0D110)) )
  {
    return 1;
  }
  dword_140C204B0 = KeCountSetBitsAffinityEx(&dword_140C0D110);
  v2[1] = qword_140C0D118;
  v3 = 0;
  v2[0] = &dword_140C0D110;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
  {
    v1 = sub_140348800(v6);
    sub_140345110(v1, 1LL);
  }
  return 0;
}
