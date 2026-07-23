/*
 * XREFs of sub_14036B86C @ 0x14036B86C
 * Callers:
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     sub_14036AC64 @ 0x14036AC64 (sub_14036AC64.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     sub_14038ACD0 @ 0x14038ACD0 (sub_14038ACD0.c)
 *     sub_14038AF44 @ 0x14038AF44 (sub_14038AF44.c)
 *     sub_14038B198 @ 0x14038B198 (sub_14038B198.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_1403CD2D0 @ 0x1403CD2D0 (sub_1403CD2D0.c)
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_1403D3464 @ 0x1403D3464 (sub_1403D3464.c)
 *     PoSetSystemWakeDevice @ 0x1405C6AF0 (PoSetSystemWakeDevice.c)
 *     sub_1405D36DC @ 0x1405D36DC (sub_1405D36DC.c)
 *     sub_1405D3804 @ 0x1405D3804 (sub_1405D3804.c)
 *     sub_1405D39FC @ 0x1405D39FC (sub_1405D39FC.c)
 *     sub_1405D3B30 @ 0x1405D3B30 (sub_1405D3B30.c)
 *     sub_1405D4150 @ 0x1405D4150 (sub_1405D4150.c)
 *     sub_1405D44DC @ 0x1405D44DC (sub_1405D44DC.c)
 *     sub_1405D4604 @ 0x1405D4604 (sub_1405D4604.c)
 *     sub_1405FB648 @ 0x1405FB648 (sub_1405FB648.c)
 *     sub_1407F1CDC @ 0x1407F1CDC (sub_1407F1CDC.c)
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 *     sub_140846760 @ 0x140846760 (sub_140846760.c)
 *     sub_14084BC80 @ 0x14084BC80 (sub_14084BC80.c)
 *     sub_140850E08 @ 0x140850E08 (sub_140850E08.c)
 *     sub_140850F5C @ 0x140850F5C (sub_140850F5C.c)
 *     sub_140850FEC @ 0x140850FEC (sub_140850FEC.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x140860CFC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14086141C @ 0x14086141C (sub_14086141C.c)
 *     sub_14098C1E4 @ 0x14098C1E4 (sub_14098C1E4.c)
 *     sub_140990360 @ 0x140990360 (sub_140990360.c)
 *     sub_140992918 @ 0x140992918 (sub_140992918.c)
 *     sub_140993810 @ 0x140993810 (sub_140993810.c)
 *     sub_140993904 @ 0x140993904 (sub_140993904.c)
 *     sub_1409A023C @ 0x1409A023C (sub_1409A023C.c)
 *     sub_140A4ADB0 @ 0x140A4ADB0 (sub_140A4ADB0.c)
 *     sub_140B0E670 @ 0x140B0E670 (sub_140B0E670.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A4064 @ 0x1402A4064 (sub_1402A4064.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall sub_14036B86C(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  void *v5; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = (void *)sub_1402A4064(a1);
  ObfReferenceObjectWithTag(v5, a2);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v5;
}
