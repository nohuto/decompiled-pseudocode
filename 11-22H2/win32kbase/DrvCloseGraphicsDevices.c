/*
 * XREFs of DrvCloseGraphicsDevices @ 0x1C001A4F0
 * Callers:
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C001CCE0 (bSetDeviceSessionUsage.c)
 */

LONG_PTR __fastcall DrvCloseGraphicsDevices(__int64 a1)
{
  int v1; // ebx
  LONG_PTR result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  v1 = a1;
  result = SGDGetSessionState(a1);
  v3 = *(_QWORD *)(result + 24);
  if ( v1 )
    v4 = *(_QWORD *)(v3 + 1352);
  else
    v4 = *(_QWORD *)(v3 + 1344);
  while ( v4 )
  {
    if ( *(_QWORD *)(v4 + 224) )
    {
      bSetDeviceSessionUsage(v4, 0LL);
      result = ObfDereferenceObject(*(PVOID *)(v4 + 224));
      *(_QWORD *)(v4 + 136) = 0LL;
      *(_QWORD *)(v4 + 224) = 0LL;
    }
    v4 = *(_QWORD *)(v4 + 128);
  }
  return result;
}
