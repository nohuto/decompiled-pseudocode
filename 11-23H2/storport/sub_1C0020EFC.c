/*
 * XREFs of sub_1C0020EFC @ 0x1C0020EFC
 * Callers:
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C00A408C @ 0x1C00A408C (sub_1C00A408C.c)
 * Callees:
 *     sub_1C0020F44 @ 0x1C0020F44 (sub_1C0020F44.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0020EFC(struct _DEVICE_OBJECT *a1, char a2)
{
  int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  char v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h]

  v8 = 0LL;
  v7 = 0;
  v3 = sub_1C0020F44(a1);
  if ( v3 >= 0 )
  {
    v5 = v8;
    if ( *(_QWORD *)(v8 + 32) && ((*(void (__fastcall **)(_QWORD, char *))(v8 + 48))(*(_QWORD *)(v8 + 8), &v7), v7) )
    {
      LOBYTE(v6) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(v5 + 32))(*(_QWORD *)(v5 + 8), v6);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v3;
}
