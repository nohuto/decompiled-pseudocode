/*
 * XREFs of sub_1409AC998 @ 0x1409AC998
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     sub_14080A670 @ 0x14080A670 (sub_14080A670.c)
 *     sub_1409AC788 @ 0x1409AC788 (sub_1409AC788.c)
 *     sub_1409AC7F8 @ 0x1409AC7F8 (sub_1409AC7F8.c)
 */

__int64 __fastcall sub_1409AC998(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // rbx
  int v4; // edi
  _QWORD *v5; // rdi
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rsi
  unsigned __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+38h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  __int64 v12; // [rsp+98h] [rbp+48h] BYREF

  v11 = 0LL;
  Object = 0LL;
  v12 = 624LL;
  result = MmCreateSection((int)&Object, 983071LL, 0, &v12, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Object;
    v9 = 0LL;
    v12 = 0LL;
    v4 = sub_1406F3FDC((__int64)Object, &v11, &v9, &v12, 0LL, 0LL);
    if ( v4 >= 0 )
    {
      v5 = sub_140204738(a1);
      v5[165] = v11;
      v5[166] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)v5[165] = -1;
      v7 = sub_1409AC7F8(a1);
      if ( v7 >= 0 )
      {
        v8 = v5[165];
        LODWORD(Object) = 0;
        v7 = sub_14080A670(&Object);
        if ( v7 >= 0 )
        {
          *(_DWORD *)(v8 + 16) = (_DWORD)Object;
          v7 = sub_1409AC788(v5[165]);
          if ( v7 >= 0 )
          {
            *(_DWORD *)(v5[165] + 24LL) = -1;
            v7 = 0;
          }
        }
      }
      PsDetachSiloFromCurrentThread(v6);
      return (unsigned int)v7;
    }
    else
    {
      ObfDereferenceObject(v3);
      return (unsigned int)v4;
    }
  }
  return result;
}
