/*
 * XREFs of sub_1406F84B0 @ 0x1406F84B0
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406F7A68 @ 0x1406F7A68 (sub_1406F7A68.c)
 */

_QWORD *__fastcall sub_1406F84B0(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  _DWORD *v11; // r14
  signed __int64 *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rax
  __int64 v14; // rsi
  ULONG_PTR Count; // rax
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( qword_140D00A28 && (int)sub_14042A5E0(a4, 1024LL) >= 0 )
    a1 = (unsigned __int16 *)&v17;
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 1088);
  if ( (xmmword_140D06900[0] & 4) != 0 )
    sub_1406F7A68(a1, a2, (int *)(a3 + 8));
  if ( (dword_140D3CA20 & 1) != 0 )
  {
    *(_DWORD *)(a3 + 8) |= 0x400u;
    v10 = 64LL;
    v11 = (_DWORD *)(a3 + 8);
    *(_QWORD *)a3 = 56LL;
    *(_QWORD *)(a3 + 48) = a4;
    v12 = (signed __int64 *)&stru_140CF6240;
    do
    {
      v13 = sub_140281870(v12);
      v14 = (__int64)v13;
      if ( v13 )
      {
        Count = v13[1].Count;
        if ( (*v11 & 0x800) == 0 || (*(_BYTE *)(v14 + 16) & 1) != 0 )
        {
          if ( Count )
            sub_14042A5E0(a1, v9);
        }
        sub_140281930(v12, v14);
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  return sub_1402AC800((__int64)CurrentThread);
}
