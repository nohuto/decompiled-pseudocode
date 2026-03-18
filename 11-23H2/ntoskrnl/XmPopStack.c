/*
 * XREFs of XmPopStack @ 0x1403B9474
 * Callers:
 *     XmPopaOp @ 0x14039EFE0 (XmPopaOp.c)
 *     XmIretOp @ 0x1403B8890 (XmIretOp.c)
 *     XmRetOp @ 0x1403B8B70 (XmRetOp.c)
 *     XmPopOp @ 0x1403B9050 (XmPopOp.c)
 *     XmLeaveOp @ 0x140533DF0 (XmLeaveOp.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403B94C0 (XmSetSourceValue.c)
 *     x86BiosTranslateAddress @ 0x1403BEFC0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D7EE0 (longjmp.c)
 */

__int64 __fastcall XmPopStack(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *(unsigned int *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 120);
  if ( (unsigned int)v1 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v3 )
    longjmp((_JBTYPE *)(a1 + 160), 16);
  v4 = v3 + v1 + 1;
  v5 = *(unsigned __int16 *)(a1 + 60);
  *(_DWORD *)(a1 + 40) = v4;
  v6 = x86BiosTranslateAddress(v5, v1);
  XmSetSourceValue(a1, v6);
  return *(unsigned int *)(a1 + 108);
}
