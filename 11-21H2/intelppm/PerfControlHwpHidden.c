/*
 * XREFs of PerfControlHwpHidden @ 0x1C0005EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlHwpHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v5; // edx
  char v6; // al
  unsigned int v7; // r8d
  int v8; // ecx
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a4 && a3 )
  {
    v9 = 0LL;
    if ( *(_BYTE *)(a1 + 126) )
    {
      v5 = (unsigned __int8)*(_DWORD *)(a1 + 64);
      LODWORD(v9) = v5;
    }
    else
    {
      v5 = 0;
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v5 |= (unsigned __int8)*(_DWORD *)(a1 + 64) << 8;
      LODWORD(v9) = v5;
    }
    v6 = *(_BYTE *)(a1 + 128);
    v7 = v5 | 0xFF000000;
    if ( v6 )
      LODWORD(v9) = v5 | 0xFF000000;
    if ( *(_BYTE *)(a1 + 125) )
    {
      v8 = (unsigned __int8)*(_DWORD *)(a1 + 64);
      if ( !v6 )
        v7 = v5;
      LODWORD(v9) = (v8 << 16) | v7;
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C001E0A8)(
      *(unsigned int *)(*(_QWORD *)a1 + 84LL),
      *(unsigned int *)(a1 + 156),
      ~*(_QWORD *)(a1 + 184),
      v9);
  }
}
