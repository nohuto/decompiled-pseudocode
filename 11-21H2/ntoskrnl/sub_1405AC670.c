/*
 * XREFs of sub_1405AC670 @ 0x1405AC670
 * Callers:
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_1405C573C @ 0x1405C573C (sub_1405C573C.c)
 */

__int64 __fastcall sub_1405AC670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v7; // r13
  __int64 v8; // r13
  unsigned __int8 v9; // al
  __int64 v10; // r9
  __int64 v11; // rbx
  BOOL v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rbx
  int v15; // ebp
  bool v16; // zf
  unsigned __int8 v17; // [rsp+68h] [rbp+10h]

  v4 = 48 * a2 - 0x220000000000LL;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    return sub_1405C573C(a1, 48 * a2 - 0x220000000000LL, 0LL, 1LL);
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (*(_DWORD *)(a3 + 8) & 1) == 0 )
    return 0LL;
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return sub_1405C573C(a1, 48 * a2 - 0x220000000000LL, 0LL, 1LL);
  v8 = v7 + 1664;
  v9 = sub_1402CF4F0(v8);
  v17 = v9;
  if ( *(_WORD *)(v4 + 32) != 2 )
  {
    v13 = 0;
    goto LABEL_27;
  }
  sub_14031DE00(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, v10);
  v11 = sub_140317A10(v5);
  if ( (v11 & 1) != 0 )
  {
    v12 = sub_140317A80(v5) && sub_140229550() != 0;
    *(_QWORD *)v5 = 0LL;
    if ( v12 )
      sub_1402294F0(v5, 0LL);
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint((__int64)(v5 << 25) >> 16, 1u, 0);
  }
  v13 = sub_1405C573C(a1, v4, 0LL, 1LL);
  if ( (v11 & 1) != 0 )
  {
    v14 = v11 | 0x20;
    v15 = 0;
    if ( sub_140317A80(v5) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v16 = (v14 & 1) == 0;
          goto LABEL_21;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v16 = (v14 & 1) == 0;
LABEL_21:
        if ( !v16 )
          v14 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v14;
    if ( v15 )
      sub_1402294F0(v5, v14);
  }
  sub_14020D8D0(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v17;
LABEL_27:
  sub_1402B0CE0(v8, v9);
  return v13;
}
