/*
 * XREFs of sub_1406953C8 @ 0x1406953C8
 * Callers:
 *     sub_140695160 @ 0x140695160 (sub_140695160.c)
 * Callees:
 *     sub_14021F6B4 @ 0x14021F6B4 (sub_14021F6B4.c)
 *     sub_14021F6E8 @ 0x14021F6E8 (sub_14021F6E8.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 */

__int64 __fastcall sub_1406953C8(unsigned __int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  v5 = *((_QWORD *)CurrentThread + 23);
  v6 = sub_140347920(v5, 0x746C6644u);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD *)(v6 + 24);
  sub_1402F89B0((signed __int64 *)(v5 + 1208), v6, 0x746C6644u);
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v8 )
  {
    if ( v10 == v9 )
    {
      *a2 = 1;
    }
    else
    {
      sub_14021F6E8(v7, a1);
      if ( (*(_DWORD *)(v7 + 200) & 0x20) == 0 && (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 216);
        v13 = *(_QWORD *)(v7 + 216);
        if ( (*(_BYTE *)(v13 + 32) & *(_BYTE *)(v12 + 32) & 0x40) != 0
          && v9 == *(_QWORD *)(v12 + 168)
          && v10 == *(_QWORD *)(v13 + 168) )
        {
          *a2 = 1;
        }
      }
      sub_14021F6B4(v7, a1);
    }
  }
  return 0LL;
}
