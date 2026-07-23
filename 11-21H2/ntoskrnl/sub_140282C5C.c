/*
 * XREFs of sub_140282C5C @ 0x140282C5C
 * Callers:
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 * Callees:
 *     sub_140282064 @ 0x140282064 (sub_140282064.c)
 *     sub_140285D50 @ 0x140285D50 (sub_140285D50.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_140282C5C(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rbx
  __int64 v9; // rax

  v6 = a2 & 0x3FFFF;
  *a4 = 0x40000 - (a2 & 0x3FFFF);
  v8 = 0LL;
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  else
    v9 = sub_140282064(a1, a2);
  *a3 = v9;
  if ( v9 )
  {
    sub_140285D50(v9);
    v8 = *(_QWORD *)*a3 + v6;
  }
  ExReleasePushLockEx(a1 + 104, 0LL);
  return v8;
}
