/*
 * XREFs of sub_1C001C288 @ 0x1C001C288
 * Callers:
 *     sub_1C001C0C0 @ 0x1C001C0C0 (sub_1C001C0C0.c)
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 * Callees:
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C001C388 @ 0x1C001C388 (sub_1C001C388.c)
 *     sub_1C001C6E8 @ 0x1C001C6E8 (sub_1C001C6E8.c)
 *     sub_1C001D4C8 @ 0x1C001D4C8 (sub_1C001D4C8.c)
 *     sub_1C001D530 @ 0x1C001D530 (sub_1C001D530.c)
 *     sub_1C001D814 @ 0x1C001D814 (sub_1C001D814.c)
 *     sub_1C0071BB8 @ 0x1C0071BB8 (sub_1C0071BB8.c)
 */

void __fastcall sub_1C001C288(__int64 a1, __int16 a2)
{
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v5; // rsi
  PIO_WORKITEM v6; // rax
  struct _IO_WORKITEM *v7; // rsi

  if ( (a2 & 4) != 0 )
    sub_1C001C6E8();
  if ( (a2 & 0x10) != 0 )
    sub_1C001C388(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 3280) == 1 )
    sub_1C001D814(a1);
  if ( (a2 & 8) != 0 )
    sub_1C0071BB8(a1);
  if ( (a2 & 0x80u) != 0 )
  {
    if ( (unsigned __int8)sub_1C001D4C8(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)sub_1C00071D4(a1, (__int64)WorkItem, 0LL) < 0 )
          IoFreeWorkItem(v5);
        else
          IoQueueWorkItem(v5, sub_1C0021620, NormalWorkQueue, v5);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    sub_1C001D530(a1);
  if ( (a2 & 0x100) != 0 )
  {
    if ( *(_QWORD *)(a1 + 104) )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 && *(_DWORD *)(a1 + 3344) == 17 )
      {
        v6 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        v7 = v6;
        if ( v6 )
        {
          if ( (int)sub_1C00071D4(a1, (__int64)v6, 0LL) < 0 )
            IoFreeWorkItem(v7);
          else
            IoQueueWorkItem(v7, sub_1C006C8A0, NormalWorkQueue, v7);
        }
      }
    }
  }
  if ( (a2 & 0x30) != 0 )
  {
    *(_DWORD *)(a1 + 2184) = 0;
    *(_DWORD *)(a1 + 1328) = 0;
  }
}
