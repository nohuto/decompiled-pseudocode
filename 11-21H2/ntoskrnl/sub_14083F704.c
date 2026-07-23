/*
 * XREFs of sub_14083F704 @ 0x14083F704
 * Callers:
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14083F5DC @ 0x14083F5DC (sub_14083F5DC.c)
 *     sub_140840760 @ 0x140840760 (sub_140840760.c)
 *     sub_140840870 @ 0x140840870 (sub_140840870.c)
 *     sub_1409DAD00 @ 0x1409DAD00 (sub_1409DAD00.c)
 */

__int64 sub_14083F704()
{
  int v0; // ebx
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h]

  Handle = 0LL;
  v2 = 0;
  LODWORD(v3) = 4;
  if ( (int)sub_140840870(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WDI") < 0 )
    goto LABEL_2;
  v0 = sub_140840760(Handle, &v2, (__int64)&v3);
  if ( v0 >= 0 )
  {
    if ( !v2 )
      v0 = -1073741823;
  }
  else
  {
    v0 = sub_1409DAD00(Handle);
    if ( v0 < 0 )
    {
      sub_14083F5DC();
LABEL_2:
      v0 = 0;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
