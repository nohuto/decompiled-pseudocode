/*
 * XREFs of ?get_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800511C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::get_SkuId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING *a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // ebx

  v4 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockShared((PSRWLOCK)this + 3);
  v5 = WindowsDuplicateString(*((HSTRING *)this + 5), a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}
