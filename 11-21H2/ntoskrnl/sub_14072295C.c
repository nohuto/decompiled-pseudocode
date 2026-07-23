/*
 * XREFs of sub_14072295C @ 0x14072295C
 * Callers:
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     sub_1409C61B0 @ 0x1409C61B0 (sub_1409C61B0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     sub_1407259B0 @ 0x1407259B0 (sub_1407259B0.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 */

__int64 __fastcall sub_14072295C(int a1, int a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  int v7; // ebx
  _QWORD *v8; // rcx
  __int64 v10; // r8
  int v11; // eax
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h]

  v13[0] = 48LL;
  Object = 0LL;
  memset(&v13[1], 0, 24);
  v14 = 0LL;
  v7 = sub_1407CDED0(a1, (unsigned int)v13, 0, 2, a2, 0, 0, (__int64)&Object);
  if ( v7 < 0 )
    goto LABEL_11;
  if ( a4 )
  {
    v7 = sub_1407259B0(Object, a5);
    if ( v7 < 0 )
      goto LABEL_11;
  }
  v7 = sub_140729C30(Object, 0LL, 0, 0LL, 0LL);
  if ( v7 < 0 )
    goto LABEL_11;
  v8 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v10 = *((_QWORD *)Object + 98);
    if ( v10 )
    {
      v11 = sub_140724550(Object, 983551LL, v10);
      v8 = Object;
      v7 = v11;
      if ( v11 < 0 )
      {
        ObfDereferenceObject(Object);
LABEL_11:
        *a6 = 0LL;
        return (unsigned int)v7;
      }
    }
  }
  sub_140659D50(v8);
  *a6 = Object;
  return (unsigned int)v7;
}
