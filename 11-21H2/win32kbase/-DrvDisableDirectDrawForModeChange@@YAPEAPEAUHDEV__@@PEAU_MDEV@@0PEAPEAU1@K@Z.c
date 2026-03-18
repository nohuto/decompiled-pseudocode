/*
 * XREFs of ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0075E60
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 */

HDEV *__fastcall DrvDisableDirectDrawForModeChange(struct _MDEV *a1, struct _MDEV *a2, HDEV *a3)
{
  unsigned int v5; // eax
  HDEV *v7; // rsi
  unsigned int v8; // r8d
  HDEV *v9; // rdx
  unsigned int i; // r9d
  __int64 v11; // rcx
  unsigned int j; // r9d
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v16; // eax

  v5 = *((_DWORD *)a2 + 5) + *((_DWORD *)a1 + 5) + 3;
  if ( v5 > 7 )
  {
    v16 = 8 * v5;
    if ( !v16 )
      return 0LL;
    a3 = (HDEV *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                   (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                   260LL,
                   v16,
                   1886221383);
    if ( !a3 )
      return 0LL;
  }
  v7 = a3 + 1;
  v8 = 0;
  v9 = a3 + 1;
  if ( *(_QWORD *)a1 )
  {
    *v7 = *(HDEV *)a1;
    v9 = a3 + 2;
    v8 = 1;
  }
  for ( i = 0; i < *((_DWORD *)a1 + 5); ++v9 )
  {
    ++v8;
    v11 = 56LL * i++;
    *v9 = *(HDEV *)((char *)a1 + v11 + 40);
  }
  if ( *(_QWORD *)a2 )
  {
    *v9++ = *(HDEV *)a2;
    ++v8;
  }
  for ( j = 0; j < *((_DWORD *)a2 + 5); ++v9 )
  {
    ++v8;
    v13 = 56LL * j++;
    *v9 = *(HDEV *)((char *)a2 + v13 + 40);
  }
  v14 = v8;
  *a3 = (HDEV)v8;
  if ( v8 )
  {
    do
    {
      GreSuspendDirectDraw(*v7++, 2);
      --v14;
    }
    while ( v14 );
  }
  return a3;
}
