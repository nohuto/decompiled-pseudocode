/*
 * XREFs of sub_14074C9D8 @ 0x14074C9D8
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x14074C800 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 *     sub_140997410 @ 0x140997410 (sub_140997410.c)
 * Callees:
 *     sub_1402D2E74 @ 0x1402D2E74 (sub_1402D2E74.c)
 */

__int64 __fastcall sub_14074C9D8(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = sub_1402D2E74(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
