/*
 * XREFs of sub_1409BBD10 @ 0x1409BBD10
 * Callers:
 *     RtlIdnToAscii @ 0x1409BBC20 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1409BBC50 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     sub_1405EC7E0 @ 0x1405EC7E0 (sub_1405EC7E0.c)
 *     sub_1405ECB04 @ 0x1405ECB04 (sub_1405ECB04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409BBD10(int a1, WCHAR *a2, unsigned int a3, void *a4, LONG *a5, char a6)
{
  PVOID v10; // rdi
  WCHAR *v11; // rax
  WCHAR *v12; // rbx
  unsigned int v13; // esi
  char v15; // [rsp+38h] [rbp-30h]
  char v16; // [rsp+48h] [rbp-20h]

  v10 = sub_1405EC7E0(0x3FEuLL);
  v11 = (WCHAR *)sub_1405EC7E0(0x406uLL);
  v12 = v11;
  if ( v10 && v11 )
  {
    v13 = sub_1405ECB04(a1, a2, a3, a4, a5, a6, v10, v15, v11, v16);
  }
  else
  {
    v13 = -1073741801;
    if ( !v10 )
      goto LABEL_6;
  }
  ExFreePoolWithTag(v10, 0);
LABEL_6:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v13;
}
