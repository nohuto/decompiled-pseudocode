/*
 * XREFs of sub_14090E160 @ 0x14090E160
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     sub_1409152A4 @ 0x1409152A4 (sub_1409152A4.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090E160(_QWORD *a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r15
  HANDLE v11; // r14
  unsigned int v12; // edi
  bool v13; // zf
  int v14; // esi
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  HANDLE v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v22[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp+40h] BYREF

  memset(v22, 0, sizeof(v22));
  v21 = 0LL;
  sub_140347770((__int64)&v21);
  v10 = 0LL;
  v11 = 0LL;
  LOBYTE(v12) = 0;
  v24 = 0LL;
  v13 = (*(_DWORD *)(v9 + 24) & 0x200) == 0;
  v20 = 0LL;
  if ( v13 )
  {
    v14 = -1073741811;
  }
  else
  {
    v15 = sub_140AB46D0(v8, v7, v9);
    v12 = v15 & 1;
    if ( (v15 & 1) != 0 )
    {
      v14 = sub_1407CABA0(&v20, a2, a3, a4, 0LL, 0);
      if ( v14 < 0 )
      {
        v11 = v20;
      }
      else
      {
        v11 = v20;
        v14 = sub_140AB4630((_DWORD)v20, a2, v16, 0, (__int64)&v24, 0LL);
        if ( v14 < 0 )
        {
          v10 = v24;
        }
        else
        {
          sub_140AB4370(v8, v7, v16);
          v10 = v24;
          v12 |= 2u;
          v18 = v24[1];
          v14 = sub_1407C05F4((__int64)v22, v18);
          if ( v14 >= 0 )
          {
            sub_14071F6D0((__int64)v22);
            v12 |= 4u;
            v14 = sub_140AB43C0(v10, 0LL);
            if ( v14 >= 0 )
            {
              if ( (*(_DWORD *)(v18 + 184) & 0x40000) != 0 )
              {
                v14 = sub_1409152A4(v10);
                if ( v14 >= 0 )
                {
                  *a1 = v11;
                  v11 = 0LL;
                  v14 = 0;
                }
              }
              else
              {
                v14 = -1073741811;
              }
            }
          }
        }
      }
      if ( v12 >= 4 )
        sub_140721BAC((__int64)v22);
    }
    else
    {
      v14 = -1073741431;
    }
    if ( (v12 & 2) != 0 )
      sub_140AB4260(v8, v7, v16, v17);
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v11 )
    ObCloseHandle(v11, 0);
  if ( (v12 & 1) != 0 )
    sub_140AB42A0(v8, v7);
  sub_14022EA30((__int64 *)&v21);
  return (unsigned int)v14;
}
