/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023B070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0236560 (-ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 */

void __fastcall DirectComposition::CSharedWriteCaptureControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rax

  DirectComposition::CCaptureControllerMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 28) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 12) - 24LL));
    *((_QWORD *)this + 12) = 0LL;
  }
}
