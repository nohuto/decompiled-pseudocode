/*
 * XREFs of sub_140795400 @ 0x140795400
 * Callers:
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     sub_1407969D0 @ 0x1407969D0 (sub_1407969D0.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 */

LONG __fastcall sub_140795400(__int64 a1, unsigned int a2)
{
  _WORD *v4; // rbx
  __int64 i; // rax
  __int64 v6; // rsi
  __int64 j; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned int k; // edi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 == qword_140D05008 )
    v4 = (_WORD *)0xFFFFF78000000380LL;
  else
    v4 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1320LL) + 550LL);
  for ( i = sub_1407969D0(a1, 0LL, 0LL); ; i = sub_1407969D0(a1, v6, 0LL) )
  {
    v6 = i;
    if ( !i )
      break;
    sub_140797054(a2, i, 0LL);
  }
  for ( j = 0LL; ; j = v10 )
  {
    v8 = sub_1407969D0(a1, j, 2LL);
    v10 = v8;
    if ( !v8 )
      break;
    LOBYTE(v9) = 2;
    sub_140797054(a2, v8, v9);
  }
  KeWaitForSingleObject(&stru_140C15DC0, Executive, 0, 0, 0LL);
  for ( k = 0; k < 9; ++k )
  {
    if ( *(_BYTE *)v4 == (_BYTE)a2 )
    {
      if ( k <= 1 )
      {
        v13 = k;
        sub_1406BF0AC((__int64)sub_1409E4A50, (__int64)&v13);
      }
      *v4 = 0;
    }
    ++v4;
  }
  return KeReleaseMutex(&stru_140C15DC0, 0);
}
