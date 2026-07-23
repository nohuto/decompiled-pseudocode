/*
 * XREFs of IoInitializeWorkItem @ 0x140244FD0
 * Callers:
 *     sub_14060FB60 @ 0x14060FB60 (sub_14060FB60.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall IoInitializeWorkItem(PVOID IoObject, PIO_WORKITEM IoWorkItem)
{
  if ( (unsigned __int16)(*(_WORD *)IoObject - 3) > 1u )
    KeBugCheckEx(0xE4u, 3uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)IoObject, 0LL);
  *((_QWORD *)IoWorkItem + 7) = 0LL;
  *((_DWORD *)IoWorkItem + 16) = 1;
  *((_QWORD *)IoWorkItem + 5) = IoObject;
  *(_QWORD *)IoWorkItem = 0LL;
  *((_QWORD *)IoWorkItem + 2) = sub_1402F8870;
  *((_QWORD *)IoWorkItem + 3) = IoWorkItem;
}
