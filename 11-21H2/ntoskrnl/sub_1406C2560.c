/*
 * XREFs of sub_1406C2560 @ 0x1406C2560
 * Callers:
 *     <none>
 * Callees:
 *     sub_140245C68 @ 0x140245C68 (sub_140245C68.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 */

void __noreturn sub_1406C2560()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( sub_140245C68((__int64)KeGetCurrentThread(), v0) )
    sub_1407D80A4(*((_QWORD *)KeGetCurrentThread() + 23), v0[0]);
  sub_1407A0088(*((unsigned int *)KeGetCurrentThread() + 358));
  JUMPOUT(0x1406C2598LL);
}
