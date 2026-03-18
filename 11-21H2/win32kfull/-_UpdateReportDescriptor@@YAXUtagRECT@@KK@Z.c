/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01D8B6C
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01D8C74 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int16 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  char v5; // r9
  char v6; // dl
  int v7; // ecx

  byte_1C032F5B2 = a3;
  v3 = a3 >> 8;
  byte_1C032F624 = a3;
  byte_1C032F696 = a3;
  byte_1C032F708 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C032F5AD = a2;
  word_1C032F61F = a2;
  word_1C032F691 = a2;
  word_1C032F703 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C032F5B3 = v3;
  byte_1C032F625 = v3;
  byte_1C032F697 = v3;
  byte_1C032F709 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C032F5A0 = v5;
  byte_1C032F5B6 = BYTE1(v7);
  byte_1C032F628 = BYTE1(v7);
  byte_1C032F69A = BYTE1(v7);
  byte_1C032F70C = BYTE1(v7);
  byte_1C032F5A1 = v4;
  byte_1C032F5B5 = v6;
  byte_1C032F612 = v5;
  byte_1C032F613 = v4;
  byte_1C032F627 = v6;
  byte_1C032F684 = v5;
  byte_1C032F685 = v4;
  byte_1C032F699 = v6;
  byte_1C032F6F6 = v5;
  byte_1C032F6F7 = v4;
  byte_1C032F70B = v6;
}
