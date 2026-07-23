/*
 * XREFs of sub_1409342B0 @ 0x1409342B0
 * Callers:
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409342B0(__int64 a1, __int64 a2, unsigned __int16 a3, _WORD *a4)
{
  struct _IRP *v4; // rsi
  int v5; // r12d
  const void **v6; // rdi
  unsigned int v10; // ebp
  __int64 Pool2; // rax
  int v12; // eax
  unsigned int v13; // ebx
  ULONG v14; // ebp
  int v15; // eax
  unsigned int v16; // ecx
  void *v17; // rax
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = 0LL;
  v19[0] = 0;
  v10 = 256;
  do
  {
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v10 >= 0xFFFF )
      return (unsigned int)-1073741562;
    Pool2 = ExAllocatePool2(256LL, v10, 1665560393LL);
    v6 = (const void **)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v12 = sub_1407103B0(*(char **)(a1 + 8), Pool2, v10, v19);
    v13 = v12;
    v10 = v19[0] + 8;
    if ( a4 )
      *a4 = *(_WORD *)v6;
  }
  while ( v12 == -2147483643 );
  if ( v12 >= 0 )
  {
    v14 = 256;
    do
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      if ( v14 >= 0xFFFF )
      {
        v13 = -1073741562;
        goto LABEL_27;
      }
      v4 = (struct _IRP *)ExAllocatePool2(256LL, v14, 1665560393LL);
      if ( !v4 )
      {
        v13 = -1073741670;
        goto LABEL_27;
      }
      v15 = sub_14070FC40(*(struct _FILE_OBJECT **)(a1 + 64), v14, 9u, v4, v19);
      v13 = v15;
      v14 = *(_DWORD *)&v4->Type + 8;
    }
    while ( v15 == -2147483643 );
    if ( v15 >= 0 )
    {
      v16 = v5 + *(_DWORD *)&v4->Type + *(unsigned __int16 *)v6;
      if ( v16 < 0xFFFF )
      {
        *(_WORD *)(a2 + 2) = v16;
        *(_WORD *)a2 = v16 - v5;
        v17 = (void *)ExAllocatePool2(256LL, v16, 1665560393LL);
        *(_QWORD *)(a2 + 8) = v17;
        if ( v17 )
        {
          memmove(v17, v6[1], *(unsigned __int16 *)v6);
          memmove((void *)(*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)v6), &v4->Size + 1, *(unsigned int *)&v4->Type);
        }
        else
        {
          v13 = -1073741670;
        }
      }
      else
      {
        v13 = -1073741562;
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
LABEL_27:
  ExFreePoolWithTag(v6, 0);
  return v13;
}
