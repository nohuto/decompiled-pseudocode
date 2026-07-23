/*
 * XREFs of sub_1408009E0 @ 0x1408009E0
 * Callers:
 *     sub_140800968 @ 0x140800968 (sub_140800968.c)
 * Callees:
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     ZwFlushKey @ 0x14041D540 (ZwFlushKey.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 */

__int64 __fastcall sub_1408009E0(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  void *v5; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v10; // r8d

  LOBYTE(v2) = sub_1403A7864(a1);
  v3 = v2;
  v4 = sub_14081369C(v2);
  if ( v4 < 0 )
  {
    sub_1408138F0(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v10;
  }
  else
  {
    v5 = (void *)sub_14025DBFC(a1);
    v6 = ZwFlushKey(v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    sub_1408134D8(v7);
    return v8;
  }
}
