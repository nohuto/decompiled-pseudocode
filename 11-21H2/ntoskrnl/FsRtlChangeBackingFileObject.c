/*
 * XREFs of FsRtlChangeBackingFileObject @ 0x140248390
 * Callers:
 *     <none>
 * Callees:
 *     sub_140201AC4 @ 0x140201AC4 (sub_140201AC4.c)
 *     sub_1402483DC @ 0x1402483DC (sub_1402483DC.c)
 */

NTSTATUS __stdcall FsRtlChangeBackingFileObject(
        PFILE_OBJECT CurrentFileObject,
        PFILE_OBJECT NewFileObject,
        FSRTL_CHANGE_BACKING_TYPE ChangeBackingType,
        ULONG Flags)
{
  __int64 v4; // r8
  __int32 v6; // r8d

  if ( Flags )
    return -1073741582;
  if ( ChangeBackingType == ChangeDataControlArea )
  {
    v4 = 1LL;
    return sub_1402483DC(CurrentFileObject, NewFileObject, v4);
  }
  v6 = ChangeBackingType - 1;
  if ( !v6 )
  {
    v4 = 2LL;
    return sub_1402483DC(CurrentFileObject, NewFileObject, v4);
  }
  if ( v6 == 1 )
    return sub_140201AC4(CurrentFileObject, NewFileObject);
  else
    return -1073741583;
}
