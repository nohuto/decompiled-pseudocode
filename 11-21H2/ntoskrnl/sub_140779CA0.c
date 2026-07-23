/*
 * XREFs of sub_140779CA0 @ 0x140779CA0
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_1406EA694 @ 0x1406EA694 (sub_1406EA694.c)
 *     sub_140748FA4 @ 0x140748FA4 (sub_140748FA4.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140769668 @ 0x140769668 (sub_140769668.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076B1A8 @ 0x14076B1A8 (sub_14076B1A8.c)
 *     sub_14076B5DC @ 0x14076B5DC (sub_14076B5DC.c)
 *     sub_14076B788 @ 0x14076B788 (sub_14076B788.c)
 *     sub_14077BB00 @ 0x14077BB00 (sub_14077BB00.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_14080D8A8 @ 0x14080D8A8 (sub_14080D8A8.c)
 *     sub_140810788 @ 0x140810788 (sub_140810788.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 *     sub_140944640 @ 0x140944640 (sub_140944640.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140779CA0(__int16 **a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int16 *v8; // rcx
  unsigned __int64 v9; // r9
  __int16 v10; // ax
  unsigned __int64 v11; // r8
  int v12; // ebp
  __int16 *Pool2; // rax
  __int16 *v14; // r15
  unsigned __int64 v15; // rax
  __int16 *v17; // rax

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = a3[1];
  if ( (unsigned __int16)v7 < 2u || (v8 = (__int16 *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    *a1 = 0LL;
    if ( a2 )
      *a2 = 0;
    return v3;
  }
  v9 = *a3;
  if ( (unsigned __int16)v9 > (unsigned __int16)v7 )
    return (unsigned int)-1073741811;
  v10 = *v8;
  if ( (_WORD)v9 )
  {
    if ( !v10 )
      goto LABEL_17;
    v11 = (unsigned __int64)*a3 >> 1;
    if ( (_WORD)v9 == (_WORD)v7 && !v8[v11 - 1] )
      goto LABEL_17;
    if ( v9 <= v7 - 2 && (!v8[v11 - 1] || !v8[v11]) )
      goto LABEL_17;
    v12 = v9 + 2;
    Pool2 = (__int16 *)ExAllocatePool2(256LL, (unsigned int)(v9 + 2), 1970499664LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *((const void **)a3 + 1), *a3);
      v15 = (unsigned __int64)*a3 >> 1;
      *a1 = v14;
      v14[v15] = 0;
      if ( a2 )
        *a2 = v12;
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  if ( !v10 )
  {
LABEL_17:
    *a1 = v8;
    if ( a2 )
      *a2 = v7;
    return v3;
  }
  v17 = (__int16 *)ExAllocatePool2(256LL, 2LL, 1970499664LL);
  if ( !v17 )
    return (unsigned int)-1073741670;
  *v17 = 0;
  *a1 = v17;
  if ( a2 )
    *a2 = 2;
  return v3;
}
