/*
 * XREFs of sub_1409CC1BC @ 0x1409CC1BC
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_1409CC540 @ 0x1409CC540 (sub_1409CC540.c)
 */

__int64 __fastcall sub_1409CC1BC(__int128 *a1, __int64 a2, unsigned int a3, PVOID *a4)
{
  int v7; // ebx
  PVOID v8; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-38h] BYREF
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int128 v14; // [rsp+68h] [rbp-18h]

  Object = 0LL;
  v13 = 0;
  v11[1] = 0LL;
  v12 = 0;
  v11[2] = 0LL;
  v11[0] = 48LL;
  v14 = 0LL;
  v7 = sub_1407CDED0(a1, (__int64)v11, 0, 1, 0, 0, 0, (__int64 *)&Object);
  if ( v7 >= 0 )
  {
    v7 = sub_1409CC540(a2, a3, Object);
    if ( v7 >= 0 )
    {
      *a4 = Object;
      return (unsigned int)v7;
    }
    v8 = Object;
  }
  else
  {
    v8 = 0LL;
    Object = 0LL;
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v7;
}
