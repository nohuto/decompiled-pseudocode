/*
 * XREFs of sub_14081B2F0 @ 0x14081B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_14081B360 @ 0x14081B360 (sub_14081B360.c)
 */

__int64 __fastcall sub_14081B2F0(int a1)
{
  __int64 v2; // rcx
  int *v3; // rbx
  char v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
  v3 = &dword_140C1C1F8[48 * a1];
  if ( *((_BYTE *)v3 + 4) && !*v3 )
  {
    v5 = 0;
    sub_14081B360(v2, 2LL, 4LL, &v6, v5);
    *((_BYTE *)v3 + 4) = 0;
  }
  return sub_14036C0A0((ULONG_PTR)&stru_140C1C1E8);
}
