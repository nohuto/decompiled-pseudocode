/*
 * XREFs of ?put_StoreCampaignId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800513E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::put_StoreCampaignId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING a2)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v5; // ebp

  v4 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  v5 = 0;
  if ( !a2 || a2 != *((HSTRING *)this + 6) )
  {
    WindowsDeleteString(*((HSTRING *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
    v5 = WindowsDuplicateString(a2, (HSTRING *)this + 6);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v5;
}
