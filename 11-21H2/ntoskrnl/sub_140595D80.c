/*
 * XREFs of sub_140595D80 @ 0x140595D80
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall sub_140595D80(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  volatile LONG *v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rdx

  v4 = 0LL;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = (volatile LONG *)sub_140282AD0(v5 + 1664);
  v7 = ExAcquireSpinLockExclusive(v6);
  *((_DWORD *)v6 + 1) = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v8 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    while ( 1 )
    {
      v10 = *v9;
      if ( v9 == a2 )
        break;
      v4 = v9;
      v9 = (_QWORD *)*v9;
      if ( !v10 )
        goto LABEL_8;
    }
    if ( v4 )
      *v4 = v10;
    else
      *(_QWORD *)(a1 + 56) = v10 | v8 & 0xF;
  }
LABEL_8:
  sub_14030FA80(v5 + 1664, v7);
}
