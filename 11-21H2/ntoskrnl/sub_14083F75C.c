/*
 * XREFs of sub_14083F75C @ 0x14083F75C
 * Callers:
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140840760 @ 0x140840760 (sub_140840760.c)
 *     sub_140840870 @ 0x140840870 (sub_140840870.c)
 *     sub_140840D98 @ 0x140840D98 (sub_140840D98.c)
 */

__int64 sub_14083F75C()
{
  int v0; // ebx
  int v1; // eax
  int v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+60h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+30h]

  Handle = 0LL;
  LODWORD(v4) = 0;
  v3 = 0;
  v5 = 0;
  v0 = sub_140840870(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Config");
  if ( v0 >= 0 )
  {
    if ( (int)sub_140840760(Handle, &v3, (__int64)&v4) < 0 || v3 )
    {
      v0 = sub_140840760(Handle, &v5, (__int64)&v4);
      if ( v0 < 0 )
      {
        v0 = 0;
        v1 = 600;
      }
      else
      {
        if ( !v5 )
        {
          byte_140C16C30 = 0;
          v1 = 600;
          goto LABEL_8;
        }
        v1 = 60 * v5;
      }
      byte_140C16C30 = 1;
LABEL_8:
      dword_140C18E90 = v1;
      sub_140840D98(Handle);
      goto LABEL_9;
    }
    v0 = -1073741823;
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
