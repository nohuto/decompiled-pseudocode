/*
 * XREFs of sub_14079E490 @ 0x14079E490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A70F0 @ 0x1402A70F0 (sub_1402A70F0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406651C8 @ 0x1406651C8 (sub_1406651C8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14079E674 @ 0x14079E674 (sub_14079E674.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_14079E490(void *a1, unsigned int *a2, char *a3)
{
  char v5; // r14
  NTSTATUS result; // eax
  PVOID v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  int v11; // ebx
  void *v12; // rbx
  char v13; // di
  int Object; // [rsp+20h] [rbp-88h]
  int HandleInformation; // [rsp+28h] [rbp-80h]
  int v16; // [rsp+30h] [rbp-78h]
  unsigned int v17; // [rsp+50h] [rbp-58h]
  int v18; // [rsp+54h] [rbp-54h]
  unsigned int Size; // [rsp+5Ch] [rbp-4Ch] BYREF
  unsigned int Size_4; // [rsp+60h] [rbp-48h]
  PVOID v21; // [rsp+68h] [rbp-40h] BYREF
  void *Src; // [rsp+70h] [rbp-38h] BYREF

  Src = 0LL;
  Size = 0;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  v21 = 0LL;
  result = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)SeTokenObjectType, v5, &v21, 0LL);
  v18 = result;
  if ( result >= 0 )
  {
    v7 = v21;
    if ( *((_DWORD *)v21 + 48) == 2 && *((int *)v21 + 49) < 1 )
    {
      v11 = -1073741659;
    }
    else
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a2;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 19) = *(_BYTE *)(v9 + 19);
      v17 = *a2;
      Size_4 = 12 * (*a2 - 1) + 20;
      ProbeForWrite(a2, Size_4, 4u);
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a3;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      v10 = a2[1];
      v11 = v18;
      if ( v18 >= 0 )
      {
        v11 = sub_14079E674(a2 + 2, Object, HandleInformation, v16, (__int64)&Src, (__int64)&Size);
        if ( v11 >= 0 )
        {
          v12 = Src;
          v13 = sub_1402A70F0((__int64)v21, (__int64)Src, v17, v10, v5);
          ObfDereferenceObject(v21);
          memmove(a2 + 2, v12, Size);
          *a3 = v13;
          sub_1406651C8(v12, v5);
          return 0;
        }
      }
      v7 = v21;
    }
    ObfDereferenceObject(v7);
    return v11;
  }
  return result;
}
