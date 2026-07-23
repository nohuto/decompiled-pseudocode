/*
 * XREFs of sub_14090E9C0 @ 0x14090E9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_14069E3E0 @ 0x14069E3E0 (sub_14069E3E0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090E9C0(__int64 a1, _DWORD *a2)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r14
  int v13; // ebx
  char v14; // dl
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID Object; // [rsp+48h] [rbp-1B0h] BYREF
  int v26; // [rsp+50h] [rbp-1A8h]
  __int128 v27; // [rsp+58h] [rbp-1A0h] BYREF
  _OWORD v28[3]; // [rsp+68h] [rbp-190h] BYREF
  _OWORD v29[19]; // [rsp+A0h] [rbp-158h] BYREF

  v27 = 0LL;
  v26 = 0;
  memset(v28, 0, sizeof(v28));
  Object = 0LL;
  memset(v29, 0, 0x128uLL);
  LODWORD(v29[6]) = -1;
  *((_QWORD *)&v29[9] + 1) = &v29[9];
  *(_QWORD *)&v29[9] = &v29[9];
  memset((char *)&v29[13] + 8, 0, 0x50uLL);
  v4 = 0;
  sub_140347770((__int64)&v27);
  v12 = sub_140AB46D0(v6, v5, v7);
  if ( v12 )
  {
    v14 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( v14 == 1 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a2;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    v13 = sub_1406686C8(a1, 0LL, 0x20019u, (__int64)CmKeyObjectType, v14, (__int64)v29, (__int64 *)&Object);
    if ( v13 >= 0 )
    {
      sub_14071B6EC();
      v4 = 1;
      v16 = Object;
      v13 = sub_140AB43C0(Object, 0LL);
      if ( v13 >= 0 )
      {
        if ( (*(_DWORD *)(v16[1] + 184LL) & 0x40000) != 0 )
        {
          sub_140AB4550(v28);
          v17 = sub_14069E3E0(v16[1], 0, 0LL);
          sub_140AB4580(v28);
          sub_140AB4260(v19, v18, v20, v21);
          v4 = 0;
          *a2 = v17;
          v13 = 0;
        }
        else
        {
          v13 = -1073741811;
        }
      }
    }
  }
  else
  {
    v13 = -1073741431;
  }
  if ( v4 )
    sub_140AB4260(v9, v8, v10, v11);
  sub_14067FE98(v29, 0LL);
  if ( v12 )
    sub_140AB42A0(v23, v22);
  if ( Object )
    ObfDereferenceObject(Object);
  sub_14022EA30((__int64 *)&v27);
  return (unsigned int)v13;
}
