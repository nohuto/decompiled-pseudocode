/*
 * XREFs of sub_14058196C @ 0x14058196C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14058196C(ULONG_PTR a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  int v9; // edx
  unsigned int v10; // ebx
  char v11; // dl
  _OWORD v13[3]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  memset(v13, 0, sizeof(v13));
  if ( *((_QWORD *)KeGetCurrentThread() + 23) != a1 )
  {
    v4 = 1;
    sub_14030D5C0(a1, 0LL, (__int64)v13, a4);
  }
  v7 = (volatile LONG *)sub_140282AD0(a1 + 1664);
  v8 = ExAcquireSpinLockExclusive(v7);
  *((_DWORD *)v7 + 1) = 0;
  v9 = *(_DWORD *)(a1 + 1848);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
    v10 = -1073741558;
  }
  else
  {
    if ( a2 )
      v11 = HIBYTE(v9) & 0x9F | 0x20;
    else
      v11 = HIBYTE(v9) & 0x9F;
    *(_BYTE *)(a1 + 1851) = v11;
    v10 = 0;
  }
  sub_14030FA80(a1 + 1664, v8);
  if ( v4 )
    sub_1402D0930((__int64)v13, 0LL);
  return v10;
}
