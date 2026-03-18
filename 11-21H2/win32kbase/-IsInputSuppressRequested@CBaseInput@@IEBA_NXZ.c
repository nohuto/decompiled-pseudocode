/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0005B88
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0005A30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C006CF30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C006EB70 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this)
{
  char *v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx
  bool v4; // bl
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v7; // [rsp+28h] [rbp-40h] BYREF
  void *v8; // [rsp+30h] [rbp-38h]
  char v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  char v11; // [rsp+48h] [rbp-20h]

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
  v1 = &v7;
  v7 = 0;
  v8 = &gDomainDummyLock;
  v10 = 0LL;
  v2 = 0;
  v11 = 0;
  v9 = 0;
  do
  {
    v3 = (tagDomLock *)*((_QWORD *)v1 - 1);
    if ( v3 )
    {
      if ( *v1 )
        tagDomLock::LockExclusive(v3);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v3);
    }
    ++v2;
    v1 += 16;
  }
  while ( !v2 );
  v4 = dword_1C0296FF8 == 1;
  v11 = 1;
  if ( DomainLockRef )
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  return v4;
}
