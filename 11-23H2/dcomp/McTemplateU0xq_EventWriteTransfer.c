/*
 * XREFs of McTemplateU0xq_EventWriteTransfer @ 0x1800EC798
 * Callers:
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ??1CSharedSection@DirectComposition@@UEAA@XZ @ 0x18007E794 (--1CSharedSection@DirectComposition@@UEAA@XZ.c)
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 *     ??1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC4C8 (--1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ.c)
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 *     ??1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC914 (--1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ.c)
 *     ?Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID@@2PEAPEAV12@@Z @ 0x1800ECA70 (-Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID.c)
 *     ?Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z @ 0x1801AA7C0 (-Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0xq_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  int *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 8;
  v9 = &v13;
  v11 = 0;
  v10 = 4;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, 3u, &v5);
}
