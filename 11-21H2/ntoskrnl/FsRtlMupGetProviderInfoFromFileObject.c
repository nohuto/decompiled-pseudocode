/*
 * XREFs of FsRtlMupGetProviderInfoFromFileObject @ 0x14092E240
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall FsRtlMupGetProviderInfoFromFileObject(
        PFILE_OBJECT pFileObject,
        ULONG Level,
        PVOID pBuffer,
        PULONG pBufferSize)
{
  if ( qword_140D3B158 )
    return sub_14042A5E0(pFileObject, *(_QWORD *)&Level);
  else
    return -1073741637;
}
