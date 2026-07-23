/*
 * XREFs of sub_140AB4008 @ 0x140AB4008
 * Callers:
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 */

__int64 __fastcall sub_140AB4008(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // eax
  void *v8; // rcx
  unsigned int v9; // ebx
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = sub_1406686C8(a1, a2, a3, (__int64)CmKeyObjectType, a5, a6, (__int64 *)&v11);
  v8 = v11;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *v11 == 1803104306 )
    {
      *a7 = v11;
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v9;
}
