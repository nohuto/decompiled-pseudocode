/*
 * XREFs of sub_1C0065A40 @ 0x1C0065A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0014F8C @ 0x1C0014F8C (sub_1C0014F8C.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     StorPortGetLogicalUnit @ 0x1C0025FF0 (StorPortGetLogicalUnit.c)
 */

PSLIST_ENTRY __fastcall sub_1C0065A40(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _DEVICE_OBJECT *v4; // rbx
  _DWORD *LogicalUnit; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rbp

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(a2 + 32) == 0xFF )
  {
    v4 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v2 + 104) & 4) != 0));
  }
  else
  {
    LogicalUnit = StorPortGetLogicalUnit(*(_QWORD *)(a1 + 64));
    if ( !LogicalUnit || (LogicalUnit[112] & 0x10) == 0 )
      return sub_1C0014F8C((union _SLIST_HEADER *)(v2 + 1328), a2);
    v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)LogicalUnit + 1);
  }
  if ( v4 )
  {
    v6 = (_DWORD *)sub_1C0007CF4(64LL, *(unsigned int *)(a2 + 40), 1297572178LL, *(_QWORD *)(v2 + 8));
    v7 = v6;
    if ( v6 )
    {
      memmove(v6, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v7[1] = IoWMIDeviceObjectToProviderId(v4);
      *((_QWORD *)v7 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v7) < 0 )
        ExFreePoolWithTag(v7, 0x4D576152u);
    }
  }
  return sub_1C0014F8C((union _SLIST_HEADER *)(v2 + 1328), a2);
}
