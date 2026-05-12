/*
 * XREFs of sub_1C00A9738 @ 0x1C00A9738
 * Callers:
 *     sub_1C003FE70 @ 0x1C003FE70 (sub_1C003FE70.c)
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 * Callees:
 *     sub_1C00224D4 @ 0x1C00224D4 (sub_1C00224D4.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003FB58 @ 0x1C003FB58 (sub_1C003FB58.c)
 *     sub_1C004004C @ 0x1C004004C (sub_1C004004C.c)
 *     sub_1C0042570 @ 0x1C0042570 (sub_1C0042570.c)
 *     sub_1C00AC0D4 @ 0x1C00AC0D4 (sub_1C00AC0D4.c)
 */

void __fastcall sub_1C00A9738(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  int v6; // eax
  void (__fastcall *v7)(_QWORD); // rax
  void *v8; // rcx

  if ( *(_DWORD *)a1 )
  {
    v2 = (__int64 *)(a1 + 96);
    while ( 1 )
    {
      v3 = (__int64 *)*v2;
      if ( (__int64 *)*v2 == v2 )
        break;
      if ( (__int64 *)v3[1] != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v5 = v3 - 26;
      *(_QWORD *)(v4 + 8) = v2;
      v6 = *((_DWORD *)v3 - 52);
      if ( v6 == 176 || v6 == 208 && (v5[23] & 1) != 0 )
      {
        v7 = (void (__fastcall *)(_QWORD))v5[21];
        if ( v7 )
          v7(*(_QWORD *)(a1 + 8));
      }
      sub_1C004004C(v4, v5);
    }
    *(_DWORD *)a1 = 0;
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 40));
    if ( *(_QWORD *)(a1 + 24) )
    {
      sub_1C0042570(*(_QWORD *)(a1 + 16), a1);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v8 = *(void **)(a1 + 16);
    if ( v8 )
    {
      sub_1C00224D4(v8);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    if ( _InterlockedExchangeAdd(&dword_1C0093C50, 0xFFFFFFFF) == 1 )
    {
      sub_1C003FB58();
      sub_1C00AC0D4();
    }
  }
}
