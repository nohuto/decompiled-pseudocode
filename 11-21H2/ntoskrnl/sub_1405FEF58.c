/*
 * XREFs of sub_1405FEF58 @ 0x1405FEF58
 * Callers:
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402D8A7C @ 0x1402D8A7C (sub_1402D8A7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405FEF58(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  struct _DRIVER_OBJECT *v2; // rsi
  PDRIVER_EXTENSION DriverExtension; // rdi
  __int64 Pool2; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( dword_140C1B200 )
  {
    v2 = (struct _DRIVER_OBJECT *)*((_QWORD *)sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v6, a1, 1LL) + 6);
    if ( v2 )
    {
      DriverExtension = v2->DriverExtension;
      if ( DriverExtension )
      {
        Pool2 = ExAllocatePool2(64LL, 256LL, 1229940310LL);
        *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = Pool2;
        if ( Pool2 )
        {
          if ( !sub_1402D8A7C(v2) )
          {
            ExFreePoolWithTag(*(PVOID *)&DriverExtension[1].ServiceKeyName.Length, 0);
            *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = 0LL;
            v1 = -1073738634;
          }
        }
        else
        {
          v1 = -1073741801;
        }
      }
    }
  }
  sub_1402D81DC((__int64)&v6);
  return v1;
}
