/*
 * XREFs of sub_1C0035198 @ 0x1C0035198
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C0050230 @ 0x1C0050230 (sub_1C0050230.c)
 *     sub_1C00A64F0 @ 0x1C00A64F0 (sub_1C00A64F0.c)
 *     sub_1C00A66A0 @ 0x1C00A66A0 (sub_1C00A66A0.c)
 */

__int64 __fastcall sub_1C0035198(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx
  unsigned int v5; // edi
  int v6; // r8d
  int v7; // r9d
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 v11; // si
  int v12; // eax
  int v13; // edx
  int v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-28h] BYREF
  _OWORD v17[2]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int8 v18; // [rsp+90h] [rbp+28h] BYREF
  char v19; // [rsp+98h] [rbp+30h] BYREF
  unsigned __int8 v20; // [rsp+A0h] [rbp+38h] BYREF
  int v21; // [rsp+A8h] [rbp+40h] BYREF

  v21 = 0;
  v16 = 0;
  v2 = (_QWORD *)(a1 + 320);
  v20 = 0;
  v17[0] = 0LL;
  v19 = 0;
  v3 = *v2 == 0LL;
  v18 = 0;
  if ( !v3 && *(_QWORD *)(a1 + 328) )
  {
    v5 = sub_1C0050230(
           (_DWORD)v2,
           *(_BYTE *)(a1 + 4304),
           (unsigned int)&v21,
           (unsigned int)&v20,
           (__int64)&v16,
           (__int64)&v19,
           (__int64)v17,
           (__int64)&v18);
    if ( (v5 & 0x80000000) == 0 )
    {
      if ( *(_BYTE *)(a1 + 4304) )
      {
        v11 = v18;
        LOBYTE(v4) = v18;
        v12 = sub_1C00A64F0(a1, v4);
      }
      else
      {
        v11 = v20;
        v13 = v21;
        LOBYTE(v7) = v20;
        LOBYTE(v6) = v20;
        v15 = v19;
        *(_BYTE *)(a1 + 4305) = 0;
        v12 = sub_1C00A66A0(a1, v13, v6, v7, v14, v15, (__int64)v17);
      }
      v5 = v12;
      if ( v12 >= 0 )
      {
        *(_DWORD *)(a1 + 736) = v11;
        return v5;
      }
      v8 = off_1C0093070;
      if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
        || (HIDWORD(off_1C0093070->Timer) & 0x2000) == 0
        || BYTE1(off_1C0093070->Timer) < 2u )
      {
        return v5;
      }
      v9 = 21LL;
    }
    else
    {
      v8 = off_1C0093070;
      if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
        || (HIDWORD(off_1C0093070->Timer) & 0x2000) == 0
        || BYTE1(off_1C0093070->Timer) < 2u )
      {
        return v5;
      }
      v9 = 20LL;
    }
    sub_1C003EDF0(v8->AttachedDevice, v9, &unk_1C0083210);
    return v5;
  }
  return 0LL;
}
