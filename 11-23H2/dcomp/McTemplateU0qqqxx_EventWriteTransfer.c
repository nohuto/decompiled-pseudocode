/*
 * XREFs of McTemplateU0qqqxx_EventWriteTransfer @ 0x1800F7044
 * Callers:
 *     ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44 (-GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUIComposition.c)
 *     ?SetInteraction@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionPointerEventRouter@234@@Z @ 0x18008CA40 (-SetInteraction@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionPointerEventRouter@234@@Z.c)
 *     ?SetInteraction@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionInteractionPartner@@@Z @ 0x18008D700 (-SetInteraction@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAU.c)
 *     ?SetInteraction@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAUIDCompositionInteractionPartner@@@Z @ 0x1800F5650 (-SetInteraction@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJP.c)
 *     ?RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ @ 0x18010B6D8 (-RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qqqxx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-31h] BYREF
  int *v9; // [rsp+40h] [rbp-21h]
  __int64 v10; // [rsp+48h] [rbp-19h]
  int *v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h]
  char *v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  char *v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]
  char *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+C0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v20 = a4;
  v19 = a3;
  v10 = 4LL;
  v9 = &v19;
  v12 = 4LL;
  v11 = &v20;
  v14 = 4LL;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v16 = 8LL;
  v18 = 8LL;
  return McGenEventWrite_EventWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"7", a3, 6u, &v8);
}
