/*
 * XREFs of XmSetccByte @ 0x140533180
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 */

__int64 __fastcall XmSetccByte(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 88) = XmEvaluateAddressSpecifier(a1, &v3);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
