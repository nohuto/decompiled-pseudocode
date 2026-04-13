/*
 * XREFs of ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800512A0
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180087C8C (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING a2)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v5; // ebp

  v4 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  v5 = 0;
  if ( !a2 || a2 != *((HSTRING *)this + 4) )
  {
    WindowsDeleteString(*((HSTRING *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
    v5 = WindowsDuplicateString(a2, (HSTRING *)this + 4);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v5;
}
