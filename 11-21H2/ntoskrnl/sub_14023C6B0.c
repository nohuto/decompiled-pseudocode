/*
 * XREFs of sub_14023C6B0 @ 0x14023C6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023C750 @ 0x14023C750 (sub_14023C750.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

void sub_14023C6B0()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rax
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+42h] [rbp-16h]
  __int16 v5; // [rsp+46h] [rbp-12h]
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = 0;
  v3 = 0;
  v6 = 0;
  v2[1] = qword_140D06E48[0];
  v2[0] = &dword_140D06E40;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
  {
    v1 = sub_140348800(v6);
    if ( (struct _KPRCB *)v1 != CurrentPrcb )
      sub_140345190(*(_QWORD *)(v1 + 13080), 0);
  }
  sub_14023C750(0LL, 0LL, 0LL, 0LL);
}
