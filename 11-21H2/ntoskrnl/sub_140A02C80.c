/*
 * XREFs of sub_140A02C80 @ 0x140A02C80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140570BD0 @ 0x140570BD0 (sub_140570BD0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_140A02C80(HANDLE Handle, int a2, _BYTE *a3, unsigned int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE v9; // r14
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  NTSTATUS v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r8d
  char v16; // al
  bool v17; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int128 v19; // [rsp+38h] [rbp-30h] BYREF

  v19 = 0LL;
  if ( !a2 )
  {
    if ( a4 == 8 )
      goto LABEL_7;
    return 3221225476LL;
  }
  if ( a2 != 1 )
    return 3221225475LL;
  if ( a4 != 16 )
    return 3221225476LL;
LABEL_7:
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v9 )
  {
    ProbeForWrite(a3, a4, 4u);
    v10 = (_DWORD *)a5;
    if ( a5 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v11 = a5;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v10 = (_DWORD *)a5;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, qword_140D05288, v9, &Object, 0LL);
  if ( v12 >= 0 )
  {
    if ( a2 )
    {
      sub_140570BD0((__int64)Object, &v19, v13, v14);
      if ( v9 )
      {
        *(_OWORD *)a3 = v19;
        if ( v10 )
          *v10 = 16;
      }
      else
      {
        *(_OWORD *)a3 = v19;
        if ( v10 )
          *v10 = 16;
      }
    }
    else
    {
      v15 = *((_DWORD *)Object + 1);
      v16 = *((_BYTE *)Object + 48) & 1;
      v17 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( v9 )
      {
        *(_DWORD *)a3 = v15;
        a3[4] = v17;
        a3[5] = v16;
        if ( v10 )
          *v10 = 8;
      }
      else
      {
        *(_DWORD *)a3 = v15;
        a3[4] = v17;
        a3[5] = v16;
        if ( v10 )
          *v10 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v12;
}
