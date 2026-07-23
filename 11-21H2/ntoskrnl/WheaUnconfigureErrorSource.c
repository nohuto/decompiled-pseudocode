/*
 * XREFs of WheaUnconfigureErrorSource @ 0x140A6D3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall WheaUnconfigureErrorSource(unsigned int a1)
{
  unsigned __int64 *v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( a1 > 0x10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v1 = (unsigned __int64 *)((char *)&unk_140D00C50 + 64 * (__int64)(int)a1);
    v2 = -1073741823;
    v3 = sub_140347C10((__int64)&qword_140C10BC0, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C10BC0, 17LL, 0LL) )
      sub_14029F350((signed __int64 *)&qword_140C10BC0, 0, v3, (__int64)&qword_140C10BC0);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    v4 = sub_140347C10((__int64)v1, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      sub_14029F120(v1, v4, (__int64)v1);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    if ( *((_BYTE *)v1 + 8) )
    {
      *((_BYTE *)v1 + 8) = 0;
      v1[2] = (unsigned __int64)PsGetHostSilo;
      v1[3] = (unsigned __int64)sub_140A48390;
      v1[4] = (unsigned __int64)sub_140645A60;
      v1[5] = (unsigned __int64)PsGetHostSilo;
      v1[6] = (unsigned __int64)_misaligned_access;
      v1[7] = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    sub_1402AFC00((ULONG_PTR)v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C10BC0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C10BC0);
    sub_1402AFC00((ULONG_PTR)&qword_140C10BC0);
  }
  return v2;
}
