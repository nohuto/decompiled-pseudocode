/*
 * XREFs of ?MapSharedMemory@CSharedSection@DirectComposition@@CAPEAEPEAX_K@Z @ 0x18007E980
 * Callers:
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall DirectComposition::CSharedSection::MapSharedMemory(
        HANDLE hObject,
        SIZE_T dwNumberOfBytesToMap)
{
  LPVOID v3; // rbx

  v3 = MapViewOfFile(hObject, 6u, 0, 0, dwNumberOfBytesToMap);
  CloseHandle(hObject);
  return (unsigned __int8 *)v3;
}
