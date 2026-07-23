/*
 * XREFs of sub_1405B5BA0 @ 0x1405B5BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D740 @ 0x14020D740 (sub_14020D740.c)
 *     sub_1402225D0 @ 0x1402225D0 (sub_1402225D0.c)
 *     sub_1402233C0 @ 0x1402233C0 (sub_1402233C0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402365F4 @ 0x1402365F4 (sub_1402365F4.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1403128B0 @ 0x1403128B0 (sub_1403128B0.c)
 *     sub_1403137B0 @ 0x1403137B0 (sub_1403137B0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1405B60A0 @ 0x1405B60A0 (sub_1405B60A0.c)
 */

__int64 __fastcall sub_1405B5BA0(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 *v15; // r14
  unsigned __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // r13
  BOOL v19; // ebp
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rdx
  bool v23; // zf
  int v24; // esi
  __int64 v25; // rdx
  int v26; // r8d
  bool v27; // zf
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v29; // [rsp+88h] [rbp+20h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v5 + 104) )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = (*(_BYTE *)(v5 + 184) & 7) == 0;
    v8 = *(_QWORD **)(a1 + 168);
    v9 = (_QWORD *)v8[3];
    v10 = (_QWORD *)*v9;
    v29 = (_QWORD *)*v9;
    if ( !v23 || (*(_DWORD *)(v5 - 1664 + 1124) & 0xC00u) >= 0xC00 && !(unsigned int)sub_1402365F4(v5 - 1664) )
    {
      if ( v4 >= 1 )
        return 0LL;
      v28 = sub_140317A10(a2);
      v11 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFFLL;
      v12 = 48 * v11 - 0x220000000000LL;
      if ( *(__int64 *)(v12 + 40) < 0 )
        return 0LL;
      v13 = v9[1];
      if ( v13 && *(_DWORD *)(v13 + 4) || (*((_DWORD *)CurrentThread + 344) & 1) != 0 )
        return 5LL;
      if ( !(unsigned int)sub_1403137B0(v10, 0, (__int128 *)(48 * v11 - 0x220000000000LL)) )
        return 0LL;
      ++*(_QWORD *)(v9[3] + 16LL);
      v15 = (unsigned __int64 *)(v8[4] + 40LL * v8[1]);
      if ( (v28 & 0x20) != 0 )
      {
        *v15 = sub_1402225D0(((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL);
LABEL_38:
        v15[2] = 0LL;
        v15[4] = 0LL;
        v15[1] = v11;
        if ( ++v8[1] == v8[2] )
          return sub_1405B60A0(a1);
        return 0LL;
      }
      v16 = sub_1402C6260(v9 + 26, 3u, 1LL, 0);
      v17 = (__int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( ((v16 >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL )
        return 0LL;
      v18 = v9[2];
      *(_QWORD *)(v18 + 72) = v17;
      *(_QWORD *)(v18 + 64) = v12;
      v19 = sub_140317A80((unsigned __int64)v17);
      v20 = sub_1403128B0((__int64)v29, v18, 0LL, 0LL, 0);
      v21 = 0;
      if ( !v20 )
      {
        v22 = 0LL;
        if ( v19 )
        {
          if ( (unsigned int)sub_140229550() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v23 = (v22 & 1) == 0;
              goto LABEL_22;
            }
          }
          else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
          {
            v23 = (v22 & 1) == 0;
LABEL_22:
            if ( !v23 )
              v22 |= 0x8000000000000000uLL;
          }
        }
        *v17 = v22;
        if ( v21 )
          sub_1402294F0((__int64)v17, v22);
        return 0LL;
      }
      v24 = sub_14020D740((__int64)v9, v18, 0, v15);
      sub_1402233C0(v18);
      v25 = 0LL;
      v26 = 0;
      if ( v19 )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v26 = 1;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_35;
          v27 = (v25 & 1) == 0;
        }
        else
        {
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
            goto LABEL_35;
          v27 = (v25 & 1) == 0;
        }
        if ( !v27 )
          v25 |= 0x8000000000000000uLL;
      }
LABEL_35:
      *v17 = v25;
      if ( v26 )
        sub_1402294F0((__int64)v17, v25);
      if ( !v24 )
        return 0LL;
      goto LABEL_38;
    }
  }
  return 4LL;
}
