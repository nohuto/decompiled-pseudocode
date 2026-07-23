/*
 * XREFs of sub_1405D8720 @ 0x1405D8720
 * Callers:
 *     <none>
 * Callees:
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     sub_1405D73F0 @ 0x1405D73F0 (sub_1405D73F0.c)
 *     sub_1405D85F0 @ 0x1405D85F0 (sub_1405D85F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405D8720(__int64 a1)
{
  _QWORD *v1; // rbx
  _DWORD *v2; // rax
  __int64 v3; // rax
  void *v4; // rdi
  NTSTATUS v5; // ebx

  v1 = (_QWORD *)(a1 + 33600);
  if ( *(_QWORD *)(a1 + 33600) && (v2 = *(_DWORD **)(a1 + 33608)) != 0LL && *(_DWORD *)(a1 + 33840) )
  {
    v3 = sub_1405D85F0((PDEVICE_OBJECT)(a1 + 33832), (__int128 *)&qword_140026470, 416 * *v2 + 24);
    v4 = (void *)v3;
    if ( v3 )
    {
      sub_1405D73F0(v1, v3 + *(unsigned int *)(v3 + 56), 0LL);
      v5 = IoWMIWriteEvent(v4);
      if ( v5 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v4, 0x774D5050u);
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
  return (unsigned int)v5;
}
