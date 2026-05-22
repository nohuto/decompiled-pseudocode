/*
 * XREFs of McTemplateU0q_EventWriteTransfer @ 0x1801ABED0
 * Callers:
 *     ?DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z @ 0x1801AAD80 (-DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z.c)
 *     ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC (-ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0q_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  int *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 4;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, 2u, &v4);
}
