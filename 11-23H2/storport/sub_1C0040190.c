/*
 * XREFs of sub_1C0040190 @ 0x1C0040190
 * Callers:
 *     sub_1C0040220 @ 0x1C0040220 (sub_1C0040220.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0040190(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v5; // r8
  unsigned int (__fastcall *v6)(__int64, __int64); // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0LL;
  if ( *(_DWORD *)v2 == 1094997074 )
  {
    v5 = *(_QWORD *)(v2 + 16);
LABEL_3:
    if ( !v5 )
      goto LABEL_6;
    v3 = *(_QWORD *)(v5 + 8);
    if ( !v3 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( *(_DWORD *)v2 == 1431193940 )
  {
    v8 = *(_QWORD *)(v2 + 24);
    if ( !v8 )
      goto LABEL_6;
    v5 = *(_QWORD *)(v8 + 16);
    goto LABEL_3;
  }
LABEL_5:
  v6 = *(unsigned int (__fastcall **)(__int64, __int64))(v3 + 8LL * **(unsigned __int8 **)(a2 + 184) + 112);
  if ( v6 )
    return v6(a1, a2);
LABEL_6:
  v7 = -1073741823;
  sub_1C0003440((PIRP)a2, 0, 0xC0000001);
  return v7;
}
