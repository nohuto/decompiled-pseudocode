/*
 * XREFs of IoCreateSymbolicLink2 @ 0x1406C4C80
 * Callers:
 *     IoCreateSymbolicLink @ 0x1406C4C40 (IoCreateSymbolicLink.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406C505C @ 0x1406C505C (sub_1406C505C.c)
 */

__int64 __fastcall IoCreateSymbolicLink2(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  bool v3; // zf
  int v4; // eax
  int v5; // ebx
  _DWORD v7[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v8; // [rsp+38h] [rbp-48h]
  _DWORD v9[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int64 v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v13 = 0;
  Handle = 0LL;
  v9[1] = 0;
  v7[1] = 0;
  if ( (*(_DWORD *)a2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v2 = *(_OWORD *)(a2 + 8);
  v3 = (*(_DWORD *)a2 & 1) == 0;
  v11 = a1;
  v4 = 0;
  v9[0] = 48;
  v12 = 592;
  if ( !v3 )
    v4 = 2;
  v10 = 0LL;
  v15 = 0LL;
  v7[0] = v4;
  v14 = qword_140D3CA48;
  v8 = v2;
  v5 = sub_1406C505C((unsigned int)&Handle, 983041, (unsigned int)v9, (unsigned int)v7, 0);
  if ( v5 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v5;
}
