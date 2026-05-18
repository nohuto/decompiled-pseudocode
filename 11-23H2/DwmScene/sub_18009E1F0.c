/*
 * XREFs of sub_18009E1F0 @ 0x18009E1F0
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009E1F0(__int64 a1, __int64 a2)
{
  unsigned int i; // esi
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax

  for ( i = 0; i < 6; ++i )
  {
    v5 = *(_DWORD *)(a1 + 4616);
    if ( _bittest(&v5, i) )
    {
      v6 = 0;
      v7 = 0LL;
      do
      {
        if ( *(_BYTE *)(a1 + 4620)
          || sub_180011DF0((_QWORD *)(16 * (v7 + 16LL * i) + a1 + 1544), (_QWORD *)(16 * (v7 + 16LL * i) + a1 + 8)) )
        {
          v8 = 16 * (v7 + 16LL * i);
          v9 = v8 + a1;
          sub_1800124F8((__int64 *)(v8 + a1 + 1544), (_QWORD *)(v8 + a1 + 8));
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, i, v9 + 1544, v6);
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 0x10 );
    }
    result = a1;
  }
  *(_BYTE *)(a1 + 4620) = 0;
  return result;
}
