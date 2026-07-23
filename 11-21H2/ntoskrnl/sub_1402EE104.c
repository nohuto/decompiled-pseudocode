/*
 * XREFs of sub_1402EE104 @ 0x1402EE104
 * Callers:
 *     sub_140242498 @ 0x140242498 (sub_140242498.c)
 *     sub_140259330 @ 0x140259330 (sub_140259330.c)
 *     sub_140291EE4 @ 0x140291EE4 (sub_140291EE4.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402EC8A4 @ 0x1402EC8A4 (sub_1402EC8A4.c)
 *     sub_1402EE238 @ 0x1402EE238 (sub_1402EE238.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402EE104(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v5 = (volatile LONG *)((char *)&unk_140D34BC0 + 64 * ((a2 >> 4) & 0x3F));
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v6 = *(volatile signed __int32 **)(a1 + 232);
  if ( v6 )
  {
    sub_1402F3290(*(_QWORD *)(a1 + 232));
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
      v6 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v6 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = 0;
        while ( 1 )
        {
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v10 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v12 = *(_DWORD *)(v10 + 24);
              *(_DWORD *)(v10 + 24) = v12 + 1;
              if ( v12 == -1 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v13 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v14 = *(_DWORD *)(v13 + 24) - 1;
              *(_DWORD *)(v13 + 24) = v14;
              if ( !v14 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          do
            sub_1402F32E0(&v15);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v11 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v6[v11 + 134]);
        sub_140224100(a1);
      }
      else
      {
        _InterlockedDecrement(v6 + 10);
      }
      v7 = *a3;
      v8 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v8 != a3 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      sub_1402EC8A4((ULONG_PTR)v6);
    else
      sub_1402EE238(v6);
  }
}
