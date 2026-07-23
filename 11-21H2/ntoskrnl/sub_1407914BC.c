/*
 * XREFs of sub_1407914BC @ 0x1407914BC
 * Callers:
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 *     sub_140791970 @ 0x140791970 (sub_140791970.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E1C68 @ 0x1406E1C68 (sub_1406E1C68.c)
 *     sub_1407915C4 @ 0x1407915C4 (sub_1407915C4.c)
 */

void __fastcall sub_1407914BC(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax

  v6 = *((_QWORD *)sub_140347DB0() + 114);
  if ( v6 )
  {
    v7 = v6 + 24 * v5;
    v8 = (unsigned __int64 *)(v6 + 8 * (3 * v5 + 4));
    v9 = sub_140347C10((__int64)v8, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      sub_14029F120(v8, v9, (__int64)v8);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v11 = sub_1407915C4(v7 + 40, a2, a3);
    v12 = (struct _EX_RUNDOWN_REF *)v11;
    if ( v11 )
    {
      v13 = (_QWORD *)(v11 + 32);
      v14 = *(_QWORD *)(v11 + 32);
      v15 = *(_QWORD **)(v11 + 40);
      if ( *(_QWORD **)(v14 + 8) != v13 || (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    sub_1402AFC00((ULONG_PTR)v8);
    if ( v12 )
      sub_1406E1C68(v12, 1);
  }
}
