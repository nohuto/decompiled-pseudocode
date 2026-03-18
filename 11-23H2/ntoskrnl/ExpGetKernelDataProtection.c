/*
 * XREFs of ExpGetKernelDataProtection @ 0x1407AEA20
 * Callers:
 *     ExpGetLicenseTamperState @ 0x14060905C (ExpGetLicenseTamperState.c)
 *     sub_1409F9A40 @ 0x1409F9A40 (sub_1409F9A40.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     sub_1407AEAD8 @ 0x1407AEAD8 (sub_1407AEAD8.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(__int64 a1, _OWORD *a2)
{
  signed __int64 *v4; // rbx
  _OWORD **v5; // rax
  _OWORD *v6; // rax
  int v8; // [rsp+20h] [rbp-28h]
  _OWORD *v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v4 = (signed __int64 *)(a1 + 47024);
  ExAcquirePushLockSharedEx(a1 + 47024, 0LL);
  v5 = *(_OWORD ***)(a1 + 47016);
  if ( v5 )
  {
    v9 = *v5;
    v8 = sub_1407AEAD8(&v9);
    if ( v8 >= 0 )
    {
      v6 = v9;
      *a2 = *v9;
      a2[1] = v6[1];
      a2[2] = v6[2];
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v8;
}
