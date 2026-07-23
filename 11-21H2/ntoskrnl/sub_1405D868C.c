/*
 * XREFs of sub_1405D868C @ 0x1405D868C
 * Callers:
 *     sub_140225CB4 @ 0x140225CB4 (sub_140225CB4.c)
 *     sub_14023BC68 @ 0x14023BC68 (sub_14023BC68.c)
 *     sub_1405D02D0 @ 0x1405D02D0 (sub_1405D02D0.c)
 *     sub_1405DAC04 @ 0x1405DAC04 (sub_1405DAC04.c)
 * Callees:
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405D85F0 @ 0x1405D85F0 (sub_1405D85F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405D868C(__int64 a1, __int128 *a2, unsigned int a3, const void *a4)
{
  size_t v5; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  void *v8; // rdi

  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = sub_1405D85F0((PDEVICE_OBJECT)a1, a2, a3);
    v8 = (void *)v7;
    if ( v7 )
    {
      if ( a4 )
        memmove((void *)(v7 + *(unsigned int *)(v7 + 56)), a4, v5);
      v6 = IoWMIWriteEvent(v8);
      if ( v6 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v8, 0x774D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
