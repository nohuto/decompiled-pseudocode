/*
 * XREFs of ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BDC4
 * Callers:
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012B64 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014C8C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015680 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015C84 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001614C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetPinFromPinsInUseList(CSidebandDevice *this, int a2, struct _KSPIN **a3)
{
  unsigned int v6; // esi
  char v7; // di
  char v8; // dl
  char v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // al
  _QWORD *v14; // rbx
  KIRQL v15; // dl
  _QWORD *i; // rax
  struct _KSPIN *v17; // rcx
  char v18; // dl
  int v20; // [rsp+20h] [rbp-58h]

  v6 = -1073741811;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      9u,
      0x5Du,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  v10 = *((_QWORD *)this + 5);
  *a3 = 0LL;
  v11 = *(_QWORD *)(v10 + 16);
  v12 = (KSPIN_LOCK *)(v11 + 96);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 96));
  v14 = (_QWORD *)(v11 + 104);
  v15 = v13;
  for ( i = (_QWORD *)*v14; i != v14; i = (_QWORD *)*i )
  {
    v17 = (struct _KSPIN *)i[3];
    if ( v17->Id == a2 )
    {
      *a3 = v17;
      v6 = 0;
      break;
    }
  }
  KeReleaseSpinLock(v12, v15);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v18 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( v18 || v7 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v18,
      v7,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      9u,
      0x5Eu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return v6;
}
