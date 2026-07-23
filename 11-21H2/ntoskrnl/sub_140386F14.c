/*
 * XREFs of sub_140386F14 @ 0x140386F14
 * Callers:
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_140386F14(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  volatile LONG *v5; // rbx
  KIRQL v6; // al
  unsigned __int64 i; // rcx

  v2 = 0;
  v3 = 0LL;
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  v5 = (volatile LONG *)sub_140282AD0(v4 + 1664);
  v6 = ExAcquireSpinLockExclusive(v5);
  *((_DWORD *)v5 + 1) = 0;
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 64) == 2 )
    {
      if ( v3 )
        goto LABEL_7;
      v3 = i;
    }
  }
  *(_DWORD *)(v3 + 8) |= 0x20u;
  v2 = 1;
LABEL_7:
  sub_14030FA80(v4 + 1664, v6);
  return v2;
}
