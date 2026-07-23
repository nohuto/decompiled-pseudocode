/*
 * XREFs of XmPortDX @ 0x1403B8C40
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmSetDataType @ 0x1403B96C8 (XmSetDataType.c)
 */

__int64 __fastcall XmPortDX(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r8d

  v1 = *(unsigned __int16 *)(a1 + 32);
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = v1;
  XmSetDataType(a1);
  return v2;
}
