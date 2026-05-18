/*
 * XREFs of sub_18009DE50 @ 0x18009DE50
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009DE50(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax

  v4 = 0LL;
  do
  {
    v5 = *(_DWORD *)(a1 + 3464);
    if ( _bittest(&v5, v4) )
    {
      v6 = 0;
      v7 = 0LL;
      do
      {
        if ( *(_BYTE *)(a1 + 3468)
          || sub_180011DF0((_QWORD *)(a1 + 16 * (v7 + 12 * v4) + 1160), (_QWORD *)(16 * (v7 + 12 * v4) + a1 + 8)) )
        {
          v8 = 16 * (v7 + 12 * v4);
          v9 = v8 + a1;
          sub_18003B5D8((_QWORD *)(v8 + a1 + 1160), (_QWORD *)(v8 + a1 + 8));
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 112LL))(
            a2,
            (unsigned int)v4,
            v9 + 1160,
            v6);
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 0xC );
    }
    v4 = (unsigned int)(v4 + 1);
    result = a1;
  }
  while ( (unsigned int)v4 < 6 );
  *(_BYTE *)(a1 + 3468) = 0;
  return result;
}
