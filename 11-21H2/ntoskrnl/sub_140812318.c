/*
 * XREFs of sub_140812318 @ 0x140812318
 * Callers:
 *     sub_1403A7718 @ 0x1403A7718 (sub_1403A7718.c)
 *     sub_140812260 @ 0x140812260 (sub_140812260.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 * Callees:
 *     sub_140250FF0 @ 0x140250FF0 (sub_140250FF0.c)
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A7894 @ 0x1403A7894 (sub_1403A7894.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 */

__int64 __fastcall sub_140812318(__int64 a1, const WCHAR *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  void *v6; // rsi
  int v7; // eax
  void *v8; // rbx
  unsigned int v9; // edi
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  RtlInitUnicodeString(&v11, a2);
  v5 = sub_14025DBFC(a1);
  v12 = 0LL;
  v6 = (void *)v5;
  if ( !a3 )
  {
    v8 = (void *)v5;
    goto LABEL_3;
  }
  v7 = sub_140813164(v5, a3, 131103LL, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
LABEL_3:
    v9 = sub_1403A7894(v8, &v11);
  if ( v8 != v6 && v8 )
    sub_140250FF0(v8);
  return v9;
}
