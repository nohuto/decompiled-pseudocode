/*
 * XREFs of sub_14059E7F0 @ 0x14059E7F0
 * Callers:
 *     sub_1409704A0 @ 0x1409704A0 (sub_1409704A0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

__int64 __fastcall sub_14059E7F0(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  bool v10; // zf
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 17;
  v3 = sub_1402CCC50(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
  v4 = sub_140273AAC((ULONG_PTR)a2, (__int64)&v12);
  v5 = sub_1402738F0(a2, 0LL);
  if ( v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_13;
  }
  v9 = 0;
  if ( sub_140317A80((unsigned __int64)a2) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v9 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v10 = (v3 & 1) == 0;
        goto LABEL_9;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v10 = (v3 & 1) == 0;
LABEL_9:
      if ( !v10 )
        v3 |= 0x8000000000000000uLL;
    }
  }
  *a2 = v3;
  if ( v9 )
    sub_1402294F0((__int64)a2, v3);
LABEL_13:
  LOBYTE(v6) = v12;
  return sub_140334790(v4, v6, v7, v8);
}
