/*
 * XREFs of sub_1409D7D54 @ 0x1409D7D54
 * Callers:
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 * Callees:
 *     sub_140262D00 @ 0x140262D00 (sub_140262D00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_1409D71F0 @ 0x1409D71F0 (sub_1409D71F0.c)
 *     sub_1409D75C0 @ 0x1409D75C0 (sub_1409D75C0.c)
 */

__int64 __fastcall sub_1409D7D54(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rsi
  int v5; // ecx
  int v8; // ebx
  __int64 v9; // r12
  unsigned int v10; // r8d
  struct _DEVICE_OBJECT *v11; // rcx
  int v12; // eax
  int v14; // [rsp+28h] [rbp-48h]
  PVOID Object; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF
  PDEVICE_OBJECT v17; // [rsp+A8h] [rbp+38h] BYREF
  int v18; // [rsp+B8h] [rbp+48h] BYREF

  LODWORD(v17) = 0;
  v3 = 0LL;
  Object = 0LL;
  v5 = *(_DWORD *)(a2 + 8);
  if ( !v5 || ((v5 - 1) & v5) != 0 )
  {
    v8 = -1073741811;
  }
  else
  {
    if ( !*(_QWORD *)a2 )
      return (unsigned int)-1073741811;
    if ( *(_QWORD *)a2 > 0x800000000uLL )
      return (unsigned int)-1073739516;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
    v9 = a3 & 1;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
    v10 = *(_DWORD *)(a1 + 24);
    v18 = *(_DWORD *)(a2 + 12) & 1;
    v16 = *(_QWORD *)a2;
    v8 = sub_1409D64F8(
           a1 + 4,
           a3,
           v10,
           v10,
           &v16,
           v14,
           (unsigned int *)&v18,
           (_OWORD *)(a1 + 40),
           (_DWORD *)(a1 + 4),
           (_DWORD *)(a1 + 8),
           (__int64)&v17);
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( (-(__int64)(v9 != 0) & a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && v16 != *(_QWORD *)a2 )
      return (unsigned int)-1073741792;
    *(_DWORD *)(a1 + 28) = v18 & 1 | *(_DWORD *)(a1 + 28) & 0xFFFFFFFC | (2 * ((unsigned __int8)v17 & 1));
    v11 = *(struct _DEVICE_OBJECT **)(a1 + 64);
    v17 = v11;
    if ( v11 )
      goto LABEL_14;
    v12 = sub_1409D71F0(*(_QWORD *)(a1 + 48), &Object, &v17);
    v3 = Object;
    v8 = v12;
    if ( v12 >= 0 )
    {
      v11 = v17;
LABEL_14:
      v8 = sub_1409D75C0(v11, (unsigned __int16 *)(a1 + 552), 0x200u);
      if ( v8 >= 0 )
      {
        v8 = sub_140262D00(a1 + 104, *(_DWORD *)(a1 + 24));
        if ( v8 >= 0 )
          v8 = 0;
      }
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v8;
}
